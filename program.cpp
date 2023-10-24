#include "MyBank_Login.h"
#include "MyBank_Signup.h"
#include "MyBank_MainForm.h"

using namespace System;
using namespace System::Windows::Forms;

User^ AuthenticateUser()
{
    while (true)
    {
        User^ user = nullptr;

        MyBank::MyBank_Login loginForm;
        loginForm.ShowDialog();

        if (loginForm.switchToSignup)
        {
            MyBank::MyBank_Signup registerForm;
            registerForm.ShowDialog();

            if (registerForm.switchToLogin)
            {
                continue;
            }
            else
            {
                return registerForm.user;
            }
        }
        else
        {
            return loginForm.user;
        }
    }
}

void HandleUserSession()
{
    User^ user = nullptr;
    while (true)
    {
        user = AuthenticateUser();

        if (user != nullptr)
        {
            MyBank::MyBank_MainForm mainForm(user);
            mainForm.ShowDialog();

            if (mainForm.switchBackToLogin)
            {
                continue;
            }
            else
            {
                break; // Exiting the program
            }
        }
        else
        {
            break; // No user, exit program
        }
    }
}

int main(array<String^>^ args)
{
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);

    HandleUserSession();

    return 0;
}
