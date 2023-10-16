// OOP2.cpp

#include <iostream>
using std::string;

// Creating an abstract class:
class AbstractEmployee {
    virtual void AskForPromotion()=0; //virtual: pure virtual, or abstract function. It's now mandatory
};



class Employee:AbstractEmployee {

private:
    string Name;
    string Company;
    int Age;

public:

    void setName(string name) { // setter
        Name = name;
    }
    string getName() { // getter
        return Name;
    }
    void setCompany(string company) {
        Company = company;
    }
    string getCompany() {
        return Company;
    }
    void setAge(int age) {
        if (age >= 18) // a check - a validation rule
            Age = age;
    }
    int getAge() {
        return Age;
    }
    // a function inside the class Employee:
    void IntroduceYourself() {
        std::cout << "My name is " << Name << std::endl;
        std::cout << "My company is " << Company << std::endl;
        std::cout << "I'm " << Age << " old" << std::endl;
    }
    // constructor of the class (inside the public area):
    Employee(string name, string company, int age) {
        Name = name;
        Company = company;
        Age = age;
    }
    void AskForPromotion() {
        if (Age > 30)
            std::cout << Name << " got promoted!" << std::endl;
        else
            std::cout << Name << ", sorry NO promotion for you!" << std::endl;
    }
};
int main()
{
    Employee employee1 = Employee("Ricardo", "ATEC", 45);
    Employee employee2 = Employee("Saldina", "YT-CodeBeauty", 25);

    employee1.AskForPromotion();
    employee2.AskForPromotion();
}