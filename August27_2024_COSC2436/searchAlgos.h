#pragma once

#include<vector> 

using namespace std;

/*
This is a SEQUENTIAL search algorithm

@param 1) list of stuff, 2) target value
*/
template<typename T> 
bool sequential_search(const vector<T>& listOfThings, const T& searchValue)
{
	//int comparisonCount = 0; 
	for (int i = 0; i < listOfThings.size(); i++)
	{
		//comparisonCount++; 

		if (listOfThings[i] == searchValue)
		{
			//cout << "Found! at index = " << i << "\n";
			return true; 
		}
	}
	 
	//cout << "NOT found\n";
	return false; 
}

