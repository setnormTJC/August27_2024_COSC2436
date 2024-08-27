#pragma once

#include<vector> 

using namespace std;

/*
This is a SEQUENTIAL search algorithm

@param 1) list of stuff, 2) target value
*/
template<typename T> 
bool search(const vector<T>& listOfThings, const T& searchValue)
{
	for (int i = 0; i < listOfThings.size(); i++)
	{
		if (listOfThings[i] == searchValue)
		{
			return true; 
		}
	}

	return false; 
}

