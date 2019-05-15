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
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ textBox1;

	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::DataGridView^ dataGridView1;







	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ No;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ X1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ X2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ X3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ FX1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ FX2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ FX3;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;




























































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
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle7 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle8 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle10 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle11 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle12 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle9 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->No = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->X1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->X2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->X3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->FX1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->FX2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->FX3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->button1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(53, 176);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(76, 24);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Calculate";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::Button1_Click);
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(37, 65);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(112, 22);
			this->textBox1->TabIndex = 1;
			this->textBox1->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::TextBox1_KeyPress);
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox2->Location = System::Drawing::Point(37, 104);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(112, 22);
			this->textBox2->TabIndex = 3;
			this->textBox2->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::TextBox2_KeyPress);
			// 
			// textBox3
			// 
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox3->Location = System::Drawing::Point(37, 143);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(112, 22);
			this->textBox3->TabIndex = 4;
			this->textBox3->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::TextBox3_KeyPress);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(34, 49);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(42, 13);
			this->label2->TabIndex = 5;
			this->label2->Text = L"Nilai 1:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(34, 88);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(42, 13);
			this->label3->TabIndex = 6;
			this->label3->Text = L"Nilai 2:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(34, 127);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(65, 13);
			this->label4->TabIndex = 7;
			this->label4->Text = L"Galat Error:";
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToAddRows = false;
			this->dataGridView1->AllowUserToDeleteRows = false;
			this->dataGridView1->AllowUserToResizeColumns = false;
			this->dataGridView1->AllowUserToResizeRows = false;
			dataGridViewCellStyle7->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle7->BackColor = System::Drawing::Color::Lime;
			this->dataGridView1->AlternatingRowsDefaultCellStyle = dataGridViewCellStyle7;
			this->dataGridView1->BackgroundColor = System::Drawing::Color::White;
			this->dataGridView1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->dataGridView1->CellBorderStyle = System::Windows::Forms::DataGridViewCellBorderStyle::None;
			this->dataGridView1->ColumnHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::None;
			dataGridViewCellStyle8->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle8->Font = (gcnew System::Drawing::Font(L"Fira Code", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle8->ForeColor = System::Drawing::Color::MediumSlateBlue;
			dataGridViewCellStyle8->SelectionBackColor = System::Drawing::Color::White;
			dataGridViewCellStyle8->SelectionForeColor = System::Drawing::Color::MediumSlateBlue;
			dataGridViewCellStyle8->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->dataGridView1->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle8;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(7) {
				this->No, this->X1,
					this->X2, this->X3, this->FX1, this->FX2, this->FX3
			});
			dataGridViewCellStyle10->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle10->BackColor = System::Drawing::SystemColors::Window;
			dataGridViewCellStyle10->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle10->ForeColor = System::Drawing::SystemColors::ControlText;
			dataGridViewCellStyle10->SelectionBackColor = System::Drawing::Color::WhiteSmoke;
			dataGridViewCellStyle10->SelectionForeColor = System::Drawing::SystemColors::ControlText;
			dataGridViewCellStyle10->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->dataGridView1->DefaultCellStyle = dataGridViewCellStyle10;
			this->dataGridView1->EnableHeadersVisualStyles = false;
			this->dataGridView1->GridColor = System::Drawing::Color::SkyBlue;
			this->dataGridView1->Location = System::Drawing::Point(220, 30);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::Single;
			dataGridViewCellStyle11->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle11->BackColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			dataGridViewCellStyle11->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle11->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle11->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle11->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGridView1->RowHeadersDefaultCellStyle = dataGridViewCellStyle11;
			this->dataGridView1->RowHeadersVisible = false;
			dataGridViewCellStyle12->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			this->dataGridView1->RowsDefaultCellStyle = dataGridViewCellStyle12;
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
			dataGridViewCellStyle9->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			this->No->DefaultCellStyle = dataGridViewCellStyle9;
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
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::White;
			this->label1->Font = (gcnew System::Drawing::Font(L"Fira Code", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::Black;
			this->label1->Location = System::Drawing::Point(576, 201);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(21, 13);
			this->label1->TabIndex = 9;
			this->label1->Text = L"<-";
			this->label1->Click += gcnew System::EventHandler(this, &MyForm::Label1_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(34, 9);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(34, 13);
			this->label5->TabIndex = 10;
			this->label5->Text = L"ƒ( X ):";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(34, 30);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(100, 13);
			this->label6->TabIndex = 11;
			this->label6->Text = L"-1/3 * X ^ 3 + X - 9";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->ClientSize = System::Drawing::Size(599, 217);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button1);
			this->MaximizeBox = false;
			this->Name = L"MyForm";
			this->Opacity = 0.97;
			this->ShowIcon = false;
			this->Text = L"Secant Method";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

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

		if (textBox1->Text->Length != 0 || textBox2->Text->Length != 0 || textBox3->Text->Length != 0) {
			String^ inA = textBox1->Text;
			String^ inB = textBox2->Text;
			String^ inC = textBox3->Text;

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
