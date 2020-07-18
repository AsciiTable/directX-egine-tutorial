#pragma once
#include <string>

class StringConverter {
public:
	// String -> WideString
	static std::wstring StringToWide(std::string str);
};