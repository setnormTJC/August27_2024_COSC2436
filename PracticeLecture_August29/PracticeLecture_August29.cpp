
#include <iostream>

#include<random>

#include"../August27_2024_COSC2436/searchAlgos.h"

#include<chrono> 

/*ex: returns 1, 6, 4, 2, 3, 7, 2, 7, 3, 8 if N = 10
@param N -> the number of elements in the vector to be returned 
*/
auto generate(int N)
{
    std::mt19937 engine( time(0) );
    
    std::uniform_int_distribution<int> distribution{ 1, N };

    vector<int> nRandomNumbers; 

    for (int i = 0; i < N; i++)
    {
        nRandomNumbers.push_back(distribution(engine));
        //std::cout << distribution(engine) << endl;
    }

    return nRandomNumbers;

}

void printNums(const vector<int>& nums)
{
    for (auto& num : nums)
    {
        cout << num << " ";
    }
    cout << "\n";
}

int main()
{
    
    //cout << "Time(0) gives ..." << time(0) << endl;
    //srand(time(0)); 

    int NUMBER_OF_ELEMENTS = 100'000'000; 

    auto nRandomIntegers = generate(NUMBER_OF_ELEMENTS); 
    

    //search for a random number between 0 and N:
    system("pause"); 
    std::mt19937 engine(time(0));

    std::uniform_int_distribution<int> distribution{ 1, NUMBER_OF_ELEMENTS };

    int randomNumber = distribution(engine); 

    //printNums(nRandomIntegers);
    
    //worst-case scenario 

    cout << "\n\nLooking for " << randomNumber << "\n";
    system("pause");

    //Start a timer:
    auto start = std::chrono::high_resolution_clock::now();
    // perform algo: 
    bool found = search(nRandomIntegers, randomNumber);
    //stop timer 
    auto finish = std::chrono::high_resolution_clock::now(); 

    cout << "It took " << (finish - start).count() << "ns" << endl;

    if (found)
    {
        cout << "Found!\n";
    }

    else
    {
        cout << "Not found.\n";
    }

    //Stop the timer (O(N)) -> linear time complexity 

}
