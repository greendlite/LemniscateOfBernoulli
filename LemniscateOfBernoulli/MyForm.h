#pragma once

namespace LemniscateOfBernoulli {
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	public ref class MyForm : public System::Windows::Forms::Form {

	public:
		MyForm(void) {
			InitializeComponent();
		}

	protected:
		~MyForm() {
			if (components) {
				delete components;
			}
		}

	private:
		System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::ColorDialog^ colorDialog1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::TrackBar^ trackBar1;
	private: System::Windows::Forms::Button^ button4;

	private: System::ComponentModel::IContainer^ components;

	private:


#pragma region Windows Form Designer generated code
		void InitializeComponent(void) {
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->colorDialog1 = (gcnew System::Windows::Forms::ColorDialog());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->trackBar1 = (gcnew System::Windows::Forms::TrackBar());
			this->button4 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar1))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(12, 12);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(648, 559);
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::pictureBox1_Paint);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(694, 12);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(256, 25);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Лемниската Бернулли";
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(750, 212);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(139, 41);
			this->button1->TabIndex = 2;
			this->button1->Text = L"запуск";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(750, 100);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(139, 37);
			this->textBox1->TabIndex = 3;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(682, 62);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(272, 24);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Введите радиус кривизны Лемнискаты";
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button2->Location = System::Drawing::Point(750, 163);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(139, 43);
			this->button2->TabIndex = 5;
			this->button2->Text = L"цвет";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click_1);
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button3->Location = System::Drawing::Point(750, 259);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(139, 42);
			this->button3->TabIndex = 6;
			this->button3->Text = L"сброс";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// textBox2
			// 
			this->textBox2->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->textBox2->Location = System::Drawing::Point(773, 357);
			this->textBox2->Name = L"textBox2";
			this->textBox2->ReadOnly = true;
			this->textBox2->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->textBox2->Size = System::Drawing::Size(100, 20);
			this->textBox2->TabIndex = 7;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(713, 360);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(40, 13);
			this->label3->TabIndex = 8;
			this->label3->Text = L"Длина";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(713, 386);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(58, 13);
			this->label4->TabIndex = 9;
			this->label4->Text = L"Периметр";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(713, 412);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(54, 13);
			this->label5->TabIndex = 10;
			this->label5->Text = L"Площадь";
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(773, 409);
			this->textBox4->Name = L"textBox4";
			this->textBox4->ReadOnly = true;
			this->textBox4->Size = System::Drawing::Size(100, 20);
			this->textBox4->TabIndex = 14;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(773, 383);
			this->textBox5->Name = L"textBox5";
			this->textBox5->ReadOnly = true;
			this->textBox5->Size = System::Drawing::Size(100, 20);
			this->textBox5->TabIndex = 15;
			// 
			// trackBar1
			// 
			this->trackBar1->Location = System::Drawing::Point(716, 492);
			this->trackBar1->Maximum = 20;
			this->trackBar1->Minimum = -20;
			this->trackBar1->Name = L"trackBar1";
			this->trackBar1->Size = System::Drawing::Size(217, 45);
			this->trackBar1->TabIndex = 16;
			this->trackBar1->Scroll += gcnew System::EventHandler(this, &MyForm::trackBar1_Scroll);
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button4->Location = System::Drawing::Point(750, 307);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(139, 44);
			this->button4->TabIndex = 17;
			this->button4->Text = L"сохранить";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSize = true;
			this->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->ClientSize = System::Drawing::Size(990, 594);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->trackBar1);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->pictureBox1);
			this->MaximizeBox = false;
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: bool shouldDraw = false; // флаг для указания, нужно ли рисовать график
		   Color chosenColor = Color::Black;
	private: System::Void trackBar1_Scroll(System::Object^ sender, System::EventArgs^ e) {
		pictureBox1->Refresh();
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		// Переносим код проверки значения "a" из предыдущего фрагмента сюда
		double min = 1.0; // Задаем минимальное значение параметра "a"
		double max = 1000.0; // Задаем максимальное значение параметра "a"

		try {
			double a = Convert::ToDouble(textBox1->Text);
			if (a >= min && a <= max) {
				shouldDraw = true; // устанавливаем флаг в true
				pictureBox1->Refresh(); // вызываем обновление рисунка на PictureBox
			}
			else {
				shouldDraw = false; // значения параметра "a" находится за пределами допустимого диапазона, не рисуем график
				MessageBox::Show("Значение радиуса кривизны должно находиться в диапазоне от " + min + " до " + max);
			}
		}
		catch (FormatException^) {
			shouldDraw = false; // не рисуем график
			MessageBox::Show("Пожалуйста, введите корректное числовое значение для радиуса кривизны");
		}
	}
	private: System::Void button2_Click_1(System::Object^ sender, System::EventArgs^ e) {
		// При нажатии на кнопку открыть диалог выбора цвета
		ColorDialog^ colorDialog = gcnew ColorDialog();

		// Проверяем, был ли выбран цвет и устанавливаем его для рисования
		if (colorDialog->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
			chosenColor = colorDialog->Color; // chosenColor - это переменная, в которой мы будем хранить выбранный цвет
			pictureBox1->Refresh(); // Обновляем рисунок на PictureBox
		}
	}
	private: System::Void pictureBox1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
		// Рисуем оси координат
		Pen^ blackPen = gcnew Pen(Color::Black);
		Pen^ graphPen = gcnew Pen(chosenColor);
		e->Graphics->DrawLine(blackPen, 0, pictureBox1->Height / 2, pictureBox1->Width, pictureBox1->Height / 2); // Ось X
		e->Graphics->DrawLine(blackPen, pictureBox1->Width / 2, 0, pictureBox1->Width / 2, pictureBox1->Height); // Ось Y
		if (shouldDraw)
		{
			graphPen->Color = chosenColor; // Устанавливаем выбранный цвет для графика
			double const S = 2.622057554292119;
			double a = Convert::ToDouble(textBox1->Text); // параметр лемнискаты Бернулли
			double b = 2 * Math::Sqrt(2) * a; // вычисляем значение формулы
			textBox2->Text = b.ToString(); // устанавливаем полученное значение во второе текстовое поле
			double c = 2 * Math::Sqrt(2) * S * a; // Вычисляем значение формулы p = 2 * √2 * S * a
			textBox5->Text = c.ToString(); // Устанавливаем полученное значение в textBoxP
			double A = 2 * a * a; // Вычисляем значение формулы A = 2 * a²
			textBox4->Text = A.ToString(); // Устанавливаем полученное значение в textBoxResultA
			double step = 0.04;

			int centerX = pictureBox1->Width / 2;
			int centerY = pictureBox1->Height / 2;

			double multiplier = trackBar1->Value * 2;
			if (multiplier == 0) {
				multiplier = 1;
			}
			else if (multiplier < 0) {
				multiplier = -1 / multiplier;
			}
			double aWithMultiplier = a * multiplier;

			double prevX, prevY;
			for (double t = 0; t < 2 * Math::PI; t += step)
			{
				double x = centerX + aWithMultiplier * Math::Cos(t) / (1 + Math::Pow(Math::Sin(t), 2));
				double y = centerY - aWithMultiplier * Math::Sin(t) * Math::Cos(t) / (1 + Math::Pow(Math::Sin(t), 2));

				if (t != 0)
				{
					e->Graphics->DrawLine(graphPen, static_cast<int>(prevX), static_cast<int>(prevY), static_cast<int>(x), static_cast<int>(y));
				}
				prevX = x;
				prevY = y;
			}
		}
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		shouldDraw = false;
		pictureBox1->Invalidate(); // Вызываем метод сброса графика
		textBox1->Text = ""; // Сбрасываем textBox1
		textBox2->Text = ""; // Сбрасываем textBox2
		textBox4->Text = ""; // Сбрасываем textBox4
		textBox5->Text = ""; // Сбрасываем textBox5
	}
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		SaveFileDialog^ saveFileDialog = gcnew SaveFileDialog();
		saveFileDialog->Filter = "Image(.png)|.png|Image(.jpg)|.jpg|Image(.bmp)|.bmp|All files(.)|.";
		if (saveFileDialog->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
			String^ filePath = saveFileDialog->FileName;
			Bitmap^ bmp = gcnew Bitmap(pictureBox1->Width, pictureBox1->Height);// Создаем новый битмап с размерами pictureBox1
			pictureBox1->DrawToBitmap(bmp, pictureBox1->ClientRectangle);// Рисуем содержимое pictureBox1 на битмапе
			bmp->Save(filePath);// Сохраняем битмап
		}
	}
	};
}


