#include "stdafx.h"
#include "ArraysAndStrings.h"
#include <iostream>
#include "math.h"
#include <vector>
#include <iomanip>
using namespace std;

ArraysAndStrings::ArraysAndStrings()
{
	//ctor
}

ArraysAndStrings::~ArraysAndStrings()
{
	//dtor
}


bool ArraysAndStrings::IsUniqueCharacter(std::string str)
{
	bool asciiRecoder[256] = { false };
	for (size_t i = 0; i<str.size(); ++i)
	{
		int asciiVal = int(str[i]);
		if (asciiRecoder[asciiVal]) {
			return false;
		}
		asciiRecoder[asciiVal] = true;
	}
	return true;
}

char* ArraysAndStrings::ReverseCStr(char* str)
{
	size_t str_size = 0;

	while (str[str_size] != '\0') ++str_size;

	// '\0' is not a member of the string
	str_size -= 1;

	for (int i = 0; i< (int)(str_size / 2); ++i)
	{
		char tmp = str[i];
		str[i] = str[str_size - i];
		str[str_size - i] = tmp;
	}
	return str;
}

char* ArraysAndStrings::AdvancedRreverse(char *str) {
	char * m_end = str;
	char tmp;
	if (str) {
		while (*m_end)
		{
			++m_end;
		}
		--m_end;
		while (str < m_end)
		{
			tmp = *str;
			*str++ = *m_end;
			*m_end-- = tmp;
		}
	}

	return str;
}

string ArraysAndStrings::RemoveDuplicatedChar(string str)
{
	bool asciiRecoder[256] = { false };

	const int newStrSize = str.size() + 1;
	char *newStr = new char[newStrSize];

	int index = 0;
	for (size_t i = 0; i<str.size(); ++i)
	{
		int asciiVal = int(str[i]);
		if (!asciiRecoder[asciiVal])
		{
			asciiRecoder[asciiVal] = true;
			newStr[index] = str[i];
			++index;
		}
	}
	newStr[index] = 0;
	string retStr(newStr);
	delete []newStr;
	return retStr;
}


bool ArraysAndStrings::IsAnagrams(string str1, string str2)
{
	if (str1.size() != str2.size()) return false;

	int asciiRecorder[256] = { 0 };

	for (int i = 0; i<str1.size(); i++)
	{
		asciiRecorder[int(str1[i])]++;
	}

	for (int i = 0; i<str2.size(); i++)
	{
		if (asciiRecorder[int(str2[i])] == 0)
			return false;
		asciiRecorder[int(str2[i])]--;
	}
	return true;
}

string ArraysAndStrings::Replace(string str, string from, string to)
{
	if (str.empty())
		return "";
	size_t strPos = 0;

	strPos = str.find(from,strPos);
	while (strPos != string::npos)
	{
		str.replace(strPos, from.length(), to);
		strPos = str.find(from, strPos + to.length() );
	}
	return str;
}

int* ArraysAndStrings::RotateSquareImg(int* img, int size)
{
	/*Reflect via diagonal*/
	for (int i = 0; i < size; i++)
		for (int j = i + 1; j < size; j++)
			helper.swap( img[i*size/*row*/ + j/*col*/], img[j*size/*row*/ + i/*col*/] );

	/*Reflect via horizontal*/
	for (int i = 0; i < size/2; i++)
		for (int j = 0; j < size; j++)
			helper.swap(img[i*size/*row*/ + j/*col*/], img[(size-i-1)*size/*row*/ + j/*col*/]);

	return img;
}

int* ArraysAndStrings::GeneratedSquareImg(int size)
{
	int* img = new int[size*size];
	for (int i = 0; i < size*size; i++)
		img[i] = i + 1;
	return img;
}

void ArraysAndStrings::PrintSquareImg(int* img, int size)
{
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			cout << setw(3) << img[ i*size/*row*/ + j/*col*/ ] << " ";
		}
		cout << endl;
	}
}

void ArraysAndStrings::PrintMatrix(int* matrix, int rowSize, int colSize)
{
	for (int i = 0; i < rowSize; i++)
	{
		for (int j = 0; j < colSize; j++)
		{
			cout << setw(3) << matrix[i*colSize/*row*/ + j/*col*/] << " ";
		}
		cout << endl;
	}
}

int* ArraysAndStrings::ParseMatrixToZero(int* matrix, int rowSize, int colSize)
{
	vector<bool> row(rowSize, false);
	vector<bool> col(colSize, false);

	for (int i = 0; i < rowSize; i++)
	{
		for (int j = 0; j < colSize; j++)
		{
			if (!row[i] && !col[j])
			{
				if (matrix[i*colSize + j] == 0)
				{
					row[i] = true;
					col[j] = true;
				}
			}
		}
	}

	for (int i = 0; i < rowSize; i++)
	{
		for (int j = 0; j < colSize; j++)
		{
			if (row[i] || col[j])
			{
				matrix[i*colSize + j] = 0;
			}
		}
	}

	return matrix;
}