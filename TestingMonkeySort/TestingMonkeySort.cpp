#include <iostream>
#include <vector>

//#include<Windows.h>
#include<chrono>
#include"../August27_2024_COSC2436/searchAlgos.h"

#include"../FirstDayOfSortingAlgos/sortinAlgos.h"

#include<algorithm>

int main()
{
    const int N = 5; 
    auto vecN = generateNRandomNumbers_between1AndN(N); 

    auto copyOfVecN = vecN; 

    vector<int> shuffleCounts; 
    for (int i = 0; i < 1000; i++)
    {

        shuffleCounts.push_back(bogoSort(vecN));

        vecN = copyOfVecN; 
    }

    //determine the AVERAGE number of shuffles:

    int sumOfShuffleCounts = 0; 
    for (auto& theShuffleCount : shuffleCounts)
    {
        sumOfShuffleCounts += theShuffleCount; 
    }

    cout << "the AVERAGE number of shuffles is: " << sumOfShuffleCounts / shuffleCounts.size() << "\n";


    std::cout << "Hello World!\n";
}
