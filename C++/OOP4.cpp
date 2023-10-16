// OOP4.cpp 


#include <iostream>
using std::string;

// Creating an abstract class:
class AbstractEmployee {
    virtual void AskForPromotion() = 0; //virtual: pure virtual, or abstract function. It's now mandatory
};

class Employee :AbstractEmployee {

private:
    string Company;
    int Age;
protected:
    string Name;
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
    
    void IntroduceYourself() {
        std::cout << "My name is " << Name << std::endl;
        std::cout << "My company is " << Company << std::endl;
        std::cout << "I'm " << Age << " old" << std::endl;
    }
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
    virtual void Work() { // added virtual, to make it a virtual function (check if there is an implementation of this function in derived functions)
        std::cout << Name << " is checking email, task backlog, performing tasks..." << std::endl;
    }
};

// Inheritance
class Developer :public Employee {
public:
    string FavProgrammingLanguage;
    // constructor
    Developer(string name, string company, int age, string favProgrammingLanguage)
        :Employee(name, company, age)
    {
        FavProgrammingLanguage = favProgrammingLanguage;
    }
    void FixBug() {
        std::cout << Name << " fixed bug using " << FavProgrammingLanguage << std::endl;
    }
    void Work() { // if I now comment this out, I'll have the 'vanilla' result for the developer, and the expected return for teacher.
        std::cout << Name << " is writing " << FavProgrammingLanguage << " code" << std::endl;
    }
};

class Teacher :public Employee {
public: // to make the class Teacher reachable outside of the class
    string Subject;
    void PrepareLesson() {
        std::cout << Name << " is preparing " << Subject << " lesson" << std::endl;
    }
    //constructor for teacher
    Teacher(string name, string company, int age, string subject)
        :Employee(name, company, age)
    {
        Subject = subject;
    }
    void Work() {
        std::cout << Name << " is teaching " << Subject << std::endl;
    }

};

int main() // the most common use of polymorphism is when a parent class 
           // reference is used to refer toa  child class object
{
    Developer d = Developer("Saldina", "YT-CodeBeauty", 25, "C++");
    Teacher t = Teacher("Jack", "School ABC", 44, "History");

    Employee* e1 = &d;//a pointer of Employee class with a reference to a derived class object (d - the developer, inheriting from employee)
    Employee* e2 = &t;



    e1->Work(); // NOTE: I typed e1.Work(); -> the arrow came automatically
    e2->Work(); // '->' to access members using a pointer
}