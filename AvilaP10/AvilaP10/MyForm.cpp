//Alfonzo Avila		aavila28@cnm.edu
//File : MyForm.h

#include "MyForm.h"


using namespace System;
using namespace System::Windows::Forms;


[STAThread]
void Main()
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	AvilaP10::MyForm form;
	Application::Run(%form);
}
