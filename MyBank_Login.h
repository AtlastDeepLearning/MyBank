#pragma once
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
	/// Summary for MyBank_Login
	/// </summary>
	public ref class MyBank_Login : public System::Windows::Forms::Form
	{
	public:
		MyBank_Login(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyBank_Login()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ tbUsername;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ tbPassword;
	private: System::Windows::Forms::Button^ btnOk;
	private: System::Windows::Forms::Button^ btnCancel;
	private: System::Windows::Forms::LinkLabel^ llRegistration;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::PictureBox^ MyBankLoginPic;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Button^ btnSeePassword;







	protected:

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyBank_Login::typeid));
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->tbUsername = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->tbPassword = (gcnew System::Windows::Forms::TextBox());
			this->btnOk = (gcnew System::Windows::Forms::Button());
			this->btnCancel = (gcnew System::Windows::Forms::Button());
			this->llRegistration = (gcnew System::Windows::Forms::LinkLabel());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->MyBankLoginPic = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->btnSeePassword = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->MyBankLoginPic))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Source Sans Pro Semibold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(71, 166);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(78, 20);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Username";
			// 
			// tbUsername
			// 
			this->tbUsername->Location = System::Drawing::Point(75, 189);
			this->tbUsername->Name = L"tbUsername";
			this->tbUsername->Size = System::Drawing::Size(184, 24);
			this->tbUsername->TabIndex = 2;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Source Sans Pro Semibold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(71, 235);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(75, 20);
			this->label3->TabIndex = 3;
			this->label3->Text = L"Password";
			// 
			// tbPassword
			// 
			this->tbPassword->Location = System::Drawing::Point(75, 258);
			this->tbPassword->Name = L"tbPassword";
			this->tbPassword->Size = System::Drawing::Size(184, 24);
			this->tbPassword->TabIndex = 4;
			this->tbPassword->UseSystemPasswordChar = true;
			// 
			// btnOk
			// 
			this->btnOk->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->btnOk->FlatAppearance->BorderSize = 0;
			this->btnOk->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->btnOk->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->btnOk->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnOk->Font = (gcnew System::Drawing::Font(L"Source Sans Pro", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnOk->ForeColor = System::Drawing::Color::White;
			this->btnOk->Location = System::Drawing::Point(75, 302);
			this->btnOk->Name = L"btnOk";
			this->btnOk->Size = System::Drawing::Size(62, 27);
			this->btnOk->TabIndex = 5;
			this->btnOk->Text = L"Sign in";
			this->btnOk->UseVisualStyleBackColor = false;
			this->btnOk->Click += gcnew System::EventHandler(this, &MyBank_Login::btnOk_Click);
			// 
			// btnCancel
			// 
			this->btnCancel->BackColor = System::Drawing::Color::Transparent;
			this->btnCancel->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnCancel.BackgroundImage")));
			this->btnCancel->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btnCancel->FlatAppearance->BorderSize = 0;
			this->btnCancel->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->btnCancel->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->btnCancel->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnCancel->Font = (gcnew System::Drawing::Font(L"Source Sans Pro", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnCancel->Location = System::Drawing::Point(700, 12);
			this->btnCancel->Name = L"btnCancel";
			this->btnCancel->Size = System::Drawing::Size(15, 15);
			this->btnCancel->TabIndex = 6;
			this->btnCancel->UseVisualStyleBackColor = false;
			this->btnCancel->Click += gcnew System::EventHandler(this, &MyBank_Login::btnCancel_Click);
			// 
			// llRegistration
			// 
			this->llRegistration->ActiveLinkColor = System::Drawing::Color::Transparent;
			this->llRegistration->AutoSize = true;
			this->llRegistration->BackColor = System::Drawing::Color::Transparent;
			this->llRegistration->Font = (gcnew System::Drawing::Font(L"Source Sans Pro Semibold", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->llRegistration->LinkColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->llRegistration->Location = System::Drawing::Point(196, 343);
			this->llRegistration->Name = L"llRegistration";
			this->llRegistration->Size = System::Drawing::Size(49, 17);
			this->llRegistration->TabIndex = 7;
			this->llRegistration->TabStop = true;
			this->llRegistration->Text = L"Sign up";
			this->llRegistration->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &MyBank_Login::llRegistration_LinkClicked);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"Source Sans Pro Semibold", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::White;
			this->label4->Location = System::Drawing::Point(72, 343);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(124, 15);
			this->label4->TabIndex = 8;
			this->label4->Text = L"Dont have an account\?";
			// 
			// MyBankLoginPic
			// 
			this->MyBankLoginPic->BackColor = System::Drawing::Color::Transparent;
			this->MyBankLoginPic->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"MyBankLoginPic.BackgroundImage")));
			this->MyBankLoginPic->Location = System::Drawing::Point(395, 68);
			this->MyBankLoginPic->Name = L"MyBankLoginPic";
			this->MyBankLoginPic->Size = System::Drawing::Size(296, 331);
			this->MyBankLoginPic->TabIndex = 9;
			this->MyBankLoginPic->TabStop = false;
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.BackgroundImage")));
			this->pictureBox1->Location = System::Drawing::Point(64, 68);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(215, 66);
			this->pictureBox1->TabIndex = 10;
			this->pictureBox1->TabStop = false;
			// 
			// btnSeePassword
			// 
			this->btnSeePassword->BackColor = System::Drawing::Color::White;
			this->btnSeePassword->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnSeePassword.BackgroundImage")));
			this->btnSeePassword->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btnSeePassword->FlatAppearance->BorderSize = 0;
			this->btnSeePassword->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnSeePassword->Location = System::Drawing::Point(235, 261);
			this->btnSeePassword->Name = L"btnSeePassword";
			this->btnSeePassword->Size = System::Drawing::Size(17, 17);
			this->btnSeePassword->TabIndex = 11;
			this->btnSeePassword->UseVisualStyleBackColor = false;
			this->btnSeePassword->Click += gcnew System::EventHandler(this, &MyBank_Login::btnSeePassword_Click);
			// 
			// MyBank_Login
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(727, 477);
			this->Controls->Add(this->btnSeePassword);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->MyBankLoginPic);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->llRegistration);
			this->Controls->Add(this->btnCancel);
			this->Controls->Add(this->btnOk);
			this->Controls->Add(this->tbPassword);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->tbUsername);
			this->Controls->Add(this->label2);
			this->Font = (gcnew System::Drawing::Font(L"Source Sans Pro", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(6);
			this->Name = L"MyBank_Login";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Login Form";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->MyBankLoginPic))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private:
		System::Drawing::Color originalColorForExit;

	private: System::Void btnCancel_Click(System::Object^ sender, System::EventArgs^ e) {
		// Store the original color
		originalColorForExit = this->btnOk->BackColor;

		// Darken the button's color
		this->btnOk->BackColor = System::Drawing::Color::DarkGray;

		// Shrink the button slightly
		this->btnOk->Size = System::Drawing::Size(58, 23);

		// Font size changes slitghtly
		this->btnOk->Font = gcnew System::Drawing::Font(this->btnOk->Font->FontFamily, 9);

		// Wait for a short period (you can adjust this value)
		System::Threading::Thread::Sleep(100);

		// Restore the button's original color
		this->btnOk->BackColor = originalColorForExit;

		// Font size changes slitghtly
		this->btnOk->Font = gcnew System::Drawing::Font(this->btnOk->Font->FontFamily, 11.25);

		// Restore the button's original size
		this->btnOk->Size = System::Drawing::Size(62, 27);

		this->Close();
	}

	public: User^ user = nullptr;

	public: bool switchToMainForm = false;

	private:
		System::Drawing::Color originalColorForSignin;

	private: System::Void btnOk_Click(System::Object^ sender, System::EventArgs^ e) {

		// Store the original color
		originalColorForSignin = this->btnOk->BackColor;

		// Darken the button's color
		this->btnOk->BackColor = System::Drawing::Color::DarkGray;

		// Shrink the button slightly
		this->btnOk->Size = System::Drawing::Size(58, 23);

		// Font size changes slitghtly
		this->btnOk->Font = gcnew System::Drawing::Font(this->btnOk->Font->FontFamily, 9);

		// Wait for a short period (you can adjust this value)
		System::Threading::Thread::Sleep(100);

		// Restore the button's original color
		this->btnOk->BackColor = originalColorForSignin;

		// Font size changes slitghtly
		this->btnOk->Font = gcnew System::Drawing::Font(this->btnOk->Font->FontFamily, 11.25);

		// Restore the button's original size
		this->btnOk->Size = System::Drawing::Size(62, 27);

		String^ username = this->tbUsername->Text;
		String^ password = this->tbPassword->Text;

		this->switchToMainForm = true;

		if (username->Length == 0 || password->Length == 0) {
			MessageBox::Show("Please enter Email and Password",
				"Email or Password Empty", MessageBoxButtons::OK);

			return;
		}

		try {
			String^ connString = "Data Source=localhost\\sqlexpress;Initial Catalog=test;Integrated Security=True";
			SqlConnection sqlConn(connString);
			sqlConn.Open();

			String^ sqlQuery = "SELECT * FROM users WHERE username=@username and password=@pwd;";
			SqlCommand command(sqlQuery, % sqlConn);
			command.Parameters->AddWithValue("@username", username);
			command.Parameters->AddWithValue("@pwd", password);


			SqlDataReader^ reader = command.ExecuteReader();
			if (reader->Read()) {
				user = gcnew User;
				user->id = reader->GetInt32(0);
				user->fname = reader->GetString(1);
				user->lname = reader->GetString(2);
				user->username = reader->GetString(3);
				user->accNumber = reader->GetString(4);
				user->password = reader->GetString(5);
				user->balance = reader->GetDecimal(6);


				this->Close();
			}
			else {
				MessageBox::Show("Email or password is incorrect",
					"Email or Password Error", MessageBoxButtons::OK);
			}
		}
		catch (Exception^ e) {
			MessageBox::Show("Failed to connect to database",
				"Database Connection Error", MessageBoxButtons::OK);
		}


	}

	

	public: bool switchToSignup = false;
	private: System::Void llRegistration_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
		this->switchToSignup = true;
		this->Close();
	}

	private:
		bool isButtonPressed = false; // Add this line to declare a boolean variable

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

			isButtonPressed = !isButtonPressed; // Toggle the button state
		}


	};
}
