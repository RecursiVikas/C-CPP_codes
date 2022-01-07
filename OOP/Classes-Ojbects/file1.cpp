#include <iostream>
using std::cout;
using std::endl;
using std::string;

class Employee
{
public:          // 'private' by default..
    string Name; // "" by default..
    string Company;
    int Age; // garbage by default..

    Employee()
    {
    }

    Employee(string name, string comp, int age)
    {
        Name = name;
        Company = comp;
        Age = age;
    }

    void introduceYourself()
    {
        cout << "I'm " << Name << ". I work for " << Company <<
        " and I am " << Age << " years old." << endl;
    }
};

int main()
{
    Employee emp1;
    // cout<<emp1.Age<<endl<<emp1.Name<<endl;
    emp1.Name = "Victor";
    emp1.Company = "Google";
    emp1.Age = 24;

    emp1.introduceYourself();

    Employee *emp2 = new Employee();
    emp2->Name = "Wins";
    emp2->Company = "OnePlus";
    emp2->Age = 26;
    emp2->introduceYourself();

    Employee emp3("John", "Microsoft", 24);
    emp3.introduceYourself();
}