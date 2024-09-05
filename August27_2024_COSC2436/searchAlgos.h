#pragma once

#include<vector> 

#include<random> 


using namespace std;

vector<int> generateNRandomNumbers_between1AndN(int N)
{
	vector<int> randomNumbers;

	std::mt19937 engine(time(0));
	std::uniform_int_distribution<int> randomDistribution(0, N); //inclusive

	for (int i = 0; i < N; i++)
	{
		randomNumbers.push_back(randomDistribution(engine));

		//rand() % 100 //less preferable approach
	}

	return randomNumbers;
}

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
PRE-CONDITION (of using this function) -> array MUST be sorted! 

@return the INDEX of the element searched for (-1 if not found) 
*/
template<typename T> 
int binarySearch(vector<T> listOfSORTEDThings, T searchValue)
{
	bool found = false;
	int first = 0;
	int last = listOfSORTEDThings.size() - 1;
	int middle;
	
	int comparisonCount = 0; 

	while (first <= last and !found)
	{

		middle = (first + last) / 2; //use ceil() or floor() for odd lengths … be cautious
		if (listOfSORTEDThings[middle] == searchValue)
		{
			comparisonCount++; 
			found = true;
		}
		else if (listOfSORTEDThings[middle] > searchValue)
		{
			comparisonCount++;
			last = middle - 1;//shift last one to the "left" of middle
		}
		else
		{
			comparisonCount++;
			first = middle + 1;
		}

	}//end while
	
	if (found)
	{
		cout << "Total comparisons performed: " << comparisonCount << "\n";
		return middle;
	}
	else
	{
		cout << "Total comparisons performed: " << comparisonCount << "\n";
		return -1;//element is not in array
	}
}

