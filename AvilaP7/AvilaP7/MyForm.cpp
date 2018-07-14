//Alfonzo Avila		aavila28@cnm.edu
//File : MyForm.cpp

#include "MyForm.h"

using namespace System;
using namespace System::Windows::Forms;


[STAThread]
void Main()
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	AvilaP7::MyForm form;
	Application::Run(%form);
}
