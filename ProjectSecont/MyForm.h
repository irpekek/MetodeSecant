#pragma once
#include <cmath>
#include <stdlib.h>

namespace ProjectSecont {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ calculate;
	protected:

	private: System::Windows::Forms::TextBox^ nilai1_in;
	private: System::Windows::Forms::TextBox^ nilai2_in;
	private: System::Windows::Forms::TextBox^ galat_in;

	private: System::Windows::Forms::Label^ nilai1_text;
	private: System::Windows::Forms::Label^ nilai2_text;
	private: System::Windows::Forms::Label^ galat_text;

	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::Label^ arrow_btn;

	private: System::Windows::Forms::DataGridViewTextBoxColumn^ No;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ X1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ X2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ X3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ FX1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ FX2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ FX3;
	private: System::Windows::Forms::Label^ akarPers_text;
	private: System::Windows::Forms::Label^ akarPers_in;


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
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle2 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle4 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle5 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle6 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle3 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->calculate = (gcnew System::Windows::Forms::Button());
			this->nilai1_in = (gcnew System::Windows::Forms::TextBox());
			this->nilai2_in = (gcnew System::Windows::Forms::TextBox());
			this->galat_in = (gcnew System::Windows::Forms::TextBox());
			this->nilai1_text = (gcnew System::Windows::Forms::Label());
			this->nilai2_text = (gcnew System::Windows::Forms::Label());
			this->galat_text = (gcnew System::Windows::Forms::Label());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->No = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->X1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->X2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->X3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->FX1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->FX2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->FX3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->arrow_btn = (gcnew System::Windows::Forms::Label());
			this->akarPers_text = (gcnew System::Windows::Forms::Label());
			this->akarPers_in = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// calculate
			// 
			this->calculate->BackColor = System::Drawing::Color::Transparent;
			this->calculate->FlatAppearance->BorderSize = 0;
			this->calculate->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->calculate->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->calculate->Location = System::Drawing::Point(53, 176);
			this->calculate->Name = L"calculate";
			this->calculate->Size = System::Drawing::Size(76, 24);
			this->calculate->TabIndex = 0;
			this->calculate->Text = L"Calculate";
			this->calculate->UseVisualStyleBackColor = false;
			this->calculate->Click += gcnew System::EventHandler(this, &MyForm::Button1_Click);
			// 
			// nilai1_in
			// 
			this->nilai1_in->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->nilai1_in->Location = System::Drawing::Point(37, 65);
			this->nilai1_in->Name = L"nilai1_in";
			this->nilai1_in->Size = System::Drawing::Size(112, 22);
			this->nilai1_in->TabIndex = 1;
			this->nilai1_in->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::TextBox1_KeyPress);
			// 
			// nilai2_in
			// 
			this->nilai2_in->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->nilai2_in->Location = System::Drawing::Point(37, 104);
			this->nilai2_in->Name = L"nilai2_in";
			this->nilai2_in->Size = System::Drawing::Size(112, 22);
			this->nilai2_in->TabIndex = 3;
			this->nilai2_in->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::TextBox2_KeyPress);
			// 
			// galat_in
			// 
			this->galat_in->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->galat_in->Location = System::Drawing::Point(37, 143);
			this->galat_in->Name = L"galat_in";
			this->galat_in->Size = System::Drawing::Size(112, 22);
			this->galat_in->TabIndex = 4;
			this->galat_in->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::TextBox3_KeyPress);
			// 
			// nilai1_text
			// 
			this->nilai1_text->AutoSize = true;
			this->nilai1_text->BackColor = System::Drawing::Color::Transparent;
			this->nilai1_text->Font = (gcnew System::Drawing::Font(L"Open Sans", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->nilai1_text->Location = System::Drawing::Point(34, 49);
			this->nilai1_text->Name = L"nilai1_text";
			this->nilai1_text->Size = System::Drawing::Size(44, 15);
			this->nilai1_text->TabIndex = 5;
			this->nilai1_text->Text = L"Nilai 1:";
			// 
			// nilai2_text
			// 
			this->nilai2_text->AutoSize = true;
			this->nilai2_text->BackColor = System::Drawing::Color::Transparent;
			this->nilai2_text->Font = (gcnew System::Drawing::Font(L"Open Sans", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->nilai2_text->Location = System::Drawing::Point(34, 88);
			this->nilai2_text->Name = L"nilai2_text";
			this->nilai2_text->Size = System::Drawing::Size(44, 15);
			this->nilai2_text->TabIndex = 6;
			this->nilai2_text->Text = L"Nilai 2:";
			// 
			// galat_text
			// 
			this->galat_text->AutoSize = true;
			this->galat_text->BackColor = System::Drawing::Color::Transparent;
			this->galat_text->Font = (gcnew System::Drawing::Font(L"Open Sans", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->galat_text->Location = System::Drawing::Point(34, 127);
			this->galat_text->Name = L"galat_text";
			this->galat_text->Size = System::Drawing::Size(71, 15);
			this->galat_text->TabIndex = 7;
			this->galat_text->Text = L"Galat Error:";
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToAddRows = false;
			this->dataGridView1->AllowUserToDeleteRows = false;
			this->dataGridView1->AllowUserToResizeColumns = false;
			this->dataGridView1->AllowUserToResizeRows = false;
			dataGridViewCellStyle1->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle1->BackColor = System::Drawing::Color::Lime;
			this->dataGridView1->AlternatingRowsDefaultCellStyle = dataGridViewCellStyle1;
			this->dataGridView1->BackgroundColor = System::Drawing::Color::White;
			this->dataGridView1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->dataGridView1->CellBorderStyle = System::Windows::Forms::DataGridViewCellBorderStyle::None;
			this->dataGridView1->ColumnHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::None;
			dataGridViewCellStyle2->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			dataGridViewCellStyle2->ForeColor = System::Drawing::Color::MediumSlateBlue;
			dataGridViewCellStyle2->SelectionBackColor = System::Drawing::Color::White;
			dataGridViewCellStyle2->SelectionForeColor = System::Drawing::Color::MediumSlateBlue;
			dataGridViewCellStyle2->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->dataGridView1->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle2;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(7) {
				this->No, this->X1,
					this->X2, this->X3, this->FX1, this->FX2, this->FX3
			});
			dataGridViewCellStyle4->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle4->BackColor = System::Drawing::SystemColors::Window;
			dataGridViewCellStyle4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			dataGridViewCellStyle4->ForeColor = System::Drawing::SystemColors::ControlText;
			dataGridViewCellStyle4->SelectionBackColor = System::Drawing::Color::WhiteSmoke;
			dataGridViewCellStyle4->SelectionForeColor = System::Drawing::SystemColors::ControlText;
			dataGridViewCellStyle4->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->dataGridView1->DefaultCellStyle = dataGridViewCellStyle4;
			this->dataGridView1->EnableHeadersVisualStyles = false;
			this->dataGridView1->GridColor = System::Drawing::Color::SkyBlue;
			this->dataGridView1->Location = System::Drawing::Point(220, 30);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::Single;
			dataGridViewCellStyle5->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle5->BackColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			dataGridViewCellStyle5->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle5->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle5->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle5->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGridView1->RowHeadersDefaultCellStyle = dataGridViewCellStyle5;
			this->dataGridView1->RowHeadersVisible = false;
			dataGridViewCellStyle6->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			this->dataGridView1->RowsDefaultCellStyle = dataGridViewCellStyle6;
			this->dataGridView1->RowTemplate->DefaultCellStyle->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			this->dataGridView1->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->dataGridView1->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->dataGridView1->Size = System::Drawing::Size(339, 170);
			this->dataGridView1->TabIndex = 8;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm::DataGridView1_CellContentClick);
			// 
			// No
			// 
			this->No->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::ColumnHeader;
			dataGridViewCellStyle3->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			this->No->DefaultCellStyle = dataGridViewCellStyle3;
			this->No->HeaderText = L"No";
			this->No->Name = L"No";
			this->No->ReadOnly = true;
			this->No->Resizable = System::Windows::Forms::DataGridViewTriState::False;
			this->No->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::NotSortable;
			this->No->Width = 25;
			// 
			// X1
			// 
			this->X1->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::ColumnHeader;
			this->X1->HeaderText = L"X1";
			this->X1->MinimumWidth = 50;
			this->X1->Name = L"X1";
			this->X1->ReadOnly = true;
			this->X1->Resizable = System::Windows::Forms::DataGridViewTriState::False;
			this->X1->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::NotSortable;
			this->X1->Width = 50;
			// 
			// X2
			// 
			this->X2->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::ColumnHeader;
			this->X2->HeaderText = L"X2";
			this->X2->MinimumWidth = 50;
			this->X2->Name = L"X2";
			this->X2->ReadOnly = true;
			this->X2->Resizable = System::Windows::Forms::DataGridViewTriState::False;
			this->X2->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::NotSortable;
			this->X2->Width = 50;
			// 
			// X3
			// 
			this->X3->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::ColumnHeader;
			this->X3->HeaderText = L"X3";
			this->X3->MinimumWidth = 50;
			this->X3->Name = L"X3";
			this->X3->ReadOnly = true;
			this->X3->Resizable = System::Windows::Forms::DataGridViewTriState::False;
			this->X3->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::NotSortable;
			this->X3->Width = 50;
			// 
			// FX1
			// 
			this->FX1->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::ColumnHeader;
			this->FX1->HeaderText = L"ƒ(X1)";
			this->FX1->MinimumWidth = 50;
			this->FX1->Name = L"FX1";
			this->FX1->ReadOnly = true;
			this->FX1->Resizable = System::Windows::Forms::DataGridViewTriState::False;
			this->FX1->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::NotSortable;
			this->FX1->Width = 50;
			// 
			// FX2
			// 
			this->FX2->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::ColumnHeader;
			this->FX2->HeaderText = L"ƒ(X2)";
			this->FX2->MinimumWidth = 50;
			this->FX2->Name = L"FX2";
			this->FX2->ReadOnly = true;
			this->FX2->Resizable = System::Windows::Forms::DataGridViewTriState::False;
			this->FX2->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::NotSortable;
			this->FX2->Width = 50;
			// 
			// FX3
			// 
			this->FX3->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::ColumnHeader;
			this->FX3->HeaderText = L"ƒ(X3)";
			this->FX3->MinimumWidth = 50;
			this->FX3->Name = L"FX3";
			this->FX3->ReadOnly = true;
			this->FX3->Resizable = System::Windows::Forms::DataGridViewTriState::False;
			this->FX3->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::NotSortable;
			this->FX3->Width = 50;
			// 
			// arrow_btn
			// 
			this->arrow_btn->AutoSize = true;
			this->arrow_btn->BackColor = System::Drawing::Color::Transparent;
			this->arrow_btn->Font = (gcnew System::Drawing::Font(L"Fira Code", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->arrow_btn->ForeColor = System::Drawing::Color::Black;
			this->arrow_btn->Location = System::Drawing::Point(576, 201);
			this->arrow_btn->Name = L"arrow_btn";
			this->arrow_btn->Size = System::Drawing::Size(21, 13);
			this->arrow_btn->TabIndex = 9;
			this->arrow_btn->Text = L"<-";
			this->arrow_btn->Click += gcnew System::EventHandler(this, &MyForm::Label1_Click);
			// 
			// akarPers_text
			// 
			this->akarPers_text->AutoSize = true;
			this->akarPers_text->Font = (gcnew System::Drawing::Font(L"Open Sans", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->akarPers_text->ForeColor = System::Drawing::Color::Black;
			this->akarPers_text->Location = System::Drawing::Point(34, 9);
			this->akarPers_text->Name = L"akarPers_text";
			this->akarPers_text->Size = System::Drawing::Size(37, 15);
			this->akarPers_text->TabIndex = 10;
			this->akarPers_text->Text = L"ƒ( X ):";
			// 
			// akarPers_in
			// 
			this->akarPers_in->AutoSize = true;
			this->akarPers_in->Font = (gcnew System::Drawing::Font(L"Open Sans", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->akarPers_in->ForeColor = System::Drawing::Color::DimGray;
			this->akarPers_in->Location = System::Drawing::Point(34, 30);
			this->akarPers_in->Name = L"akarPers_in";
			this->akarPers_in->Size = System::Drawing::Size(100, 15);
			this->akarPers_in->TabIndex = 11;
			this->akarPers_in->Text = L"-1/3 * X ^ 3 + X - 9";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->ClientSize = System::Drawing::Size(599, 220);
			this->Controls->Add(this->akarPers_in);
			this->Controls->Add(this->akarPers_text);
			this->Controls->Add(this->arrow_btn);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->galat_text);
			this->Controls->Add(this->nilai2_text);
			this->Controls->Add(this->nilai1_text);
			this->Controls->Add(this->galat_in);
			this->Controls->Add(this->nilai2_in);
			this->Controls->Add(this->nilai1_in);
			this->Controls->Add(this->calculate);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MaximizeBox = false;
			this->Name = L"MyForm";
			this->Opacity = 0.95;
			this->ShowIcon = false;
			this->Text = L"S.M.";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

// ** Main Code start from here **

	public: double fungsiFX(double X)
	{
		double hasil = (-0.333333 * pow(X, 3)) + X - 9;
		return round(hasil * 1000) / 1000;
	}

	private: System::Void Button1_Click(System::Object^ sender, System::EventArgs^ e) {

		double X0[100];
		double X1[100];
		double X2[100];
		double hasilFX0[100];
		double hasilFX1[100];
		double hasilFX2[100];
		double t_error;
		int z;

		dataGridView1->Rows->Clear();
		dataGridView1->Refresh();

		if (nilai1_in->Text->Length != 0 || nilai2_in->Text->Length != 0 || galat_in->Text->Length != 0) {
			String^ inA = nilai1_in->Text;
			String^ inB = nilai2_in->Text;
			String^ inC = galat_in->Text;

			X0[0] = System::Convert::ToDouble(inA);
			X1[0] = System::Convert::ToDouble(inB);
			t_error = System::Convert::ToDouble(inC);

			z = 0;

			while (true)
			{
				hasilFX0[z] = fungsiFX(X0[z]);
				hasilFX1[z] = fungsiFX(X1[z]);
				X2[z] = round((X1[z] - ((hasilFX1[z] * (X0[z] - X1[z])) / (hasilFX0[z] - hasilFX1[z]))) * 1000) / 1000;
				hasilFX2[z] = fungsiFX(X2[z]);
				dataGridView1->Rows->Add(z + 1, X0[z], X1[z], X2[z], hasilFX0[z], hasilFX1[z], hasilFX2[z]);
				if (abs(hasilFX2[z]) <= t_error)
					break;
				X0[z + 1] = X1[z];
				X1[z + 1] = X2[z];
				z++;
			}

			Width = 615;
			Height = 256;
		}

	}

private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	Width = 200;
	Height = 256;
}
private: System::Void DataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
}
private: System::Void TextBox3_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	if (e->KeyChar > 31 && (e->KeyChar < '+' || e->KeyChar > '-' && (e->KeyChar < '0' || e->KeyChar > '9')))
	{
		e->Handled = true;
	}
}
private: System::Void TextBox2_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	if (e->KeyChar > 31 && (e->KeyChar < '+' || e->KeyChar > '-' && (e->KeyChar < '0' || e->KeyChar > '9')))
	{
		e->Handled = true;
	}
}
private: System::Void TextBox1_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	if (e->KeyChar > 31 && (e->KeyChar < '+' || e->KeyChar > '-' && (e->KeyChar < '0' || e->KeyChar > '9')))
	{
		e->Handled = true;
	}
}
private: System::Void Label1_Click(System::Object^ sender, System::EventArgs^ e) {
	Width = 200;
	Height = 256;
}
};
}
