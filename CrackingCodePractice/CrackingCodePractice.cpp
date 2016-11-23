// CrackingCodePractice.cpp : Defines the entry point for the console application.
#include "stdafx.h"
#include <iostream>
#include "BasicHelper.h"
#include "CrackingCodePractice.h"
#include "ArraysAndStrings.h"

using namespace std;

void CallArraysAndStrings(int QuestionIndex)
{
	string str, str2;
	string result = "";
	ArraysAndStrings obj;
	switch ( QuestionIndex )
	{
		case 1:
			cout << "Input string to determine is the string has all unique characters." << endl;
			cin >> str;
			result = obj.IsUniqueCharacter(str) ? "The string has all unique characters." : "The string has duplicated characters.";
			break;
		case 2:
			cout << "Input string as c-style and reverse it." << endl;
			cin >> str;
			result.assign( obj.ReverseCStr( const_cast<char*>( str.c_str() ) ) );
			//char* result = obj.AdvancedRreverse(const_cast<char*>(str.c_str()));
			break;
		case 3:
			cout << "Remove duplicated character in the input string." << endl;
			cin >> str;
			result = obj.RemoveDuplicatedChar(str);
			break;
		case 4:
			cout << "Is the input two strings are anagrams?" << endl;
			cin >> str >> str2;
			result = obj.IsAnagrams(str, str2) ? "They are anagrams." : "They are not anagrams.";
		case 5:
		{
			cout << "Replace string from space to %20." << endl;
			cout << "Please input the string:" << endl;
			getline(cin, str);
			result = obj.Replace(str," ","%20");
		}
			break;
		case 6:
		{
			cout << "Please set image width and height (Square) and it will rotate this image 90 degree." << endl;
			cin >> str;
			int size = atoi( str.c_str() );
			int* img = obj.GeneratedSquareImg( size );
			cout << "Original image content is " << endl;
			obj.PrintSquareImg( img, size);

			cout << endl << "Rotated  image content is " << endl;
			obj.PrintSquareImg( obj.RotateSquareImg(img, size), size );
		}
		break;
		case 7:
		{
			int matrix[24] = {
				 0, 1, 2, 3, 4, 5,
				 6, 7, 8, 9,10,11,
				12,13,14,15, 0, 0,
				18,19,20,21,22,23
			};
			obj.PrintMatrix(matrix, 4, 6);

			cout << endl << "If matrix has 0 content, then this content's row and column should be clear to 0. " << endl;
			obj.PrintMatrix(obj.ParseMatrixToZero(matrix, 4,6), 4,6);
		}
		break;
		default:
			break;
	}

	cout << result << endl;
}

int main()
{
	CallArraysAndStrings(7);
    return 0;
}

