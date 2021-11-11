#pragma once

namespace ProjectLR44 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ txBegin1;
	private: System::Windows::Forms::TextBox^ txEnd1;
	private: System::Windows::Forms::TextBox^ txStep1;
	private: System::Windows::Forms::TextBox^ txStep2;

	private: System::Windows::Forms::TextBox^ txEnd2;

	private: System::Windows::Forms::TextBox^ txBegin2;
	private: System::Windows::Forms::ListBox^ listBox1;
	private: System::Windows::Forms::GroupBox^ groupBox3;
	private: System::Windows::Forms::TextBox^ OutPutNegativeResult;
	private: System::Windows::Forms::TextBox^ OutPutMultiplicationResult;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ buttonClose;





	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->txBegin1 = (gcnew System::Windows::Forms::TextBox());
			this->txEnd1 = (gcnew System::Windows::Forms::TextBox());
			this->txStep1 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->txStep2 = (gcnew System::Windows::Forms::TextBox());
			this->txEnd2 = (gcnew System::Windows::Forms::TextBox());
			this->txBegin2 = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->OutPutNegativeResult = (gcnew System::Windows::Forms::TextBox());
			this->OutPutMultiplicationResult = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->buttonClose = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->groupBox3->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::LightGreen;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(1, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(187, 60);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Шляпников Андрей\r\nГруппа БИН2152\r\nВариан 27";
			this->label1->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(194, 9);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(748, 103);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox1->TabIndex = 1;
			this->pictureBox1->TabStop = false;
			// 
			// groupBox1
			// 
			this->groupBox1->BackColor = System::Drawing::Color::MediumSeaGreen;
			this->groupBox1->Controls->Add(this->txBegin1);
			this->groupBox1->Controls->Add(this->txEnd1);
			this->groupBox1->Controls->Add(this->txStep1);
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->groupBox1->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->groupBox1->Location = System::Drawing::Point(30, 141);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(417, 90);
			this->groupBox1->TabIndex = 2;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Диапазон и шаг изменения X";
			this->groupBox1->Enter += gcnew System::EventHandler(this, &MyForm::groupBox1_Enter);
			// 
			// txBegin1
			// 
			this->txBegin1->Location = System::Drawing::Point(6, 46);
			this->txBegin1->Name = L"txBegin1";
			this->txBegin1->Size = System::Drawing::Size(100, 27);
			this->txBegin1->TabIndex = 1;
			this->txBegin1->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->txBegin1->TextChanged += gcnew System::EventHandler(this, &MyForm::txBegin1_TextChanged);
			// 
			// txEnd1
			// 
			this->txEnd1->Location = System::Drawing::Point(163, 46);
			this->txEnd1->Name = L"txEnd1";
			this->txEnd1->Size = System::Drawing::Size(100, 27);
			this->txEnd1->TabIndex = 2;
			this->txEnd1->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->txEnd1->TextChanged += gcnew System::EventHandler(this, &MyForm::txEnd1_TextChanged);
			// 
			// txStep1
			// 
			this->txStep1->Location = System::Drawing::Point(311, 46);
			this->txStep1->Name = L"txStep1";
			this->txStep1->Size = System::Drawing::Size(100, 27);
			this->txStep1->TabIndex = 3;
			this->txStep1->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->txStep1->TextChanged += gcnew System::EventHandler(this, &MyForm::txStep1_TextChanged);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(326, 23);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(70, 20);
			this->label4->TabIndex = 5;
			this->label4->Text = L"Шаг h1";
			this->label4->Click += gcnew System::EventHandler(this, &MyForm::label4_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(205, 23);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(19, 20);
			this->label3->TabIndex = 4;
			this->label3->Text = L"b";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(45, 23);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(19, 20);
			this->label2->TabIndex = 3;
			this->label2->Text = L"a";
			this->label2->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->label2->Click += gcnew System::EventHandler(this, &MyForm::label2_Click_1);
			// 
			// groupBox2
			// 
			this->groupBox2->BackColor = System::Drawing::Color::MediumSeaGreen;
			this->groupBox2->Controls->Add(this->txStep2);
			this->groupBox2->Controls->Add(this->txEnd2);
			this->groupBox2->Controls->Add(this->txBegin2);
			this->groupBox2->Controls->Add(this->label7);
			this->groupBox2->Controls->Add(this->label6);
			this->groupBox2->Controls->Add(this->label5);
			this->groupBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->groupBox2->ForeColor = System::Drawing::Color::Cornsilk;
			this->groupBox2->Location = System::Drawing::Point(609, 141);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(417, 90);
			this->groupBox2->TabIndex = 6;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Диапазон и шаг изменения Y";
			// 
			// txStep2
			// 
			this->txStep2->Location = System::Drawing::Point(311, 46);
			this->txStep2->Name = L"txStep2";
			this->txStep2->Size = System::Drawing::Size(100, 27);
			this->txStep2->TabIndex = 6;
			this->txStep2->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->txStep2->TextChanged += gcnew System::EventHandler(this, &MyForm::txStep2_TextChanged);
			// 
			// txEnd2
			// 
			this->txEnd2->Location = System::Drawing::Point(158, 46);
			this->txEnd2->Name = L"txEnd2";
			this->txEnd2->Size = System::Drawing::Size(100, 27);
			this->txEnd2->TabIndex = 5;
			this->txEnd2->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->txEnd2->TextChanged += gcnew System::EventHandler(this, &MyForm::txEnd2_TextChanged);
			// 
			// txBegin2
			// 
			this->txBegin2->Location = System::Drawing::Point(6, 46);
			this->txBegin2->Name = L"txBegin2";
			this->txBegin2->Size = System::Drawing::Size(100, 27);
			this->txBegin2->TabIndex = 4;
			this->txBegin2->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->txBegin2->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(324, 23);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(70, 20);
			this->label7->TabIndex = 2;
			this->label7->Text = L"Шаг h2";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(199, 23);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(19, 20);
			this->label6->TabIndex = 1;
			this->label6->Text = L"d";
			this->label6->Click += gcnew System::EventHandler(this, &MyForm::label6_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(50, 23);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(19, 20);
			this->label5->TabIndex = 0;
			this->label5->Text = L"c";
			// 
			// listBox1
			// 
			this->listBox1->ColumnWidth = 5;
			this->listBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->listBox1->FormattingEnabled = true;
			this->listBox1->ItemHeight = 20;
			this->listBox1->Location = System::Drawing::Point(5, 279);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(605, 324);
			this->listBox1->TabIndex = 9;
			// 
			// groupBox3
			// 
			this->groupBox3->BackColor = System::Drawing::Color::MediumSeaGreen;
			this->groupBox3->Controls->Add(this->OutPutNegativeResult);
			this->groupBox3->Controls->Add(this->OutPutMultiplicationResult);
			this->groupBox3->Controls->Add(this->label9);
			this->groupBox3->Controls->Add(this->label8);
			this->groupBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->groupBox3->ForeColor = System::Drawing::Color::White;
			this->groupBox3->Location = System::Drawing::Point(696, 279);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(194, 324);
			this->groupBox3->TabIndex = 8;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"Результат";
			// 
			// OutPutNegativeResult
			// 
			this->OutPutNegativeResult->Enabled = false;
			this->OutPutNegativeResult->Location = System::Drawing::Point(14, 258);
			this->OutPutNegativeResult->Name = L"OutPutNegativeResult";
			this->OutPutNegativeResult->Size = System::Drawing::Size(163, 27);
			this->OutPutNegativeResult->TabIndex = 3;
			this->OutPutNegativeResult->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// OutPutMultiplicationResult
			// 
			this->OutPutMultiplicationResult->Enabled = false;
			this->OutPutMultiplicationResult->Location = System::Drawing::Point(14, 96);
			this->OutPutMultiplicationResult->Name = L"OutPutMultiplicationResult";
			this->OutPutMultiplicationResult->Size = System::Drawing::Size(163, 27);
			this->OutPutMultiplicationResult->TabIndex = 2;
			this->OutPutMultiplicationResult->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(28, 186);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(133, 40);
			this->label9->TabIndex = 1;
			this->label9->Text = L"Количество\r\nзначений Z<0";
			this->label9->Click += gcnew System::EventHandler(this, &MyForm::label9_Click);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(6, 38);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(171, 20);
			this->label8->TabIndex = 0;
			this->label8->Text = L"Призведение Z<0";
			this->label8->Click += gcnew System::EventHandler(this, &MyForm::label8_Click);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::DimGray;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(991, 279);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(151, 58);
			this->button1->TabIndex = 7;
			this->button1->Text = L"Вычислить";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// buttonClose
			// 
			this->buttonClose->BackColor = System::Drawing::Color::Red;
			this->buttonClose->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->buttonClose->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonClose->Location = System::Drawing::Point(991, 537);
			this->buttonClose->Name = L"buttonClose";
			this->buttonClose->Size = System::Drawing::Size(151, 58);
			this->buttonClose->TabIndex = 8;
			this->buttonClose->Text = L"Завершить";
			this->buttonClose->UseVisualStyleBackColor = false;
			this->buttonClose->Click += gcnew System::EventHandler(this, &MyForm::buttonClose_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::LightGray;
			this->ClientSize = System::Drawing::Size(1154, 617);
			this->Controls->Add(this->buttonClose);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->groupBox3);
			this->Controls->Add(this->listBox1);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->label1);
			this->Name = L"MyForm";
			this->Text = L"«Программирование алгоритмов вложенных циклических структур";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label2_Click_1(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void groupBox1_Enter(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label6_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void txBegin1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	if (txBegin1->Text->Length == 0) 
	{
		txBegin1->BackColor = System::Drawing::Color::Red;
	}
	else
	{
		txBegin1->BackColor = System::Drawing::Color::White;
	}
}
private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	if (txBegin2->Text->Length == 0)
	{
		txBegin2->BackColor = System::Drawing::Color::Red;
	}
	else
	{
		txBegin2->BackColor = System::Drawing::Color::White;
	}
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	int start1, end1, step1, start2, end2, step2, negCount;
	double result;
	if (!GetValue(start1, txBegin1, "Введите начальное значение X")) return;
	if (!GetValue(end1, txEnd1, "Введите конечное значение X")) return;
	if (!GetValue(step1, txStep1, "Введите шаг изменения X")) return;
	if (!GetValue(start2, txBegin2, "Введите начальное значение Y")) return;
	if (!GetValue(end2, txEnd2, "Введите конечное значение Y")) return;
	if (!GetValue(step2, txStep2, "Введите шаг изменения Y")) return;
	if(!ValidationRande(start1, end1) || !ValidationRande(start2, end2)) return;
	CreateTable(start1, end1, step1, start2, end2, step2, result, negCount, listBox1);
	OutPut(result, negCount, OutPutMultiplicationResult, OutPutNegativeResult);

}
private: System::Void label9_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label8_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void buttonClose_Click(System::Object^ sender, System::EventArgs^ e) {
	System::Windows::Forms::DialogResult result;
	result = MessageBox::Show("Завершить ?", "Сообщение", MessageBoxButtons::OKCancel, MessageBoxIcon::Question);
	if (result == System::Windows::Forms::DialogResult::OK)
	{
		this->Close();
	}
}
private: System::Void txEnd1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	if (txEnd1->Text->Length == 0)
	{
		txEnd1->BackColor = System::Drawing::Color::Red;
	}
	else
	{
		txEnd1->BackColor = System::Drawing::Color::White;
	}
}
private: System::Void txStep1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	if (txStep1->Text->Length == 0)
	{
		txStep1->BackColor = System::Drawing::Color::Red;
	}
	else
	{
		txStep1->BackColor = System::Drawing::Color::White;
	}
}
private: System::Void txEnd2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	if (txEnd2->Text->Length == 0)
	{
		txEnd2->BackColor = System::Drawing::Color::Red;
	}
	else
	{
		txEnd2->BackColor = System::Drawing::Color::White;
	}
}
private: System::Void txStep2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	if (txStep2->Text->Length == 0)
	{
		txStep2->BackColor = System::Drawing::Color::Red;
	}
	else
	{
		txStep2->BackColor = System::Drawing::Color::White;
	}
}
};
}
