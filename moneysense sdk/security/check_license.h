#pragma once
#include <urlmon.h>
#include <wininet.h>
#include "../hack/includes.hpp"
#pragma comment(lib, "wininet")
#pragma comment(lib,"wininet.lib")
#pragma comment(lib, "urlmon.lib")
std::string ReadHWFile() {
	std::ifstream ifs("C:\\h.txt");
	std::string content((std::istreambuf_iterator<char>(ifs)),
		(std::istreambuf_iterator<char>()));
	return content;
}
// ������� ������� ������ �������� ��.
std::string serial() {
	DWORD  lVolSerialNbr = 0;
	char sHDSerial[255] = "";
	GetVolumeInformation("C:\\", 0, 0, &lVolSerialNbr, 0, 0, 0, 0);
	_ultoa_s(lVolSerialNbr, sHDSerial, 10);
	std::string c(sHDSerial);
	return c;
}

bool hwid_checker() { // ���� ������� ��������, ���� �������� �������� ������� - true / �� �������� - false
/*	HINTERNET connect = InternetOpen("MyBrowser", INTERNET_OPEN_TYPE_PRECONFIG, NULL, NULL, 0); // ������� ����� ��� ����������� � ����
	if (!connect) // �������� �� ���������� �������� ������ ��� ����������� � ����
	{
		return false;
	}
	std::string URL = "https://panel213.000webhostapp.com/XAKLDSKHGLAKHK2H2L2HL2KL2KL2H.ini"; // ��������� � �������� ������ ��� ������������ �������� � ������ �����, ����� ����� + ���� ��������.ini
	LPCSTR Final = URL.c_str();
	HINTERNET OpenAddress = InternetOpenUrl(connect, Final, NULL, INTERNET_DEFAULT_HTTPS_PORT, INTERNET_FLAG_PRAGMA_NOCACHE | INTERNET_FLAG_KEEP_CONNECTION, 0);
	Sleep(10); // �������� � �������� 10.f ��� ����������� �����.
	if (!OpenAddress) // �������� �� ������ � �����, aka ����������� � ����
	{
		InternetCloseHandle(connect);
		return false;
		MessageBox(NULL, "error", "failed connect to cheat.", MB_OK);
	}
	char DataReceived[4096];
	DWORD NumberOfBytesRead = 0;
	while (InternetReadFile(OpenAddress, DataReceived, 4096, &NumberOfBytesRead) && NumberOfBytesRead) {} // ������ ���� � ���������� ������ � ����������
	InternetCloseHandle(OpenAddress); // ��������� ����������
	InternetCloseHandle(connect); // ��������� ����������
	if (strstr(DataReceived, "AWSGKAJWG2J9J2390G32JG2J030J923GJ923J023J09G2J90G2J90G239JG923J0GJ92H90J0hjhw2hwh9jw39h2jh2h0")) // ��������� �� ������ ����� � �����, �������� HGF%R3
	{
		return true;
	}
	else
	{
		//hooks::shutdown(); // ����� ������� �������� ������ �����, � ������ ����.
		static TCHAR path[MAX_PATH]; // ������� ���������� ��� ������
		std::string serial1 = serial(); // ������� � ������������ ���������� ��������, ��� ����������� ������
		LPCSTR Final1 = serial1.c_str(); // ������ �������� � ��� ���� ���������� ��������, �������� ��� �������.
		std::string folder, file, serial; // ������� ������ ����������, ��� ��� ���� ����
		file = std::string(path) + ("C:\\serialkey.ini"); // ����������� ������ ��� ���������� ����� � ����������
		WritePrivateProfileString(Final1, Final1, Final1, file.c_str()); // ���������� �������� � ���� ��������� ������� ����, ���� ���������� ����� ����� ���������.
		//MessageBox(NULL, "error enabled cheat.", "Error #666", MB_OK); // ��������� � ��������� ��������.
	}
	return false; */
	return true;
}