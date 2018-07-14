#pragma once

#include <string>
#include "Date.h"
#include "TrainTickets.h"
#include "UtilityFunctions.h"


using namespace std;

//TODO:  score 84/100


namespace AvilaP6 {

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

	private: System::Windows::Forms::Label^  lblResName;
	private: System::Windows::Forms::TextBox^  txbResName;
	private: System::Windows::Forms::Label^  lblPassengers;
	private: System::Windows::Forms::NumericUpDown^  nudPassengers;
	private: System::Windows::Forms::Label^  lblDeparture;
	private: System::Windows::Forms::RadioButton^  rbAbq;
	private: System::Windows::Forms::RadioButton^  rbChicago;
	private: System::Windows::Forms::CheckBox^  ckbRoundtrip;
	private: System::Windows::Forms::GroupBox^  gpbDeparture;
	private: System::Windows::Forms::NumericUpDown^  nudDepYear;
	private: System::Windows::Forms::NumericUpDown^  nudDepDay;
	private: System::Windows::Forms::NumericUpDown^  nudDepMon;
	private: System::Windows::Forms::Label^  lblDepYear;
	private: System::Windows::Forms::Label^  lblDepDay;
	private: System::Windows::Forms::Label^  lblDepMon;
	private: System::Windows::Forms::Label^  lblDepDate;
	private: System::Windows::Forms::GroupBox^  gpbReturn;
	private: System::Windows::Forms::NumericUpDown^  nudRetYear;
	private: System::Windows::Forms::NumericUpDown^  nudRetDay;
	private: System::Windows::Forms::NumericUpDown^  nudRetMon;
	private: System::Windows::Forms::Label^  lblRetYear;
	private: System::Windows::Forms::Label^  lblRetDay;
	private: System::Windows::Forms::Label^  lblRetMon;
	private: System::Windows::Forms::Label^  lblReturn;
	private: System::Windows::Forms::Button^  btnSubmit;

	private: System::Windows::Forms::Button^  btnAnother;
	private: System::Windows::Forms::TextBox^  txbMenu;
	private: System::Windows::Forms::TextBox^  txbResults;
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
			this->lblResName = (gcnew System::Windows::Forms::Label());
			this->txbResName = (gcnew System::Windows::Forms::TextBox());
			this->lblPassengers = (gcnew System::Windows::Forms::Label());
			this->nudPassengers = (gcnew System::Windows::Forms::NumericUpDown());
			this->lblDeparture = (gcnew System::Windows::Forms::Label());
			this->rbAbq = (gcnew System::Windows::Forms::RadioButton());
			this->rbChicago = (gcnew System::Windows::Forms::RadioButton());
			this->ckbRoundtrip = (gcnew System::Windows::Forms::CheckBox());
			this->gpbDeparture = (gcnew System::Windows::Forms::GroupBox());
			this->nudDepYear = (gcnew System::Windows::Forms::NumericUpDown());
			this->nudDepDay = (gcnew System::Windows::Forms::NumericUpDown());
			this->nudDepMon = (gcnew System::Windows::Forms::NumericUpDown());
			this->lblDepYear = (gcnew System::Windows::Forms::Label());
			this->lblDepDay = (gcnew System::Windows::Forms::Label());
			this->lblDepMon = (gcnew System::Windows::Forms::Label());
			this->lblDepDate = (gcnew System::Windows::Forms::Label());
			this->gpbReturn = (gcnew System::Windows::Forms::GroupBox());
			this->nudRetYear = (gcnew System::Windows::Forms::NumericUpDown());
			this->nudRetDay = (gcnew System::Windows::Forms::NumericUpDown());
			this->nudRetMon = (gcnew System::Windows::Forms::NumericUpDown());
			this->lblRetYear = (gcnew System::Windows::Forms::Label());
			this->lblRetDay = (gcnew System::Windows::Forms::Label());
			this->lblRetMon = (gcnew System::Windows::Forms::Label());
			this->lblReturn = (gcnew System::Windows::Forms::Label());
			this->btnSubmit = (gcnew System::Windows::Forms::Button());
			this->btnAnother = (gcnew System::Windows::Forms::Button());
			this->txbMenu = (gcnew System::Windows::Forms::TextBox());
			this->txbResults = (gcnew System::Windows::Forms::TextBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->nudPassengers))->BeginInit();
			this->gpbDeparture->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->nudDepYear))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->nudDepDay))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->nudDepMon))->BeginInit();
			this->gpbReturn->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->nudRetYear))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->nudRetDay))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->nudRetMon))->BeginInit();
			this->SuspendLayout();
			// 
			// lblResName
			// 
			this->lblResName->AutoSize = true;
			this->lblResName->Location = System::Drawing::Point(38, 133);
			this->lblResName->Name = L"lblResName";
			this->lblResName->Size = System::Drawing::Size(123, 13);
			this->lblResName->TabIndex = 1;
			this->lblResName->Text = L"Enter Reservation Name";
			// 
			// txbResName
			// 
			this->txbResName->Location = System::Drawing::Point(168, 126);
			this->txbResName->Name = L"txbResName";
			this->txbResName->Size = System::Drawing::Size(115, 20);
			this->txbResName->TabIndex = 1;
			// 
			// lblPassengers
			// 
			this->lblPassengers->AutoSize = true;
			this->lblPassengers->Location = System::Drawing::Point(359, 133);
			this->lblPassengers->Name = L"lblPassengers";
			this->lblPassengers->Size = System::Drawing::Size(114, 13);
			this->lblPassengers->TabIndex = 3;
			this->lblPassengers->Text = L"Number of Passengers";
			// 
			// nudPassengers
			// 
			this->nudPassengers->Location = System::Drawing::Point(525, 126);
			this->nudPassengers->Name = L"nudPassengers";
			this->nudPassengers->Size = System::Drawing::Size(53, 20);
			this->nudPassengers->TabIndex = 2;
			// 
			// lblDeparture
			// 
			this->lblDeparture->AutoSize = true;
			this->lblDeparture->Location = System::Drawing::Point(122, 176);
			this->lblDeparture->Name = L"lblDeparture";
			this->lblDeparture->Size = System::Drawing::Size(131, 13);
			this->lblDeparture->TabIndex = 5;
			this->lblDeparture->Text = L"Choose the city departure:";
			// 
			// rbAbq
			// 
			this->rbAbq->AutoSize = true;
			this->rbAbq->Checked = true;
			this->rbAbq->Location = System::Drawing::Point(280, 172);
			this->rbAbq->Name = L"rbAbq";
			this->rbAbq->Size = System::Drawing::Size(85, 17);
			this->rbAbq->TabIndex = 3;
			this->rbAbq->TabStop = true;
			this->rbAbq->Text = L"Albuquerque";
			this->rbAbq->UseVisualStyleBackColor = true;
			// 
			// rbChicago
			// 
			this->rbChicago->AutoSize = true;
			this->rbChicago->Location = System::Drawing::Point(394, 172);
			this->rbChicago->Name = L"rbChicago";
			this->rbChicago->Size = System::Drawing::Size(64, 17);
			this->rbChicago->TabIndex = 4;
			this->rbChicago->Text = L"Chicago";
			this->rbChicago->UseVisualStyleBackColor = true;
			// 
			// ckbRoundtrip
			// 
			this->ckbRoundtrip->AutoSize = true;
			this->ckbRoundtrip->Location = System::Drawing::Point(272, 226);
			this->ckbRoundtrip->Name = L"ckbRoundtrip";
			this->ckbRoundtrip->Size = System::Drawing::Size(116, 17);
			this->ckbRoundtrip->TabIndex = 8;
			this->ckbRoundtrip->Text = L"Check for roundtrip";
			this->ckbRoundtrip->UseVisualStyleBackColor = true;
			this->ckbRoundtrip->CheckedChanged += gcnew System::EventHandler(this, &MyForm::ckbRoundtrip_CheckedChanged);
			// 
			// gpbDeparture
			// 
			this->gpbDeparture->Controls->Add(this->nudDepYear);
			this->gpbDeparture->Controls->Add(this->nudDepDay);
			this->gpbDeparture->Controls->Add(this->nudDepMon);
			this->gpbDeparture->Controls->Add(this->lblDepYear);
			this->gpbDeparture->Controls->Add(this->lblDepDay);
			this->gpbDeparture->Controls->Add(this->lblDepMon);
			this->gpbDeparture->Controls->Add(this->lblDepDate);
			this->gpbDeparture->Location = System::Drawing::Point(31, 210);
			this->gpbDeparture->Name = L"gpbDeparture";
			this->gpbDeparture->Size = System::Drawing::Size(235, 119);
			this->gpbDeparture->TabIndex = 9;
			this->gpbDeparture->TabStop = false;
			// 
			// nudDepYear
			// 
			this->nudDepYear->Location = System::Drawing::Point(158, 63);
			this->nudDepYear->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 2020, 0, 0, 0 });
			this->nudDepYear->Name = L"nudDepYear";
			this->nudDepYear->Size = System::Drawing::Size(58, 20);
			this->nudDepYear->TabIndex = 7;
			this->nudDepYear->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 2016, 0, 0, 0 });
			// 
			// nudDepDay
			// 
			this->nudDepDay->Location = System::Drawing::Point(91, 63);
			this->nudDepDay->Name = L"nudDepDay";
			this->nudDepDay->Size = System::Drawing::Size(34, 20);
			this->nudDepDay->TabIndex = 6;
			// 
			// nudDepMon
			// 
			this->nudDepMon->Location = System::Drawing::Point(15, 63);
			this->nudDepMon->Name = L"nudDepMon";
			this->nudDepMon->Size = System::Drawing::Size(34, 20);
			this->nudDepMon->TabIndex = 5;
			// 
			// lblDepYear
			// 
			this->lblDepYear->AutoSize = true;
			this->lblDepYear->Location = System::Drawing::Point(158, 46);
			this->lblDepYear->Name = L"lblDepYear";
			this->lblDepYear->Size = System::Drawing::Size(29, 13);
			this->lblDepYear->TabIndex = 3;
			this->lblDepYear->Text = L"Year";
			// 
			// lblDepDay
			// 
			this->lblDepDay->AutoSize = true;
			this->lblDepDay->Location = System::Drawing::Point(91, 46);
			this->lblDepDay->Name = L"lblDepDay";
			this->lblDepDay->Size = System::Drawing::Size(26, 13);
			this->lblDepDay->TabIndex = 2;
			this->lblDepDay->Text = L"Day";
			// 
			// lblDepMon
			// 
			this->lblDepMon->AutoSize = true;
			this->lblDepMon->Location = System::Drawing::Point(15, 46);
			this->lblDepMon->Name = L"lblDepMon";
			this->lblDepMon->Size = System::Drawing::Size(37, 13);
			this->lblDepMon->TabIndex = 1;
			this->lblDepMon->Text = L"Month";
			// 
			// lblDepDate
			// 
			this->lblDepDate->AutoSize = true;
			this->lblDepDate->Location = System::Drawing::Point(29, 20);
			this->lblDepDate->Name = L"lblDepDate";
			this->lblDepDate->Size = System::Drawing::Size(178, 13);
			this->lblDepDate->TabIndex = 0;
			this->lblDepDate->Text = L"Enter your desired date of Departure";
			// 
			// gpbReturn
			// 
			this->gpbReturn->Controls->Add(this->nudRetYear);
			this->gpbReturn->Controls->Add(this->nudRetDay);
			this->gpbReturn->Controls->Add(this->nudRetMon);
			this->gpbReturn->Controls->Add(this->lblRetYear);
			this->gpbReturn->Controls->Add(this->lblRetDay);
			this->gpbReturn->Controls->Add(this->lblRetMon);
			this->gpbReturn->Controls->Add(this->lblReturn);
			this->gpbReturn->Location = System::Drawing::Point(394, 210);
			this->gpbReturn->Name = L"gpbReturn";
			this->gpbReturn->Size = System::Drawing::Size(236, 119);
			this->gpbReturn->TabIndex = 10;
			this->gpbReturn->TabStop = false;
			this->gpbReturn->Visible = false;
			// 
			// nudRetYear
			// 
			this->nudRetYear->Location = System::Drawing::Point(158, 63);
			this->nudRetYear->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 2020, 0, 0, 0 });
			this->nudRetYear->Name = L"nudRetYear";
			this->nudRetYear->Size = System::Drawing::Size(57, 20);
			this->nudRetYear->TabIndex = 11;
			// 
			// nudRetDay
			// 
			this->nudRetDay->Location = System::Drawing::Point(91, 63);
			this->nudRetDay->Name = L"nudRetDay";
			this->nudRetDay->Size = System::Drawing::Size(34, 20);
			this->nudRetDay->TabIndex = 10;
			// 
			// nudRetMon
			// 
			this->nudRetMon->Location = System::Drawing::Point(15, 63);
			this->nudRetMon->Name = L"nudRetMon";
			this->nudRetMon->Size = System::Drawing::Size(34, 20);
			this->nudRetMon->TabIndex = 9;
			// 
			// lblRetYear
			// 
			this->lblRetYear->AutoSize = true;
			this->lblRetYear->Location = System::Drawing::Point(158, 46);
			this->lblRetYear->Name = L"lblRetYear";
			this->lblRetYear->Size = System::Drawing::Size(29, 13);
			this->lblRetYear->TabIndex = 3;
			this->lblRetYear->Text = L"Year";
			// 
			// lblRetDay
			// 
			this->lblRetDay->AutoSize = true;
			this->lblRetDay->Location = System::Drawing::Point(91, 46);
			this->lblRetDay->Name = L"lblRetDay";
			this->lblRetDay->Size = System::Drawing::Size(26, 13);
			this->lblRetDay->TabIndex = 2;
			this->lblRetDay->Text = L"Day";
			// 
			// lblRetMon
			// 
			this->lblRetMon->AutoSize = true;
			this->lblRetMon->Location = System::Drawing::Point(15, 46);
			this->lblRetMon->Name = L"lblRetMon";
			this->lblRetMon->Size = System::Drawing::Size(37, 13);
			this->lblRetMon->TabIndex = 1;
			this->lblRetMon->Text = L"Month";
			// 
			// lblReturn
			// 
			this->lblReturn->AutoSize = true;
			this->lblReturn->Location = System::Drawing::Point(40, 20);
			this->lblReturn->Name = L"lblReturn";
			this->lblReturn->Size = System::Drawing::Size(163, 13);
			this->lblReturn->TabIndex = 0;
			this->lblReturn->Text = L"Enter your desired date of Return";
			// 
			// btnSubmit
			// 
			this->btnSubmit->Location = System::Drawing::Point(204, 344);
			this->btnSubmit->Name = L"btnSubmit";
			this->btnSubmit->Size = System::Drawing::Size(223, 35);
			this->btnSubmit->TabIndex = 12;
			this->btnSubmit->Text = L"Book Reservation";
			this->btnSubmit->UseVisualStyleBackColor = true;
			this->btnSubmit->Click += gcnew System::EventHandler(this, &MyForm::btnSubmit_Click);
			// 
			// btnAnother
			// 
			this->btnAnother->Location = System::Drawing::Point(525, 416);
			this->btnAnother->Name = L"btnAnother";
			this->btnAnother->Size = System::Drawing::Size(105, 47);
			this->btnAnother->TabIndex = 14;
			this->btnAnother->Text = L"Book Another Reservation";
			this->btnAnother->UseVisualStyleBackColor = true;
			this->btnAnother->Click += gcnew System::EventHandler(this, &MyForm::btnAnother_Click);
			// 
			// txbMenu
			// 
			this->txbMenu->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->txbMenu->Enabled = false;
			this->txbMenu->Location = System::Drawing::Point(31, 13);
			this->txbMenu->Multiline = true;
			this->txbMenu->Name = L"txbMenu";
			this->txbMenu->ScrollBars = System::Windows::Forms::ScrollBars::Both;
			this->txbMenu->Size = System::Drawing::Size(578, 93);
			this->txbMenu->TabIndex = 0;
			this->txbMenu->Text = resources->GetString(L"txbMenu.Text");
			this->txbMenu->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// txbResults
			// 
			this->txbResults->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->txbResults->Cursor = System::Windows::Forms::Cursors::Default;
			this->txbResults->Enabled = false;
			this->txbResults->Location = System::Drawing::Point(50, 416);
			this->txbResults->Multiline = true;
			this->txbResults->Name = L"txbResults";
			this->txbResults->ScrollBars = System::Windows::Forms::ScrollBars::Both;
			this->txbResults->Size = System::Drawing::Size(451, 93);
			this->txbResults->TabIndex = 13;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(655, 558);
			this->Controls->Add(this->txbResults);
			this->Controls->Add(this->txbMenu);
			this->Controls->Add(this->btnAnother);
			this->Controls->Add(this->btnSubmit);
			this->Controls->Add(this->gpbReturn);
			this->Controls->Add(this->gpbDeparture);
			this->Controls->Add(this->ckbRoundtrip);
			this->Controls->Add(this->rbChicago);
			this->Controls->Add(this->rbAbq);
			this->Controls->Add(this->lblDeparture);
			this->Controls->Add(this->nudPassengers);
			this->Controls->Add(this->lblPassengers);
			this->Controls->Add(this->txbResName);
			this->Controls->Add(this->lblResName);
			this->Name = L"MyForm";
			this->Text = L"CPP Train Tickets - Alfonzo Avila";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->nudPassengers))->EndInit();
			this->gpbDeparture->ResumeLayout(false);
			this->gpbDeparture->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->nudDepYear))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->nudDepDay))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->nudDepMon))->EndInit();
			this->gpbReturn->ResumeLayout(false);
			this->gpbReturn->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->nudRetYear))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->nudRetDay))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->nudRetMon))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void ckbRoundtrip_CheckedChanged(System::Object^  sender, System::EventArgs^  e)
	{
		if (ckbRoundtrip->Checked)
		{
			gpbReturn->Visible = true;
		}

	}

	private: System::Void btnSubmit_Click(System::Object^  sender, System::EventArgs^  e)

	{
		string resname = "";
		int conversionerr = To_string(txbResName->Text, resname);

		int passengers = Decimal::ToInt32(nudPassengers->Value);
		Date today;

		int dmon, dday, dyear;
		dmon = Decimal::ToInt32(nudDepMon->Value);
		dday = Decimal::ToInt32(nudDepDay->Value);
		dyear = Decimal::ToInt32(nudDepYear->Value);
		string depdesc = "Departure Date";

		/*Date departure(dmon, dday, dyear, depdesc);*/

		Date departure;
		departure.SetDate(dmon, dday, dyear, depdesc);
		

		if (ckbRoundtrip->Checked)
		{

			int rmon, rday, ryear;
			rmon = Decimal::ToInt32(nudRetMon->Value);
			rday = Decimal::ToInt32(nudRetDay->Value);
			ryear = Decimal::ToInt32(nudRetYear->Value);
			string retdesc = "Return Date";

			Date returnd(rmon, rday, ryear, retdesc);
		
			

			TrainTickets ticket(resname, passengers, today, departure, returnd);
			if (rbAbq->Checked==true)
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
			TrainTickets ticket(resname, passengers, today, departure);
			if (rbAbq->Checked == true)
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
	private: System::Void btnAnother_Click(System::Object^  sender, System::EventArgs^  e) 
	{
		txbResName->Clear();
		nudPassengers->Value = 0;
		nudDepDay->Value = 0;
		nudDepMon->Value = 0;
		nudDepYear->Value = 0;
		ckbRoundtrip->Checked = false;
		txbResults->Text = "";
	}
};
}
