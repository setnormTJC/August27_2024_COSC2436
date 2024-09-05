#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdlib>
#include <ctime>
#include <cmath>

using namespace std;

int sequentialSearch(const vector<int>& arr, int target) {
    int count = 0;
    for (int i = 0; i < arr.size(); ++i) {
        ++count;
        if (arr[i] == target) {
            return count;
        }
    }
    return count;
}

int binarySearch(const vector<int>& arr, int target) {
    int count = 0;
    int low = 0;
    int high = arr.size() - 1;

    while (low <= high) {
        ++count;
        int mid = (low + high) / 2;
        if (arr[mid] == target) {
            return count;
        }
        else if (arr[mid] < target) {
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
    }
    return count;
}

int main() {
    vector<int> array;
    for (int i = 0; i <= 50; i += 2) {
        array.push_back(i);
    }

    cout << "Array: ";
    for (int num : array) {
        cout << num << " ";
    }
    cout << endl;

    srand(time(0));

    vector<int> sequentialGuesses;
    vector<int> binaryGuesses;

    for (int i = 0; i < 5; ++i) {
        int target = array[rand() % array.size()];
        cout << "\nSearching for: " << target << endl;

        int seqCount = sequentialSearch(array, target);
        sequentialGuesses.push_back(seqCount);
        cout << "Sequential Search Guesses: " << seqCount << endl;

        int binCount = binarySearch(array, target);
        binaryGuesses.push_back(binCount);
        cout << "Binary Search Guesses: " << binCount << endl;
    }

    double avgSeqGuesses = 0.0;
    double avgBinGuesses = 0.0;
    for (int num : sequentialGuesses) {
        avgSeqGuesses += num;
    }
    for (int num : binaryGuesses) {
        avgBinGuesses += num;
    }
    avgSeqGuesses /= sequentialGuesses.size();
    avgBinGuesses /= binaryGuesses.size();

    cout << "\nAverage Sequential Search Guesses: " << avgSeqGuesses << endl;
    cout << "Average Binary Search Guesses: " << avgBinGuesses << endl;

    // Optional: Increase the number of array elements
    array.clear();
    for (int i = 0; i <= 1000; i += 2) {
        array.push_back(i);
    }

    cout << "\nArray increased to size 1000" << endl;

    sequentialGuesses.clear();
    binaryGuesses.clear();

    for (int i = 0; i < 5; ++i) {
        int target = array[rand() % array.size()];
        cout << "\nSearching for: " << target << endl;

        // Sequential Search
        int seqCount = sequentialSearch(array, target);
        sequentialGuesses.push_back(seqCount);

        // Binary Search
        int binCount = binarySearch(array, target);
        binaryGuesses.push_back(binCount);
    }

    // Calculate and print average number of guesses for larger array
    avgSeqGuesses = 0.0;
    avgBinGuesses = 0.0;
    for (int num : sequentialGuesses) {
        avgSeqGuesses += num;
    }
    for (int num : binaryGuesses) {
        avgBinGuesses += num;
    }
    avgSeqGuesses /= sequentialGuesses.size();
    avgBinGuesses /= binaryGuesses.size();

    cout << "\nTotal Sequential Search Guesses for larger array: " << avgSeqGuesses << endl;
    cout << "Total Binary Search Guesses for larger array: " << avgBinGuesses << endl;

    return 0;
}