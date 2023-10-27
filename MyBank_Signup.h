#pragma once
#include <cstdlib>
#include <ctime>
#include "User.h"

namespace MyBank {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;

	/// <summary>
	/// Summary for MyBank_Signup
	/// </summary>
	public ref class MyBank_Signup : public System::Windows::Forms::Form
	{
	public:
		MyBank_Signup(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			this->CenterToScreen();
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyBank_Signup()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ tbfName;

	protected:

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ tblName;


	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ tbUsername;





	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ tbPassword;

	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ tbConfirmPassword;
	private: System::Windows::Forms::Button^ btnOk;

	private: System::Windows::Forms::Button^ btnCancel;
	private: System::Windows::Forms::PictureBox^ MyBankLogo;


	private: System::Windows::Forms::Button^ Back;
	private: System::Windows::Forms::PictureBox^ SignupImage;
	private: System::Windows::Forms::Button^ btnSeePassword;
	private: System::Windows::Forms::Button^ btnSeeConfirmedPassword;








	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyBank_Signup::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->tbfName = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->tblName = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->tbUsername = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->tbPassword = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->tbConfirmPassword = (gcnew System::Windows::Forms::TextBox());
			this->btnOk = (gcnew System::Windows::Forms::Button());
			this->btnCancel = (gcnew System::Windows::Forms::Button());
			this->MyBankLogo = (gcnew System::Windows::Forms::PictureBox());
			this->Back = (gcnew System::Windows::Forms::Button());
			this->SignupImage = (gcnew System::Windows::Forms::PictureBox());
			this->btnSeePassword = (gcnew System::Windows::Forms::Button());
			this->btnSeeConfirmedPassword = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->MyBankLogo))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->SignupImage))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Source Sans Pro", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(252)), static_cast<System::Int32>(static_cast<System::Byte>(113)),
				static_cast<System::Int32>(static_cast<System::Byte>(59)));
			this->label1->Location = System::Drawing::Point(56, 147);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(84, 20);
			this->label1->TabIndex = 0;
			this->label1->Text = L"First Name";
			// 
			// tbfName
			// 
			this->tbfName->Font = (gcnew System::Drawing::Font(L"Source Sans Pro", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tbfName->Location = System::Drawing::Point(60, 170);
			this->tbfName->Name = L"tbfName";
			this->tbfName->Size = System::Drawing::Size(125, 24);
			this->tbfName->TabIndex = 1;
			this->tbfName->Text = L" ";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Source Sans Pro", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::White;
			this->label2->Location = System::Drawing::Point(188, 147);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(82, 20);
			this->label2->TabIndex = 0;
			this->label2->Text = L"Last Name";
			// 
			// tblName
			// 
			this->tblName->Font = (gcnew System::Drawing::Font(L"Source Sans Pro", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tblName->Location = System::Drawing::Point(192, 170);
			this->tblName->Name = L"tblName";
			this->tblName->Size = System::Drawing::Size(125, 24);
			this->tblName->TabIndex = 1;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Source Sans Pro", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(252)), static_cast<System::Int32>(static_cast<System::Byte>(113)),
				static_cast<System::Int32>(static_cast<System::Byte>(59)));
			this->label3->Location = System::Drawing::Point(56, 196);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(80, 20);
			this->label3->TabIndex = 0;
			this->label3->Text = L"Username";
			// 
			// tbUsername
			// 
			this->tbUsername->Font = (gcnew System::Drawing::Font(L"Source Sans Pro", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tbUsername->Location = System::Drawing::Point(60, 219);
			this->tbUsername->Name = L"tbUsername";
			this->tbUsername->Size = System::Drawing::Size(257, 24);
			this->tbUsername->TabIndex = 1;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->Font = (gcnew System::Drawing::Font(L"Source Sans Pro", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(252)), static_cast<System::Int32>(static_cast<System::Byte>(113)),
				static_cast<System::Int32>(static_cast<System::Byte>(59)));
			this->label5->Location = System::Drawing::Point(56, 246);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(76, 20);
			this->label5->TabIndex = 0;
			this->label5->Text = L"Password";
			// 
			// tbPassword
			// 
			this->tbPassword->Font = (gcnew System::Drawing::Font(L"Source Sans Pro", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tbPassword->Location = System::Drawing::Point(60, 269);
			this->tbPassword->Name = L"tbPassword";
			this->tbPassword->Size = System::Drawing::Size(257, 24);
			this->tbPassword->TabIndex = 1;
			this->tbPassword->UseSystemPasswordChar = true;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::Transparent;
			this->label6->Font = (gcnew System::Drawing::Font(L"Source Sans Pro", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(252)), static_cast<System::Int32>(static_cast<System::Byte>(113)),
				static_cast<System::Int32>(static_cast<System::Byte>(59)));
			this->label6->Location = System::Drawing::Point(56, 295);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(135, 20);
			this->label6->TabIndex = 0;
			this->label6->Text = L"Confirm Password";
			// 
			// tbConfirmPassword
			// 
			this->tbConfirmPassword->Font = (gcnew System::Drawing::Font(L"Source Sans Pro", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tbConfirmPassword->Location = System::Drawing::Point(60, 318);
			this->tbConfirmPassword->Name = L"tbConfirmPassword";
			this->tbConfirmPassword->Size = System::Drawing::Size(257, 24);
			this->tbConfirmPassword->TabIndex = 1;
			this->tbConfirmPassword->UseSystemPasswordChar = true;
			// 
			// btnOk
			// 
			this->btnOk->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(252)), static_cast<System::Int32>(static_cast<System::Byte>(113)),
				static_cast<System::Int32>(static_cast<System::Byte>(59)));
			this->btnOk->FlatAppearance->BorderSize = 0;
			this->btnOk->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(252)),
				static_cast<System::Int32>(static_cast<System::Byte>(113)), static_cast<System::Int32>(static_cast<System::Byte>(59)));
			this->btnOk->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(252)),
				static_cast<System::Int32>(static_cast<System::Byte>(113)), static_cast<System::Int32>(static_cast<System::Byte>(59)));
			this->btnOk->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnOk->ForeColor = System::Drawing::Color::White;
			this->btnOk->Location = System::Drawing::Point(60, 383);
			this->btnOk->Name = L"btnOk";
			this->btnOk->Size = System::Drawing::Size(62, 27);
			this->btnOk->TabIndex = 2;
			this->btnOk->Text = L"Submit";
			this->btnOk->UseVisualStyleBackColor = false;
			this->btnOk->Click += gcnew System::EventHandler(this, &MyBank_Signup::btnOk_Click);
			// 
			// btnCancel
			// 
			this->btnCancel->BackColor = System::Drawing::Color::Transparent;
			this->btnCancel->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnCancel.BackgroundImage")));
			this->btnCancel->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btnCancel->FlatAppearance->BorderSize = 0;
			this->btnCancel->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnCancel->Location = System::Drawing::Point(700, 12);
			this->btnCancel->Name = L"btnCancel";
			this->btnCancel->Size = System::Drawing::Size(15, 15);
			this->btnCancel->TabIndex = 2;
			this->btnCancel->UseVisualStyleBackColor = false;
			this->btnCancel->Click += gcnew System::EventHandler(this, &MyBank_Signup::btnCancel_Click);
			// 
			// MyBankLogo
			// 
			this->MyBankLogo->BackColor = System::Drawing::Color::Transparent;
			this->MyBankLogo->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"MyBankLogo.BackgroundImage")));
			this->MyBankLogo->Location = System::Drawing::Point(60, 73);
			this->MyBankLogo->Name = L"MyBankLogo";
			this->MyBankLogo->Size = System::Drawing::Size(215, 66);
			this->MyBankLogo->TabIndex = 4;
			this->MyBankLogo->TabStop = false;
			// 
			// Back
			// 
			this->Back->BackColor = System::Drawing::Color::Transparent;
			this->Back->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->Back->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Back->ForeColor = System::Drawing::Color::White;
			this->Back->Location = System::Drawing::Point(133, 383);
			this->Back->Name = L"Back";
			this->Back->Size = System::Drawing::Size(62, 27);
			this->Back->TabIndex = 5;
			this->Back->Text = L"Cancel";
			this->Back->UseVisualStyleBackColor = false;
			this->Back->Click += gcnew System::EventHandler(this, &MyBank_Signup::Back_Click);
			// 
			// SignupImage
			// 
			this->SignupImage->BackColor = System::Drawing::Color::Transparent;
			this->SignupImage->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"SignupImage.BackgroundImage")));
			this->SignupImage->Location = System::Drawing::Point(385, 73);
			this->SignupImage->Name = L"SignupImage";
			this->SignupImage->Size = System::Drawing::Size(305, 337);
			this->SignupImage->TabIndex = 6;
			this->SignupImage->TabStop = false;
			// 
			// btnSeePassword
			// 
			this->btnSeePassword->BackColor = System::Drawing::Color::White;
			this->btnSeePassword->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnSeePassword.BackgroundImage")));
			this->btnSeePassword->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btnSeePassword->FlatAppearance->BorderSize = 0;
			this->btnSeePassword->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnSeePassword->Location = System::Drawing::Point(291, 272);
			this->btnSeePassword->Name = L"btnSeePassword";
			this->btnSeePassword->Size = System::Drawing::Size(17, 17);
			this->btnSeePassword->TabIndex = 12;
			this->btnSeePassword->UseVisualStyleBackColor = false;
			this->btnSeePassword->Click += gcnew System::EventHandler(this, &MyBank_Signup::btnSeePassword_Click);
			// 
			// btnSeeConfirmedPassword
			// 
			this->btnSeeConfirmedPassword->BackColor = System::Drawing::Color::White;
			this->btnSeeConfirmedPassword->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnSeeConfirmedPassword.BackgroundImage")));
			this->btnSeeConfirmedPassword->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btnSeeConfirmedPassword->FlatAppearance->BorderSize = 0;
			this->btnSeeConfirmedPassword->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnSeeConfirmedPassword->Location = System::Drawing::Point(291, 321);
			this->btnSeeConfirmedPassword->Name = L"btnSeeConfirmedPassword";
			this->btnSeeConfirmedPassword->Size = System::Drawing::Size(17, 17);
			this->btnSeeConfirmedPassword->TabIndex = 13;
			this->btnSeeConfirmedPassword->UseVisualStyleBackColor = false;
			this->btnSeeConfirmedPassword->Click += gcnew System::EventHandler(this, &MyBank_Signup::btnSeeConfirmedPassword_Click);
			// 
			// MyBank_Signup
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(727, 477);
			this->Controls->Add(this->btnSeeConfirmedPassword);
			this->Controls->Add(this->btnSeePassword);
			this->Controls->Add(this->SignupImage);
			this->Controls->Add(this->Back);
			this->Controls->Add(this->MyBankLogo);
			this->Controls->Add(this->btnCancel);
			this->Controls->Add(this->btnOk);
			this->Controls->Add(this->tbConfirmPassword);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->tbPassword);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->tbUsername);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->tblName);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->tbfName);
			this->Controls->Add(this->label1);
			this->Font = (gcnew System::Drawing::Font(L"Source Sans Pro Semibold", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"MyBank_Signup";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"MyBank_Signup";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->MyBankLogo))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->SignupImage))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void btnCancel_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}

	public: bool switchToLogin = false;

	private:
		System::Drawing::Color originalColorForCancel;

	private: System::Void Back_Click(System::Object^ sender, System::EventArgs^ e) {
		// Store the original color
		originalColorForCancel = this->btnOk->BackColor;

		// Darken the button's color
		this->btnOk->BackColor = System::Drawing::Color::DarkGray;

		// Shrink the button slightly
		this->btnOk->Size = System::Drawing::Size(58, 23);

		// Font size changes slitghtly
		this->btnOk->Font = gcnew System::Drawing::Font(this->btnOk->Font->FontFamily, 9);

		// Wait for a short period (you can adjust this value)
		System::Threading::Thread::Sleep(100);

		// Restore the button's original color
		this->btnOk->BackColor = originalColorForCancel;

		// Font size changes slitghtly
		this->btnOk->Font = gcnew System::Drawing::Font(this->btnOk->Font->FontFamily, 11.25);

		// Restore the button's original size
		this->btnOk->Size = System::Drawing::Size(62, 27);
		this->switchToLogin = true;
		this->Close();
	}

	public: User^ user = nullptr;

	private:
		System::Drawing::Color originalColorForSubmit;

	private: System::Void btnOk_Click(System::Object^ sender, System::EventArgs^ e) {
		// Store the original color
		originalColorForSubmit = this->btnOk->BackColor;

		// Darken the button's color
		this->btnOk->BackColor = System::Drawing::Color::DarkGray;

		// Shrink the button slightly
		this->btnOk->Size = System::Drawing::Size(58, 23);

		// Font size changes slitghtly
		this->btnOk->Font = gcnew System::Drawing::Font(this->btnOk->Font->FontFamily, 8);

		// Wait for a short period (you can adjust this value)
		System::Threading::Thread::Sleep(100);

		// Restore the button's original color
		this->btnOk->BackColor = originalColorForSubmit;

		// Font size changes slitghtly
		this->btnOk->Font = gcnew System::Drawing::Font(this->btnOk->Font->FontFamily, 9.25);

		// Restore the button's original size
		this->btnOk->Size = System::Drawing::Size(62, 27);

		srand(time(0));

		int random_number1 = rand() % 9000 + 100;
		int random_number2 = rand() % 9000 + 100;
		int random_number3 = rand() % 9000 + 1000;


		String^ fname = tbfName->Text;
		String^ lname = tblName->Text;
		String^ username = tbUsername->Text;
		String^ accNumber = System::String::Format("{0}-{1}-{2}", random_number1, random_number2, random_number3);
		String^ password = tbPassword->Text;
		String^ confirmPassword = tbConfirmPassword->Text;
		int balance = 2000;

		if (fname->Length == 0 || lname->Length == 0
			|| username->Length == 0
			|| password->Length == 0) {

			MessageBox::Show("Please enter all the fields",
				"On or more empty fields", MessageBoxButtons::OK);
			return;
		}

		if (String::Compare(password, confirmPassword) != 0) {
			MessageBox::Show("Password and Confirm Password do not match",
				"Password Error", MessageBoxButtons::OK);
			return;
		}

		try {
			String^ connString = "Data Source=localhost\\sqlexpress;Initial Catalog=test;Integrated Security=True";
			SqlConnection sqlConn(connString);
			sqlConn.Open();

			String^ sqlQuery = "INSERT INTO users " +
				"(fname, lname, username, accNumber, password, balance) VALUES " +
				"(@fname, @lname, @username, @accNumber, @password, @balance);";

			SqlCommand command(sqlQuery, % sqlConn);
			command.Parameters->AddWithValue("@fname", fname);
			command.Parameters->AddWithValue("@lname", lname);
			command.Parameters->AddWithValue("@username", username);
			command.Parameters->AddWithValue("@accNumber", accNumber);
			command.Parameters->AddWithValue("@password", password);
			command.Parameters->AddWithValue("@balance", balance);

			command.ExecuteNonQuery();
			user = gcnew User;
			user->fname = fname;
			user->lname = lname;
			user->username = username;
			user->accNumber = accNumber;
			user->password = password;
			user->balance = balance;

			this->Close();
		}

		catch (Exception^ ex) {
			MessageBox::Show("Failed to register new user",
				"Register Failure", MessageBoxButtons::OK);
		}
	}
	private:
		bool isButtonPressed = false;
		System::Void btnSeePassword_Click(System::Object^ sender, System::EventArgs^ e) {
					if (isButtonPressed) {
				tbPassword->UseSystemPasswordChar = true; // Reset the textbox to use password char
				try {
					String^ imagePath = "C:\\Users\\Atlast\\Documents\\Mapua Documents\\Year 2\\CPE104L (Data Structure and Algorithm)\\MyBank\\MyBank\\images\\view.png"; // Change the path to the original image
					btnSeePassword->BackgroundImage = System::Drawing::Image::FromFile(imagePath);
				}
				catch (Exception^ ex) {
					MessageBox::Show("Error: " + ex->Message);
				}
			}
			else {
				tbPassword->UseSystemPasswordChar = false;
				try {
					String^ imagePath = "C:\\Users\\Atlast\\Documents\\Mapua Documents\\Year 2\\CPE104L (Data Structure and Algorithm)\\MyBank\\MyBank\\images\\hide.png";
					btnSeePassword->BackgroundImage = System::Drawing::Image::FromFile(imagePath);
				}
				catch (Exception^ ex) {
					MessageBox::Show("Error: " + ex->Message);
				}
			}

			isButtonPressed = !isButtonPressed;
		}
	private:
		bool isConfirmedButtonPressed = false;
		System::Void btnSeeConfirmedPassword_Click(System::Object^ sender, System::EventArgs^ e) {
			if (isConfirmedButtonPressed) {
				tbConfirmPassword->UseSystemPasswordChar = true; // Reset the textbox to use password char
				try {
					String^ imagePath = "C:\\Users\\Atlast\\Documents\\Mapua Documents\\Year 2\\CPE104L (Data Structure and Algorithm)\\MyBank\\MyBank\\images\\view.png";
					btnSeeConfirmedPassword->BackgroundImage = System::Drawing::Image::FromFile(imagePath);
				}
				catch (Exception^ ex) {
					MessageBox::Show("Error: " + ex->Message);
				}
			}
			else {
				tbConfirmPassword->UseSystemPasswordChar = false;
				try {
					String^ imagePath = "C:\\Users\\Atlast\\Documents\\Mapua Documents\\Year 2\\CPE104L (Data Structure and Algorithm)\\MyBank\\MyBank\\images\\hide.png";
					btnSeeConfirmedPassword->BackgroundImage = System::Drawing::Image::FromFile(imagePath);
				}
				catch (Exception^ ex) {
					MessageBox::Show("Error: " + ex->Message);
				}
			}

			isConfirmedButtonPressed = !isConfirmedButtonPressed;
		}
	};
}
