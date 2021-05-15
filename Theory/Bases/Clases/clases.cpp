#include <bits/stdc++.h>
using namespace std;

class Rectangulo
{
public://Acces specifier
    void area(int num1, int num2);
    int num1_global = 0;
    void volumen(int num1, int num2, int num3)
    {
        int result = num1 * num2 * num3;
        cout << "\n"
             << result << "\n";
    }
    inline void saluda(string saluda);
    void clima(int dia);
};
void Rectangulo::area(int num1, int num2)
{
    int result = num1 * num2;
    cout << result;
}
inline void Rectangulo::saluda(string saluda)
{
    cout << "Hello " << saluda << "\n";
}
void Rectangulo::clima(int dia)
{
    if (dia == 10)
    {
        cout << "\n10° \n";
    }
}

class Constructor
{
public:
    Constructor(bool bandera)
    {
        if (bandera)
        {
            cout << "Hello from the constructor\n";
        }
    }
public:
    int suma(int num1, int num2){
        int result = num1 + num2;
        return result;
    }
};
int main()
{
    //Clase Rectangulo
    Rectangulo objeto;
    objeto.area(10, 10);
    objeto.num1_global = 10;
    cout << "\n";
    cout << objeto.num1_global << "\n";
    objeto.volumen(10, 10, 10);
    objeto.saluda("Ruben");
    objeto.clima(10);

    //Clase con constructor
    Constructor objeto2(false);
    int loc_result = objeto2.suma(10,15);
    cout<<loc_result<<"\n";
}
