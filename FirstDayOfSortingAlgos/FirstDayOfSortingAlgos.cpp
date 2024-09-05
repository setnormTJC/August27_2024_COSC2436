#include <iostream>
#include <vector>


#include"../August27_2024_COSC2436/searchAlgos.h"

using namespace std;

/*average complexity of bubble sort is O(N^2)*/
void bubbleSort(vector<int>& nums)
{
    for (int i = 0; i < nums.size(); i++)
    {
        for (int j = 1; j < nums.size() - 1; j++)
        {
            if (nums[i] < nums[j])
            {
                std::swap(nums[i], nums[j]);
            }
        }
    }
}

int main()
{
    vector<int> nums = { 3, 5, 9, 4, 6, 2 };
    cout << "BEFORE swap of indices 0 and 1: \n";
    printVec(nums); 

    std::swap(nums[0], nums[1]); 
    cout << "AFTER swap of indices 0 and 1: \n";
    printVec(nums);

    bubbleSort(nums); 
    cout << "Did the bubble sort work?\n";
    printVec(nums); 

    
    
    //std::sort()//this is O(N*log(N)) -> better than O(N^2)

    return 0;
}