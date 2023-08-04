#include "MyForm.h"
using namespace System;
using namespace System::Windows::Forms;
[STAThread]
void main(array<String^>^ args)
{
	downloadspeed::MyForm form;
	Application::Run(% form);
}