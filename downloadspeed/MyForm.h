#pragma once
#include <msclr\marshal_cppstd.h>
#include <iostream>
#include <string>

namespace downloadspeed {

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
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::ComboBox^ comboBox1;

	private: System::Windows::Forms::ComboBox^ comboBox2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;

	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::ComboBox^ comboBox3;
	private: System::Windows::Forms::Label^ label7;


	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Panel^ panel1;

	private: System::Windows::Forms::ComboBox^ comboBox4;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::ComboBox^ comboBox5;

	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::ComboBox^ comboBox7;
	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::Label^ label18;
	private: System::Windows::Forms::Label^ label19;


	private: System::Windows::Forms::Label^ label22;


	private: System::Windows::Forms::Label^ label24;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::ComboBox^ comboBox6;
	private: System::Windows::Forms::Label^ label20;


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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->comboBox3 = (gcnew System::Windows::Forms::ComboBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->comboBox4 = (gcnew System::Windows::Forms::ComboBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->comboBox5 = (gcnew System::Windows::Forms::ComboBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->comboBox7 = (gcnew System::Windows::Forms::ComboBox());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->comboBox6 = (gcnew System::Windows::Forms::ComboBox());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Bahnschrift SemiBold", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(3, 74);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(198, 22);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Download speed value:";
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Bahnschrift", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(219, 71);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(152, 29);
			this->textBox1->TabIndex = 1;
			this->textBox1->Text = L"0";
			// 
			// comboBox1
			// 
			this->comboBox1->Font = (gcnew System::Drawing::Font(L"Bahnschrift", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Second", L"Minute", L"Hour" });
			this->comboBox1->Location = System::Drawing::Point(566, 71);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(152, 30);
			this->comboBox1->TabIndex = 2;
			this->comboBox1->Text = L"Second";
			// 
			// comboBox2
			// 
			this->comboBox2->Font = (gcnew System::Drawing::Font(L"Bahnschrift", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Items->AddRange(gcnew cli::array< System::Object^  >(8) {
				L"bits", L"Kilobits", L"Megabits", L"Gigabits",
					L"Bytes", L"KiloBytes", L"MegaBytes", L"GigaBytes"
			});
			this->comboBox2->Location = System::Drawing::Point(386, 71);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(169, 30);
			this->comboBox2->TabIndex = 4;
			this->comboBox2->Text = L"Megabits";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Bahnschrift SemiBold", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::White;
			this->label3->Location = System::Drawing::Point(433, 51);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(78, 21);
			this->label3->TabIndex = 5;
			this->label3->Text = L"Data unit";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Bahnschrift SemiBold", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::White;
			this->label4->Location = System::Drawing::Point(102, 109);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(99, 22);
			this->label4->TabIndex = 6;
			this->label4->Text = L"Convert to:";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Bahnschrift", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::White;
			this->label5->Location = System::Drawing::Point(6, 9);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(351, 34);
			this->label5->TabIndex = 7;
			this->label5->Text = L"Download speed converter";
			// 
			// textBox2
			// 
			this->textBox2->Enabled = false;
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Bahnschrift", 11, System::Drawing::FontStyle::Bold));
			this->textBox2->Location = System::Drawing::Point(219, 185);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(152, 30);
			this->textBox2->TabIndex = 9;
			// 
			// comboBox3
			// 
			this->comboBox3->Font = (gcnew System::Drawing::Font(L"Bahnschrift", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboBox3->FormattingEnabled = true;
			this->comboBox3->Items->AddRange(gcnew cli::array< System::Object^  >(8) {
				L"bits", L"Kilobits", L"Megabits", L"Gigabits",
					L"Bytes", L"KiloBytes", L"MegaBytes", L"GigaBytes"
			});
			this->comboBox3->Location = System::Drawing::Point(219, 127);
			this->comboBox3->Name = L"comboBox3";
			this->comboBox3->Size = System::Drawing::Size(152, 29);
			this->comboBox3->TabIndex = 10;
			this->comboBox3->Text = L"MegaBytes";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Bahnschrift", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::Color::White;
			this->label7->Location = System::Drawing::Point(136, 188);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(65, 22);
			this->label7->TabIndex = 11;
			this->label7->Text = L"Speed:";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Bahnschrift", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->ForeColor = System::Drawing::Color::White;
			this->label10->Location = System::Drawing::Point(382, 193);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(42, 22);
			this->label10->TabIndex = 14;
			this->label10->Text = L"__/s";
			this->label10->Click += gcnew System::EventHandler(this, &MyForm::label10_Click);
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Bahnschrift", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->label11->Location = System::Drawing::Point(18, 296);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(277, 34);
			this->label11->TabIndex = 15;
			this->label11->Text = L"Download speed ETA";
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(50)), static_cast<System::Int32>(static_cast<System::Byte>(50)),
				static_cast<System::Int32>(static_cast<System::Byte>(60)));
			this->panel1->Location = System::Drawing::Point(15, 270);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(706, 10);
			this->panel1->TabIndex = 16;
			// 
			// comboBox4
			// 
			this->comboBox4->Font = (gcnew System::Drawing::Font(L"Bahnschrift", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboBox4->FormattingEnabled = true;
			this->comboBox4->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Second", L"Minute", L"Hour" });
			this->comboBox4->Location = System::Drawing::Point(566, 357);
			this->comboBox4->Name = L"comboBox4";
			this->comboBox4->Size = System::Drawing::Size(152, 29);
			this->comboBox4->TabIndex = 19;
			this->comboBox4->Text = L"Second";
			// 
			// textBox3
			// 
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Bahnschrift", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox3->Location = System::Drawing::Point(219, 360);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(152, 28);
			this->textBox3->TabIndex = 18;
			this->textBox3->Text = L"0";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Bahnschrift SemiBold", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label13->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->label13->Location = System::Drawing::Point(3, 366);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(198, 22);
			this->label13->TabIndex = 17;
			this->label13->Text = L"Download speed value:";
			this->label13->TextAlign = System::Drawing::ContentAlignment::TopRight;
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"Bahnschrift SemiBold", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label14->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->label14->Location = System::Drawing::Point(422, 334);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(78, 21);
			this->label14->TabIndex = 22;
			this->label14->Text = L"Data unit";
			// 
			// comboBox5
			// 
			this->comboBox5->Font = (gcnew System::Drawing::Font(L"Bahnschrift", 10.2F));
			this->comboBox5->FormattingEnabled = true;
			this->comboBox5->Items->AddRange(gcnew cli::array< System::Object^  >(8) {
				L"bits", L"Kilobits", L"Megabits", L"Gigabits",
					L"Bytes", L"KiloBytes", L"MegaBytes", L"GigaBytes"
			});
			this->comboBox5->Location = System::Drawing::Point(386, 358);
			this->comboBox5->Name = L"comboBox5";
			this->comboBox5->Size = System::Drawing::Size(169, 29);
			this->comboBox5->TabIndex = 21;
			this->comboBox5->Text = L"Megabits";
			// 
			// textBox4
			// 
			this->textBox4->Font = (gcnew System::Drawing::Font(L"Bahnschrift", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox4->Location = System::Drawing::Point(219, 423);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(152, 28);
			this->textBox4->TabIndex = 25;
			this->textBox4->Text = L"0";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Font = (gcnew System::Drawing::Font(L"Bahnschrift", 11));
			this->label15->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->label15->Location = System::Drawing::Point(505, 539);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(82, 23);
			this->label15->TabIndex = 24;
			this->label15->Text = L"Seconds";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Font = (gcnew System::Drawing::Font(L"Bahnschrift SemiBold", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label16->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->label16->Location = System::Drawing::Point(70, 425);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(131, 22);
			this->label16->TabIndex = 23;
			this->label16->Text = L"File size value:";
			this->label16->TextAlign = System::Drawing::ContentAlignment::TopRight;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Olive;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::White;
			this->button1->Location = System::Drawing::Point(566, 124);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(152, 69);
			this->button1->TabIndex = 27;
			this->button1->Text = L"Convert!";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::Olive;
			this->button2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::Color::White;
			this->button2->Location = System::Drawing::Point(566, 418);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(152, 77);
			this->button2->TabIndex = 28;
			this->button2->Text = L"Calculate!";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Bahnschrift SemiBold", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::White;
			this->label2->Location = System::Drawing::Point(601, 51);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(79, 21);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Time unit";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Bahnschrift SemiBold", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->label12->Location = System::Drawing::Point(601, 333);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(79, 21);
			this->label12->TabIndex = 29;
			this->label12->Text = L"Time unit";
			// 
			// comboBox7
			// 
			this->comboBox7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F));
			this->comboBox7->FormattingEnabled = true;
			this->comboBox7->Items->AddRange(gcnew cli::array< System::Object^  >(8) {
				L"bits", L"Kilobits", L"Megabits", L"Gigabits",
					L"Bytes", L"KiloBytes", L"MegaBytes", L"GigaBytes"
			});
			this->comboBox7->Location = System::Drawing::Point(386, 421);
			this->comboBox7->Name = L"comboBox7";
			this->comboBox7->Size = System::Drawing::Size(169, 30);
			this->comboBox7->TabIndex = 30;
			this->comboBox7->Text = L"MegaBytes";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Font = (gcnew System::Drawing::Font(L"Bahnschrift", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label17->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->label17->Location = System::Drawing::Point(422, 403);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(78, 21);
			this->label17->TabIndex = 31;
			this->label17->Text = L"Data unit";
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Font = (gcnew System::Drawing::Font(L"Bahnschrift", 14, System::Drawing::FontStyle::Bold));
			this->label18->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->label18->Location = System::Drawing::Point(12, 486);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(264, 29);
			this->label18->TabIndex = 32;
			this->label18->Text = L"The download will take:";
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Font = (gcnew System::Drawing::Font(L"Bahnschrift", 11));
			this->label19->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->label19->Location = System::Drawing::Point(283, 539);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(78, 23);
			this->label19->TabIndex = 33;
			this->label19->Text = L"Minutes";
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Font = (gcnew System::Drawing::Font(L"Bahnschrift", 11));
			this->label22->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->label22->Location = System::Drawing::Point(88, 539);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(62, 23);
			this->label22->TabIndex = 36;
			this->label22->Text = L"Hours";
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->Font = (gcnew System::Drawing::Font(L"Bahnschrift SemiLight", 8.2F));
			this->label24->ForeColor = System::Drawing::Color::White;
			this->label24->Location = System::Drawing::Point(603, 9);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(118, 17);
			this->label24->TabIndex = 1;
			this->label24->Text = L"Created by Leigh";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Bahnschrift SemiBold", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::Color::White;
			this->label6->Location = System::Drawing::Point(255, 109);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(78, 21);
			this->label6->TabIndex = 38;
			this->label6->Text = L"Data unit";
			// 
			// comboBox6
			// 
			this->comboBox6->Font = (gcnew System::Drawing::Font(L"Bahnschrift", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboBox6->FormattingEnabled = true;
			this->comboBox6->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Second", L"Minute", L"Hour" });
			this->comboBox6->Location = System::Drawing::Point(386, 127);
			this->comboBox6->Name = L"comboBox6";
			this->comboBox6->Size = System::Drawing::Size(169, 29);
			this->comboBox6->TabIndex = 39;
			this->comboBox6->Text = L"Second";
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Font = (gcnew System::Drawing::Font(L"Bahnschrift SemiBold", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label20->ForeColor = System::Drawing::Color::White;
			this->label20->Location = System::Drawing::Point(432, 109);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(79, 21);
			this->label20->TabIndex = 40;
			this->label20->Text = L"Time unit";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(40)));
			this->ClientSize = System::Drawing::Size(732, 593);
			this->Controls->Add(this->label24);
			this->Controls->Add(this->comboBox6);
			this->Controls->Add(this->label20);
			this->Controls->Add(this->comboBox3);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label22);
			this->Controls->Add(this->label19);
			this->Controls->Add(this->label18);
			this->Controls->Add(this->comboBox7);
			this->Controls->Add(this->label17);
			this->Controls->Add(this->comboBox5);
			this->Controls->Add(this->comboBox4);
			this->Controls->Add(this->comboBox2);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->label15);
			this->Controls->Add(this->label16);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label12);
			this->Name = L"MyForm";
			this->Text = L"Download speed calculator";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		//converting the input of download speed value and file size value inputs from system strings to standard strings
	
		std::string downspeed = msclr::interop::marshal_as<std::string>(textBox3->Text);
		std::string filesize = msclr::interop::marshal_as<std::string>(textBox4->Text);
		
		//converting the, now, standard strings into doubles
		double downdoub = stod(downspeed);
		double filedoub = stod(filesize);



		



		//download speed conversions


		if (comboBox5->Text == "Kilobits") // converts the down speed in kilobits, to bits
		{
			downdoub = downdoub * 1000;
		}
		if (comboBox5->Text == "Megabits") // converts the down speed in megabits, to bits
		{
			downdoub = downdoub * 1000000;
		}
		if (comboBox5->Text == "Gigabits") // converts the down speed in gigabits, to bits
		{
			downdoub = downdoub * 1000000000000;
		}
		if (comboBox5->Text == "Bytes") // converts the down speed in bytes, to bits
		{
			downdoub = downdoub * 8;
		}
		if (comboBox5->Text == "Kilobytes") // converts the down speed in kilobytes, to bits
		{
			downdoub = downdoub * 8 * 1000;
		}
		if (comboBox5->Text == "Megabytes") // converts the down speed in megabytes, to bits
		{
			downdoub = downdoub * 8 * 1000000;
		}
		if (comboBox5->Text == "Gigabytes") // converts the down speed in gigabytes, to bits
		{
			downdoub = downdoub * 8 * 1000000000;
		}

		//file size conversions


		if (comboBox7->Text == "Kilobits") // converts the file size in kilobits, to bits
		{
			filedoub = filedoub * 1000;
		}
		if (comboBox7->Text == "Megabits") // converts the file size in megabits, to bits
		{
			filedoub = filedoub * 1000000;
		}
		if (comboBox7->Text == "Gigabits") // converts the file size in gigabits, to bits
		{
			filedoub = filedoub * 1000000000000;
		}
		if (comboBox7->Text == "Bytes") // converts the file size in bytes, to bits
		{
			filedoub = filedoub * 8;
		}
		if (comboBox7->Text == "KiloBytes") // converts the file size in kilobytes, to bits
		{
			filedoub = filedoub * 8 * 1000;
		}
		if (comboBox7->Text == "MegaBytes") // converts the file size in megabytes, to bits
		{
			filedoub = filedoub * 8 * 1000000;
		}
		if (comboBox7->Text == "GigaBytes") // converts the file size in gigabytes, to bits
		{
			filedoub = filedoub * 8 * 1000000000;
		}

		if (comboBox7->Text == "Minute") // convert minutes to seconds
		{
			downdoub = downdoub / 60;
		}
		if (comboBox7->Text == "Hour") //convert hours to seconds
		{
			downdoub = downdoub / 60 / 60;
		}



		double resultdowntimeS = filedoub / downdoub;//download time entirely in seconds

		//converting seconds to hours
		double resultdowntimeH = resultdowntimeS / 3600; //converting the seconds into hours as a double
		int resultfinalH = resultdowntimeH; //isolated hour value, removing anything after the decimal place
		double resultnextH1 = resultdowntimeH - resultfinalH; //remainder fraction of hour

		//getting remainder minutes from hours
		double resultdowntimeM = resultnextH1 * 60; //converting hour fraction into minutes
		int resultfinalM = resultdowntimeM; //removing fraction of minute, anything after decimal point
		double resultnextM1 = resultdowntimeM - resultfinalM; //remainder fraction of seconds



		double resultfinalS = resultnextM1 * 60; //converting fraction of minute into seconds






		//converting double to standard strings
		std::string finalH = std::to_string(resultfinalH);
		std::string finalM = std::to_string(resultfinalM);
		std::string finalS = std::to_string(resultfinalS);


		//converting the standard strings from above, into System strings that can be displayed in a label on the form
		//setting the label's text to the new string
		String^ strsecond = gcnew String(finalS.c_str());
		label15->Text = strsecond + " Seconds";
		String^ strminute = gcnew String(finalM.c_str());
		label19->Text = strminute + " Minutes";
		String^ strhour = gcnew String(finalH.c_str());
		label22->Text = strhour + " Hours";

	}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) 
{
	std::string timetype;
	//converting the input of download speed value and file size value inputs from system strings to standard strings

	std::string downspeeda = msclr::interop::marshal_as<std::string>(textBox1->Text);

	//converting the, now, standard strings into doubles
	double downspeeddoub = stod(downspeeda);

	if (comboBox2->Text == "Kilobits") // converts the down speed in kilobits, to bits
	{
		downspeeddoub = downspeeddoub * 1000;
	}
	if (comboBox2->Text == "Megabits") // converts the down speed in megabits, to bits
	{
		downspeeddoub = downspeeddoub * 1000000;
	}
	if (comboBox2->Text == "Gigabits") // converts the down speed in gigabits, to bits
	{
		downspeeddoub = downspeeddoub * 1000000000;
	}
	if (comboBox2->Text == "Bytes") // converts the down speed in bytes, to bits
	{
		downspeeddoub = downspeeddoub * 8;
	}
	if (comboBox2->Text == "Kilobytes") // converts the down speed in kilobytes, to bits
	{
		downspeeddoub = downspeeddoub * 8 * 1000;
	}
	if (comboBox2->Text == "MegaBytes") // converts the down speed in megabytes, to bits
	{
		downspeeddoub = downspeeddoub * 8 * 1000000;
	}
	if (comboBox2->Text == "Gigabytes") // converts the down speed in gigabytes, to bits
	{
		downspeeddoub = downspeeddoub * 8 * 1000000000;
	}
	if (comboBox1->Text == "Minute") // convert speed from per minute to per second
	{
		downspeeddoub = downspeeddoub / 60;
	}
	if (comboBox1->Text == "Hour") //convert speed from per hour to per second
	{
		downspeeddoub = downspeeddoub / 3600;
	}
	//storing download speed in a new double, speed is currently in form of bits per second
	double rawdownog = downspeeddoub;

	if (comboBox3->Text == "Kilobits") // converts the down speed from bits to kilobits
	{
		rawdownog = rawdownog / 1000;
		label10->Text = "Kilobits/";
	}
	if (comboBox3->Text == "Megabits") // converts the down speed from bits to megabits
	{
		rawdownog = rawdownog / 1000000;
		label10->Text = "Megabits/";
	}
	if (comboBox3->Text == "Gigabits") // converts the down speed in bits to gigabits
	{
		rawdownog = rawdownog / 1000000000000;
		label10->Text = "Gigabits/";
	}
	if (comboBox3->Text == "Bytes") // converts the down speed in bits to bytes
	{
		rawdownog = rawdownog / 8;
		label10->Text = "Bytes/";
	}
	if (comboBox3->Text == "KiloBytes") // converts the down speed in bits to kilobytes
	{
		rawdownog = rawdownog / 8 / 1000;
		label10->Text = "KiloBytes/";
	}
	if (comboBox3->Text == "MegaBytes") // converts the down speed in bits to megabytes
	{
		rawdownog = rawdownog / 8 / 1000000;
		label10->Text = "MegaBytes/";
	}
	if (comboBox3->Text == "GigaBytes") // converts the down speed in bits to gigabytes
	{
		rawdownog = rawdownog / 8 / 1000000000;
		label10->Text = "GigaBytes/";
	}
	if (comboBox6->Text == "Second") // convert speed from per second to per minute
	{
		String^ timetype = "second";
	}
	if (comboBox6->Text == "Minute") // convert speed from per second to per minute
	{
		rawdownog = rawdownog * 60;
		std::string timetype = "minute";
	}
	if (comboBox6->Text == "Hour") //convert speed from per second to per minute
	{
		rawdownog = rawdownog * 3600;
		std::string timetype = "hour";
	}
	std::string downstring = std::to_string(rawdownog);
	std::string downstring2 = downstring + timetype;
	String^ strspeed = gcnew String(downstring2.c_str());
	
	label10->Text = comboBox3->Text +"/" + comboBox6->Text;
	textBox2->Text = strspeed;



}
private: System::Void label10_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
}
};
}
