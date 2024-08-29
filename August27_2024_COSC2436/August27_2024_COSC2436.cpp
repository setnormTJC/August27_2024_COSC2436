#include<iostream> 


#include<vector> 

#include<string>

#include<random>

#include"searchAlgos.h"


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
	std::uniform_int_distribution<int> randomDistribution(0, N);

	for (int i = 0; i < N; i++)
	{
		randomNumbers.push_back(randomDistribution(engine));
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
	//Person me{ "seth", 36 };

	//me.print(); 

	int N = 100; 
	auto vec1000 = generateNRandomNumbers_between1AndN(N);
	printVec(vec1000);

	sequential_search(vec1000, 323);

	//"edge case"
	
	//start a timer: 

	//execute an algorithm 

	//stop clock 

	//display the amount of time it took 


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