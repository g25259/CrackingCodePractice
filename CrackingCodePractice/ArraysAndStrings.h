#pragma once
#include <string>
#include "BasicHelper.h"
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

	//Write a method to replace all spaces in a string with ¡¥%20¡¦.
	std::string Replace(std::string str, std::string from, std::string to);

	//Given an image represented by an NxN matrix, where each pixel in the image is 4 bytes, 
	//write a method to rotate the image by 90 degrees. Can you do this in place? 
	int* RotateSquareImg(int* img, int size);
	int* GeneratedSquareImg(int size);
	void PrintSquareImg(int* img, int size);

	//Write an algorithm such that if an element in an MxN matrix is 0, its entire row and column is set to 0.
	int* ParseMatrixToZero(int* matrix, int row, int col);
	void PrintMatrix(int* matrix, int rowSize, int colSize);
protected:

private:
	BasicHelper helper;

};