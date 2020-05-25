#pragma once
#include "mainForm.h"


namespace stockManagement {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Data::Sql;
	using namespace System::Data::SqlClient;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for LoginForm
	/// </summary>
	public ref class LoginForm : public System::Windows::Forms::Form
	{
	public:
		LoginForm(void)
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
		~LoginForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: Bunifu::Framework::UI::BunifuTextbox^ login_txt;
	private: Bunifu::Framework::UI::BunifuTextbox^ password_txt;
	protected:


	private: Bunifu::Framework::UI::BunifuFlatButton^ bunifuFlatButton1;

	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(LoginForm::typeid));
			this->login_txt = (gcnew Bunifu::Framework::UI::BunifuTextbox());
			this->password_txt = (gcnew Bunifu::Framework::UI::BunifuTextbox());
			this->bunifuFlatButton1 = (gcnew Bunifu::Framework::UI::BunifuFlatButton());
			this->SuspendLayout();
			// 
			// login_txt
			// 
			this->login_txt->BackColor = System::Drawing::Color::White;
			this->login_txt->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"login_txt.BackgroundImage")));
			this->login_txt->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->login_txt->ForeColor = System::Drawing::Color::Firebrick;
			this->login_txt->Icon = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"login_txt.Icon")));
			this->login_txt->Location = System::Drawing::Point(281, 132);
			this->login_txt->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->login_txt->Name = L"login_txt";
			this->login_txt->Size = System::Drawing::Size(333, 52);
			this->login_txt->TabIndex = 0;
			this->login_txt->text = L"";
			// 
			// password_txt
			// 
			this->password_txt->BackColor = System::Drawing::Color::White;
			this->password_txt->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"password_txt.BackgroundImage")));
			this->password_txt->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->password_txt->ForeColor = System::Drawing::Color::Firebrick;
			this->password_txt->Icon = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"password_txt.Icon")));
			this->password_txt->Location = System::Drawing::Point(281, 209);
			this->password_txt->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->password_txt->Name = L"password_txt";
			this->password_txt->Size = System::Drawing::Size(333, 52);
			this->password_txt->TabIndex = 1;
			this->password_txt->text = L"";
			// 
			// bunifuFlatButton1
			// 
			this->bunifuFlatButton1->Activecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(46)),
				static_cast<System::Int32>(static_cast<System::Byte>(139)), static_cast<System::Int32>(static_cast<System::Byte>(87)));
			this->bunifuFlatButton1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(46)),
				static_cast<System::Int32>(static_cast<System::Byte>(139)), static_cast<System::Int32>(static_cast<System::Byte>(87)));
			this->bunifuFlatButton1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->bunifuFlatButton1->BorderRadius = 0;
			this->bunifuFlatButton1->ButtonText = L"Login";
			this->bunifuFlatButton1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->bunifuFlatButton1->DisabledColor = System::Drawing::Color::Gray;
			this->bunifuFlatButton1->Iconcolor = System::Drawing::Color::Transparent;
			this->bunifuFlatButton1->Iconimage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuFlatButton1.Iconimage")));
			this->bunifuFlatButton1->Iconimage_right = nullptr;
			this->bunifuFlatButton1->Iconimage_right_Selected = nullptr;
			this->bunifuFlatButton1->Iconimage_Selected = nullptr;
			this->bunifuFlatButton1->IconMarginLeft = 0;
			this->bunifuFlatButton1->IconMarginRight = 0;
			this->bunifuFlatButton1->IconRightVisible = true;
			this->bunifuFlatButton1->IconRightZoom = 0;
			this->bunifuFlatButton1->IconVisible = true;
			this->bunifuFlatButton1->IconZoom = 90;
			this->bunifuFlatButton1->IsTab = false;
			this->bunifuFlatButton1->Location = System::Drawing::Point(281, 295);
			this->bunifuFlatButton1->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->bunifuFlatButton1->Name = L"bunifuFlatButton1";
			this->bunifuFlatButton1->Normalcolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(46)),
				static_cast<System::Int32>(static_cast<System::Byte>(139)), static_cast<System::Int32>(static_cast<System::Byte>(87)));
			this->bunifuFlatButton1->OnHovercolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(36)),
				static_cast<System::Int32>(static_cast<System::Byte>(129)), static_cast<System::Int32>(static_cast<System::Byte>(77)));
			this->bunifuFlatButton1->OnHoverTextColor = System::Drawing::Color::White;
			this->bunifuFlatButton1->selected = false;
			this->bunifuFlatButton1->Size = System::Drawing::Size(333, 74);
			this->bunifuFlatButton1->TabIndex = 2;
			this->bunifuFlatButton1->Text = L"Login";
			this->bunifuFlatButton1->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->bunifuFlatButton1->Textcolor = System::Drawing::Color::White;
			this->bunifuFlatButton1->TextFont = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->bunifuFlatButton1->Click += gcnew System::EventHandler(this, &LoginForm::bunifuFlatButton1_Click);
			// 
			// LoginForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(901, 517);
			this->Controls->Add(this->bunifuFlatButton1);
			this->Controls->Add(this->password_txt);
			this->Controls->Add(this->login_txt);
			this->Name = L"LoginForm";
			this->Text = L"LoginForm";
			this->Load += gcnew System::EventHandler(this, &LoginForm::LoginForm_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void LoginForm_Load(System::Object^ sender, System::EventArgs^ e) {
		
	}
	private: System::Void bunifuFlatButton1_Click(System::Object^ sender, System::EventArgs^ e) {
		//String^ login = login_txt->text;
		/*String^ password = password_txt->text;
		SqlConnection^ cnx = gcnew SqlConnection("Data Source=.;Initial Catalog=ProjetCpp; Integrated Security=True");
		cnx->Open();
		SqlCommand^ cmd = gcnew SqlCommand("select * from users where login=@login and password=@password",cnx);
		cmd->Parameters->AddWithValue("login", login_txt->text);
		cmd->Parameters->AddWithValue("password", password_txt->text);
		SqlDataReader^ dr = cmd->ExecuteReader();
		if (dr->Read())
		{*/
		this->Hide();
		mainForm^ main = gcnew mainForm();
		main->ShowDialog();
		/*}
		else
		{
			MessageBox::Show("something's wrong");
		}
		cnx->Close();*/
	}
};
}
