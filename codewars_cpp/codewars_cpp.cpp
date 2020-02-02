// codewars_cpp.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <vector>
#include <cmath>

class Valley
{
public:
	static std::vector<int> makeValley(std::vector<int> &arr);
};





int main()
{
	std::vector<int> d = { 17, 17, 15, 14, 8, 7, 7, 5, 4, 4, 1 };
	Valley::makeValley(d);
	return 0;
}

std::vector<int> Valley::makeValley(std::vector<int>& arr)
{

	return std::vector<int>();
}
