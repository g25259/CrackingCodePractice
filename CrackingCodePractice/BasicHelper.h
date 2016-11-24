#pragma once
#include <string>
#include <iostream>
#include <iomanip>
class BasicHelper
{
public:
	BasicHelper();
	~BasicHelper();

	void swap(int& a, int& b);
	void PrintMatrix(int* matrix, int rowSize, int colSize);
	bool isSubstring(std::string s1, std::string s2);
};

