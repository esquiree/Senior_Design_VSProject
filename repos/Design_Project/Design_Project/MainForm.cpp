//#include "stdafx.h"

#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include "C:\Program Files (x86)\IVI Foundation\VISA\WinNT\agvisa\include\visatype.h"
#include "C:\Program Files (x86)\IVI Foundation\VISA\WinNT\agvisa\include\visaext.h"
#include "C:\Program Files (x86)\IVI Foundation\VISA\WinNT\agvisa\include\visaext.h"
#include "C:\Program Files (x86)\IVI Foundation\VISA\WinNT\agvisa\include\visa.h"
#include <iostream>
#include <cmath>
//#include "engine.h"
#pragma warning(disable:4996)
#include "MainForm.h"


using namespace System;
using namespace System::Windows::Forms;



[STAThreadAttribute]
void Main(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Design_Project::MainForm form;
	Application::Run(%form);
	
	//ViSession oRm, oMIO;
	//char strResult[256] = { 0 };
	//char noErrString[256] = { "+0,\"No error\"\n" };
	//char buf[256];

	//Mention Visa connection string here.
//	char instAdd[] = "TCPIP0::146.223.123.106::inst0::INSTR";

	//Open a resource manager and create a visa session for communication
//	viOpenDefaultRM(&oRm);
	//viOpen(oRm, instAdd, VI_NULL, VI_NULL, &oMIO);

	//Query Idendity string and report.
	//viPrintf(oMIO, "*IDN?\n");
	//viScanf(oMIO, "%t", &buf);

	//printf("Instrument Identity String: %s \n", buf);
	///////////////////////////////////////////////////////////


	////More test code
	//ViSession viDefaultRM, Instrument;
	//ViRsrc TxtAddress = DEFAULT_LOGICAL_ADDRESS;
	//ViUInt32 actual;
	//char SCPIcmd[10000];
	//unsigned short i=0;
	//viOpenDefaultRM(&viDefaultRM);
	//viOpen(viDefaultRM, TxtAddress, VI_NULL, VI_NULL, &Instrument);
	//
	////sending a cmd
	//viWrite(Instrument, (ViBuf)SCPIcmd, (ViUInt32)strlen(SCPIcmd), &actual);
	//strcpy(SCPIcmd, "FREQuency 5000;VOLTage 5\n");


	// ???
}
/*
void setSCPIString(char* SCPIcmd, String^ CMDstring)
{
	String^ test = (textBox1->Text);
	IntPtr ptrToNativeString = Marshal::StringToHGlobalAnsi(test);
	char* nativeString = static_cast<char*>(ptrToNativeString.ToPointer());
	char test[32] = testingstr;
	strcpy(SCPIcmd, nativeString);

}
*/