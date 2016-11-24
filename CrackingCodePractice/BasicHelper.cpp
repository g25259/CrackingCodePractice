#include "stdafx.h"
#include "BasicHelper.h"


BasicHelper::BasicHelper()
{
}


BasicHelper::~BasicHelper()
{
}

void BasicHelper::swap(int& a, int& b)
{
	int tmp = b;
	b = a;
	a = tmp;
}

void BasicHelper::PrintMatrix(int* matrix, int rowSize, int colSize)
{
	for (int i = 0; i < rowSize; i++)
	{
		for (int j = 0; j < colSize; j++)
		{
			std::cout << std::setw(3) << matrix[i*colSize/*row*/ + j/*col*/] << " ";
		}
		std::cout << std::endl;
	}
}

bool BasicHelper::isSubstring(std::string s1, std::string s2) {
	if (s1.size() < s2.size() || s1.size() == 0 || s2.size() == 0) return false;
	else if (s1.find(s2) != std::string::npos) return true;
	else return false;
}