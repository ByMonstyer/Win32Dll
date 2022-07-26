#include "stdafx.h"
#include "ccc.h"


ccc::ccc()
{
}


ccc::~ccc()
{
}

int ccc::add(int i)
{
	return i + i;
}

int ccc::sub(vector<int> &mk)
{
	mk.push_back(2);
	return mk.size();
}