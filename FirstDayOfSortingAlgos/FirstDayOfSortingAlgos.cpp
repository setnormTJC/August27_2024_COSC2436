#include <iostream>
#include <vector>


#include"../August27_2024_COSC2436/searchAlgos.h"

#include"sortinAlgos.h"


using namespace std;

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


void bogoSort(vector<int>& nums)
{
    int attemptCount = 0; 
    while (!isSorted(nums))
    {
        for (int i = 0; i < nums.size(); i++)
        {
            std::swap(nums[i], nums[rand() % nums.size()]);
        }

        attemptCount++; 
        printVec(nums); 
        cout << "\n\n";
    }

    cout << "It took this many shuffles: " << attemptCount << "\n";
}



int main()
{
    srand(time(0)); 

    //for ()
    //vector<int> unsortedNums = { 3, 5, 9, 4, 6, 2 };
    // 
    const int N = 5; 

    vector<int> randomUnsortedNums = generateNRandomNumbers_between1AndN(N); 
    
    bogoSort(randomUnsortedNums); 

    //cout << "RANDOMS (average data set): \n";
    //inplaceSort(randomUnsortedNums);

    //cout << std::boolalpha << isSorted(randomUnsortedNums) << "\n";

    
    //vector<int> alreadySortedNums; 

    //for (int i = 0; i < N; i++) 
    //{
    //    alreadySortedNums.push_back(i); 
    //}

    //cout << std::boolalpha << isSorted(alreadySortedNums) << "\n";
    //cout << "\n\nALREADY sorted (best case data set)\n";
    //inplaceSort(alreadySortedNums);


    //cout << "\n\nREVERSED order (worst case):\n";
    //vector<int> reverseSortedNums; 
    //for (int i = N - 1; i >= 0; i--)
    //{
    //    reverseSortedNums.push_back(i); 
    //}
    //inplaceSort(reverseSortedNums); 
    

    //printVec(randomUnsortedNums); 


    //cout << "Did the inplace sort work?\n";
    //printVec(randomUnsortedNums);

       
    //std::sort()//this is O(N*log(N)) -> better than O(N^2)

    return 0;
}