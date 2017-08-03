#include <opencv\cv.h>

#include <Windows.h>
#include <iostream>
#include "MyForm.h"

using namespace std;
using namespace System;
using namespace System::Windows::Forms; 

int main(int, char**)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	PUBGInvSharer::MyForm form;
	Application::Run(%form);

	cv::Mat image, outputImg;

	return 0;
}