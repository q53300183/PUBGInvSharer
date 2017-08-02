#include "MyForm.h"

using namespace System;
using namespace System::Windows::Forms; 

int main(int, char**)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	PUBGInvSharer::MyForm form;
	Application::Run(%form);
	return 0;
}