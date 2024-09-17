
#include <iostream>

#include<vector> 

#include<iomanip>

#include<algorithm>

class Person
{
    int age; 
    std::string name; 
    //eugenics 
    double bankAccountBalance; 

public:
    Person(int age, std::string name, double bankAccountBalance)
        :age(age), name(name), bankAccountBalance(bankAccountBalance)
    {

    }

    void printPerson()
    {
        std::cout << std::left << std::setw(15); 

        std::cout << name; 

        std::cout << std::left << std::setw(10);

        std::cout << age;

        std::cout << std::left << std::setw(10);

        std::cout << bankAccountBalance;

        std::cout << "\n";
    }

    //bool hasGreaterMoney

    //operator overloading!
    bool operator < (const Person& otherPerson)
    {
        return (this->bankAccountBalance < otherPerson.bankAccountBalance);
    }

};

int main()
{
    //
    Person me{ 36, "Seth Norman", 1'111'111.11 };
    Person she{ 21, "Alice Ames", 999.99 }; 
    Person thee{22, "John Smith",7.01};
    Person otherPerson{ 12, "Carol Cole", -1234.54 };

    //me.printPerson(); 
    //she.printPerson(); 
    //thee.printPerson(); 


    std::vector<Person> people = { me, she, thee, otherPerson };
    
    std::cout << "The INITIAL order of these people is: \n";
    for (auto& thePerson : people)
    {
        thePerson.printPerson(); 
    }

    std::sort(people.begin(), people.end());

    std::cout << "\n\nThe SORTED (by bank account balance) order of these people is: \n";
    for (auto& thePerson : people)
    {
        thePerson.printPerson();
    }


}
