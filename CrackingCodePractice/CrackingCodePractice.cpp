// CrackingCodePractice.cpp : Defines the entry point for the console application.
#include "stdafx.h"
#include <iostream>
#include "ArraysAndStrings.h"

using namespace std;



int main()
{
	/*
	string str;
	cout << "Input string to determine is the string has all unique characters." << endl;
	cin >> str;

	ArraysAndStrings obj;
	string result = obj.IsUniqueCharacter(str) ? "The string has all unique characters." : "The string has duplicated characters.";
	cout << result << endl;
	*/

	/*
	string str;
	cout << "Input string as c-style and reverse it." << endl;
	cin >> str;

	ArraysAndStrings obj;
	char* result = obj.ReverseCStr(const_cast<char*>(str.c_str()));
	//char* result = obj.AdvancedRreverse(const_cast<char*>(str.c_str()));
	cout << result << endl;
	*/

	/*
	string str;
	cout << "Remove duplicated character in the input string." << endl;
	cin >> str;

	ArraysAndStrings obj;
	string result = obj.RemoveDuplicatedChar(str);
	cout << result << endl;
	*/

	string str1, str2;
	cout << "Is the input two strings are anagrams?" << endl;
	cin >> str1 >> str2;

	ArraysAndStrings obj;
	string result = obj.IsAnagrams(str1, str2) ? "They are anagrams." : "They are not anagrams.";
	cout << result << endl;


    return 0;
}

