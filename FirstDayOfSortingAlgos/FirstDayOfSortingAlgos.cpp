#include <iostream>
#include <vector>


#include"../August27_2024_COSC2436/searchAlgos.h"

using namespace std;

/*average complexity of bubble sort is O(N^2)*/
void inplaceSort(vector<int>& nums)
{
    for (int blueArrow = 0; blueArrow < nums.size(); blueArrow++)
    {
        for (int greenArrow = blueArrow + 1; greenArrow < nums.size(); greenArrow++)
        {
            if (nums[blueArrow] > nums[greenArrow]) //"comparison" (we will COUNT this later) 
            {
                std::swap(nums[blueArrow], nums[greenArrow]);
            }
        }
    }
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


int main()
{
    vector<int> unsortedNums = { 3, 5, 9, 4, 6, 2 };
    
    cout << "Testing swap of indices 2 and 3 ...\n";
    mySwap(unsortedNums, 2, 3);
    //cout << "BEFORE swap of indices 0 and 1: \n";
    printVec(unsortedNums); 

    //auto SORTEDnums = outOfPlaceSort(unsortedNums);
    //std::swap(nums[0], nums[1]); 
    //cout << "AFTER swap of indices 0 and 1: \n";
    //printVec(nums);

    inplaceSort(unsortedNums); 
    //cout << "Did the out of place (space inefficient) sort work?\n";
    cout << "Did the inplace sort work?\n";
    printVec(unsortedNums);

    
    
    //std::sort()//this is O(N*log(N)) -> better than O(N^2)

    return 0;
}