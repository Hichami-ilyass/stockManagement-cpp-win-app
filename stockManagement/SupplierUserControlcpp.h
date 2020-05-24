#pragma once
#include "SupplierAdd.h"
#include "SupplierModify.h"

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;


namespace stockManagement {

	/// <summary>
	/// Summary for SupplierUserControlcpp
	/// </summary>
	public ref class SupplierUserControlcpp : public System::Windows::Forms::UserControl
	{
	public:
		SupplierUserControlcpp(void)
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
		~SupplierUserControlcpp()
		{
			if (components)
			{
				delete components;
			}
		}
	private: Bunifu::Framework::UI::BunifuCustomDataGrid^ ProductGridView;
	protected:
	private: System::Windows::Forms::Panel^ panel3;
	private: Bunifu::Framework::UI::BunifuImageButton^ bunifuImageButton2;
	private: System::Windows::Forms::Panel^ panel11;
	private: Bunifu::Framework::UI::BunifuImageButton^ bunifuImageButton1;
	private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel1;
	private: Bunifu::Framework::UI::BunifuImageButton^ Add;
	private: System::Windows::Forms::Panel^ panel7;
	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::Panel^ panel12;
	private: System::Windows::Forms::Panel^ panel8;
	private: Bunifu::Framework::UI::BunifuImageButton^ bunifuImageButton3;
	private: Bunifu::Framework::UI::BunifuMetroTextbox^ bunifuMetroTextbox1;
	private: System::Windows::Forms::Panel^ panel6;
	private: System::Windows::Forms::Panel^ panel5;
	private: Bunifu::Framework::UI::BunifuSeparator^ bunifuSeparator1;
	private: System::Windows::Forms::Panel^ productNav;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Panel^ panel10;
	private: System::Windows::Forms::Panel^ panel9;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Panel^ panel1;

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
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle2 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle3 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle4 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(SupplierUserControlcpp::typeid));
			this->ProductGridView = (gcnew Bunifu::Framework::UI::BunifuCustomDataGrid());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->bunifuImageButton2 = (gcnew Bunifu::Framework::UI::BunifuImageButton());
			this->panel11 = (gcnew System::Windows::Forms::Panel());
			this->bunifuImageButton1 = (gcnew Bunifu::Framework::UI::BunifuImageButton());
			this->flowLayoutPanel1 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->Add = (gcnew Bunifu::Framework::UI::BunifuImageButton());
			this->panel7 = (gcnew System::Windows::Forms::Panel());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->panel12 = (gcnew System::Windows::Forms::Panel());
			this->panel8 = (gcnew System::Windows::Forms::Panel());
			this->bunifuImageButton3 = (gcnew Bunifu::Framework::UI::BunifuImageButton());
			this->bunifuMetroTextbox1 = (gcnew Bunifu::Framework::UI::BunifuMetroTextbox());
			this->panel6 = (gcnew System::Windows::Forms::Panel());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->bunifuSeparator1 = (gcnew Bunifu::Framework::UI::BunifuSeparator());
			this->productNav = (gcnew System::Windows::Forms::Panel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->panel10 = (gcnew System::Windows::Forms::Panel());
			this->panel9 = (gcnew System::Windows::Forms::Panel());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ProductGridView))->BeginInit();
			this->panel3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bunifuImageButton2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bunifuImageButton1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Add))->BeginInit();
			this->panel8->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bunifuImageButton3))->BeginInit();
			this->productNav->SuspendLayout();
			this->SuspendLayout();
			// 
			// ProductGridView
			// 
			this->ProductGridView->AllowUserToAddRows = false;
			this->ProductGridView->AllowUserToDeleteRows = false;
			this->ProductGridView->AllowUserToResizeRows = false;
			dataGridViewCellStyle1->BackColor = System::Drawing::Color::White;
			this->ProductGridView->AlternatingRowsDefaultCellStyle = dataGridViewCellStyle1;
			this->ProductGridView->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->ProductGridView->BackgroundColor = System::Drawing::Color::White;
			this->ProductGridView->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->ProductGridView->CellBorderStyle = System::Windows::Forms::DataGridViewCellBorderStyle::None;
			this->ProductGridView->ColumnHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::None;
			dataGridViewCellStyle2->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(20)), static_cast<System::Int32>(static_cast<System::Byte>(119)),
				static_cast<System::Int32>(static_cast<System::Byte>(198)));
			dataGridViewCellStyle2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11));
			dataGridViewCellStyle2->ForeColor = System::Drawing::Color::White;
			dataGridViewCellStyle2->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle2->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle2->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->ProductGridView->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle2;
			this->ProductGridView->ColumnHeadersHeight = 50;
			dataGridViewCellStyle3->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle3->BackColor = System::Drawing::Color::White;
			dataGridViewCellStyle3->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(41)), static_cast<System::Int32>(static_cast<System::Byte>(45)),
				static_cast<System::Int32>(static_cast<System::Byte>(62)));
			dataGridViewCellStyle3->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(223)),
				static_cast<System::Int32>(static_cast<System::Byte>(230)), static_cast<System::Int32>(static_cast<System::Byte>(253)));
			dataGridViewCellStyle3->SelectionForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(41)),
				static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(62)));
			dataGridViewCellStyle3->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->ProductGridView->DefaultCellStyle = dataGridViewCellStyle3;
			this->ProductGridView->Dock = System::Windows::Forms::DockStyle::Fill;
			this->ProductGridView->DoubleBuffered = true;
			this->ProductGridView->EnableHeadersVisualStyles = false;
			this->ProductGridView->GridColor = System::Drawing::Color::White;
			this->ProductGridView->HeaderBgColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(119)), static_cast<System::Int32>(static_cast<System::Byte>(198)));
			this->ProductGridView->HeaderForeColor = System::Drawing::Color::White;
			this->ProductGridView->Location = System::Drawing::Point(20, 148);
			this->ProductGridView->Name = L"ProductGridView";
			this->ProductGridView->RowHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::None;
			this->ProductGridView->RowHeadersVisible = false;
			this->ProductGridView->RowHeadersWidthSizeMode = System::Windows::Forms::DataGridViewRowHeadersWidthSizeMode::AutoSizeToFirstHeader;
			dataGridViewCellStyle4->BackColor = System::Drawing::Color::White;
			this->ProductGridView->RowsDefaultCellStyle = dataGridViewCellStyle4;
			this->ProductGridView->RowTemplate->DividerHeight = 1;
			this->ProductGridView->RowTemplate->Height = 40;
			this->ProductGridView->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->ProductGridView->Size = System::Drawing::Size(934, 450);
			this->ProductGridView->TabIndex = 12;
			// 
			// panel3
			// 
			this->panel3->Controls->Add(this->bunifuImageButton2);
			this->panel3->Controls->Add(this->panel11);
			this->panel3->Controls->Add(this->bunifuImageButton1);
			this->panel3->Controls->Add(this->flowLayoutPanel1);
			this->panel3->Controls->Add(this->Add);
			this->panel3->Controls->Add(this->panel7);
			this->panel3->Controls->Add(this->panel4);
			this->panel3->Controls->Add(this->panel12);
			this->panel3->Controls->Add(this->panel8);
			this->panel3->Controls->Add(this->bunifuMetroTextbox1);
			this->panel3->Controls->Add(this->panel6);
			this->panel3->Controls->Add(this->panel5);
			this->panel3->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel3->Location = System::Drawing::Point(20, 78);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(934, 70);
			this->panel3->TabIndex = 11;
			// 
			// bunifuImageButton2
			// 
			this->bunifuImageButton2->BackColor = System::Drawing::Color::Transparent;
			this->bunifuImageButton2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->bunifuImageButton2->Dock = System::Windows::Forms::DockStyle::Left;
			this->bunifuImageButton2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuImageButton2.Image")));
			this->bunifuImageButton2->ImageActive = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuImageButton2.ImageActive")));
			this->bunifuImageButton2->Location = System::Drawing::Point(448, 26);
			this->bunifuImageButton2->Name = L"bunifuImageButton2";
			this->bunifuImageButton2->Size = System::Drawing::Size(20, 20);
			this->bunifuImageButton2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->bunifuImageButton2->TabIndex = 18;
			this->bunifuImageButton2->TabStop = false;
			this->bunifuImageButton2->Zoom = 0;
			// 
			// panel11
			// 
			this->panel11->Dock = System::Windows::Forms::DockStyle::Left;
			this->panel11->Location = System::Drawing::Point(438, 26);
			this->panel11->Name = L"panel11";
			this->panel11->Size = System::Drawing::Size(10, 20);
			this->panel11->TabIndex = 17;
			// 
			// bunifuImageButton1
			// 
			this->bunifuImageButton1->BackColor = System::Drawing::Color::Transparent;
			this->bunifuImageButton1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->bunifuImageButton1->Dock = System::Windows::Forms::DockStyle::Left;
			this->bunifuImageButton1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuImageButton1.Image")));
			this->bunifuImageButton1->ImageActive = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuImageButton1.ImageActive")));
			this->bunifuImageButton1->Location = System::Drawing::Point(418, 26);
			this->bunifuImageButton1->Name = L"bunifuImageButton1";
			this->bunifuImageButton1->Size = System::Drawing::Size(20, 20);
			this->bunifuImageButton1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->bunifuImageButton1->TabIndex = 16;
			this->bunifuImageButton1->TabStop = false;
			this->bunifuImageButton1->Zoom = 0;
			this->bunifuImageButton1->Click += gcnew System::EventHandler(this, &SupplierUserControlcpp::bunifuImageButton1_Click);
			// 
			// flowLayoutPanel1
			// 
			this->flowLayoutPanel1->Dock = System::Windows::Forms::DockStyle::Left;
			this->flowLayoutPanel1->Location = System::Drawing::Point(408, 26);
			this->flowLayoutPanel1->Name = L"flowLayoutPanel1";
			this->flowLayoutPanel1->Size = System::Drawing::Size(10, 20);
			this->flowLayoutPanel1->TabIndex = 15;
			// 
			// Add
			// 
			this->Add->BackColor = System::Drawing::Color::Transparent;
			this->Add->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Add->Dock = System::Windows::Forms::DockStyle::Left;
			this->Add->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Add.Image")));
			this->Add->ImageActive = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Add.ImageActive")));
			this->Add->Location = System::Drawing::Point(388, 26);
			this->Add->Name = L"Add";
			this->Add->Size = System::Drawing::Size(20, 20);
			this->Add->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->Add->TabIndex = 14;
			this->Add->TabStop = false;
			this->Add->Zoom = 0;
			this->Add->Click += gcnew System::EventHandler(this, &SupplierUserControlcpp::Add_Click);
			// 
			// panel7
			// 
			this->panel7->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->panel7->Location = System::Drawing::Point(388, 46);
			this->panel7->Name = L"panel7";
			this->panel7->Size = System::Drawing::Size(546, 10);
			this->panel7->TabIndex = 7;
			// 
			// panel4
			// 
			this->panel4->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel4->Location = System::Drawing::Point(388, 16);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(546, 10);
			this->panel4->TabIndex = 13;
			// 
			// panel12
			// 
			this->panel12->Dock = System::Windows::Forms::DockStyle::Left;
			this->panel12->Location = System::Drawing::Point(380, 16);
			this->panel12->Name = L"panel12";
			this->panel12->Size = System::Drawing::Size(8, 40);
			this->panel12->TabIndex = 12;
			// 
			// panel8
			// 
			this->panel8->Controls->Add(this->bunifuImageButton3);
			this->panel8->Location = System::Drawing::Point(351, 26);
			this->panel8->Name = L"panel8";
			this->panel8->Size = System::Drawing::Size(20, 20);
			this->panel8->TabIndex = 11;
			// 
			// bunifuImageButton3
			// 
			this->bunifuImageButton3->BackColor = System::Drawing::Color::Transparent;
			this->bunifuImageButton3->Dock = System::Windows::Forms::DockStyle::Fill;
			this->bunifuImageButton3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuImageButton3.Image")));
			this->bunifuImageButton3->ImageActive = nullptr;
			this->bunifuImageButton3->Location = System::Drawing::Point(0, 0);
			this->bunifuImageButton3->Name = L"bunifuImageButton3";
			this->bunifuImageButton3->Size = System::Drawing::Size(20, 20);
			this->bunifuImageButton3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->bunifuImageButton3->TabIndex = 0;
			this->bunifuImageButton3->TabStop = false;
			this->bunifuImageButton3->Zoom = 10;
			// 
			// bunifuMetroTextbox1
			// 
			this->bunifuMetroTextbox1->BorderColorFocused = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(119)), static_cast<System::Int32>(static_cast<System::Byte>(198)));
			this->bunifuMetroTextbox1->BorderColorIdle = System::Drawing::Color::Silver;
			this->bunifuMetroTextbox1->BorderColorMouseHover = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(119)), static_cast<System::Int32>(static_cast<System::Byte>(198)));
			this->bunifuMetroTextbox1->BorderThickness = 1;
			this->bunifuMetroTextbox1->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->bunifuMetroTextbox1->Dock = System::Windows::Forms::DockStyle::Left;
			this->bunifuMetroTextbox1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14.25F));
			this->bunifuMetroTextbox1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->bunifuMetroTextbox1->isPassword = false;
			this->bunifuMetroTextbox1->Location = System::Drawing::Point(0, 16);
			this->bunifuMetroTextbox1->Margin = System::Windows::Forms::Padding(0);
			this->bunifuMetroTextbox1->Name = L"bunifuMetroTextbox1";
			this->bunifuMetroTextbox1->Size = System::Drawing::Size(380, 40);
			this->bunifuMetroTextbox1->TabIndex = 10;
			this->bunifuMetroTextbox1->Text = L"Search";
			this->bunifuMetroTextbox1->TextAlign = System::Windows::Forms::HorizontalAlignment::Left;
			this->bunifuMetroTextbox1->Enter += gcnew System::EventHandler(this, &SupplierUserControlcpp::bunifuMetroTextbox1_Enter);
			// 
			// panel6
			// 
			this->panel6->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->panel6->Location = System::Drawing::Point(0, 56);
			this->panel6->Name = L"panel6";
			this->panel6->Size = System::Drawing::Size(934, 14);
			this->panel6->TabIndex = 7;
			// 
			// panel5
			// 
			this->panel5->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel5->Location = System::Drawing::Point(0, 0);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(934, 16);
			this->panel5->TabIndex = 6;
			// 
			// bunifuSeparator1
			// 
			this->bunifuSeparator1->BackColor = System::Drawing::Color::Transparent;
			this->bunifuSeparator1->Dock = System::Windows::Forms::DockStyle::Top;
			this->bunifuSeparator1->LineColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(218)),
				static_cast<System::Int32>(static_cast<System::Byte>(215)), static_cast<System::Int32>(static_cast<System::Byte>(218)));
			this->bunifuSeparator1->LineThickness = 1;
			this->bunifuSeparator1->Location = System::Drawing::Point(20, 61);
			this->bunifuSeparator1->Margin = System::Windows::Forms::Padding(4);
			this->bunifuSeparator1->Name = L"bunifuSeparator1";
			this->bunifuSeparator1->Size = System::Drawing::Size(934, 17);
			this->bunifuSeparator1->TabIndex = 10;
			this->bunifuSeparator1->Transparency = 255;
			this->bunifuSeparator1->Vertical = false;
			// 
			// productNav
			// 
			this->productNav->Controls->Add(this->label1);
			this->productNav->Controls->Add(this->panel10);
			this->productNav->Controls->Add(this->panel9);
			this->productNav->Dock = System::Windows::Forms::DockStyle::Top;
			this->productNav->Location = System::Drawing::Point(20, 0);
			this->productNav->Name = L"productNav";
			this->productNav->Size = System::Drawing::Size(934, 61);
			this->productNav->TabIndex = 9;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Dock = System::Windows::Forms::DockStyle::Left;
			this->label1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 18.25F));
			this->label1->ForeColor = System::Drawing::Color::Gray;
			this->label1->Location = System::Drawing::Point(0, 16);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(111, 31);
			this->label1->TabIndex = 9;
			this->label1->Text = L"Supplier";
			// 
			// panel10
			// 
			this->panel10->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->panel10->Location = System::Drawing::Point(0, 51);
			this->panel10->Name = L"panel10";
			this->panel10->Size = System::Drawing::Size(934, 10);
			this->panel10->TabIndex = 0;
			// 
			// panel9
			// 
			this->panel9->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel9->Location = System::Drawing::Point(0, 0);
			this->panel9->Name = L"panel9";
			this->panel9->Size = System::Drawing::Size(934, 16);
			this->panel9->TabIndex = 7;
			// 
			// panel2
			// 
			this->panel2->Dock = System::Windows::Forms::DockStyle::Right;
			this->panel2->Location = System::Drawing::Point(954, 0);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(20, 598);
			this->panel2->TabIndex = 8;
			// 
			// panel1
			// 
			this->panel1->Dock = System::Windows::Forms::DockStyle::Left;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(20, 598);
			this->panel1->TabIndex = 7;
			// 
			// SupplierUserControlcpp
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->Controls->Add(this->ProductGridView);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->bunifuSeparator1);
			this->Controls->Add(this->productNav);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->Name = L"SupplierUserControlcpp";
			this->Size = System::Drawing::Size(974, 598);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ProductGridView))->EndInit();
			this->panel3->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bunifuImageButton2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bunifuImageButton1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Add))->EndInit();
			this->panel8->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bunifuImageButton3))->EndInit();
			this->productNav->ResumeLayout(false);
			this->productNav->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void Add_Click(System::Object^ sender, System::EventArgs^ e) {
		SupplierAdd^ add = gcnew SupplierAdd();
		add->Show();
 	}
private: System::Void bunifuImageButton1_Click(System::Object^ sender, System::EventArgs^ e) {
		SupplierModify^ modify = gcnew SupplierModify();
		modify->Show();
}
private: System::Void bunifuMetroTextbox1_Enter(System::Object^ sender, System::EventArgs^ e) {
	bunifuMetroTextbox1->Text = "";
}
};
}
