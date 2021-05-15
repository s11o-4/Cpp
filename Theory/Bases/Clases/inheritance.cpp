#include <bits/stdc++.h>
using namespace std;

//Herencia, y herencia multinivel
class Perro
{
public:
    string raza = "boxer";
    void ladrar()
    {
        cout << "Wouf!";
    }
};

class Gato : public Perro
{
public:
    string gato_raza = "normal";
};

class Lynce : public Gato
{
public:
    string lince_raza = "lince rojo";
};

//Herencia multiple
class Zeus
{
public:
    string padre_todos = "Padre de todos";
};

class Odin
{
public:
    string odin = "Odin";
};

class Thor : public Zeus, public Odin
{
public:
    string Thor = "Thor";
};

//Access Specifiers (using protected)
// Base class
class Employee
{
protected: // Protected access specifier
    int salary;
};

// Derived class
class Programmer : public Employee
{
public:
    int bonus;
    void setSalary(int s)
    {
        salary = s;
    }
    int getSalary()
    {
        return salary;
    }
};

int main()
{
    //Herencia y herencia multinivel
    Lynce objeto_main;
    cout << objeto_main.gato_raza << "\n";

    //Herencia multiple
    Thor objeto_thor;
    cout << objeto_thor.padre_todos << "\n";
    cout << objeto_thor.odin << "\n";
    cout << objeto_thor.Thor << "\n";

    cout<<"\n";
    
    Programmer myObj;
    myObj.setSalary(50000);
    myObj.bonus = 15000;
    cout << "Salary: " << myObj.getSalary() << "\n";
    cout << "Bonus: " << myObj.bonus << "\n";
    return 0;
}
