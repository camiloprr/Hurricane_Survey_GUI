#pragma once
#include "QuestionsForm.h"

namespace HurricaneSurvey10 {

    using namespace System;
    using namespace System::ComponentModel;
    using namespace System::Collections;
    using namespace System::Windows::Forms;
    using namespace System::Data;
    using namespace System::Drawing;

    public ref class MyForm1 : public System::Windows::Forms::Form
    {
    public:
        MyForm1(void)
        {
            InitializeComponent();
            comboBox1->Items->Add("Lee");
            comboBox1->Items->Add("Collier");
            comboBox1->Items->Add("Glades");
            comboBox1->Items->Add("Hendry");
            comboBox1->Items->Add("Charlotte");
            comboBox1->SelectedIndex = -1; // Optionally, no selection initially
        }

    protected:
        ~MyForm1()
        {
            if (components)
            {
                delete components;
            }
        }

    private: System::Windows::Forms::Label^ label1;
    private: System::Windows::Forms::TextBox^ textBox1;
    private: System::Windows::Forms::TextBox^ textBox2;
    private: System::Windows::Forms::TextBox^ textBox3;
    private: System::Windows::Forms::Label^ label2;
    private: System::Windows::Forms::Label^ label3;
    private: System::Windows::Forms::Label^ label4;
    private: System::Windows::Forms::Button^ button1;
    private: System::Windows::Forms::ComboBox^ comboBox1;

           System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
           void InitializeComponent(void)
           {
               this->label1 = (gcnew System::Windows::Forms::Label());
               this->textBox1 = (gcnew System::Windows::Forms::TextBox());
               this->textBox2 = (gcnew System::Windows::Forms::TextBox());
               this->textBox3 = (gcnew System::Windows::Forms::TextBox());
               this->label2 = (gcnew System::Windows::Forms::Label());
               this->label3 = (gcnew System::Windows::Forms::Label());
               this->label4 = (gcnew System::Windows::Forms::Label());
               this->button1 = (gcnew System::Windows::Forms::Button());
               this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
               this->SuspendLayout();
               // 
               // label1
               // 
               this->label1->AutoSize = true;
               this->label1->Location = System::Drawing::Point(78, 9);
               this->label1->Name = L"label1";
               this->label1->Size = System::Drawing::Size(230, 20);
               this->label1->TabIndex = 0;
               this->label1->Text = L"Please, fill in with your details";
               // 
               // textBox1
               // 
               this->textBox1->Location = System::Drawing::Point(12, 82);
               this->textBox1->Name = L"textBox1";
               this->textBox1->Size = System::Drawing::Size(149, 27);
               this->textBox1->TabIndex = 1;
               this->textBox1->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm1::textBox_KeyPress_LettersOnly);
               // 
               // textBox2
               // 
               this->textBox2->Location = System::Drawing::Point(239, 82);
               this->textBox2->Name = L"textBox2";
               this->textBox2->Size = System::Drawing::Size(167, 27);
               this->textBox2->TabIndex = 2;
               this->textBox2->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm1::textBox_KeyPress_LettersOnly);
               // 
               // textBox3
               // 
               this->textBox3->Location = System::Drawing::Point(12, 155);
               this->textBox3->Name = L"textBox3";
               this->textBox3->Size = System::Drawing::Size(59, 27);
               this->textBox3->TabIndex = 3;
               this->textBox3->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm1::textBox3_KeyPress_NumbersOnly);
               this->textBox3->Validating += gcnew System::ComponentModel::CancelEventHandler(this, &MyForm1::textBox3_Validating);
               // 
               // label2
               // 
               this->label2->AutoSize = true;
               this->label2->Location = System::Drawing::Point(12, 59);
               this->label2->Name = L"label2";
               this->label2->Size = System::Drawing::Size(92, 20);
               this->label2->TabIndex = 4;
               this->label2->Text = L"First Name";
               // 
               // label3
               // 
               this->label3->AutoSize = true;
               this->label3->Location = System::Drawing::Point(235, 59);
               this->label3->Name = L"label3";
               this->label3->Size = System::Drawing::Size(91, 20);
               this->label3->TabIndex = 5;
               this->label3->Text = L"Last Name";
               // 
               // label4
               // 
               this->label4->AutoSize = true;
               this->label4->Location = System::Drawing::Point(12, 132);
               this->label4->Name = L"label4";
               this->label4->Size = System::Drawing::Size(38, 20);
               this->label4->TabIndex = 6;
               this->label4->Text = L"Age";
               // 
               // button1
               // 
               this->button1->Location = System::Drawing::Point(151, 269);
               this->button1->Name = L"button1";
               this->button1->Size = System::Drawing::Size(108, 29);
               this->button1->TabIndex = 7;
               this->button1->Text = L"continue";
               this->button1->UseVisualStyleBackColor = true;
               this->button1->Click += gcnew System::EventHandler(this, &MyForm1::button1_Click);
               // 
               // comboBox1
               // 
               this->comboBox1->FormattingEnabled = true;
               this->comboBox1->Location = System::Drawing::Point(239, 155);
               this->comboBox1->Name = L"comboBox1";
               this->comboBox1->Size = System::Drawing::Size(167, 28);
               this->comboBox1->TabIndex = 8;
               this->comboBox1->Text = L"(Select County)";
               this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm1::comboBox1_SelectedIndexChanged);
               // 
               // MyForm1
               // 
               this->AutoScaleDimensions = System::Drawing::SizeF(10, 20);
               this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
               this->ClientSize = System::Drawing::Size(418, 310);
               this->Controls->Add(this->comboBox1);
               this->Controls->Add(this->button1);
               this->Controls->Add(this->label4);
               this->Controls->Add(this->label3);
               this->Controls->Add(this->label2);
               this->Controls->Add(this->textBox3);
               this->Controls->Add(this->textBox2);
               this->Controls->Add(this->textBox1);
               this->Controls->Add(this->label1);
               this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.75F));
               this->Margin = System::Windows::Forms::Padding(5);
               this->Name = L"MyForm1";
               this->Text = L"MyForm1";
               this->ResumeLayout(false);
               this->PerformLayout();

           }
#pragma endregion

    private:
        bool ValidateAgeInput(String^ input, int% age) {
            if (Int32::TryParse(input, age) && age >= 18 && age <= 99) {
                return true;
            }
            return false;
        }

    private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
        int age;
        if (!ValidateAgeInput(textBox3->Text, age)) {
            MessageBox::Show("Age must be between 18 and 99.", "Invalid Age", MessageBoxButtons::OK, MessageBoxIcon::Error);
            return; // Prevents form transition
        }
        MyForm2^ Questions = gcnew MyForm2;
        Questions->Show();
        this->Close();
    }

    private: System::Void textBox_KeyPress_LettersOnly(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
        if (!Char::IsLetter(e->KeyChar) && e->KeyChar != (char)Keys::Back) {
            e->Handled = true; // Only allows letters
        }
    }

    private: System::Void textBox3_KeyPress_NumbersOnly(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
        if (!Char::IsDigit(e->KeyChar) && e->KeyChar != (char)Keys::Back) {
            e->Handled = true; // Only allows digits
        }
    }

    private: System::Void textBox3_Validating(System::Object^ sender, System::ComponentModel::CancelEventArgs^ e) {
        int age;
        if (!ValidateAgeInput(textBox3->Text, age)) {
            MessageBox::Show("Age must be between 18 and 99.", "Invalid Age", MessageBoxButtons::OK, MessageBoxIcon::Error);
            e->Cancel = true;
        }
    }

    private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
        // Optional logic for comboBox1 selection changes
    }
    };
}
