#include <opencv2/core/core.hpp>
#include <opencv2/opencv.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/imgproc/imgproc.hpp>

#include <Windows.h>
#include <iostream>
#include "MyForm.h"

using namespace std;
using namespace System;
using namespace System::Windows::Forms; 

void GetDesktopResolution(int& monitorWidth, int& monitorHeight)
{
	RECT desktop;
	const HWND hDesktop = GetDesktopWindow();
	GetWindowRect(hDesktop, &desktop);
	monitorWidth = desktop.right;
	monitorHeight = desktop.bottom;
}

int main(int, char**)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	PUBGInvSharer::MyForm form;
	Application::Run(%form);

	int monitorWidth, monitorHeight;
	GetDesktopResolution(monitorWidth, monitorHeight);
	cv::Mat image, outputImg;

	cout << monitorWidth << " " << monitorHeight;
	return 0;
}