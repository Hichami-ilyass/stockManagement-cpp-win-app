#pragma once
#include "ProductUserControl.h"
#include "ClientUserControl.h"
#include "SupplierUserControlcpp.h"
#include "purchaseUserControl.h"
#include "SalesUserControl.h"


namespace stockManagement {
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for mainForm
	/// </summary>
	public ref class mainForm : public System::Windows::Forms::Form
	{
	public:
		mainForm(void)
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
		~mainForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: Bunifu::Framework::UI::BunifuCards^ navBar;
	protected:
	private: System::Windows::Forms::Panel^ botMainMarg;
	private: System::Windows::Forms::Panel^ topMainMarg;
	private: System::Windows::Forms::Panel^ rightMainMarg;
	private: System::Windows::Forms::Panel^ leftMainMarg;
	private: System::Windows::Forms::Panel^ sidebar;
	private: System::Windows::Forms::Panel^ sideBarMarg;
	private: System::Windows::Forms::Panel^ mainContainer;
	private: FlatButton::JFlatButton^ SideBarBuyBtn;

	private: System::Windows::Forms::Panel^ panel7;
	private: FlatButton::JFlatButton^ SideBarSellBtn;

	private: System::Windows::Forms::Panel^ panel6;
	private: FlatButton::JFlatButton^ SideBarFournisseurBtn;



	private: System::Windows::Forms::Panel^ panel5;
	private: FlatButton::JFlatButton^ SideBarClientBtn;

	private: System::Windows::Forms::Panel^ panel4;
	private: FlatButton::JFlatButton^ SideBarProductBtn;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Panel^ panel1;



	protected:

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(mainForm::typeid));
			this->navBar = (gcnew Bunifu::Framework::UI::BunifuCards());
			this->botMainMarg = (gcnew System::Windows::Forms::Panel());
			this->topMainMarg = (gcnew System::Windows::Forms::Panel());
			this->rightMainMarg = (gcnew System::Windows::Forms::Panel());
			this->leftMainMarg = (gcnew System::Windows::Forms::Panel());
			this->sidebar = (gcnew System::Windows::Forms::Panel());
			this->SideBarBuyBtn = (gcnew FlatButton::JFlatButton());
			this->panel7 = (gcnew System::Windows::Forms::Panel());
			this->SideBarSellBtn = (gcnew FlatButton::JFlatButton());
			this->panel6 = (gcnew System::Windows::Forms::Panel());
			this->SideBarFournisseurBtn = (gcnew FlatButton::JFlatButton());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->SideBarClientBtn = (gcnew FlatButton::JFlatButton());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->SideBarProductBtn = (gcnew FlatButton::JFlatButton());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->sideBarMarg = (gcnew System::Windows::Forms::Panel());
			this->mainContainer = (gcnew System::Windows::Forms::Panel());
			this->sidebar->SuspendLayout();
			this->SuspendLayout();
			// 
			// navBar
			// 
			this->navBar->BackColor = System::Drawing::Color::White;
			this->navBar->BorderRadius = 5;
			this->navBar->BottomSahddow = true;
			this->navBar->color = System::Drawing::Color::White;
			this->navBar->Dock = System::Windows::Forms::DockStyle::Top;
			this->navBar->LeftSahddow = false;
			this->navBar->Location = System::Drawing::Point(0, 0);
			this->navBar->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->navBar->Name = L"navBar";
			this->navBar->RightSahddow = true;
			this->navBar->ShadowDepth = 20;
			this->navBar->Size = System::Drawing::Size(1800, 100);
			this->navBar->TabIndex = 0;
			// 
			// botMainMarg
			// 
			this->botMainMarg->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->botMainMarg->Location = System::Drawing::Point(0, 866);
			this->botMainMarg->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->botMainMarg->Name = L"botMainMarg";
			this->botMainMarg->Size = System::Drawing::Size(1800, 31);
			this->botMainMarg->TabIndex = 1;
			// 
			// topMainMarg
			// 
			this->topMainMarg->BackColor = System::Drawing::Color::WhiteSmoke;
			this->topMainMarg->Dock = System::Windows::Forms::DockStyle::Top;
			this->topMainMarg->Location = System::Drawing::Point(0, 100);
			this->topMainMarg->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->topMainMarg->Name = L"topMainMarg";
			this->topMainMarg->Size = System::Drawing::Size(1800, 31);
			this->topMainMarg->TabIndex = 2;
			// 
			// rightMainMarg
			// 
			this->rightMainMarg->Dock = System::Windows::Forms::DockStyle::Right;
			this->rightMainMarg->Location = System::Drawing::Point(1767, 131);
			this->rightMainMarg->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->rightMainMarg->Name = L"rightMainMarg";
			this->rightMainMarg->Size = System::Drawing::Size(33, 735);
			this->rightMainMarg->TabIndex = 3;
			// 
			// leftMainMarg
			// 
			this->leftMainMarg->Dock = System::Windows::Forms::DockStyle::Left;
			this->leftMainMarg->Location = System::Drawing::Point(0, 131);
			this->leftMainMarg->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->leftMainMarg->Name = L"leftMainMarg";
			this->leftMainMarg->Size = System::Drawing::Size(33, 735);
			this->leftMainMarg->TabIndex = 4;
			// 
			// sidebar
			// 
			this->sidebar->BackColor = System::Drawing::Color::White;
			this->sidebar->Controls->Add(this->SideBarBuyBtn);
			this->sidebar->Controls->Add(this->panel7);
			this->sidebar->Controls->Add(this->SideBarSellBtn);
			this->sidebar->Controls->Add(this->panel6);
			this->sidebar->Controls->Add(this->SideBarFournisseurBtn);
			this->sidebar->Controls->Add(this->panel5);
			this->sidebar->Controls->Add(this->SideBarClientBtn);
			this->sidebar->Controls->Add(this->panel4);
			this->sidebar->Controls->Add(this->SideBarProductBtn);
			this->sidebar->Controls->Add(this->panel3);
			this->sidebar->Controls->Add(this->panel2);
			this->sidebar->Controls->Add(this->panel1);
			this->sidebar->Dock = System::Windows::Forms::DockStyle::Left;
			this->sidebar->Location = System::Drawing::Point(33, 131);
			this->sidebar->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->sidebar->Name = L"sidebar";
			this->sidebar->Size = System::Drawing::Size(408, 735);
			this->sidebar->TabIndex = 5;
			// 
			// SideBarBuyBtn
			// 
			this->SideBarBuyBtn->BackColor = System::Drawing::Color::White;
			this->SideBarBuyBtn->BackgroundColor = System::Drawing::Color::White;
			this->SideBarBuyBtn->ButtonText = L"Purchases";
			this->SideBarBuyBtn->CausesValidation = false;
			this->SideBarBuyBtn->Cursor = System::Windows::Forms::Cursors::Hand;
			this->SideBarBuyBtn->Dock = System::Windows::Forms::DockStyle::Top;
			this->SideBarBuyBtn->ErrorImageLeft = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"SideBarBuyBtn.ErrorImageLeft")));
			this->SideBarBuyBtn->ErrorImageRight = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"SideBarBuyBtn.ErrorImageRight")));
			this->SideBarBuyBtn->FocusBackground = System::Drawing::Color::Empty;
			this->SideBarBuyBtn->FocusFontColor = System::Drawing::Color::Empty;
			this->SideBarBuyBtn->ForeColors = System::Drawing::Color::DimGray;
			this->SideBarBuyBtn->HoverBackground = System::Drawing::Color::Empty;
			this->SideBarBuyBtn->HoverFontColor = System::Drawing::Color::Empty;
			this->SideBarBuyBtn->ImageLeft = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"SideBarBuyBtn.ImageLeft")));
			this->SideBarBuyBtn->ImageRight = nullptr;
			this->SideBarBuyBtn->LeftPictureColor = System::Drawing::Color::Transparent;
			this->SideBarBuyBtn->Location = System::Drawing::Point(33, 355);
			this->SideBarBuyBtn->Margin = System::Windows::Forms::Padding(5, 5, 5, 5);
			this->SideBarBuyBtn->Name = L"SideBarBuyBtn";
			this->SideBarBuyBtn->PaddingLeftPicture = System::Windows::Forms::Padding(0);
			this->SideBarBuyBtn->PaddingRightPicture = System::Windows::Forms::Padding(0);
			this->SideBarBuyBtn->RightPictureColor = System::Drawing::Color::Transparent;
			this->SideBarBuyBtn->Size = System::Drawing::Size(342, 59);
			this->SideBarBuyBtn->SizeModeLeft = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
			this->SideBarBuyBtn->SizeModeRight = System::Windows::Forms::PictureBoxSizeMode::Normal;
			this->SideBarBuyBtn->TabIndex = 11;
			this->SideBarBuyBtn->Click += gcnew System::EventHandler(this, &mainForm::SideBarBuyBtn_Click);
			// 
			// panel7
			// 
			this->panel7->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel7->Location = System::Drawing::Point(33, 333);
			this->panel7->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->panel7->Name = L"panel7";
			this->panel7->Size = System::Drawing::Size(342, 22);
			this->panel7->TabIndex = 10;
			// 
			// SideBarSellBtn
			// 
			this->SideBarSellBtn->BackColor = System::Drawing::Color::White;
			this->SideBarSellBtn->BackgroundColor = System::Drawing::Color::White;
			this->SideBarSellBtn->ButtonText = L"Sales";
			this->SideBarSellBtn->CausesValidation = false;
			this->SideBarSellBtn->Cursor = System::Windows::Forms::Cursors::Hand;
			this->SideBarSellBtn->Dock = System::Windows::Forms::DockStyle::Top;
			this->SideBarSellBtn->ErrorImageLeft = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"SideBarSellBtn.ErrorImageLeft")));
			this->SideBarSellBtn->ErrorImageRight = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"SideBarSellBtn.ErrorImageRight")));
			this->SideBarSellBtn->FocusBackground = System::Drawing::Color::Empty;
			this->SideBarSellBtn->FocusFontColor = System::Drawing::Color::Empty;
			this->SideBarSellBtn->ForeColors = System::Drawing::Color::DimGray;
			this->SideBarSellBtn->HoverBackground = System::Drawing::Color::Empty;
			this->SideBarSellBtn->HoverFontColor = System::Drawing::Color::Empty;
			this->SideBarSellBtn->ImageLeft = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"SideBarSellBtn.ImageLeft")));
			this->SideBarSellBtn->ImageRight = nullptr;
			this->SideBarSellBtn->LeftPictureColor = System::Drawing::Color::Transparent;
			this->SideBarSellBtn->Location = System::Drawing::Point(33, 274);
			this->SideBarSellBtn->Margin = System::Windows::Forms::Padding(5, 5, 5, 5);
			this->SideBarSellBtn->Name = L"SideBarSellBtn";
			this->SideBarSellBtn->PaddingLeftPicture = System::Windows::Forms::Padding(0);
			this->SideBarSellBtn->PaddingRightPicture = System::Windows::Forms::Padding(0);
			this->SideBarSellBtn->RightPictureColor = System::Drawing::Color::Transparent;
			this->SideBarSellBtn->Size = System::Drawing::Size(342, 59);
			this->SideBarSellBtn->SizeModeLeft = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
			this->SideBarSellBtn->SizeModeRight = System::Windows::Forms::PictureBoxSizeMode::Normal;
			this->SideBarSellBtn->TabIndex = 9;
			this->SideBarSellBtn->Click += gcnew System::EventHandler(this, &mainForm::SideBarSellBtn_Click);
			// 
			// panel6
			// 
			this->panel6->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel6->Location = System::Drawing::Point(33, 252);
			this->panel6->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->panel6->Name = L"panel6";
			this->panel6->Size = System::Drawing::Size(342, 22);
			this->panel6->TabIndex = 8;
			// 
			// SideBarFournisseurBtn
			// 
			this->SideBarFournisseurBtn->BackColor = System::Drawing::Color::White;
			this->SideBarFournisseurBtn->BackgroundColor = System::Drawing::Color::White;
			this->SideBarFournisseurBtn->ButtonText = L"Supplier";
			this->SideBarFournisseurBtn->CausesValidation = false;
			this->SideBarFournisseurBtn->Cursor = System::Windows::Forms::Cursors::Hand;
			this->SideBarFournisseurBtn->Dock = System::Windows::Forms::DockStyle::Top;
			this->SideBarFournisseurBtn->ErrorImageLeft = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"SideBarFournisseurBtn.ErrorImageLeft")));
			this->SideBarFournisseurBtn->ErrorImageRight = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"SideBarFournisseurBtn.ErrorImageRight")));
			this->SideBarFournisseurBtn->FocusBackground = System::Drawing::Color::Empty;
			this->SideBarFournisseurBtn->FocusFontColor = System::Drawing::Color::Empty;
			this->SideBarFournisseurBtn->ForeColors = System::Drawing::Color::DimGray;
			this->SideBarFournisseurBtn->HoverBackground = System::Drawing::Color::Empty;
			this->SideBarFournisseurBtn->HoverFontColor = System::Drawing::Color::Empty;
			this->SideBarFournisseurBtn->ImageLeft = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"SideBarFournisseurBtn.ImageLeft")));
			this->SideBarFournisseurBtn->ImageRight = nullptr;
			this->SideBarFournisseurBtn->LeftPictureColor = System::Drawing::Color::Transparent;
			this->SideBarFournisseurBtn->Location = System::Drawing::Point(33, 193);
			this->SideBarFournisseurBtn->Margin = System::Windows::Forms::Padding(5, 5, 5, 5);
			this->SideBarFournisseurBtn->Name = L"SideBarFournisseurBtn";
			this->SideBarFournisseurBtn->PaddingLeftPicture = System::Windows::Forms::Padding(0);
			this->SideBarFournisseurBtn->PaddingRightPicture = System::Windows::Forms::Padding(0);
			this->SideBarFournisseurBtn->RightPictureColor = System::Drawing::Color::Transparent;
			this->SideBarFournisseurBtn->Size = System::Drawing::Size(342, 59);
			this->SideBarFournisseurBtn->SizeModeLeft = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
			this->SideBarFournisseurBtn->SizeModeRight = System::Windows::Forms::PictureBoxSizeMode::Normal;
			this->SideBarFournisseurBtn->TabIndex = 7;
			this->SideBarFournisseurBtn->Click += gcnew System::EventHandler(this, &mainForm::SideBarFournisseurBtn_Click);
			// 
			// panel5
			// 
			this->panel5->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel5->Location = System::Drawing::Point(33, 171);
			this->panel5->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(342, 22);
			this->panel5->TabIndex = 6;
			// 
			// SideBarClientBtn
			// 
			this->SideBarClientBtn->BackColor = System::Drawing::Color::White;
			this->SideBarClientBtn->BackgroundColor = System::Drawing::Color::White;
			this->SideBarClientBtn->ButtonText = L"Clients";
			this->SideBarClientBtn->CausesValidation = false;
			this->SideBarClientBtn->Cursor = System::Windows::Forms::Cursors::Hand;
			this->SideBarClientBtn->Dock = System::Windows::Forms::DockStyle::Top;
			this->SideBarClientBtn->ErrorImageLeft = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"SideBarClientBtn.ErrorImageLeft")));
			this->SideBarClientBtn->ErrorImageRight = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"SideBarClientBtn.ErrorImageRight")));
			this->SideBarClientBtn->FocusBackground = System::Drawing::Color::Empty;
			this->SideBarClientBtn->FocusFontColor = System::Drawing::Color::Empty;
			this->SideBarClientBtn->ForeColors = System::Drawing::Color::DimGray;
			this->SideBarClientBtn->HoverBackground = System::Drawing::Color::Empty;
			this->SideBarClientBtn->HoverFontColor = System::Drawing::Color::Empty;
			this->SideBarClientBtn->ImageLeft = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"SideBarClientBtn.ImageLeft")));
			this->SideBarClientBtn->ImageRight = nullptr;
			this->SideBarClientBtn->LeftPictureColor = System::Drawing::Color::Transparent;
			this->SideBarClientBtn->Location = System::Drawing::Point(33, 112);
			this->SideBarClientBtn->Margin = System::Windows::Forms::Padding(5, 5, 5, 5);
			this->SideBarClientBtn->Name = L"SideBarClientBtn";
			this->SideBarClientBtn->PaddingLeftPicture = System::Windows::Forms::Padding(0);
			this->SideBarClientBtn->PaddingRightPicture = System::Windows::Forms::Padding(0);
			this->SideBarClientBtn->RightPictureColor = System::Drawing::Color::Transparent;
			this->SideBarClientBtn->Size = System::Drawing::Size(342, 59);
			this->SideBarClientBtn->SizeModeLeft = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
			this->SideBarClientBtn->SizeModeRight = System::Windows::Forms::PictureBoxSizeMode::Normal;
			this->SideBarClientBtn->TabIndex = 5;
			this->SideBarClientBtn->Click += gcnew System::EventHandler(this, &mainForm::SideBarClientBtn_Click);
			// 
			// panel4
			// 
			this->panel4->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel4->Location = System::Drawing::Point(33, 90);
			this->panel4->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(342, 22);
			this->panel4->TabIndex = 4;
			// 
			// SideBarProductBtn
			// 
			this->SideBarProductBtn->BackColor = System::Drawing::Color::White;
			this->SideBarProductBtn->BackgroundColor = System::Drawing::Color::White;
			this->SideBarProductBtn->ButtonText = L"Products";
			this->SideBarProductBtn->CausesValidation = false;
			this->SideBarProductBtn->Cursor = System::Windows::Forms::Cursors::Hand;
			this->SideBarProductBtn->Dock = System::Windows::Forms::DockStyle::Top;
			this->SideBarProductBtn->ErrorImageLeft = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"SideBarProductBtn.ErrorImageLeft")));
			this->SideBarProductBtn->ErrorImageRight = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"SideBarProductBtn.ErrorImageRight")));
			this->SideBarProductBtn->FocusBackground = System::Drawing::Color::Empty;
			this->SideBarProductBtn->FocusFontColor = System::Drawing::Color::Empty;
			this->SideBarProductBtn->ForeColors = System::Drawing::Color::DimGray;
			this->SideBarProductBtn->HoverBackground = System::Drawing::Color::Empty;
			this->SideBarProductBtn->HoverFontColor = System::Drawing::Color::Empty;
			this->SideBarProductBtn->ImageLeft = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"SideBarProductBtn.ImageLeft")));
			this->SideBarProductBtn->ImageRight = nullptr;
			this->SideBarProductBtn->LeftPictureColor = System::Drawing::Color::Transparent;
			this->SideBarProductBtn->Location = System::Drawing::Point(33, 31);
			this->SideBarProductBtn->Margin = System::Windows::Forms::Padding(5, 5, 5, 5);
			this->SideBarProductBtn->Name = L"SideBarProductBtn";
			this->SideBarProductBtn->PaddingLeftPicture = System::Windows::Forms::Padding(0);
			this->SideBarProductBtn->PaddingRightPicture = System::Windows::Forms::Padding(0);
			this->SideBarProductBtn->RightPictureColor = System::Drawing::Color::Transparent;
			this->SideBarProductBtn->Size = System::Drawing::Size(342, 59);
			this->SideBarProductBtn->SizeModeLeft = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
			this->SideBarProductBtn->SizeModeRight = System::Windows::Forms::PictureBoxSizeMode::Normal;
			this->SideBarProductBtn->TabIndex = 3;
			this->SideBarProductBtn->Click += gcnew System::EventHandler(this, &mainForm::SideBarProductBtn_Click);
			// 
			// panel3
			// 
			this->panel3->Dock = System::Windows::Forms::DockStyle::Right;
			this->panel3->Location = System::Drawing::Point(375, 31);
			this->panel3->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(33, 704);
			this->panel3->TabIndex = 2;
			// 
			// panel2
			// 
			this->panel2->Dock = System::Windows::Forms::DockStyle::Left;
			this->panel2->Location = System::Drawing::Point(0, 31);
			this->panel2->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(33, 704);
			this->panel2->TabIndex = 1;
			// 
			// panel1
			// 
			this->panel1->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(408, 31);
			this->panel1->TabIndex = 0;
			// 
			// sideBarMarg
			// 
			this->sideBarMarg->Dock = System::Windows::Forms::DockStyle::Left;
			this->sideBarMarg->Location = System::Drawing::Point(441, 131);
			this->sideBarMarg->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->sideBarMarg->Name = L"sideBarMarg";
			this->sideBarMarg->Size = System::Drawing::Size(27, 735);
			this->sideBarMarg->TabIndex = 6;
			// 
			// mainContainer
			// 
			this->mainContainer->BackColor = System::Drawing::Color::White;
			this->mainContainer->Dock = System::Windows::Forms::DockStyle::Fill;
			this->mainContainer->Location = System::Drawing::Point(468, 131);
			this->mainContainer->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->mainContainer->Name = L"mainContainer";
			this->mainContainer->Size = System::Drawing::Size(1299, 735);
			this->mainContainer->TabIndex = 7;
			this->mainContainer->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &mainForm::mainContainer_Paint);
			// 
			// mainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::WhiteSmoke;
			this->ClientSize = System::Drawing::Size(1800, 897);
			this->Controls->Add(this->mainContainer);
			this->Controls->Add(this->sideBarMarg);
			this->Controls->Add(this->sidebar);
			this->Controls->Add(this->leftMainMarg);
			this->Controls->Add(this->rightMainMarg);
			this->Controls->Add(this->topMainMarg);
			this->Controls->Add(this->botMainMarg);
			this->Controls->Add(this->navBar);
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Name = L"mainForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"mainForm";
			this->Load += gcnew System::EventHandler(this, &mainForm::mainForm_Load);
			this->sidebar->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
		//functions
		void ShowUserControl(Control^ C) {
			for each (Control ^ var in mainContainer->Controls)
			{
				mainContainer->Controls->Remove(var);
			}
			C->Dock = DockStyle::Fill;
			mainContainer->Controls->Add(C);
			C->Show();
		}
		//end
	private: System::Void mainForm_Load(System::Object^ sender, System::EventArgs^ e) {
				
	}

		


private: System::Void SideBarProductBtn_Click(System::Object^ sender, System::EventArgs^ e) {
	
	ProductUserControl^ product = gcnew ProductUserControl();
	ShowUserControl(product);
	
}
private: System::Void mainContainer_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void SideBarClientBtn_Click(System::Object^ sender, System::EventArgs^ e) {
	
	ClientUserControl^ Client = gcnew ClientUserControl();
	ShowUserControl(Client);

}
private: System::Void SideBarFournisseurBtn_Click(System::Object^ sender, System::EventArgs^ e) {
	SupplierUserControlcpp^ supplier = gcnew SupplierUserControlcpp();
	ShowUserControl(supplier);

}
private: System::Void SideBarBuyBtn_Click(System::Object^ sender, System::EventArgs^ e) {
	purchaseUserControl^ purchase = gcnew purchaseUserControl();
	ShowUserControl(purchase);


}
private: System::Void SideBarSellBtn_Click(System::Object^ sender, System::EventArgs^ e) {
	SalesUserControl^ sales = gcnew SalesUserControl();
	ShowUserControl(sales);

}
};
}
