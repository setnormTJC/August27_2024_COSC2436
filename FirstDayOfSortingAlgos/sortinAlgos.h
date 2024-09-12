#pragma once

#include<vector>

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
