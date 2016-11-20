#pragma once
#include <string>

class ArraysAndStrings
{
public:
	ArraysAndStrings();
	virtual ~ArraysAndStrings();

	//Implement an algorithm to determine if a string has all unique characters.
	//What if you can not use additional data structures?
	bool IsUniqueCharacter(std::string str);


	//Write code to reverse a C-Style String.
	//(C-String means that ¡§abcd¡¨ is represented as five characters, including the null character.)
	char* ReverseCStr(char* str);
	char* AdvancedRreverse(char *str);


	//Design an algorithm and write code to remove the duplicate characters in a string without using any additional buffer.
	//NOTE: One or two additional variables are fine.
	//An extra copy of the array is not.
	//FOLLOW UP
	//Write the test cases for this method.
	std::string RemoveDuplicatedChar(std::string str);

	//Write a method to decide if two strings are anagrams or not.
	bool IsAnagrams(std::string str1, std::string str2);

protected:

private:


};