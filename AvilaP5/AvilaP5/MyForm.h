#pragma once
#include "SimpleCalc.h"


namespace AvilaP5 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	SimpleCalc calc;
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
	private: System::Windows::Forms::TextBox^  txtNum1;
	protected:

	private: System::Windows::Forms::TextBox^  txtNum2;
	private: System::Windows::Forms::TextBox^  txtResult;
	private: System::Windows::Forms::Button^  btnAdd;
	private: System::Windows::Forms::Button^  btnMultiply;
	protected:

	protected:




	private: System::Windows::Forms::Button^  btnSubtract;
	private: System::Windows::Forms::Button^  btnClear;




	private: System::Windows::Forms::Button^  btnDivide;

	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  lblNum1;

	private: System::Windows::Forms::Label^  lblOps;



	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  lblNum2;

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
			this->txtNum1 = (gcnew System::Windows::Forms::TextBox());
			this->txtNum2 = (gcnew System::Windows::Forms::TextBox());
			this->txtResult = (gcnew System::Windows::Forms::TextBox());
			this->btnAdd = (gcnew System::Windows::Forms::Button());
			this->btnMultiply = (gcnew System::Windows::Forms::Button());
			this->btnSubtract = (gcnew System::Windows::Forms::Button());
			this->btnClear = (gcnew System::Windows::Forms::Button());
			this->btnDivide = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->lblNum1 = (gcnew System::Windows::Forms::Label());
			this->lblOps = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->lblNum2 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// txtNum1
			// 
			this->txtNum1->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtNum1->Location = System::Drawing::Point(76, 144);
			this->txtNum1->Margin = System::Windows::Forms::Padding(5, 4, 5, 4);
			this->txtNum1->Name = L"txtNum1";
			this->txtNum1->Size = System::Drawing::Size(148, 26);
			this->txtNum1->TabIndex = 0;
			// 
			// txtNum2
			// 
			this->txtNum2->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtNum2->Location = System::Drawing::Point(387, 144);
			this->txtNum2->Margin = System::Windows::Forms::Padding(5, 4, 5, 4);
			this->txtNum2->Name = L"txtNum2";
			this->txtNum2->Size = System::Drawing::Size(148, 26);
			this->txtNum2->TabIndex = 1;
			// 
			// txtResult
			// 
			this->txtResult->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtResult->Location = System::Drawing::Point(663, 144);
			this->txtResult->Margin = System::Windows::Forms::Padding(5, 4, 5, 4);
			this->txtResult->Name = L"txtResult";
			this->txtResult->Size = System::Drawing::Size(243, 26);
			this->txtResult->TabIndex = 2;
			// 
			// btnAdd
			// 
			this->btnAdd->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnAdd->ForeColor = System::Drawing::SystemColors::ControlText;
			this->btnAdd->Location = System::Drawing::Point(222, 227);
			this->btnAdd->Margin = System::Windows::Forms::Padding(5, 4, 5, 4);
			this->btnAdd->Name = L"btnAdd";
			this->btnAdd->Size = System::Drawing::Size(69, 56);
			this->btnAdd->TabIndex = 3;
			this->btnAdd->Text = L"+";
			this->btnAdd->UseVisualStyleBackColor = true;
			this->btnAdd->Click += gcnew System::EventHandler(this, &MyForm::btnAdd_Click);
			// 
			// btnMultiply
			// 
			this->btnMultiply->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnMultiply->Location = System::Drawing::Point(645, 227);
			this->btnMultiply->Margin = System::Windows::Forms::Padding(5, 4, 5, 4);
			this->btnMultiply->Name = L"btnMultiply";
			this->btnMultiply->Size = System::Drawing::Size(69, 56);
			this->btnMultiply->TabIndex = 5;
			this->btnMultiply->Text = L"*";
			this->btnMultiply->UseVisualStyleBackColor = true;
			this->btnMultiply->Click += gcnew System::EventHandler(this, &MyForm::btnMultiply_Click);
			// 
			// btnSubtract
			// 
			this->btnSubtract->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnSubtract->Location = System::Drawing::Point(356, 227);
			this->btnSubtract->Margin = System::Windows::Forms::Padding(5, 4, 5, 4);
			this->btnSubtract->Name = L"btnSubtract";
			this->btnSubtract->Size = System::Drawing::Size(69, 56);
			this->btnSubtract->TabIndex = 6;
			this->btnSubtract->Text = L"-";
			this->btnSubtract->UseVisualStyleBackColor = true;
			this->btnSubtract->Click += gcnew System::EventHandler(this, &MyForm::btnSubtract_Click);
			// 
			// btnClear
			// 
			this->btnClear->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnClear->Location = System::Drawing::Point(779, 281);
			this->btnClear->Margin = System::Windows::Forms::Padding(5, 4, 5, 4);
			this->btnClear->Name = L"btnClear";
			this->btnClear->Size = System::Drawing::Size(69, 56);
			this->btnClear->TabIndex = 7;
			this->btnClear->Text = L"Clear";
			this->btnClear->UseVisualStyleBackColor = true;
			this->btnClear->Click += gcnew System::EventHandler(this, &MyForm::btnClear_Click);
			// 
			// btnDivide
			// 
			this->btnDivide->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnDivide->Location = System::Drawing::Point(502, 227);
			this->btnDivide->Margin = System::Windows::Forms::Padding(5, 4, 5, 4);
			this->btnDivide->Name = L"btnDivide";
			this->btnDivide->Size = System::Drawing::Size(69, 56);
			this->btnDivide->TabIndex = 8;
			this->btnDivide->Text = L"/";
			this->btnDivide->UseVisualStyleBackColor = true;
			this->btnDivide->Click += gcnew System::EventHandler(this, &MyForm::btnDivide_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label1->Location = System::Drawing::Point(323, 9);
			this->label1->Margin = System::Windows::Forms::Padding(5, 0, 5, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(233, 38);
			this->label1->TabIndex = 9;
			this->label1->Text = L"Welcome to the Simple Calculator.\r\nEnter numbers and click buttons.";
			// 
			// lblNum1
			// 
			this->lblNum1->AutoSize = true;
			this->lblNum1->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblNum1->ForeColor = System::Drawing::SystemColors::Control;
			this->lblNum1->Location = System::Drawing::Point(121, 121);
			this->lblNum1->Margin = System::Windows::Forms::Padding(5, 0, 5, 0);
			this->lblNum1->Name = L"lblNum1";
			this->lblNum1->Size = System::Drawing::Size(75, 19);
			this->lblNum1->TabIndex = 10;
			this->lblNum1->Text = L"Operand 1";
			// 
			// lblOps
			// 
			this->lblOps->AutoSize = true;
			this->lblOps->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblOps->ForeColor = System::Drawing::SystemColors::Control;
			this->lblOps->Location = System::Drawing::Point(291, 139);
			this->lblOps->Margin = System::Windows::Forms::Padding(5, 0, 5, 0);
			this->lblOps->Name = L"lblOps";
			this->lblOps->Size = System::Drawing::Size(0, 40);
			this->lblOps->TabIndex = 11;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::SystemColors::Control;
			this->label4->Location = System::Drawing::Point(584, 139);
			this->label4->Margin = System::Windows::Forms::Padding(5, 0, 5, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(35, 40);
			this->label4->TabIndex = 12;
			this->label4->Text = L"=";
			// 
			// lblNum2
			// 
			this->lblNum2->AutoSize = true;
			this->lblNum2->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblNum2->ForeColor = System::Drawing::SystemColors::Control;
			this->lblNum2->Location = System::Drawing::Point(424, 121);
			this->lblNum2->Margin = System::Windows::Forms::Padding(5, 0, 5, 0);
			this->lblNum2->Name = L"lblNum2";
			this->lblNum2->Size = System::Drawing::Size(75, 19);
			this->lblNum2->TabIndex = 13;
			this->lblNum2->Text = L"Operand 2";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 17);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::DarkSlateGray;
			this->ClientSize = System::Drawing::Size(925, 406);
			this->Controls->Add(this->lblNum2);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->lblOps);
			this->Controls->Add(this->lblNum1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->btnDivide);
			this->Controls->Add(this->btnClear);
			this->Controls->Add(this->btnSubtract);
			this->Controls->Add(this->btnMultiply);
			this->Controls->Add(this->btnAdd);
			this->Controls->Add(this->txtResult);
			this->Controls->Add(this->txtNum2);
			this->Controls->Add(this->txtNum1);
			this->Font = (gcnew System::Drawing::Font(L"Elephant", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Margin = System::Windows::Forms::Padding(5, 4, 5, 4);
			this->Name = L"MyForm";
			this->Text = L"Simple Calculator";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion


	private: System::Void btnAdd_Click(System::Object^  sender, System::EventArgs^  e)
	{
		double n1 = Convert::ToDouble(txtNum1->Text);
		double n2 = Convert::ToDouble(txtNum2->Text);
		calc.SetOperation('+', n1, n2);
		txtResult->Text = gcnew String(calc.GetAnswer().ToString("f2"));
		lblOps->Text = "+";
	}
	private: System::Void btnSubtract_Click(System::Object^  sender, System::EventArgs^  e)
	{
		double n1 = Convert::ToDouble(txtNum1->Text);
		double n2 = Convert::ToDouble(txtNum2->Text);
		calc.SetOperation('-', n1, n2);
		txtResult->Text = gcnew String(calc.GetAnswer().ToString("f2"));
		lblOps->Text = "-";
	}
	private: System::Void btnDivide_Click(System::Object^  sender, System::EventArgs^  e)
	{
		double n1 = Convert::ToDouble(txtNum1->Text);
		double n2 = Convert::ToDouble(txtNum2->Text);

	
		calc.SetOperation('/', n1, n2);
		txtResult->Text = gcnew String(calc.GetResults().c_str());
		lblOps->Text = "/";
	}
	private: System::Void btnMultiply_Click(System::Object^  sender, System::EventArgs^  e)
	{
		double n1 = Convert::ToDouble(txtNum1->Text);
		double n2 = Convert::ToDouble(txtNum2->Text);
		calc.SetOperation('*', n1, n2);
		txtResult->Text = gcnew String(calc.GetAnswer().ToString("F2"));
		lblOps->Text = "*";
	}


	private: System::Void btnClear_Click(System::Object^  sender, System::EventArgs^  e) 
	{
		txtNum1->Clear();
		txtNum2->Clear();
		txtResult->Clear();
		lblOps->Text = "";

	}
};
}

