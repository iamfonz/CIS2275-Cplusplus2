#pragma once


#include<fstream>
#include "Enigma.h"
#include "DaileyShift.h"
#include "PrimeShiftEnigma.h"
#include "Shifty.h"
#include "UtilityFunctions.h"


namespace AvilaP10 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;

	/// <summary>
	/// Summary for MyForm
	/// </summary>

	Enigma *pE[3];
	PrimeShiftEnigma pse;
	Shifty se;
	DaileyShift de;


	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			pE[0] = &pse;
			pE[1] = &se;
			pE[2] = &de;
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
	private: System::Windows::Forms::Label^  lblTitle1;
	private: System::Windows::Forms::Label^  lblTitle2;
	private: System::Windows::Forms::Label^  lblKey;
	private: System::Windows::Forms::GroupBox^  gpbxEncode;
	private: System::Windows::Forms::TextBox^  txbMessage;
	private: System::Windows::Forms::Label^  lblEnterMessage;
	private: System::Windows::Forms::NumericUpDown^  nudKey;

	private: System::Windows::Forms::RadioButton^  rbRandomKey;

	private: System::Windows::Forms::RadioButton^  rbChooseKey;
	private: System::Windows::Forms::GroupBox^  gpbxEncodingStyles;
	private: System::Windows::Forms::RadioButton^  rbDailey;
	private: System::Windows::Forms::RadioButton^  rbShifty;
	private: System::Windows::Forms::RadioButton^  rbPrime;
	private: System::Windows::Forms::GroupBox^  gpbxDecode;
	private: System::Windows::Forms::Button^  btnEncode;
	private: System::Windows::Forms::Button^  btnDecode;
	private: System::Windows::Forms::Button^  btnClear;
	private: System::Windows::Forms::Label^  lblMessage;
	private: System::Windows::Forms::Label^  lblCodedMessage;
	private: System::Windows::Forms::Label^  lblKeyVal;
	private: System::Windows::Forms::Label^  lblShift;
	private: System::Windows::Forms::TextBox^  txbFinalMessage;
	private: System::Windows::Forms::TextBox^  txbFinalDecoded;
	private: System::Windows::Forms::TextBox^  txbKey;
	private: System::Windows::Forms::TextBox^  txbShiftIndex;
	private: System::Windows::Forms::OpenFileDialog^  openFileDialog1;
	private: System::Windows::Forms::SaveFileDialog^  saveFileDialog1;
	private: System::Windows::Forms::Label^  lblStatus;
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
			this->lblTitle1 = (gcnew System::Windows::Forms::Label());
			this->lblTitle2 = (gcnew System::Windows::Forms::Label());
			this->lblKey = (gcnew System::Windows::Forms::Label());
			this->gpbxEncode = (gcnew System::Windows::Forms::GroupBox());
			this->btnEncode = (gcnew System::Windows::Forms::Button());
			this->gpbxEncodingStyles = (gcnew System::Windows::Forms::GroupBox());
			this->rbDailey = (gcnew System::Windows::Forms::RadioButton());
			this->rbShifty = (gcnew System::Windows::Forms::RadioButton());
			this->rbPrime = (gcnew System::Windows::Forms::RadioButton());
			this->txbMessage = (gcnew System::Windows::Forms::TextBox());
			this->lblEnterMessage = (gcnew System::Windows::Forms::Label());
			this->nudKey = (gcnew System::Windows::Forms::NumericUpDown());
			this->rbRandomKey = (gcnew System::Windows::Forms::RadioButton());
			this->rbChooseKey = (gcnew System::Windows::Forms::RadioButton());
			this->gpbxDecode = (gcnew System::Windows::Forms::GroupBox());
			this->btnDecode = (gcnew System::Windows::Forms::Button());
			this->btnClear = (gcnew System::Windows::Forms::Button());
			this->lblMessage = (gcnew System::Windows::Forms::Label());
			this->lblCodedMessage = (gcnew System::Windows::Forms::Label());
			this->lblKeyVal = (gcnew System::Windows::Forms::Label());
			this->lblShift = (gcnew System::Windows::Forms::Label());
			this->txbFinalMessage = (gcnew System::Windows::Forms::TextBox());
			this->txbFinalDecoded = (gcnew System::Windows::Forms::TextBox());
			this->txbKey = (gcnew System::Windows::Forms::TextBox());
			this->txbShiftIndex = (gcnew System::Windows::Forms::TextBox());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->saveFileDialog1 = (gcnew System::Windows::Forms::SaveFileDialog());
			this->lblStatus = (gcnew System::Windows::Forms::Label());
			this->gpbxEncode->SuspendLayout();
			this->gpbxEncodingStyles->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->nudKey))->BeginInit();
			this->gpbxDecode->SuspendLayout();
			this->SuspendLayout();
			// 
			// lblTitle1
			// 
			this->lblTitle1->AutoSize = true;
			this->lblTitle1->Font = (gcnew System::Drawing::Font(L"Stencil", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblTitle1->ForeColor = System::Drawing::Color::DarkOliveGreen;
			this->lblTitle1->Location = System::Drawing::Point(318, 10);
			this->lblTitle1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lblTitle1->Name = L"lblTitle1";
			this->lblTitle1->Size = System::Drawing::Size(208, 22);
			this->lblTitle1->TabIndex = 0;
			this->lblTitle1->Text = L"Presented to you is";
			// 
			// lblTitle2
			// 
			this->lblTitle2->AutoSize = true;
			this->lblTitle2->Font = (gcnew System::Drawing::Font(L"Stencil", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblTitle2->ForeColor = System::Drawing::Color::DarkOliveGreen;
			this->lblTitle2->Location = System::Drawing::Point(260, 31);
			this->lblTitle2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lblTitle2->Name = L"lblTitle2";
			this->lblTitle2->Size = System::Drawing::Size(323, 57);
			this->lblTitle2->TabIndex = 1;
			this->lblTitle2->Text = L"THE ENIGMA!";
			// 
			// lblKey
			// 
			this->lblKey->AutoSize = true;
			this->lblKey->Font = (gcnew System::Drawing::Font(L"Stencil", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblKey->Location = System::Drawing::Point(150, 46);
			this->lblKey->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lblKey->Name = L"lblKey";
			this->lblKey->Size = System::Drawing::Size(133, 22);
			this->lblKey->TabIndex = 2;
			this->lblKey->Text = L"Select a Key";
			// 
			// gpbxEncode
			// 
			this->gpbxEncode->Controls->Add(this->btnEncode);
			this->gpbxEncode->Controls->Add(this->gpbxEncodingStyles);
			this->gpbxEncode->Controls->Add(this->txbMessage);
			this->gpbxEncode->Controls->Add(this->lblEnterMessage);
			this->gpbxEncode->Controls->Add(this->nudKey);
			this->gpbxEncode->Controls->Add(this->rbRandomKey);
			this->gpbxEncode->Controls->Add(this->lblKey);
			this->gpbxEncode->Controls->Add(this->rbChooseKey);
			this->gpbxEncode->Font = (gcnew System::Drawing::Font(L"Stencil", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->gpbxEncode->Location = System::Drawing::Point(12, 91);
			this->gpbxEncode->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->gpbxEncode->Name = L"gpbxEncode";
			this->gpbxEncode->Padding = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->gpbxEncode->Size = System::Drawing::Size(835, 226);
			this->gpbxEncode->TabIndex = 3;
			this->gpbxEncode->TabStop = false;
			this->gpbxEncode->Text = L"Encode a Message";
			// 
			// btnEncode
			// 
			this->btnEncode->Font = (gcnew System::Drawing::Font(L"Stencil", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnEncode->Location = System::Drawing::Point(547, 173);
			this->btnEncode->Name = L"btnEncode";
			this->btnEncode->Size = System::Drawing::Size(172, 47);
			this->btnEncode->TabIndex = 8;
			this->btnEncode->Text = L"Encode";
			this->btnEncode->UseVisualStyleBackColor = true;
			this->btnEncode->Click += gcnew System::EventHandler(this, &MyForm::btnEncode_Click);
			// 
			// gpbxEncodingStyles
			// 
			this->gpbxEncodingStyles->Controls->Add(this->rbDailey);
			this->gpbxEncodingStyles->Controls->Add(this->rbShifty);
			this->gpbxEncodingStyles->Controls->Add(this->rbPrime);
			this->gpbxEncodingStyles->Font = (gcnew System::Drawing::Font(L"Stencil", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->gpbxEncodingStyles->Location = System::Drawing::Point(431, 38);
			this->gpbxEncodingStyles->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->gpbxEncodingStyles->Name = L"gpbxEncodingStyles";
			this->gpbxEncodingStyles->Padding = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->gpbxEncodingStyles->Size = System::Drawing::Size(396, 86);
			this->gpbxEncodingStyles->TabIndex = 7;
			this->gpbxEncodingStyles->TabStop = false;
			this->gpbxEncodingStyles->Text = L"Choose encoding style";
			// 
			// rbDailey
			// 
			this->rbDailey->AutoSize = true;
			this->rbDailey->Font = (gcnew System::Drawing::Font(L"Stencil", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->rbDailey->Location = System::Drawing::Point(261, 40);
			this->rbDailey->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->rbDailey->Name = L"rbDailey";
			this->rbDailey->Size = System::Drawing::Size(127, 20);
			this->rbDailey->TabIndex = 8;
			this->rbDailey->Text = L"Dailey Shift(3)";
			this->rbDailey->UseVisualStyleBackColor = true;
			// 
			// rbShifty
			// 
			this->rbShifty->AutoSize = true;
			this->rbShifty->Font = (gcnew System::Drawing::Font(L"Stencil", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->rbShifty->Location = System::Drawing::Point(148, 40);
			this->rbShifty->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->rbShifty->Name = L"rbShifty";
			this->rbShifty->Size = System::Drawing::Size(88, 20);
			this->rbShifty->TabIndex = 7;
			this->rbShifty->Text = L"Shifty(2)";
			this->rbShifty->UseVisualStyleBackColor = true;
			// 
			// rbPrime
			// 
			this->rbPrime->AutoSize = true;
			this->rbPrime->Checked = true;
			this->rbPrime->Font = (gcnew System::Drawing::Font(L"Stencil", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->rbPrime->Location = System::Drawing::Point(17, 40);
			this->rbPrime->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->rbPrime->Name = L"rbPrime";
			this->rbPrime->Size = System::Drawing::Size(123, 20);
			this->rbPrime->TabIndex = 6;
			this->rbPrime->TabStop = true;
			this->rbPrime->Text = L"Prime Shift(1)";
			this->rbPrime->UseVisualStyleBackColor = true;
			// 
			// txbMessage
			// 
			this->txbMessage->Font = (gcnew System::Drawing::Font(L"Times New Roman", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txbMessage->Location = System::Drawing::Point(74, 187);
			this->txbMessage->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->txbMessage->Name = L"txbMessage";
			this->txbMessage->Size = System::Drawing::Size(400, 22);
			this->txbMessage->TabIndex = 5;
			// 
			// lblEnterMessage
			// 
			this->lblEnterMessage->AutoSize = true;
			this->lblEnterMessage->Font = (gcnew System::Drawing::Font(L"Stencil", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblEnterMessage->Location = System::Drawing::Point(120, 151);
			this->lblEnterMessage->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lblEnterMessage->Name = L"lblEnterMessage";
			this->lblEnterMessage->Size = System::Drawing::Size(301, 22);
			this->lblEnterMessage->TabIndex = 4;
			this->lblEnterMessage->Text = L"Enter message to be encoded";
			// 
			// nudKey
			// 
			this->nudKey->Font = (gcnew System::Drawing::Font(L"Stencil", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->nudKey->Location = System::Drawing::Point(146, 75);
			this->nudKey->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->nudKey->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 50, 0, 0, 0 });
			this->nudKey->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->nudKey->Name = L"nudKey";
			this->nudKey->Size = System::Drawing::Size(52, 23);
			this->nudKey->TabIndex = 3;
			this->nudKey->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->nudKey->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			// 
			// rbRandomKey
			// 
			this->rbRandomKey->AutoSize = true;
			this->rbRandomKey->Font = (gcnew System::Drawing::Font(L"Stencil", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->rbRandomKey->Location = System::Drawing::Point(244, 75);
			this->rbRandomKey->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->rbRandomKey->Name = L"rbRandomKey";
			this->rbRandomKey->Size = System::Drawing::Size(162, 20);
			this->rbRandomKey->TabIndex = 1;
			this->rbRandomKey->Text = L"Randomly Generate";
			this->rbRandomKey->UseVisualStyleBackColor = true;
			// 
			// rbChooseKey
			// 
			this->rbChooseKey->AutoSize = true;
			this->rbChooseKey->Checked = true;
			this->rbChooseKey->Font = (gcnew System::Drawing::Font(L"Stencil", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->rbChooseKey->Location = System::Drawing::Point(8, 75);
			this->rbChooseKey->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->rbChooseKey->Name = L"rbChooseKey";
			this->rbChooseKey->Size = System::Drawing::Size(131, 20);
			this->rbChooseKey->TabIndex = 0;
			this->rbChooseKey->TabStop = true;
			this->rbChooseKey->Text = L"Set custom key";
			this->rbChooseKey->UseVisualStyleBackColor = true;
			// 
			// gpbxDecode
			// 
			this->gpbxDecode->Controls->Add(this->btnDecode);
			this->gpbxDecode->Font = (gcnew System::Drawing::Font(L"Stencil", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->gpbxDecode->Location = System::Drawing::Point(12, 323);
			this->gpbxDecode->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->gpbxDecode->Name = L"gpbxDecode";
			this->gpbxDecode->Padding = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->gpbxDecode->Size = System::Drawing::Size(394, 110);
			this->gpbxDecode->TabIndex = 4;
			this->gpbxDecode->TabStop = false;
			this->gpbxDecode->Text = L"Decode a message";
			// 
			// btnDecode
			// 
			this->btnDecode->Font = (gcnew System::Drawing::Font(L"Stencil", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnDecode->Location = System::Drawing::Point(111, 44);
			this->btnDecode->Name = L"btnDecode";
			this->btnDecode->Size = System::Drawing::Size(172, 47);
			this->btnDecode->TabIndex = 0;
			this->btnDecode->Text = L"decode";
			this->btnDecode->UseVisualStyleBackColor = true;
			this->btnDecode->Click += gcnew System::EventHandler(this, &MyForm::btnDecode_Click);
			// 
			// btnClear
			// 
			this->btnClear->Font = (gcnew System::Drawing::Font(L"Stencil", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnClear->Location = System::Drawing::Point(536, 328);
			this->btnClear->Name = L"btnClear";
			this->btnClear->Size = System::Drawing::Size(163, 86);
			this->btnClear->TabIndex = 5;
			this->btnClear->Text = L"Clear";
			this->btnClear->UseVisualStyleBackColor = true;
			this->btnClear->Click += gcnew System::EventHandler(this, &MyForm::btnClear_Click);
			// 
			// lblMessage
			// 
			this->lblMessage->AutoSize = true;
			this->lblMessage->Font = (gcnew System::Drawing::Font(L"Stencil", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblMessage->Location = System::Drawing::Point(205, 457);
			this->lblMessage->Name = L"lblMessage";
			this->lblMessage->Size = System::Drawing::Size(78, 19);
			this->lblMessage->TabIndex = 6;
			this->lblMessage->Text = L"Message";
			// 
			// lblCodedMessage
			// 
			this->lblCodedMessage->AutoSize = true;
			this->lblCodedMessage->Font = (gcnew System::Drawing::Font(L"Stencil", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblCodedMessage->Location = System::Drawing::Point(153, 489);
			this->lblCodedMessage->Name = L"lblCodedMessage";
			this->lblCodedMessage->Size = System::Drawing::Size(130, 19);
			this->lblCodedMessage->TabIndex = 7;
			this->lblCodedMessage->Text = L"Coded Message";
			// 
			// lblKeyVal
			// 
			this->lblKeyVal->AutoSize = true;
			this->lblKeyVal->Font = (gcnew System::Drawing::Font(L"Stencil", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblKeyVal->Location = System::Drawing::Point(243, 521);
			this->lblKeyVal->Name = L"lblKeyVal";
			this->lblKeyVal->Size = System::Drawing::Size(40, 19);
			this->lblKeyVal->TabIndex = 8;
			this->lblKeyVal->Text = L"Key";
			// 
			// lblShift
			// 
			this->lblShift->AutoSize = true;
			this->lblShift->Font = (gcnew System::Drawing::Font(L"Stencil", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblShift->Location = System::Drawing::Point(77, 553);
			this->lblShift->Name = L"lblShift";
			this->lblShift->Size = System::Drawing::Size(206, 19);
			this->lblShift->TabIndex = 9;
			this->lblShift->Text = L"Encoding Style number";
			// 
			// txbFinalMessage
			// 
			this->txbFinalMessage->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txbFinalMessage->Location = System::Drawing::Point(287, 450);
			this->txbFinalMessage->Name = L"txbFinalMessage";
			this->txbFinalMessage->Size = System::Drawing::Size(472, 26);
			this->txbFinalMessage->TabIndex = 10;
			// 
			// txbFinalDecoded
			// 
			this->txbFinalDecoded->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txbFinalDecoded->Location = System::Drawing::Point(287, 482);
			this->txbFinalDecoded->Name = L"txbFinalDecoded";
			this->txbFinalDecoded->Size = System::Drawing::Size(472, 26);
			this->txbFinalDecoded->TabIndex = 11;
			// 
			// txbKey
			// 
			this->txbKey->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txbKey->Location = System::Drawing::Point(287, 514);
			this->txbKey->Name = L"txbKey";
			this->txbKey->Size = System::Drawing::Size(48, 26);
			this->txbKey->TabIndex = 12;
			// 
			// txbShiftIndex
			// 
			this->txbShiftIndex->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txbShiftIndex->Location = System::Drawing::Point(287, 546);
			this->txbShiftIndex->Name = L"txbShiftIndex";
			this->txbShiftIndex->Size = System::Drawing::Size(48, 26);
			this->txbShiftIndex->TabIndex = 13;
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			// 
			// lblStatus
			// 
			this->lblStatus->AutoSize = true;
			this->lblStatus->Font = (gcnew System::Drawing::Font(L"Times New Roman", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblStatus->ForeColor = System::Drawing::Color::DarkGreen;
			this->lblStatus->Location = System::Drawing::Point(120, 588);
			this->lblStatus->Name = L"lblStatus";
			this->lblStatus->Size = System::Drawing::Size(57, 17);
			this->lblStatus->TabIndex = 14;
			this->lblStatus->Text = L"Status :";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(860, 614);
			this->Controls->Add(this->lblStatus);
			this->Controls->Add(this->txbShiftIndex);
			this->Controls->Add(this->txbKey);
			this->Controls->Add(this->txbFinalDecoded);
			this->Controls->Add(this->txbFinalMessage);
			this->Controls->Add(this->lblShift);
			this->Controls->Add(this->lblKeyVal);
			this->Controls->Add(this->lblCodedMessage);
			this->Controls->Add(this->lblMessage);
			this->Controls->Add(this->btnClear);
			this->Controls->Add(this->gpbxDecode);
			this->Controls->Add(this->gpbxEncode);
			this->Controls->Add(this->lblTitle2);
			this->Controls->Add(this->lblTitle1);
			this->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->Name = L"MyForm";
			this->Text = L"AvilaP10 - The Almighty Enigma";
			this->gpbxEncode->ResumeLayout(false);
			this->gpbxEncode->PerformLayout();
			this->gpbxEncodingStyles->ResumeLayout(false);
			this->gpbxEncodingStyles->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->nudKey))->EndInit();
			this->gpbxDecode->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btnDecode_Click(System::Object^  sender, System::EventArgs^  e) {

		//Decode Button event handler.  This is the OpenFile Dialog.
		// //Make two managed strings to read in the data from the file			 
		String^ mess;
		String^ kkey;
		String^ ecode;
		// //When you drag the file dialog controls onto your form, VS makes objects for you to use.  The default //object name is openFileDialog1
		// //initialize properties (see MSDN)
		openFileDialog1->InitialDirectory = "C://";
		openFileDialog1->Filter = "txt files (*.txt)|*.txt|All files (*.*)|*.*";
		openFileDialog1->FilterIndex = 2;
		openFileDialog1->RestoreDirectory = true;


		if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
		{
			if ((openFileDialog1->OpenFile()) != nullptr)  //Check that file is open
			{
				//read the stream now using the Stream Reader class by making a new Stream Reader object
				StreamReader^ input = gcnew StreamReader(openFileDialog1->FileName);

				mess = input->ReadLine();
				kkey = input->ReadLine();
				ecode = input->ReadLine();
				input->Close();

				//now we have two managed strings and we will have to convert them to native variables
				std::string codedMess;
				To_string(mess, codedMess);
				int kk = Convert::ToInt32(kkey);
				int ecde = Convert::ToInt32(ecode);

				////now set the inputs into our Enigma object
				pE[ecde]->SetCodedMessage(codedMess, kk);

				//and display the results in your textboxes: message, key and filename
				txbFinalMessage->Text = gcnew String(pE[ecde]->GetDecodedMessage().c_str());

				txbKey->Text = pE[ecde]->GetKey().ToString();

				txbFinalDecoded->Text = mess;
				txbShiftIndex->Text = (ecde+1).ToString();

				lblStatus->Text += " The file was successfully read. The coded message has been decoded.";
			}
			else
				lblStatus->Text += " File not opened!";
		}



	}
	private: System::Void btnEncode_Click(System::Object^  sender, System::EventArgs^  e) {

		//Encode Button event handler, SaveFile Dialog
		// Write data into a file
		std::string mess;
		saveFileDialog1->InitialDirectory = "//";
		saveFileDialog1->Filter = "txt files (*.txt)|*.txt|All files (*.*)|*.*";
		saveFileDialog1->FilterIndex = 2;
		saveFileDialog1->RestoreDirectory = true;
		if (saveFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
		{
			//convert managed string to native string so we can pass it into the Enigma class.
			To_string(txbMessage->Text, mess);  //get String from Message TextBox


			int ecode;
			if (rbPrime->Checked)
			{
				ecode = 0;
			}
			else if (rbShifty->Checked)
			{
				ecode = 1;
			}
			else if (rbDailey->Checked)
			{
				ecode = 2;
			}


			if (rbChooseKey->Checked)
			{
				int kk = Decimal::ToInt32(nudKey->Value);
				pE[ecode]->SetMessage(mess, kk);
			}
			else
			{
				pE[ecode]->SetMessage(mess);

			}
			//now get back the result
			txbFinalMessage->Text = gcnew String(pE[ecode]->GetDecodedMessage().c_str());
			txbFinalDecoded->Text = gcnew String(pE[ecode]->GetCodedMessage().c_str());
			txbKey->Text = pE[ecode]->GetKey().ToString();
			txbShiftIndex->Text = (ecode+1).ToString();
			 //and open the output stream
			 StreamWriter^ output = gcnew StreamWriter(saveFileDialog1->FileName);
			 output->WriteLine(gcnew String(pE[ecode]->GetCodedMessage().c_str()));
			 output->WriteLine(pE[ecode]->GetKey().ToString());
			 output->WriteLine(ecode.ToString());
			 output->Close();

			 lblStatus->Text += " Message successfully encoded. The file was successfully saved.";
		}
		 else	    
		 lblStatus->Text += "No file opened.";	


	}
	private: System::Void btnClear_Click(System::Object^  sender, System::EventArgs^  e) {

		txbFinalDecoded->Clear();
		txbFinalMessage->Clear();
		txbKey->Clear();
		txbMessage->Clear();
		txbShiftIndex->Clear();
		rbChooseKey->Checked = true;
		rbPrime->Checked = true;
		nudKey->Value = 1;
		lblStatus->Text = "Status :";

	}
};




}