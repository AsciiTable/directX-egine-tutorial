#include "ErrorLogger.h"
#include <comdef.h> // Used for _com_error data type

void ErrorLogger::Log(std::string message) {
	std::string error_message = "Error: " + message;
	// MessageBoxA = strings passed in are ASCII strings; short strings
	// Params: Window (NULL, not necessary), Text (string we just made), Title ("Error"), Error Message Box type (MB_ICONERROR is a message box with an Error Icon)
	MessageBoxA(NULL, error_message.c_str(), "Error", MB_ICONERROR);
}

void ErrorLogger::Log(HRESULT hr, std::string message) {
	_com_error error(hr);
	// Can retrieve information about that error
	error.ErrorMessage();
	// The strings have 'L' before them because they are wide strings
	std::wstring error_message = L"Error: " + StringConverter::StringToWide(message) + L"\n" + error.ErrorMessage();
	// MessageBoxW = strings passed in are wide strings; params are the same as MessageBoxA
	MessageBoxW(NULL, error_message.c_str(), L"Error", MB_ICONERROR);
}