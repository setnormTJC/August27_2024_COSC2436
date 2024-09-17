#include <iostream>
#include <vector>

//#include<Windows.h>
#include<chrono>
#include"../August27_2024_COSC2436/searchAlgos.h"

#include"sortinAlgos.h"


using namespace std;





int main()
{
    int otherN = 10'000; 
    vector<int> vecN = generateNRandomNumbers_between1AndN(otherN); 

    //std::sort(vecN.begin(), vecN.end()); //std::sort is often a "quicksort" (recursive) 
    auto startTime = std::chrono::high_resolution_clock::now(); 
    //inplaceSort(vecN); //O(N^2)
    
    std::sort(vecN.begin(), vecN.end());

    auto stopTime = std::chrono::high_resolution_clock::now();


    cout << "It took this many nanoseconds (for the (N^2) sorting algo) to sort " << otherN
        << "randomly-generated nums: " << (stopTime - startTime).count() << "\n";
    cout << "...Done!\n";
    //printVec(unsortedNumbers);


    system("pause"); 

    srand(time(0)); 

    //for ()
    //vector<int> unsortedNums = { 3, 5, 9, 4, 6, 2 };
    // 
    
    const int N = 10; 

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