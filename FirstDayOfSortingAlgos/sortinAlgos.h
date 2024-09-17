#pragma once

#include<vector>
#include<algorithm>

/*average complexity of bubble sort is O(N^2)*/
void inplaceSort(vector<int>& nums)
{
    unsigned long long comparisonCount = 0;
    unsigned long long swapCount = 0;

    for (int blueArrow = 0; blueArrow < nums.size(); blueArrow++)
    {
        for (int greenArrow = blueArrow + 1; greenArrow < nums.size(); greenArrow++)
        {
            comparisonCount++;
            if (nums[blueArrow] > nums[greenArrow]) //"comparison" (we will COUNT this later) 
            {

                std::swap(nums[blueArrow], nums[greenArrow]); //this will NEVER happen if nums is already sorted
                swapCount++;
            }
        }
    }

    cout << "Total comparison count: " << comparisonCount << "\n";
    cout << "Total swap count: " << swapCount << "\n";
}
//O(N^2)?

void mySwap(vector<int>& nums, int firstIndex, int secondIndex)
{
    int temporary = nums[firstIndex];

    nums[firstIndex] = nums[secondIndex];

    nums[secondIndex] = temporary;
}

int findMinimum(const vector<int>& unsortedNums)
{
    int theSmallestOne = unsortedNums[0];

    for (auto& num : unsortedNums)
    {
        if (num < theSmallestOne)
        {
            theSmallestOne = num;
        }
    }
    //what is the AVERAGE complexity of THIS algorithm?  -> O(N) 
    return theSmallestOne;
}

auto outOfPlaceSort(vector<int> unsortedNums)
{
    vector<int> SORTEDnums;

    while (!unsortedNums.empty())
    {
        int currentMin = findMinimum(unsortedNums);

        SORTEDnums.push_back(currentMin);
        auto positionOfCurrentMin = std::find(unsortedNums.begin(), unsortedNums.end(), currentMin);
        unsortedNums.erase(positionOfCurrentMin);

    }

    return SORTEDnums;
}


bool isSorted(const std::vector<int>& nums)
{
    for (int i = 0; i < nums.size() - 1; i++)
    {
        if (nums[i] > nums[i + 1])
        {
            return false;
        }
    }
    return true;
}

/*
* @return the number of shuffles required before sorting is accomplished
*/
int bogoSort(vector<int>& nums)
{
    int attemptCount = 0;
    while (!isSorted(nums))
    {
        //the loop below is an implementation of a `shuffle` algorithm
        for (int i = 0; i < nums.size(); i++)
        {
            //std::random_shuffle(nums.begin(), nums.end()); 
            std::swap(nums[i], nums[rand() % nums.size()]);
        }

        attemptCount++;
        //printVec(nums);
        //cout << "\n\n";
    }

    cout << "It took this many shuffles: " << attemptCount << "\n";

    return attemptCount; 
}

/*O(infinity) - > do NOT use!
BEST case complexity: O(1) */
//AVERAGE complexity O(infinity)
void miracleSort(vector<int> unsortedNums)
{
    while (!isSorted(unsortedNums))
    {
        //do nothing and pray 
    }
}