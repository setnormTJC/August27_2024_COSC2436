// TestingBinarySearchAlgo.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

#include<algorithm>

#include"../August27_2024_COSC2436/searchAlgos.h"



int main()
{
    //binary

    //vector<int> nums =
    //{
    //    8, 6, 7, 5, 3, 0, 9
    //}; 
    const int N = 8096; //O(

    auto nums = generateNRandomNumbers_between1AndN(N); 

    printVec(nums); 

    //sort the vector and then print 
    //std::binary_
    std::sort(nums.begin(), nums.end());

    cout << "Sorted?\n";
    printVec(nums); 

    //0, 3, 5, 6, 7, 8, 9 
    int targetValue = N + 2; 
    //O(log(N)) -> better than O(N) 
    // 
    //binary search is generally FASTER than sequential search

    cout << "Found " << targetValue << "?  at index = " << binarySearch(nums, targetValue);

    //vector<string> names =
    //{
    //    "John", "Jacob", "Jingleheimer", "Smith", "Bob", "Alice"
    //};
    //cout << "Names vector BEFORE sort: \n";
    //printVec(names); 

    //std::sort(names.begin(), names.end());

    //printVec(nums); 
    //std::cout << "\nand the sorted names: \n";
    //printVec(names); 



    //std::cout << "Hello World!\n";
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
