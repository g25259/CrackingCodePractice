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
		default:
			break;
	}

	cout << result << endl;
}

int main()
{
	CallArraysAndStrings(6);
    return 0;
}

