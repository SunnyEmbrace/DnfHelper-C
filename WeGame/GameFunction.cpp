#include "pch.h"
#include "framework.h"
#include "Address.h"
#include "Common.h"
#include "GameFunction.h"
#include "ReadWrite.h"

VOID ��������() {
	//MessageBoxW(NULL, L"��������", L"����", MB_OK);

	BOOL static �������� = FALSE;
	DWORD64 �հ׵�ַ = ȫ�ֿհ�;
	if (�������� == FALSE)
	{
		DWORD64 kb = ����������(�հ׵�ַ);

		д��������(�հ׵�ַ, 0);
		д��������(�հ׵�ַ + 4, 2000);
		д��������(�հ׵�ַ + 8, 2000);
		д��������(�հ׵�ַ + 12, 0);
		д��������(�հ׵�ַ + 16, 0);
		д��������(�հ׵�ַ + 20, 0);
		д��������(�հ׵�ַ + 24, 0);
		д��������(�հ׵�ַ + 28, 0);
		DWORD64 ���� = ����������(����������(�����ַ) + ����ƫ��);
		д��������(���� + ������ʼ, �հ׵�ַ);
		д��������(���� + ��������, �հ׵�ַ + 32);
		�������� = TRUE;
		return;
	}
	DWORD64 ���� = ����������(����������(�����ַ) + ����ƫ��);
	д��������(���� + ������ʼ, 0);
	д��������(���� + ��������, 0);
	for (int i = 0; i >= 7; i++)
	{
		д������(�հ׵�ַ, 0);
		�հ׵�ַ = �հ׵�ַ + 4;
	}
	�������� = FALSE;
}

//void ���ܿ���() {
//
//	HWND hWnd = FindWindow(TEXT("���³�����ʿ"), TEXT("���³�����ʿ"));
//	static bool _switch = false;
//	if (_switch == false)
//	{
//		SetTimer(hWnd, 1, Ƶ��, (TIMERPROC)����ȫ������);
//		����("����ȫ�� - ����");
//	}
//	else
//	{
//		KillTimer(hWnd, 1);
//		����("����ȫ�� - �ر�");
//	}
//	_switch = !_switch;
//
//}



VOID HOOK�˺�() {
	BOOL static HOOK���� = false;

	BYTE* ��ַԭ����;

	DWORD64 �˺���ַ = ȫ�ֻ�ַ;
	HOOK���� = !HOOK����;

	if (HOOK����)
	{
		��ַԭ���� = ���ֽڼ���(�˺���ַ,10);

		vector<byte> data = { 72,190,127,150,152,0 };
		API_д�ֽڼ�(�˺���ַ, data);
	}
	else
	{
		//д�ֽڼ���(�˺���ַ,��ַԭ����,10);
	}
}

