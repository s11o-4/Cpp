#include <bits/stdc++.h>
using namespace std;
/*
        Estructura
try {
  // Block of code to try
  throw exception; // Throw an exception when a problem arise
}
catch () {
  // Block of code to handle errors
}
*/
int main()
{
    try
    {
        int age = 15;
        if (age >= 18)
        {
            cout << "Access granted - you are old enough.";
        }
        else
        {
            throw(age); // no es necesario mandar una variable
            //igual puede ser un número
        }
    }
    catch (int myNum)
    {
        cout << "Access denied - You must be at least 18 years old.\n";
        cout << "Age is: " << myNum;
    }

    cout<<"\n";

    try
    {
        int age = 15;
        if (age >= 18)
        {
            cout << "Access granted - you are old enough.";
        }
        else
        {
            throw 505;
        }
    }
    catch (...) // no es necesario especificar un argumento 
    {
        cout << "Access denied - You must be at least 18 years old.\n";
    }
}