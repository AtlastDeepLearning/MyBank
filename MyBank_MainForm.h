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
	/// Summary for MyBank_MainForm
	/// </summary>
	public ref class MyBank_MainForm : public System::Windows::Forms::Form
	{
	public:
		User^ currentUser;
		MyBank_MainForm(User^ user)
		{
			InitializeComponent();
			
			currentUser = user;

			String^ currentUser = user->username;

			lbAccName->Text = user->fname + " " + user->lname;
			lbAccNumber->Text = user->accNumber;
			lbCardAccName->Text = user->fname + " " + user->lname;
			lbBalance->Text = String::Format("{0:N2}", user->balance);

			lbCardInfoCardNumber->Text = user->accNumber;
			lbCardInfoBalance->Text = String::Format("{0:N2}", user->balance);

			Decimal currentBalance = user->balance;
		}

	private:
		void UpdateBalanceLabel(double newBalance) {
			lbBalance->Text = String::Format("{0:N2}", newBalance);
			lbCardInfoBalance->Text = String::Format("{0:N2}", newBalance);
		}
		
	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyBank_MainForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ lbAccNumber;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::PictureBox^ pictureBox3;
	private: System::Windows::Forms::PictureBox^ pictureBox4;
	private: System::Windows::Forms::PictureBox^ pictureBox5;

	private: System::Windows::Forms::Button^ btnCancel;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;

	private: System::Windows::Forms::PictureBox^ pictureBox7;
	private: System::Windows::Forms::Label^ lbAccName;
	private: System::Windows::Forms::Label^ lbCardAccName;
	private: System::Windows::Forms::Label^ lbCardInfoCardNumber;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ lbCardInfoStatus;
	private: System::Windows::Forms::Label^ lbCardInfoMyBank;
	private: System::Windows::Forms::Label^ lbCardInfoBalance;
	private: System::Windows::Forms::Label^ lbBalance;


	private: System::Windows::Forms::Button^ btnLogout;
	private: System::Windows::Forms::TextBox^ tbRecipient;





	private: System::Windows::Forms::Button^ btnSendFunds;
	private: System::Windows::Forms::TextBox^ tbAmount;






	protected:

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyBank_MainForm::typeid));
			this->lbAccNumber = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->btnCancel = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->pictureBox7 = (gcnew System::Windows::Forms::PictureBox());
			this->lbAccName = (gcnew System::Windows::Forms::Label());
			this->lbCardAccName = (gcnew System::Windows::Forms::Label());
			this->lbCardInfoCardNumber = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->lbCardInfoStatus = (gcnew System::Windows::Forms::Label());
			this->lbCardInfoMyBank = (gcnew System::Windows::Forms::Label());
			this->lbCardInfoBalance = (gcnew System::Windows::Forms::Label());
			this->lbBalance = (gcnew System::Windows::Forms::Label());
			this->btnLogout = (gcnew System::Windows::Forms::Button());
			this->tbRecipient = (gcnew System::Windows::Forms::TextBox());
			this->btnSendFunds = (gcnew System::Windows::Forms::Button());
			this->tbAmount = (gcnew System::Windows::Forms::TextBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->BeginInit();
			this->SuspendLayout();
			// 
			// lbAccNumber
			// 
			this->lbAccNumber->AutoSize = true;
			this->lbAccNumber->BackColor = System::Drawing::Color::Transparent;
			this->lbAccNumber->Font = (gcnew System::Drawing::Font(L"Source Sans Pro", 7.5F));
			this->lbAccNumber->ForeColor = System::Drawing::Color::White;
			this->lbAccNumber->Location = System::Drawing::Point(218, 175);
			this->lbAccNumber->Name = L"lbAccNumber";
			this->lbAccNumber->Size = System::Drawing::Size(41, 13);
			this->lbAccNumber->TabIndex = 0;
			this->lbAccNumber->Text = L"accNum";
			this->lbAccNumber->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.BackgroundImage")));
			this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox1->Location = System::Drawing::Point(531, 178);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(34, 34);
			this->pictureBox1->TabIndex = 1;
			this->pictureBox1->TabStop = false;
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.BackgroundImage")));
			this->pictureBox2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox2->Location = System::Drawing::Point(531, 238);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(34, 34);
			this->pictureBox2->TabIndex = 2;
			this->pictureBox2->TabStop = false;
			// 
			// pictureBox3
			// 
			this->pictureBox3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.BackgroundImage")));
			this->pictureBox3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox3->Location = System::Drawing::Point(531, 296);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(34, 34);
			this->pictureBox3->TabIndex = 3;
			this->pictureBox3->TabStop = false;
			// 
			// pictureBox4
			// 
			this->pictureBox4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.BackgroundImage")));
			this->pictureBox4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox4->Location = System::Drawing::Point(531, 354);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(34, 34);
			this->pictureBox4->TabIndex = 4;
			this->pictureBox4->TabStop = false;
			// 
			// pictureBox5
			// 
			this->pictureBox5->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox5.BackgroundImage")));
			this->pictureBox5->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox5->Location = System::Drawing::Point(531, 413);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(34, 34);
			this->pictureBox5->TabIndex = 5;
			this->pictureBox5->TabStop = false;
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
			this->btnCancel->Location = System::Drawing::Point(844, 12);
			this->btnCancel->Name = L"btnCancel";
			this->btnCancel->Size = System::Drawing::Size(16, 16);
			this->btnCancel->TabIndex = 7;
			this->btnCancel->UseVisualStyleBackColor = false;
			this->btnCancel->Click += gcnew System::EventHandler(this, &MyBank_MainForm::btnCancel_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Source Sans Pro", 9.5F));
			this->label1->Location = System::Drawing::Point(575, 182);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(40, 17);
			this->label1->TabIndex = 8;
			this->label1->Text = L"label1";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Source Sans Pro", 9.5F));
			this->label2->Location = System::Drawing::Point(575, 241);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(40, 17);
			this->label2->TabIndex = 9;
			this->label2->Text = L"label2";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Source Sans Pro", 9.5F));
			this->label3->Location = System::Drawing::Point(575, 299);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(40, 17);
			this->label3->TabIndex = 10;
			this->label3->Text = L"label3";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"Source Sans Pro", 9.5F));
			this->label4->Location = System::Drawing::Point(575, 357);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(40, 17);
			this->label4->TabIndex = 11;
			this->label4->Text = L"label4";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->Font = (gcnew System::Drawing::Font(L"Source Sans Pro", 9.5F));
			this->label5->Location = System::Drawing::Point(575, 415);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(40, 17);
			this->label5->TabIndex = 12;
			this->label5->Text = L"label5";
			// 
			// pictureBox7
			// 
			this->pictureBox7->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox7->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox7.BackgroundImage")));
			this->pictureBox7->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox7->Location = System::Drawing::Point(194, 47);
			this->pictureBox7->Name = L"pictureBox7";
			this->pictureBox7->Size = System::Drawing::Size(30, 30);
			this->pictureBox7->TabIndex = 14;
			this->pictureBox7->TabStop = false;
			// 
			// lbAccName
			// 
			this->lbAccName->AutoSize = true;
			this->lbAccName->BackColor = System::Drawing::Color::Transparent;
			this->lbAccName->Font = (gcnew System::Drawing::Font(L"Source Sans Pro", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbAccName->ForeColor = System::Drawing::Color::White;
			this->lbAccName->Location = System::Drawing::Point(234, 51);
			this->lbAccName->Name = L"lbAccName";
			this->lbAccName->Size = System::Drawing::Size(70, 19);
			this->lbAccName->TabIndex = 15;
			this->lbAccName->Text = L"accName";
			// 
			// lbCardAccName
			// 
			this->lbCardAccName->AutoSize = true;
			this->lbCardAccName->BackColor = System::Drawing::Color::Transparent;
			this->lbCardAccName->Font = (gcnew System::Drawing::Font(L"Source Sans Pro Semibold", 8.2F, System::Drawing::FontStyle::Bold));
			this->lbCardAccName->ForeColor = System::Drawing::Color::White;
			this->lbCardAccName->Location = System::Drawing::Point(218, 231);
			this->lbCardAccName->Name = L"lbCardAccName";
			this->lbCardAccName->Size = System::Drawing::Size(51, 14);
			this->lbCardAccName->TabIndex = 16;
			this->lbCardAccName->Text = L"accName";
			// 
			// lbCardInfoCardNumber
			// 
			this->lbCardInfoCardNumber->AutoSize = true;
			this->lbCardInfoCardNumber->BackColor = System::Drawing::Color::Transparent;
			this->lbCardInfoCardNumber->Font = (gcnew System::Drawing::Font(L"Source Sans Pro Semibold", 8.25F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->lbCardInfoCardNumber->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(92)),
				static_cast<System::Int32>(static_cast<System::Byte>(92)), static_cast<System::Int32>(static_cast<System::Byte>(92)));
			this->lbCardInfoCardNumber->Location = System::Drawing::Point(380, 358);
			this->lbCardInfoCardNumber->Name = L"lbCardInfoCardNumber";
			this->lbCardInfoCardNumber->Size = System::Drawing::Size(87, 14);
			this->lbCardInfoCardNumber->TabIndex = 17;
			this->lbCardInfoCardNumber->Text = L"1233-4456-7890";
			this->lbCardInfoCardNumber->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::Color::Transparent;
			this->label7->Font = (gcnew System::Drawing::Font(L"Source Sans Pro Semibold", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(406, 326);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(61, 14);
			this->label7->TabIndex = 18;
			this->label7->Text = L"See Details";
			this->label7->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// lbCardInfoStatus
			// 
			this->lbCardInfoStatus->AutoSize = true;
			this->lbCardInfoStatus->BackColor = System::Drawing::Color::Transparent;
			this->lbCardInfoStatus->Font = (gcnew System::Drawing::Font(L"Source Sans Pro Semibold", 8.25F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->lbCardInfoStatus->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->lbCardInfoStatus->Location = System::Drawing::Point(431, 381);
			this->lbCardInfoStatus->Name = L"lbCardInfoStatus";
			this->lbCardInfoStatus->Size = System::Drawing::Size(36, 14);
			this->lbCardInfoStatus->TabIndex = 19;
			this->lbCardInfoStatus->Text = L"Active";
			this->lbCardInfoStatus->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// lbCardInfoMyBank
			// 
			this->lbCardInfoMyBank->AutoSize = true;
			this->lbCardInfoMyBank->BackColor = System::Drawing::Color::Transparent;
			this->lbCardInfoMyBank->Font = (gcnew System::Drawing::Font(L"Source Sans Pro Semibold", 8.25F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->lbCardInfoMyBank->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(92)), static_cast<System::Int32>(static_cast<System::Byte>(92)),
				static_cast<System::Int32>(static_cast<System::Byte>(92)));
			this->lbCardInfoMyBank->Location = System::Drawing::Point(422, 403);
			this->lbCardInfoMyBank->Name = L"lbCardInfoMyBank";
			this->lbCardInfoMyBank->Size = System::Drawing::Size(45, 14);
			this->lbCardInfoMyBank->TabIndex = 20;
			this->lbCardInfoMyBank->Text = L"MyBank";
			this->lbCardInfoMyBank->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// lbCardInfoBalance
			// 
			this->lbCardInfoBalance->AutoSize = true;
			this->lbCardInfoBalance->BackColor = System::Drawing::Color::Transparent;
			this->lbCardInfoBalance->Font = (gcnew System::Drawing::Font(L"Source Sans Pro Semibold", 8.25F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->lbCardInfoBalance->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(92)),
				static_cast<System::Int32>(static_cast<System::Byte>(92)), static_cast<System::Int32>(static_cast<System::Byte>(92)));
			this->lbCardInfoBalance->Location = System::Drawing::Point(418, 425);
			this->lbCardInfoBalance->Name = L"lbCardInfoBalance";
			this->lbCardInfoBalance->Size = System::Drawing::Size(49, 14);
			this->lbCardInfoBalance->TabIndex = 21;
			this->lbCardInfoBalance->Text = L"2,000.00";
			this->lbCardInfoBalance->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// lbBalance
			// 
			this->lbBalance->AutoSize = true;
			this->lbBalance->BackColor = System::Drawing::Color::Transparent;
			this->lbBalance->Font = (gcnew System::Drawing::Font(L"Source Sans Pro", 19.1F, System::Drawing::FontStyle::Bold));
			this->lbBalance->ForeColor = System::Drawing::Color::White;
			this->lbBalance->Location = System::Drawing::Point(232, 188);
			this->lbBalance->Name = L"lbBalance";
			this->lbBalance->Size = System::Drawing::Size(85, 33);
			this->lbBalance->TabIndex = 22;
			this->lbBalance->Text = L"label8";
			this->lbBalance->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// btnLogout
			// 
			this->btnLogout->BackColor = System::Drawing::Color::Transparent;
			this->btnLogout->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnLogout.BackgroundImage")));
			this->btnLogout->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btnLogout->FlatAppearance->BorderSize = 0;
			this->btnLogout->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->btnLogout->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->btnLogout->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnLogout->Location = System::Drawing::Point(27, 431);
			this->btnLogout->Name = L"btnLogout";
			this->btnLogout->Size = System::Drawing::Size(103, 19);
			this->btnLogout->TabIndex = 25;
			this->btnLogout->UseVisualStyleBackColor = false;
			this->btnLogout->Click += gcnew System::EventHandler(this, &MyBank_MainForm::btnLogout_Click);
			// 
			// tbRecipient
			// 
			this->tbRecipient->Location = System::Drawing::Point(383, 490);
			this->tbRecipient->Name = L"tbRecipient";
			this->tbRecipient->Size = System::Drawing::Size(193, 24);
			this->tbRecipient->TabIndex = 26;
			// 
			// btnSendFunds
			// 
			this->btnSendFunds->BackColor = System::Drawing::Color::Transparent;
			this->btnSendFunds->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnSendFunds.BackgroundImage")));
			this->btnSendFunds->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btnSendFunds->FlatAppearance->BorderSize = 0;
			this->btnSendFunds->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->btnSendFunds->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->btnSendFunds->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnSendFunds->Location = System::Drawing::Point(799, 490);
			this->btnSendFunds->Name = L"btnSendFunds";
			this->btnSendFunds->Size = System::Drawing::Size(26, 26);
			this->btnSendFunds->TabIndex = 27;
			this->btnSendFunds->UseVisualStyleBackColor = false;
			this->btnSendFunds->Click += gcnew System::EventHandler(this, &MyBank_MainForm::btnSendFunds_Click);
			// 
			// tbAmount
			// 
			this->tbAmount->Location = System::Drawing::Point(644, 490);
			this->tbAmount->Name = L"tbAmount";
			this->tbAmount->Size = System::Drawing::Size(149, 24);
			this->tbAmount->TabIndex = 28;
			// 
			// MyBank_MainForm
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(872, 572);
			this->Controls->Add(this->tbAmount);
			this->Controls->Add(this->btnSendFunds);
			this->Controls->Add(this->tbRecipient);
			this->Controls->Add(this->btnLogout);
			this->Controls->Add(this->lbBalance);
			this->Controls->Add(this->lbCardInfoBalance);
			this->Controls->Add(this->lbCardInfoMyBank);
			this->Controls->Add(this->lbCardInfoStatus);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->lbCardInfoCardNumber);
			this->Controls->Add(this->lbCardAccName);
			this->Controls->Add(this->lbAccName);
			this->Controls->Add(this->pictureBox7);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->btnCancel);
			this->Controls->Add(this->pictureBox5);
			this->Controls->Add(this->pictureBox4);
			this->Controls->Add(this->pictureBox3);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->lbAccNumber);
			this->Font = (gcnew System::Drawing::Font(L"Source Sans Pro", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"MyBank_MainForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"MyBank_MainForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void btnCancel_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	private: System::Void btnSettings_Click(System::Object^ sender, System::EventArgs^ e) {

	}

	public: bool switchBackToLogin = false;
	private: System::Void btnLogout_Click(System::Object^ sender, System::EventArgs^ e) {
		this->switchBackToLogin = true;
		this->Close();
	}
	
	private: System::Void btnSendFunds_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ connString = "Data Source=localhost\\sqlexpress;Initial Catalog=test;Integrated Security=True";
		SqlConnection^ sqlConn = gcnew SqlConnection(connString);

		// Open the connection
		sqlConn->Open();

		String^ senderUsername = currentUser->username;  // Accessing the username property from the User object
		String^ recipientUsername = tbRecipient->Text;
		double amount = Convert::ToDouble(tbAmount->Text);
		// Step 2: Retrieve the sender's current balance
		SqlCommand^ getSenderBalanceCmd = gcnew SqlCommand("SELECT balance FROM users WHERE username = @username", sqlConn);
		getSenderBalanceCmd->Parameters->AddWithValue("@username", senderUsername);
		double senderBalance = Convert::ToDouble(getSenderBalanceCmd->ExecuteScalar());

		// Step 3: Retrieve the recipient's current balance
		SqlCommand^ getRecipientBalanceCmd = gcnew SqlCommand("SELECT balance FROM users WHERE username = @username", sqlConn);
		getRecipientBalanceCmd->Parameters->AddWithValue("@username", recipientUsername);
		double recipientBalance = Convert::ToDouble(getRecipientBalanceCmd->ExecuteScalar());

		// Step 4: Perform calculations
		senderBalance -= amount;
		recipientBalance += amount;

		// Step 5: Update balances in the database
		SqlCommand^ updateSenderBalanceCmd = gcnew SqlCommand("UPDATE users SET balance = @balance WHERE username = @username", sqlConn);
		updateSenderBalanceCmd->Parameters->AddWithValue("@balance", senderBalance);
		updateSenderBalanceCmd->Parameters->AddWithValue("@username", senderUsername);
		updateSenderBalanceCmd->ExecuteNonQuery();

		SqlCommand^ updateRecipientBalanceCmd = gcnew SqlCommand("UPDATE users SET balance = @balance WHERE username = @username", sqlConn);
		updateRecipientBalanceCmd->Parameters->AddWithValue("@balance", recipientBalance);
		updateRecipientBalanceCmd->Parameters->AddWithValue("@username", recipientUsername);
		updateRecipientBalanceCmd->ExecuteNonQuery();

		// Close the connection
		sqlConn->Close();

		UpdateBalanceLabel(senderBalance);
	}


};
}
