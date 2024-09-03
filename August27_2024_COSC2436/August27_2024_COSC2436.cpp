#include<iostream> 


#include<vector> 

#include<string>

#include<random>

#include"searchAlgos.h"

#include<thread> 

#include<chrono> 

//using namespace std; 


////mini review of last semester
//class Person
//{
//private: 
//	string name; 
//	int age; 
//
//public: 
//	Person()
//	{
//		name = "tbd";
//		age = -999; 
//	}
//
//	Person(string name, int age)
//		:name(name), age(age)
//	{
//
//	}
//
//	//add other methods: 
//
//	void print()
//	{
//		cout << "Name: " << name << "\nAge: " << age << endl; 
//	}
//	bool operator == (const Person& other)
//	{
//		return
//			(
//				this->age == other.age
//				&&
//				this->name == other.name
//				);
//	}
//
//
//};
//
//class Employee : public Person
//{
//	//string name; 
//	//int age; 
//
//	double salary; 
//
//};
//
//class Team
//{
//	Person leader; //an example of composition 
//
//	vector<Person> subordinates; 
//
//	//try throw catch 
//
//	//	assert ()
//
//	//	if 
//
//};

//unit testing 
vector<int> generateNRandomNumbers_between1AndN(int N)
{
	vector<int> randomNumbers; 

	std::mt19937 engine(time(0));
	std::uniform_int_distribution<int> randomDistribution(0, N); //inclusive

	for (int i = 0; i < N; i++)
	{
		randomNumbers.push_back(randomDistribution(engine));

		//rand() % 100 //less preferable approach
	}

	return randomNumbers;
}

void printVec(const vector<int>& nums)
{
	for (auto& num : nums)
	{
		cout << num << " ";
	}
	cout << "\n";
}

int main()
{

	//me.print(); 
	std::locale l("");
	cout.imbue(l); 

	int N; 

	for (N = 100; N <= 1'000'000; N = N * 10)
	{
		//cout << N << "\n";
		double averageTime = 0; 
		for (int i = 0; i < 10; i++)
		{
			auto vecN = generateNRandomNumbers_between1AndN(N);

			std::chrono::seconds duration(1);
			std::this_thread::sleep_for(duration);

			std::mt19937 engine(time(0));
			std::uniform_int_distribution<int> randomDistribution(0, N);

			int searchValue = randomDistribution(engine);

			auto startTime = std::chrono::high_resolution_clock::now();

			//execute an algorithm 

			sequential_search(vecN, searchValue); //323 is a "worst case scenario" 

			//stop clock 
			auto stopTime = std::chrono::high_resolution_clock::now();

			//display the amount of time it took 
			//cout << "\nIt took: " << (stopTime - startTime).count() << "nanoseconds ";
			//cout << " to find a random number in an array of size N = " << N << "\n\n";

			averageTime += (stopTime - startTime).count();
		}

		cout << "Average time for N = " << N << "..." << averageTime / 10 
			<< " nanoseconds (ns) \n";

		//int searchValue = rand() % N; 
	}

	//system("pause"); 

	//int N = 100; 
	//auto vec100 = generateNRandomNumbers_between1AndN(N);
	//printVec(vec100);



	//Big O Notation/complexity of sequential search (O (N)) 
	//Bubble sort -> O(N^2)  

	//"edge case"
	
	//int searchValue = vec100[0]; 
	//start a timer: 
	//auto startTime = std::chrono::high_resolution_clock::now();
	//
	////execute an algorithm 

	//sequential_search(vec100, searchValue ); //323 is a "worst case scenario" 

	////stop clock 
	//auto stopTime = std::chrono::high_resolution_clock::now();
	//
	////display the amount of time it took 
	//cout << "It took: " << (stopTime - startTime).count() << "nanoseconds\n";

	//while (true)
	//{
	//	cout << "Enter a NUMBER to search for: \n";
	//	int targetNumber;
	//	cin >> targetNumber;

	//	if (search(listOfNums, targetNumber))
	//	{
	//		cout << "number was found!\n";
	//	}

	//	else
	//	{
	//		cout << "Not found :(\n";
	//	}


	//}

	return 0; 
}