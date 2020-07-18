#pragma once
#include "StringConverter.h"
#include <Windows.h> // include this lib for HRESULT

class ErrorLogger {
public:
	static void Log(std::string message);
	// HRESULT is a data type that is passed by a lot of Windows API & DirectX functions
	// Tells us whether the function call was successful & if it was not successful, it will return an error code related to the 
	// reason it failed. 
	static void Log(HRESULT hr, std::string message);
};