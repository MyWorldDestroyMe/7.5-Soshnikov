#pragma once

namespace Project1 {

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
	private: System::Windows::Forms::Panel^ panel1;
	protected:
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox1;

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
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea1 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Title^ title1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Title());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->chart1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->BeginInit();
			this->panel2->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::SlateBlue;
			this->panel1->Controls->Add(this->pictureBox1);
			this->panel1->Controls->Add(this->chart1);
			this->panel1->Controls->Add(this->label6);
			this->panel1->Location = System::Drawing::Point(14, 14);
			this->panel1->Margin = System::Windows::Forms::Padding(5);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(626, 432);
			this->panel1->TabIndex = 0;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(276, 14);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(312, 50);
			this->pictureBox1->TabIndex = 9;
			this->pictureBox1->TabStop = false;
			// 
			// chart1
			// 
			chartArea1->Name = L"ChartArea1";
			this->chart1->ChartAreas->Add(chartArea1);
			legend1->Name = L"Legend1";
			this->chart1->Legends->Add(legend1);
			this->chart1->Location = System::Drawing::Point(15, 80);
			this->chart1->Name = L"chart1";
			series1->BorderWidth = 2;
			series1->ChartArea = L"ChartArea1";
			series1->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
			series1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			series1->Legend = L"Legend1";
			series1->Name = L"Функция";
			this->chart1->Series->Add(series1);
			this->chart1->Size = System::Drawing::Size(594, 337);
			this->chart1->TabIndex = 8;
			this->chart1->Text = L"chart1";
			title1->BorderColor = System::Drawing::Color::Black;
			title1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			title1->Name = L"График функции (см.выше)";
			title1->Text = L"График функции (см.выше)";
			this->chart1->Titles->Add(title1);
			// 
			// label6
			// 
			this->label6->BackColor = System::Drawing::Color::DarkSlateBlue;
			this->label6->ForeColor = System::Drawing::Color::DarkGray;
			this->label6->Location = System::Drawing::Point(20, 13);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(206, 51);
			this->label6->TabIndex = 7;
			this->label6->Text = L"<<Выходные данные>>";
			this->label6->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::SlateBlue;
			this->panel2->Controls->Add(this->textBox5);
			this->panel2->Controls->Add(this->textBox4);
			this->panel2->Controls->Add(this->textBox3);
			this->panel2->Controls->Add(this->textBox2);
			this->panel2->Controls->Add(this->textBox1);
			this->panel2->Controls->Add(this->label7);
			this->panel2->Controls->Add(this->label5);
			this->panel2->Controls->Add(this->label4);
			this->panel2->Controls->Add(this->label3);
			this->panel2->Controls->Add(this->label2);
			this->panel2->Controls->Add(this->button1);
			this->panel2->Controls->Add(this->button2);
			this->panel2->Controls->Add(this->label1);
			this->panel2->Location = System::Drawing::Point(669, 14);
			this->panel2->Margin = System::Windows::Forms::Padding(5);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(275, 432);
			this->panel2->TabIndex = 1;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(109, 268);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(100, 26);
			this->textBox5->TabIndex = 18;
			this->textBox5->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
			this->textBox5->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::textBox5_KeyPress);
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(109, 226);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(100, 26);
			this->textBox4->TabIndex = 17;
			this->textBox4->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
			this->textBox4->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::textBox4_KeyPress);
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(109, 165);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(100, 26);
			this->textBox3->TabIndex = 16;
			this->textBox3->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
			this->textBox3->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::textBox3_KeyPress);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(109, 128);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 26);
			this->textBox2->TabIndex = 15;
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
			this->textBox2->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::textBox2_KeyPress);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(109, 87);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 26);
			this->textBox1->TabIndex = 14;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
			this->textBox1->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::textBox1_KeyPress);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(80, 271);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(23, 20);
			this->label7->TabIndex = 13;
			this->label7->Text = L"z:";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(81, 229);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(22, 20);
			this->label5->TabIndex = 12;
			this->label5->Text = L"y:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(57, 168);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(46, 20);
			this->label4->TabIndex = 11;
			this->label4->Text = L"Шаг:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(38, 131);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(59, 20);
			this->label3->TabIndex = 10;
			this->label3->Text = L"r (до):";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(40, 90);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(55, 20);
			this->label2->TabIndex = 9;
			this->label2->Text = L"l (от):";
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::DarkSlateBlue;
			this->button1->Enabled = false;
			this->button1->FlatAppearance->BorderColor = System::Drawing::Color::DarkSlateBlue;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->ForeColor = System::Drawing::Color::DarkGray;
			this->button1->Location = System::Drawing::Point(25, 386);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(105, 31);
			this->button1->TabIndex = 8;
			this->button1->Text = L"Вывести";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::DarkSlateBlue;
			this->button2->FlatAppearance->BorderColor = System::Drawing::Color::DarkSlateBlue;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->ForeColor = System::Drawing::Color::DarkGray;
			this->button2->Location = System::Drawing::Point(153, 386);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(105, 31);
			this->button2->TabIndex = 7;
			this->button2->Text = L"Очистить";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// label1
			// 
			this->label1->BackColor = System::Drawing::Color::DarkSlateBlue;
			this->label1->ForeColor = System::Drawing::Color::DarkGray;
			this->label1->Location = System::Drawing::Point(40, 13);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(206, 51);
			this->label1->TabIndex = 6;
			this->label1->Text = L"<<Входные данные>>";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(10, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(958, 460);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Margin = System::Windows::Forms::Padding(5);
			this->MaximumSize = System::Drawing::Size(980, 505);
			this->MinimumSize = System::Drawing::Size(980, 505);
			this->Name = L"MyForm";
			this->Text = L"7-5";
			this->panel1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->EndInit();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		textBox1->Text = "";
		textBox2->Text = "";
		textBox3->Text = "";
		textBox4->Text = "";
		textBox5->Text = "";
		this->chart1->Series[0]->Points->Clear();
	}
private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	if (textBox1->Text == "" || textBox2->Text == "" || textBox3->Text == "" || textBox4->Text == "" || textBox5->Text == "" || Convert::ToDouble(textBox1->Text) >= Convert::ToDouble(textBox2->Text)) button1->Enabled = false;
	else button1->Enabled = true;
}
private: System::Void textBox1_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	if (((e->KeyChar >= '0') && (e->KeyChar <= '9')) || (e->KeyChar == '\b')) return;
	if ((e->KeyChar == '.') || (e->KeyChar == ',')) e->KeyChar = ',';
	if (e->KeyChar == ',')
	{
		if ((textBox1->Text->IndexOf(',') != -1) || (textBox1->Text->Length == 0))
		{
			e->Handled = true;
			MessageBox::Show("Вы ввели недопустимый символ или превысили количество спецсимволов", "Предупреждение", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		}
		return;
	}
	e->Handled = true;
	MessageBox::Show("Вы ввели недопустимый символ или превысили количество спецсимволов", "Предупреждение", MessageBoxButtons::OK, MessageBoxIcon::Warning);
}
private: System::Void textBox2_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	if (((e->KeyChar >= '0') && (e->KeyChar <= '9')) || (e->KeyChar == '\b')) return;
	if ((e->KeyChar == '.') || (e->KeyChar == ',')) e->KeyChar = ',';
	if (e->KeyChar == ',')
	{
		if ((textBox2->Text->IndexOf(',') != -1) || (textBox2->Text->Length == 0))
		{
			e->Handled = true;
			MessageBox::Show("Вы ввели недопустимый символ или превысили количество спецсимволов", "Предупреждение", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		}
		return;
	}
	e->Handled = true;
	MessageBox::Show("Вы ввели недопустимый символ или превысили количество спецсимволов", "Предупреждение", MessageBoxButtons::OK, MessageBoxIcon::Warning);
}
private: System::Void textBox3_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	if (((e->KeyChar >= '0') && (e->KeyChar <= '9')) || (e->KeyChar == '\b')) return;
	if ((e->KeyChar == '.') || (e->KeyChar == ',')) e->KeyChar = ',';
	if (e->KeyChar == ',')
	{
		if ((textBox3->Text->IndexOf(',') != -1) || (textBox3->Text->Length == 0))
		{
			e->Handled = true;
			MessageBox::Show("Вы ввели недопустимый символ или превысили количество спецсимволов", "Предупреждение", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		}
		return;
	}
	e->Handled = true;
	MessageBox::Show("Вы ввели недопустимый символ или превысили количество спецсимволов", "Предупреждение", MessageBoxButtons::OK, MessageBoxIcon::Warning);
}
private: System::Void textBox4_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	if (((e->KeyChar >= '0') && (e->KeyChar <= '9')) || (e->KeyChar == '\b')) return;
	if ((e->KeyChar == '.') || (e->KeyChar == ',')) e->KeyChar = ',';
	if (e->KeyChar == ',')
	{
		if ((textBox4->Text->IndexOf(',') != -1) || (textBox4->Text->Length == 0))
		{
			e->Handled = true;
			MessageBox::Show("Вы ввели недопустимый символ или превысили количество спецсимволов", "Предупреждение", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		}
		return;
	}
	e->Handled = true;
	MessageBox::Show("Вы ввели недопустимый символ или превысили количество спецсимволов", "Предупреждение", MessageBoxButtons::OK, MessageBoxIcon::Warning);
}
private: System::Void textBox5_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	if (((e->KeyChar >= '0') && (e->KeyChar <= '9')) || (e->KeyChar == '\b')) return;
	if ((e->KeyChar == '.') || (e->KeyChar == ',')) e->KeyChar = ',';
	if (e->KeyChar == ',')
	{
		if ((textBox5->Text->IndexOf(',') != -1) || (textBox5->Text->Length == 0))
		{
			e->Handled = true;
			MessageBox::Show("Вы ввели недопустимый символ или превысили количество спецсимволов", "Предупреждение", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		}
		return;
	}
	e->Handled = true;
	MessageBox::Show("Вы ввели недопустимый символ или превысили количество спецсимволов", "Предупреждение", MessageBoxButtons::OK, MessageBoxIcon::Warning);
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	this->chart1->Series[0]->Points->Clear();
	double x = Convert::ToDouble(textBox1->Text);
	double r = Convert::ToDouble(textBox2->Text);
	double h = Convert::ToDouble(textBox3->Text);
	double y = Convert::ToDouble(textBox4->Text);
	double z = Convert::ToDouble(textBox5->Text); 
	double a;
	while (x <= r)
	{
		a = Math::Log10(Math::Pow(y, -1 * Math::Sqrt(Math::Abs(x)))) * (x - (y / 2)) + Math::Pow(Math::Sin(Math::Atan(z)), 2);
		this->chart1->Series[0]->Points->AddXY(x , a);
		x += h;
	}
}
};
}
