#include<iostream> 

//#include<array>
//int nums[10]
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

int main()
{
	//Person me{ "seth", 36 };

	//me.print(); 
	//std::mt19937 engine(time(0)); 

	//std::uniform_int_distribution<int> randomDistribution(0, 100); 

	//for (int i = 0; i < 100; i++)
	//{
	//	std::cout << randomDistribution(engine) << "\n";
	//}

	adsfasdfadsf

	vector<string> peopleInMyContactList =
	{
		"Alice", "Carol", "Bob", "Darth", "Frank", "Eve"
	};

	vector<int> listOfNums =
	{
		485, 36549, 193750, 837365, 5
	};

	//start a timer: 

	//execute an algorithm 

	//stop clock 

	//display the amount of time it took 


	while (true)
	{
		cout << "Enter a NUMBER to search for: \n";
		int targetNumber;
		cin >> targetNumber;

		if (search(listOfNums, targetNumber))
		{
			cout << "number was found!\n";
		}

		else
		{
			cout << "Not found :(\n";
		}


	}

	return 0; 
}