#pragma once
#include "UtilityFunctions.h"
#include "TrainTickets.h"
#include "Date.h"

namespace AvilaP7 {

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
	private: System::Windows::Forms::Label^  lblInfo;
	private: System::Windows::Forms::Label^  lblResName;
	private: System::Windows::Forms::TextBox^  txbResName;
	private: System::Windows::Forms::Label^  lblPass;
	private: System::Windows::Forms::NumericUpDown^  nudPass;

	private: System::Windows::Forms::Label^  lblCity;
	private: System::Windows::Forms::RadioButton^  rbAlbuquerque;
	private: System::Windows::Forms::RadioButton^  Chicago;
	private: System::Windows::Forms::GroupBox^  gbxDeparture;
	private: System::Windows::Forms::NumericUpDown^  nudDepYear;
	private: System::Windows::Forms::NumericUpDown^  nudDepDay;
	private: System::Windows::Forms::NumericUpDown^  nudDepMon;
	private: System::Windows::Forms::Label^  lblDepYear;
	private: System::Windows::Forms::Label^  lblDepDay;
	private: System::Windows::Forms::Label^  lblDepMon;
	private: System::Windows::Forms::Label^  lblDeptx;
	private: System::Windows::Forms::GroupBox^  gbxReturn;
	private: System::Windows::Forms::NumericUpDown^  nudRetYear;
	private: System::Windows::Forms::NumericUpDown^  nudRetDay;
	private: System::Windows::Forms::NumericUpDown^  nudRetMon;
	private: System::Windows::Forms::Label^  lblRetYear;
	private: System::Windows::Forms::Label^  lblRetDay;
	private: System::Windows::Forms::Label^  lblRetMon;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Button^  btnBook;
	private: System::Windows::Forms::TextBox^  txbResults;
	private: System::Windows::Forms::Button^  btnAnother;
	private: System::Windows::Forms::CheckBox^  cbxRound;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->lblInfo = (gcnew System::Windows::Forms::Label());
			this->lblResName = (gcnew System::Windows::Forms::Label());
			this->txbResName = (gcnew System::Windows::Forms::TextBox());
			this->lblPass = (gcnew System::Windows::Forms::Label());
			this->nudPass = (gcnew System::Windows::Forms::NumericUpDown());
			this->lblCity = (gcnew System::Windows::Forms::Label());
			this->rbAlbuquerque = (gcnew System::Windows::Forms::RadioButton());
			this->Chicago = (gcnew System::Windows::Forms::RadioButton());
			this->gbxDeparture = (gcnew System::Windows::Forms::GroupBox());
			this->nudDepYear = (gcnew System::Windows::Forms::NumericUpDown());
			this->nudDepDay = (gcnew System::Windows::Forms::NumericUpDown());
			this->nudDepMon = (gcnew System::Windows::Forms::NumericUpDown());
			this->lblDepYear = (gcnew System::Windows::Forms::Label());
			this->lblDepDay = (gcnew System::Windows::Forms::Label());
			this->lblDepMon = (gcnew System::Windows::Forms::Label());
			this->lblDeptx = (gcnew System::Windows::Forms::Label());
			this->gbxReturn = (gcnew System::Windows::Forms::GroupBox());
			this->nudRetYear = (gcnew System::Windows::Forms::NumericUpDown());
			this->nudRetDay = (gcnew System::Windows::Forms::NumericUpDown());
			this->nudRetMon = (gcnew System::Windows::Forms::NumericUpDown());
			this->lblRetYear = (gcnew System::Windows::Forms::Label());
			this->lblRetDay = (gcnew System::Windows::Forms::Label());
			this->lblRetMon = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->btnBook = (gcnew System::Windows::Forms::Button());
			this->txbResults = (gcnew System::Windows::Forms::TextBox());
			this->btnAnother = (gcnew System::Windows::Forms::Button());
			this->cbxRound = (gcnew System::Windows::Forms::CheckBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->nudPass))->BeginInit();
			this->gbxDeparture->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->nudDepYear))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->nudDepDay))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->nudDepMon))->BeginInit();
			this->gbxReturn->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->nudRetYear))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->nudRetDay))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->nudRetMon))->BeginInit();
			this->SuspendLayout();
			// 
			// lblInfo
			// 
			this->lblInfo->AutoSize = true;
			this->lblInfo->BackColor = System::Drawing::SystemColors::Info;
			this->lblInfo->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblInfo->Location = System::Drawing::Point(24, 9);
			this->lblInfo->Name = L"lblInfo";
			this->lblInfo->Size = System::Drawing::Size(692, 108);
			this->lblInfo->TabIndex = 0;
			this->lblInfo->Text = resources->GetString(L"lblInfo.Text");
			this->lblInfo->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// lblResName
			// 
			this->lblResName->AutoSize = true;
			this->lblResName->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblResName->Location = System::Drawing::Point(44, 142);
			this->lblResName->Name = L"lblResName";
			this->lblResName->Size = System::Drawing::Size(170, 16);
			this->lblResName->TabIndex = 1;
			this->lblResName->Text = L"Enter the reservation name.";
			this->lblResName->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// txbResName
			// 
			this->txbResName->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txbResName->Location = System::Drawing::Point(220, 142);
			this->txbResName->Name = L"txbResName";
			this->txbResName->Size = System::Drawing::Size(170, 22);
			this->txbResName->TabIndex = 0;
			// 
			// lblPass
			// 
			this->lblPass->AutoSize = true;
			this->lblPass->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblPass->Location = System::Drawing::Point(470, 142);
			this->lblPass->Name = L"lblPass";
			this->lblPass->Size = System::Drawing::Size(145, 16);
			this->lblPass->TabIndex = 2;
			this->lblPass->Text = L"Number of passengers";
			// 
			// nudPass
			// 
			this->nudPass->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->nudPass->Location = System::Drawing::Point(621, 142);
			this->nudPass->Name = L"nudPass";
			this->nudPass->Size = System::Drawing::Size(67, 22);
			this->nudPass->TabIndex = 1;
			// 
			// lblCity
			// 
			this->lblCity->AutoSize = true;
			this->lblCity->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblCity->Location = System::Drawing::Point(185, 183);
			this->lblCity->Name = L"lblCity";
			this->lblCity->Size = System::Drawing::Size(168, 16);
			this->lblCity->TabIndex = 4;
			this->lblCity->Text = L"Select the city of departure.";
			// 
			// rbAlbuquerque
			// 
			this->rbAlbuquerque->AutoSize = true;
			this->rbAlbuquerque->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->rbAlbuquerque->Location = System::Drawing::Point(353, 183);
			this->rbAlbuquerque->Name = L"rbAlbuquerque";
			this->rbAlbuquerque->Size = System::Drawing::Size(103, 20);
			this->rbAlbuquerque->TabIndex = 2;
			this->rbAlbuquerque->TabStop = true;
			this->rbAlbuquerque->Text = L"Albuquerque";
			this->rbAlbuquerque->UseVisualStyleBackColor = true;
			// 
			// Chicago
			// 
			this->Chicago->AutoSize = true;
			this->Chicago->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Chicago->Location = System::Drawing::Point(463, 183);
			this->Chicago->Name = L"Chicago";
			this->Chicago->Size = System::Drawing::Size(76, 20);
			this->Chicago->TabIndex = 3;
			this->Chicago->TabStop = true;
			this->Chicago->Text = L"Chicago";
			this->Chicago->UseVisualStyleBackColor = true;
			// 
			// gbxDeparture
			// 
			this->gbxDeparture->Controls->Add(this->nudDepYear);
			this->gbxDeparture->Controls->Add(this->nudDepDay);
			this->gbxDeparture->Controls->Add(this->nudDepMon);
			this->gbxDeparture->Controls->Add(this->lblDepYear);
			this->gbxDeparture->Controls->Add(this->lblDepDay);
			this->gbxDeparture->Controls->Add(this->lblDepMon);
			this->gbxDeparture->Controls->Add(this->lblDeptx);
			this->gbxDeparture->Location = System::Drawing::Point(51, 217);
			this->gbxDeparture->Name = L"gbxDeparture";
			this->gbxDeparture->Size = System::Drawing::Size(254, 128);
			this->gbxDeparture->TabIndex = 7;
			this->gbxDeparture->TabStop = false;
			// 
			// nudDepYear
			// 
			this->nudDepYear->Location = System::Drawing::Point(161, 70);
			this->nudDepYear->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 2120, 0, 0, 0 });
			this->nudDepYear->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1970, 0, 0, 0 });
			this->nudDepYear->Name = L"nudDepYear";
			this->nudDepYear->Size = System::Drawing::Size(68, 20);
			this->nudDepYear->TabIndex = 6;
			this->nudDepYear->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 2016, 0, 0, 0 });
			// 
			// nudDepDay
			// 
			this->nudDepDay->Location = System::Drawing::Point(95, 70);
			this->nudDepDay->Name = L"nudDepDay";
			this->nudDepDay->Size = System::Drawing::Size(41, 20);
			this->nudDepDay->TabIndex = 5;
			// 
			// nudDepMon
			// 
			this->nudDepMon->Location = System::Drawing::Point(22, 70);
			this->nudDepMon->Name = L"nudDepMon";
			this->nudDepMon->Size = System::Drawing::Size(40, 20);
			this->nudDepMon->TabIndex = 4;
			// 
			// lblDepYear
			// 
			this->lblDepYear->AutoSize = true;
			this->lblDepYear->Location = System::Drawing::Point(181, 54);
			this->lblDepYear->Name = L"lblDepYear";
			this->lblDepYear->Size = System::Drawing::Size(29, 13);
			this->lblDepYear->TabIndex = 3;
			this->lblDepYear->Text = L"Year";
			// 
			// lblDepDay
			// 
			this->lblDepDay->AutoSize = true;
			this->lblDepDay->Location = System::Drawing::Point(102, 54);
			this->lblDepDay->Name = L"lblDepDay";
			this->lblDepDay->Size = System::Drawing::Size(26, 13);
			this->lblDepDay->TabIndex = 2;
			this->lblDepDay->Text = L"Day";
			// 
			// lblDepMon
			// 
			this->lblDepMon->AutoSize = true;
			this->lblDepMon->Location = System::Drawing::Point(24, 54);
			this->lblDepMon->Name = L"lblDepMon";
			this->lblDepMon->Size = System::Drawing::Size(37, 13);
			this->lblDepMon->TabIndex = 1;
			this->lblDepMon->Text = L"Month";
			// 
			// lblDeptx
			// 
			this->lblDeptx->AutoSize = true;
			this->lblDeptx->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblDeptx->Location = System::Drawing::Point(16, 20);
			this->lblDeptx->Name = L"lblDeptx";
			this->lblDeptx->Size = System::Drawing::Size(225, 16);
			this->lblDeptx->TabIndex = 0;
			this->lblDeptx->Text = L"Enter your desired date of departure.";
			// 
			// gbxReturn
			// 
			this->gbxReturn->Controls->Add(this->nudRetYear);
			this->gbxReturn->Controls->Add(this->nudRetDay);
			this->gbxReturn->Controls->Add(this->nudRetMon);
			this->gbxReturn->Controls->Add(this->lblRetYear);
			this->gbxReturn->Controls->Add(this->lblRetDay);
			this->gbxReturn->Controls->Add(this->lblRetMon);
			this->gbxReturn->Controls->Add(this->label4);
			this->gbxReturn->Enabled = false;
			this->gbxReturn->Location = System::Drawing::Point(438, 217);
			this->gbxReturn->Name = L"gbxReturn";
			this->gbxReturn->Size = System::Drawing::Size(254, 128);
			this->gbxReturn->TabIndex = 8;
			this->gbxReturn->TabStop = false;
			// 
			// nudRetYear
			// 
			this->nudRetYear->Location = System::Drawing::Point(161, 70);
			this->nudRetYear->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 2120, 0, 0, 0 });
			this->nudRetYear->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1970, 0, 0, 0 });
			this->nudRetYear->Name = L"nudRetYear";
			this->nudRetYear->Size = System::Drawing::Size(68, 20);
			this->nudRetYear->TabIndex = 10;
			this->nudRetYear->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 2016, 0, 0, 0 });
			// 
			// nudRetDay
			// 
			this->nudRetDay->Location = System::Drawing::Point(95, 70);
			this->nudRetDay->Name = L"nudRetDay";
			this->nudRetDay->Size = System::Drawing::Size(41, 20);
			this->nudRetDay->TabIndex = 9;
			// 
			// nudRetMon
			// 
			this->nudRetMon->Location = System::Drawing::Point(22, 70);
			this->nudRetMon->Name = L"nudRetMon";
			this->nudRetMon->Size = System::Drawing::Size(40, 20);
			this->nudRetMon->TabIndex = 8;
			// 
			// lblRetYear
			// 
			this->lblRetYear->AutoSize = true;
			this->lblRetYear->Location = System::Drawing::Point(181, 54);
			this->lblRetYear->Name = L"lblRetYear";
			this->lblRetYear->Size = System::Drawing::Size(29, 13);
			this->lblRetYear->TabIndex = 3;
			this->lblRetYear->Text = L"Year";
			// 
			// lblRetDay
			// 
			this->lblRetDay->AutoSize = true;
			this->lblRetDay->Location = System::Drawing::Point(102, 54);
			this->lblRetDay->Name = L"lblRetDay";
			this->lblRetDay->Size = System::Drawing::Size(26, 13);
			this->lblRetDay->TabIndex = 2;
			this->lblRetDay->Text = L"Day";
			// 
			// lblRetMon
			// 
			this->lblRetMon->AutoSize = true;
			this->lblRetMon->Location = System::Drawing::Point(24, 54);
			this->lblRetMon->Name = L"lblRetMon";
			this->lblRetMon->Size = System::Drawing::Size(37, 13);
			this->lblRetMon->TabIndex = 1;
			this->lblRetMon->Text = L"Month";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(29, 20);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(200, 16);
			this->label4->TabIndex = 0;
			this->label4->Text = L"Enter your desired date of return.";
			// 
			// btnBook
			// 
			this->btnBook->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->btnBook->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnBook->Location = System::Drawing::Point(261, 362);
			this->btnBook->Name = L"btnBook";
			this->btnBook->Size = System::Drawing::Size(209, 38);
			this->btnBook->TabIndex = 11;
			this->btnBook->Text = L"Book Reservation";
			this->btnBook->UseVisualStyleBackColor = false;
			this->btnBook->Click += gcnew System::EventHandler(this, &MyForm::btnBook_Click);
			// 
			// txbResults
			// 
			this->txbResults->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->txbResults->Enabled = false;
			this->txbResults->Location = System::Drawing::Point(51, 434);
			this->txbResults->Multiline = true;
			this->txbResults->Name = L"txbResults";
			this->txbResults->Size = System::Drawing::Size(665, 172);
			this->txbResults->TabIndex = 13;
			// 
			// btnAnother
			// 
			this->btnAnother->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->btnAnother->Location = System::Drawing::Point(599, 362);
			this->btnAnother->Name = L"btnAnother";
			this->btnAnother->Size = System::Drawing::Size(112, 38);
			this->btnAnother->TabIndex = 12;
			this->btnAnother->Text = L"Book Another Reservation";
			this->btnAnother->UseVisualStyleBackColor = false;
			// 
			// cbxRound
			// 
			this->cbxRound->AutoSize = true;
			this->cbxRound->Location = System::Drawing::Point(333, 271);
			this->cbxRound->Name = L"cbxRound";
			this->cbxRound->Size = System::Drawing::Size(78, 17);
			this->cbxRound->TabIndex = 7;
			this->cbxRound->Text = L"Roundtrip\?";
			this->cbxRound->UseVisualStyleBackColor = true;
			this->cbxRound->CheckedChanged += gcnew System::EventHandler(this, &MyForm::cbxRound_CheckedChanged);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(741, 618);
			this->Controls->Add(this->cbxRound);
			this->Controls->Add(this->btnAnother);
			this->Controls->Add(this->txbResults);
			this->Controls->Add(this->btnBook);
			this->Controls->Add(this->gbxReturn);
			this->Controls->Add(this->gbxDeparture);
			this->Controls->Add(this->Chicago);
			this->Controls->Add(this->rbAlbuquerque);
			this->Controls->Add(this->lblCity);
			this->Controls->Add(this->nudPass);
			this->Controls->Add(this->lblPass);
			this->Controls->Add(this->txbResName);
			this->Controls->Add(this->lblResName);
			this->Controls->Add(this->lblInfo);
			this->Name = L"MyForm";
			this->Text = L"AvilaP7 - C++ Train Tickets";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->nudPass))->EndInit();
			this->gbxDeparture->ResumeLayout(false);
			this->gbxDeparture->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->nudDepYear))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->nudDepDay))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->nudDepMon))->EndInit();
			this->gbxReturn->ResumeLayout(false);
			this->gbxReturn->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->nudRetYear))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->nudRetDay))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->nudRetMon))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btnBook_Click(System::Object^  sender, System::EventArgs^  e) {
		string resname = "";
		int conversionerr = To_string(txbResName->Text, resname);

		int passengers = Decimal::ToInt32(nudPass->Value);
		Date today;

		int dmon, dday, dyear;
		dmon = Decimal::ToInt32(nudDepMon->Value);
		dday = Decimal::ToInt32(nudDepDay->Value);
		dyear = Decimal::ToInt32(nudDepYear->Value);
		string depdesc = "Departure Date";

		Date departure(dmon, dday, dyear, depdesc);

		if (cbxRound->Checked == true)
		{
			int rmon, rday, ryear;
			rmon = Decimal::ToInt32(nudRetMon->Value);
			rday = Decimal::ToInt32(nudRetDay->Value);
			ryear = Decimal::ToInt32(nudRetYear->Value);
			string retdesc = "Return Date";

			Date returnd(rmon, rday, ryear, retdesc);



			TrainTickets ticket(resname, passengers, today, departure, returnd);
			if (rbAlbuquerque->Checked == true)
			{
				ticket.SetDepartingCity("Albuquerque");
			}
			else
			{
				ticket.SetDepartingCity("Chicago");
			}

			txbResults->Text = gcnew String(ticket.GetReservationDescription().c_str());
		}
		else
		{

			TrainTickets firstTicket;

			TrainTickets ticket(resname, passengers, today, departure);


			if (rbAlbuquerque->Checked == true)
			{
				ticket.SetDepartingCity("Albuquerque");
			}
			else
			{
				ticket.SetDepartingCity("Chicago");
			}

			txbResults->Text = gcnew String(ticket.GetReservationDescription().c_str());

		}
	}
	private: System::Void cbxRound_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
		if (cbxRound->Checked)
		{
			gbxReturn->Enabled = true;
		}
		else
		{
			gbxReturn->Enabled = false;
		}
	}
};
}
