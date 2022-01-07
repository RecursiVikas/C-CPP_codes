//Idea of Encapsulation to bundle together the data and the methods working on
//that data...
#include <iostream>
using std::cout;
using std::string;
using std::endl;

class Employee
{
    string Name;
    string Company;
    int Age;

public:
    void introduceYourself()
    {
        cout << "I'm " << Name << ". I work for " << Company
        << " and I am " << Age << " years old." << endl;
    }
};

int main()
{
    Employee emp1;
}