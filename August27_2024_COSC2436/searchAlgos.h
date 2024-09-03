#pragma once

#include<vector> 

using namespace std;

template<typename T> 
void printVec(const vector<T>& things)
{
	for (auto& thing : things)
	{
		cout << thing << " ";
	}
	cout << "\n";
}


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

/*
PRE-CONDITION (of using this function) 

@return the INDEX of the element searched for (-1 if not found) 
*/
template<typename T> 
int binarySearch(vector<T> listOfSORTEDThings, T searchValue)
{
	bool found = false;
	int first = 0;
	int last = listOfSORTEDThings.size() - 1;
	int middle;


	while (first <= last and !found)
	{
		middle = (first + last) / 2; //use ceil() or floor() for odd lengths … be cautious
		if (listOfSORTEDThings[middle] == searchValue)
		{
			found = true;
		}
		else if (listOfSORTEDThings[middle] > searchValue)
		{
			last = middle - 1;//shift last one to the "left" of middle
		}
		else
		{
			first = middle + 1;
		}

	}//end while
	
	if (found)
	{
		return middle;
	}
	else
	{
		return -1;//element is not in array
	}
}

