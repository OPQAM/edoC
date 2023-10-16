// OOP3.cpp : Inhertance

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

// Inheritance
class Developer:public Employee { //by adding public, I can now use other stuff like asking for promotion...
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
};

class Teacher:public Employee {
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

};

int main()
{
    Developer d = Developer("Saldina", "YT-CodeBeauty", 25, "C++");
    Teacher t = Teacher("Jack", "School ABC", 44, "History");
    t.PrepareLesson();
    t.AskForPromotion();
}