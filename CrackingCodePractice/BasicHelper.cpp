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