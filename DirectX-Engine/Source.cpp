#include "ErrorLogger.h" // Windows.h is included in the ErrorLogger.h file already
// Linkers
#pragma comment(lib, "d3d11.lib")
#pragma comment(lib, "DirectXTK.lib")

// Entry Point
int APIENTRY wWinMain(_In_ HINSTANCE hInstance,
	_In_opt_ HINSTANCE hPrevInstance,
	_In_ LPWSTR lpCmdLine,
	_In_ int nCmdShow) {

	return 0;
}

// NOTES
/** HRESULT example types
	S_OK = that it was successful/ran ok
	E_INVALIDARG = that there's something wrong with the arguments

	Can check failure condidtion of HRESULT with FAILED(HRESULT hr) -> returns bool
	Can check success condiditon of HRESULT with SUCCEEDED(HRESULT hr) -> returns bool*/