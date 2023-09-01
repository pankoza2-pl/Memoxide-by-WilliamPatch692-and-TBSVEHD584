#include <Windows.h>
#define _USE_MATH_DEFINES 1
#include <cmath>
#pragma comment (lib, "winmm.lib")
//#pragma comment(lib, "ntdll.lib")
#pragma comment(lib, "kernel32.lib")

DWORD WINAPI RanTunnel(LPVOID lpParam) {
	HDC hdc = GetDC(0);
	int sw = GetSystemMetrics(0);
	int sh = GetSystemMetrics(1);
	while (true)
	{
		hdc = GetDC(0);
		StretchBlt(hdc, 0, 0, rand() % sw, rand() % sh, hdc, 0, 0, sw, sh, SRCCOPY);
		ReleaseDC(GetDesktopWindow(), hdc);
		DeleteDC(hdc);
		Sleep(100);
	}
}

DWORD WINAPI CubeColorHalf(LPVOID lpParam) {
	HDC hdc = GetDC(0);
	int x = GetSystemMetrics(0);
	int y = GetSystemMetrics(1);
	while (true)
	{
		hdc = GetDC(0);
		HBRUSH brush = CreateSolidBrush(RGB(rand() % 128, rand() % 128, rand() % 128));
		SelectObject(hdc, brush);
		PatBlt(hdc, 0, 0, rand() % x, rand() % y, PATINVERT);
		DeleteObject(brush);
		ReleaseDC(GetDesktopWindow(), hdc);
		DeleteDC(hdc);
		Sleep(10);
	}
}

DWORD WINAPI WeirdInvert(LPVOID lpParam) {
	HDC hdc = GetDC(0);
	int w = GetSystemMetrics(0);
	int h = GetSystemMetrics(1);
	while (true)
	{
		hdc = GetDC(0);
		BitBlt(hdc, 1, 1, w, h, hdc, 0, 0, SRCINVERT);
		BitBlt(hdc, -1, -1, w, h, hdc, 0, 0, SRCINVERT);
		ReleaseDC(GetDesktopWindow(), hdc);
		DeleteDC(hdc);
		Sleep(10);
	}
}

DWORD WINAPI Light(LPVOID lpParam) {
	HDC hdc = GetDC(0);
	int w = GetSystemMetrics(0);
	int h = GetSystemMetrics(1);
	while (true)
	{
		hdc = GetDC(0);
		BitBlt(hdc, 1, 0, w, h, hdc, 0, 0, SRCPAINT);
		BitBlt(hdc, -1, 0, w, h, hdc, 0, 0, SRCPAINT);
		BitBlt(hdc, 0, 1, w, h, hdc, 0, 0, SRCPAINT);
		BitBlt(hdc, 0, -1, w, h, hdc, 0, 0, SRCPAINT);
		ReleaseDC(GetDesktopWindow(), hdc);
		DeleteDC(hdc);
		Sleep(10);
	}
}

DWORD WINAPI LightDif(LPVOID lpParam) {
	HDC hdc = GetDC(0);
	int x = SM_CXSCREEN;
	int y = SM_CYSCREEN;
	int w = GetSystemMetrics(0);
	int h = GetSystemMetrics(1);
	while (true)
	{
		hdc = GetDC(0);
		BitBlt(hdc, 1, 0, w, h, hdc, 0, 0, SRCPAINT);
		BitBlt(hdc, -1, 0, w, h, hdc, 0, 0, SRCPAINT);
		BitBlt(hdc, 0, 1, w, h, hdc, 0, 0, SRCAND);
		BitBlt(hdc, 0, -1, w, h, hdc, 0, 0, SRCAND);
		ReleaseDC(GetDesktopWindow(), hdc);
		DeleteDC(hdc);
		Sleep(10);
	}
}

DWORD WINAPI TextOut(LPVOID lpParam) {
	HDC hdc = GetDC(0);
	int sx = GetSystemMetrics(0);
	int sy = GetSystemMetrics(1);
	LPCWSTR lpText = L"Memoxide";
	while (true)
	{
		hdc = GetDC(0);
		SetBkColor(hdc, RGB(rand() % 255, rand() % 255, rand() % 255));
		SetTextColor(hdc, RGB(rand() % 255, rand() % 255, rand() % 255));
		TextOutW(hdc, rand() % sx, rand() % sy, lpText, wcslen(lpText));
		ReleaseDC(GetDesktopWindow(), hdc);
		DeleteDC(hdc);
	}
}

DWORD WINAPI MoveScreenInvert(LPVOID lpParam) {
	HDC hdc = GetDC(0);
	int w = GetSystemMetrics(0);
	int h = GetSystemMetrics(1);
	while (true)
	{
		hdc = GetDC(0);
		BitBlt(hdc, 0, -1, w, h, hdc, 0, 0, SRCCOPY);
		BitBlt(hdc, 0, h - 1, w, h, hdc, 0, 0, NOTSRCCOPY);
		BitBlt(hdc, -1, 0, w, h, hdc, 0, 0, SRCCOPY);
		BitBlt(hdc, w - 1, 0, w, h, hdc, 0, 0, NOTSRCCOPY);
		ReleaseDC(GetDesktopWindow(), hdc);
		DeleteDC(hdc);
	}
}

DWORD WINAPI TextOut2(LPVOID lpParam) {
	HDC hdc = GetDC(0);
	int sx = GetSystemMetrics(0);
	int sy = GetSystemMetrics(1);
	LPCWSTR lpText = L"Destruction";
	while (true)
	{
		hdc = GetDC(0);
		SetBkColor(hdc, RGB(rand() % 255, rand() % 255, rand() % 255));
		SetTextColor(hdc, RGB(rand() % 255, rand() % 255, rand() % 255));
		TextOutW(hdc, rand() % sx, rand() % sy, lpText, wcslen(lpText));
		ReleaseDC(GetDesktopWindow(), hdc);
		DeleteDC(hdc);
		Sleep(4);
	}
}

DWORD WINAPI ColorsHalf(LPVOID lpvd) {
	HDC hdc = GetDC(0);
	int x = GetSystemMetrics(0);
	int y = GetSystemMetrics(1);
	while (true)
	{
		hdc = GetDC(0);
		HBRUSH brush = CreateSolidBrush(RGB(rand() % 128, rand() % 128, rand() % 128));
		SelectObject(hdc, brush);
		PatBlt(hdc, 0, 0, x, y, PATINVERT);
		DeleteObject(brush);
		ReleaseDC(GetDesktopWindow(), hdc);
		DeleteDC(hdc);
		Sleep(10);
	}
}

DWORD WINAPI WeirdScreenMovement(LPVOID lpParam) {
	HDC hdc = GetDC(0);
	int w = GetSystemMetrics(0);
	int h = GetSystemMetrics(1);
	while (true)
	{
		hdc = GetDC(0);
		BitBlt(hdc, rand() % 10, rand() % 10, rand() % w, rand() % h, hdc, rand() % 10, rand() % 10, SRCCOPY);
		ReleaseDC(GetDesktopWindow(), hdc);
		DeleteDC(hdc);
	}
}

DWORD WINAPI CursorText(LPVOID lpvd) {
	HDC hdc = GetDC(0);
	POINT cursorPt;
	int sx = GetCursorPos(&cursorPt);
	int sy = GetCursorPos(&cursorPt);
	LPCWSTR lpText = L"Hello!";
	while (true)
	{
		hdc = GetDC(0);
		GetCursorPos(&cursorPt);
		SetBkColor(hdc, RGB(rand() % 255, rand() % 255, rand() % 255));
		SetTextColor(hdc, RGB(rand() % 255, rand() % 255, rand() % 255));
		TextOutW(hdc, cursorPt.x, cursorPt.y, lpText, wcslen(lpText));
		ReleaseDC(GetDesktopWindow(), hdc);
		DeleteDC(hdc);
		Sleep(10);
	}
}

DWORD WINAPI Icons(LPVOID lpvd) {
	HDC hdc = GetDC(0);
	int x = GetSystemMetrics(0);
	int y = GetSystemMetrics(1);
	int w = rand() % GetSystemMetrics(SM_CXSCREEN);
	int h = rand() % GetSystemMetrics(SM_CYSCREEN);
	while (true)
	{
		hdc = GetDC(0);
		w = rand() % GetSystemMetrics(SM_CXSCREEN);
		h = rand() % GetSystemMetrics(SM_CYSCREEN);
		DrawIcon(hdc, rand() % x, rand() % y, LoadIcon(NULL, IDI_ERROR));
		w = rand() % GetSystemMetrics(SM_CXSCREEN);
		h = rand() % GetSystemMetrics(SM_CYSCREEN);
		DrawIcon(hdc, rand() % x, rand() % y, LoadIcon(NULL, IDI_WARNING));
		w = rand() % GetSystemMetrics(SM_CXSCREEN);
		h = rand() % GetSystemMetrics(SM_CYSCREEN);
		DrawIcon(hdc, rand() % x, rand() % y, LoadIcon(NULL, IDI_APPLICATION));
		ReleaseDC(GetDesktopWindow(), hdc);
		DeleteDC(hdc);
		Sleep(10);
	}

}

DWORD WINAPI NegativeInvert(LPVOID lpParam) {
	HDC hdc = GetDC(0);
	int w = GetSystemMetrics(0);
	int h = GetSystemMetrics(1);
	while (true)
	{
		hdc = GetDC(0);
		BitBlt(hdc, 1, 1, w, h, hdc, 0, 0, 0x999999);
		BitBlt(hdc, -1, -1, w, h, hdc, 0, 0, 0x999999);
		BitBlt(hdc, 1, -1, w, h, hdc, 0, 0, 0x999999);
		BitBlt(hdc, -1, 1, w, h, hdc, 0, 0, 0x999999);
		ReleaseDC(GetDesktopWindow(), hdc);
		DeleteDC(hdc);
		Sleep(10);
	}
}

DWORD WINAPI Redrawer(LPVOID lpRedraw) {
	while (true)
	{
		InvalidateRect(0, 0, 0);
		Sleep(1000);
	}
	return 0;
}

DWORD WINAPI sines(LPVOID lpParam) {
	HDC desk = GetDC(0); HWND wnd = GetDesktopWindow();
	int sw = GetSystemMetrics(0), sh = GetSystemMetrics(1);
	double angle = 0;
	while (1) {
		desk = GetDC(0);
		HBRUSH brush = CreateSolidBrush(RGB(rand() % 128, rand() % 128, rand() % 128));
		SelectObject(desk, brush);
		for (float i = 0; i < sw + sh; i += 0.99f) {
			int a = sin(angle) * 20;
			BitBlt(desk, 0, i, sw, 1, desk, a, i, SRCCOPY);
			BitBlt(desk, 0, i, sw, 1, desk, a, i, PATINVERT);
			BitBlt(desk, i, 0, 1, sh, desk, i, a, SRCCOPY);
			BitBlt(desk, i, 0, 1, sh, desk, i, a, PATINVERT);
			angle += M_PI / 40;
			DeleteObject(&i); DeleteObject(&a);
		}
		DeleteObject(brush);
		ReleaseDC(wnd, desk);
		DeleteDC(desk); DeleteObject(&sw); DeleteObject(&sh); DeleteObject(&angle);
		Sleep(10);
	}
}

VOID WINAPI sound1()
{
	HWAVEOUT hwo = 0;
	WAVEFORMATEX wfx = { WAVE_FORMAT_PCM, 1, 8000, 8000, 1, 8, 0, };
	waveOutOpen(&hwo, WAVE_MAPPER, &wfx, 0, 0, CALLBACK_NULL);

	char buffer[8000 * 30];

	for (DWORD t = 0; t < sizeof(buffer); t++)
		buffer[t] = static_cast<char>(t & 4096 ? (t * (t ^ t % 9) | t >> 3) >> 1 : 255);

	WAVEHDR hdr = { buffer, sizeof(buffer), 0, 0, 0, 0, 0, 0 };
	waveOutPrepareHeader(hwo, &hdr, sizeof(WAVEHDR));
	waveOutWrite(hwo, &hdr, sizeof(WAVEHDR));
	waveOutUnprepareHeader(hwo, &hdr, sizeof(WAVEHDR));
	waveOutClose(hwo);
}

VOID WINAPI sound2()
{
	HWAVEOUT hwo = 0;
	WAVEFORMATEX wfx = { WAVE_FORMAT_PCM, 1, 8000, 8000, 1, 8, 0, };
	waveOutOpen(&hwo, WAVE_MAPPER, &wfx, 0, 0, CALLBACK_NULL);

	char buffer[8000 * 30];

	for (DWORD t = 0; t < sizeof(buffer); t++)
		buffer[t] = static_cast<char>(t * (1 + (5 & t >> 10)) * (3 + (t >> 17 & 1 ? (2 ^ 2 & t >> 14) / 3 : 3 & (t >> 13) + 1)) >> (3 & t >> 9));

	WAVEHDR hdr = { buffer, sizeof(buffer), 0, 0, 0, 0, 0, 0 };
	waveOutPrepareHeader(hwo, &hdr, sizeof(WAVEHDR));
	waveOutWrite(hwo, &hdr, sizeof(WAVEHDR));
	waveOutUnprepareHeader(hwo, &hdr, sizeof(WAVEHDR));
	waveOutClose(hwo);
}

VOID WINAPI sound3()
{
	HWAVEOUT hwo = 0;
	WAVEFORMATEX wfx = { WAVE_FORMAT_PCM, 1, 8000, 8000, 1, 8, 0, };
	waveOutOpen(&hwo, WAVE_MAPPER, &wfx, 0, 0, CALLBACK_NULL);

	char buffer[8000 * 30];

	for (DWORD t = 0; t < sizeof(buffer); t++)
		buffer[t] = static_cast<char>((t * (1 + (5 & t >> 10)) * (3 + (t >> 17 & 1 ? (2 ^ 2 & t >> 14) / 3 : 3 & (t >> 13) + 1)) >> (3 & t >> 9)) & (t & 4096 ? (t * (t ^ t % 9) | t >> 3) >> 1 : 255));

	WAVEHDR hdr = { buffer, sizeof(buffer), 0, 0, 0, 0, 0, 0 };
	waveOutPrepareHeader(hwo, &hdr, sizeof(WAVEHDR));
	waveOutWrite(hwo, &hdr, sizeof(WAVEHDR));
	waveOutUnprepareHeader(hwo, &hdr, sizeof(WAVEHDR));
	waveOutClose(hwo);
}

VOID WINAPI sound4()
{
	HWAVEOUT hwo = 0;
	WAVEFORMATEX wfx = { WAVE_FORMAT_PCM, 1, 8000, 8000, 1, 8, 0, };
	waveOutOpen(&hwo, WAVE_MAPPER, &wfx, 0, 0, CALLBACK_NULL);

	char buffer[8000 * 30];

	for (DWORD t = 0; t < sizeof(buffer); t++)
		buffer[t] = static_cast<char>((t >> 2) * (t & (t & 32768 ? 16 : 24) | t >> (t >> 8 & 24)) | t >> 3);

	WAVEHDR hdr = { buffer, sizeof(buffer), 0, 0, 0, 0, 0, 0 };
	waveOutPrepareHeader(hwo, &hdr, sizeof(WAVEHDR));
	waveOutWrite(hwo, &hdr, sizeof(WAVEHDR));
	waveOutUnprepareHeader(hwo, &hdr, sizeof(WAVEHDR));
	waveOutClose(hwo);
}

VOID WINAPI sound5()
{
	HWAVEOUT hwo = 0;
	WAVEFORMATEX wfx = { WAVE_FORMAT_PCM, 1, 8000, 8000, 1, 8, 0, };
	waveOutOpen(&hwo, WAVE_MAPPER, &wfx, 0, 0, CALLBACK_NULL);

	char buffer[8000 * 30];

	for (DWORD t = 0; t < sizeof(buffer); t++)
		buffer[t] = static_cast<char>(t * (t & 16384 ? 6 : 5) * (4 - (1 & t >> 8)) >> (3 & t >> 8) | t >> (t & 4096 ? 3 : 4));

	WAVEHDR hdr = { buffer, sizeof(buffer), 0, 0, 0, 0, 0, 0 };
	waveOutPrepareHeader(hwo, &hdr, sizeof(WAVEHDR));
	waveOutWrite(hwo, &hdr, sizeof(WAVEHDR));
	waveOutUnprepareHeader(hwo, &hdr, sizeof(WAVEHDR));
	waveOutClose(hwo);
}

VOID WINAPI sound7()
{
	HWAVEOUT hwo = 0;
	WAVEFORMATEX wfx = { WAVE_FORMAT_PCM, 1, 8000, 8000, 1, 8, 0, };
	waveOutOpen(&hwo, WAVE_MAPPER, &wfx, 0, 0, CALLBACK_NULL);

	char buffer[8000 * 30];

	for (DWORD t = 0; t < sizeof(buffer); t++)
		buffer[t] = static_cast<char>(t * (t & 16384 ? 7 : 5) * (3 + (3 & t >> 14)) >> (3 & t >> 9) | (t | t * 3) >> 5);

	WAVEHDR hdr = { buffer, sizeof(buffer), 0, 0, 0, 0, 0, 0 };
	waveOutPrepareHeader(hwo, &hdr, sizeof(WAVEHDR));
	waveOutWrite(hwo, &hdr, sizeof(WAVEHDR));
	waveOutUnprepareHeader(hwo, &hdr, sizeof(WAVEHDR));
	waveOutClose(hwo);
}

VOID WINAPI sound8()
{
	HWAVEOUT hwo = 0;
	WAVEFORMATEX wfx = { WAVE_FORMAT_PCM, 1, 8000, 8000, 1, 8, 0, };
	waveOutOpen(&hwo, WAVE_MAPPER, &wfx, 0, 0, CALLBACK_NULL);

	char buffer[8000 * 30];

	for (DWORD t = 0; t < sizeof(buffer); t++)
		buffer[t] = static_cast<char>(t * ((t & 1024 ? t & 2048 ? t & 4096 ? 8 : 4 : 2 : 1) << (t >> 16)));

	WAVEHDR hdr = { buffer, sizeof(buffer), 0, 0, 0, 0, 0, 0 };
	waveOutPrepareHeader(hwo, &hdr, sizeof(WAVEHDR));
	waveOutWrite(hwo, &hdr, sizeof(WAVEHDR));
	waveOutUnprepareHeader(hwo, &hdr, sizeof(WAVEHDR));
	waveOutClose(hwo);
}

VOID WINAPI sound9()
{
	HWAVEOUT hwo = 0;
	WAVEFORMATEX wfx = { WAVE_FORMAT_PCM, 1, 8000, 8000, 1, 8, 0, };
	waveOutOpen(&hwo, WAVE_MAPPER, &wfx, 0, 0, CALLBACK_NULL);

	char buffer[8000 * 30];

	for (DWORD t = 0; t < sizeof(buffer); t++)
		buffer[t] = static_cast<char>((t & t + t / 256) - t * (t >> 15) & 64);

	WAVEHDR hdr = { buffer, sizeof(buffer), 0, 0, 0, 0, 0, 0 };
	waveOutPrepareHeader(hwo, &hdr, sizeof(WAVEHDR));
	waveOutWrite(hwo, &hdr, sizeof(WAVEHDR));
	waveOutUnprepareHeader(hwo, &hdr, sizeof(WAVEHDR));
	waveOutClose(hwo);
}

VOID WINAPI sound11()
{
	HWAVEOUT hwo = 0;
	WAVEFORMATEX wfx = { WAVE_FORMAT_PCM, 1, 8000, 8000, 1, 8, 0, };
	waveOutOpen(&hwo, WAVE_MAPPER, &wfx, 0, 0, CALLBACK_NULL);

	char buffer[8000 * 30];

	for (DWORD t = 0; t < sizeof(buffer); t++)
		buffer[t] = static_cast<char>(t * ((t >> 5 | t) >> (t >> 15)));

	WAVEHDR hdr = { buffer, sizeof(buffer), 0, 0, 0, 0, 0, 0 };
	waveOutPrepareHeader(hwo, &hdr, sizeof(WAVEHDR));
	waveOutWrite(hwo, &hdr, sizeof(WAVEHDR));
	waveOutUnprepareHeader(hwo, &hdr, sizeof(WAVEHDR));
	waveOutClose(hwo);
}

int WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nShowCmd) {
	if (MessageBoxW(NULL, L"Warning! This software is GDI Only.\r\n\
Are you sure you want to run it?", L"Memoxide.exe (safety version)", MB_YESNO | MB_ICONEXCLAMATION | MB_SYSTEMMODAL) == IDNO)
	{
		ExitProcess(0);
	}
	else
	{
		if (MessageBoxW(NULL, L"it will not overwrite the MBR or make the computer unbootable!\r\n\
still want to run it?", L"LAST WARNING!!!", MB_YESNO | MB_ICONEXCLAMATION | MB_SYSTEMMODAL) == IDNO)
		{
			ExitProcess(0);
		}
		else
		{
			Sleep(5000);
			HANDLE P1 = CreateThread(0, 0, RanTunnel, 0, 0, 0);
			sound1();
			Sleep(30000);
			TerminateThread(P1, 0);
			CloseHandle(P1);
			InvalidateRect(0, 0, 0);
			Sleep(100);
			HANDLE P2 = CreateThread(0, 0, CubeColorHalf, 0, 0, 0);
			sound2();
			Sleep(30000);
			TerminateThread(P2, 0);
			CloseHandle(P2);
			InvalidateRect(0, 0, 0);
			Sleep(100);
			HANDLE P3 = CreateThread(0, 0, WeirdInvert, 0, 0, 0);
			sound3();
			Sleep(30000);
			TerminateThread(P3, 0);
			CloseHandle(P3);
			InvalidateRect(0, 0, 0);
			Sleep(100);
			HANDLE P4 = CreateThread(0, 0, Light, 0, 0, 0);
			sound4();
			Sleep(30000);
			TerminateThread(P4, 0);
			CloseHandle(P4);
			InvalidateRect(0, 0, 0);
			Sleep(100);
			HANDLE P5 = CreateThread(0, 0, LightDif, 0, 0, 0);
			sound5();
			Sleep(30000);
			TerminateThread(P5, 0);
			CloseHandle(P5);
			InvalidateRect(0, 0, 0);
			Sleep(100);
			HANDLE P6 = CreateThread(0, 0, TextOut, 0, 0, 0);
			PlaySoundW(L"sound6.wav", NULL, SND_FILENAME | SND_ASYNC);
			Sleep(30000);
			TerminateThread(P6, 0);
			CloseHandle(P6);
			InvalidateRect(0, 0, 0);
			Sleep(100);
			HANDLE P7 = CreateThread(0, 0, MoveScreenInvert, 0, 0, 0);
			sound7();
			Sleep(30000);
			TerminateThread(P7, 0);
			CloseHandle(P7);
			InvalidateRect(0, 0, 0);
			Sleep(100);
			HANDLE P8 = CreateThread(0, 0, TextOut2, 0, 0, 0);
			HANDLE P8dot1 = CreateThread(0, 0, ColorsHalf, 0, 0, 0);
			sound8();
			Sleep(30000);
			TerminateThread(P8, 0);
			CloseHandle(P8);
			TerminateThread(P8dot1, 0);
			CloseHandle(P8dot1);
			InvalidateRect(0, 0, 0);
			Sleep(100);
			HANDLE P9 = CreateThread(0, 0, WeirdScreenMovement, 0, 0, 0);
			HANDLE P9dot1 = CreateThread(0, 0, CursorText, 0, 0, 0);
			HANDLE P9dot2 = CreateThread(0, 0, Icons, 0, 0, 0);
			sound9();
			Sleep(30000);
			TerminateThread(P9, 0);
			CloseHandle(P9);
			TerminateThread(P9dot1, 0);
			CloseHandle(P9dot1);
			TerminateThread(P9dot2, 0);
			CloseHandle(P9dot2);
			InvalidateRect(0, 0, 0);
			Sleep(100);
			HANDLE P10 = CreateThread(0, 0, NegativeInvert, 0, 0, 0);
			HANDLE P10dot1 = CreateThread(0, 0, Redrawer, 0, 0, 0);
			PlaySoundW(L"sound10.wav", NULL, SND_FILENAME | SND_ASYNC);
			Sleep(30000);
			TerminateThread(P10, 0);
			CloseHandle(P10);
			TerminateThread(P10dot1, 0);
			CloseHandle(P10dot1);
			InvalidateRect(0, 0, 0);
			Sleep(100);
			HANDLE P11 = CreateThread(0, 0, sines, 0, 0, 0);
			sound11();
			Sleep(30000);
			TerminateThread(P11, 0);
			CloseHandle(P11);
			InvalidateRect(0, 0, 0);
		}
	}
}
