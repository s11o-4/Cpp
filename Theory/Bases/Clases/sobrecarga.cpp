// #include <iostream>
// using namespace std;

//sobre carga de suma de constructores

// class Pareja
// {
// public:
//     double a, b;

//     // constructor parametrizado
//     Pareja(const double a, const double b)
//     {
//         this->a = a;
//         this->b = b;
//     }
// };

// // Sobrecarga del operador +
// Pareja operator+(const Pareja &p1, const Pareja &p2)//Esta funcion solo se activará
// //cuando tu le pases dos objetos del tipo struct
// {
//     Pareja res(p1.a + p2.a, p1.b + p2.b);//Crea un objeto del tipo struct, al
//     //que le pasa el valor de tu objeto 1.a, y el de tu objeto 2.b
//     return res;
// }

// int main()
// {
//     Pareja A(50, 75);
//     Pareja B(150, 175);
//     Pareja C = A + B;

//     cout << "A = " << A.a << ',' << A.b << "\n";
//     cout << "B = " << B.a << ',' << B.b << "\n";
//     cout << "C = " << C.a << ',' << C.b << "\n";

//     return 0;
// }

// ------------------------> Sobre carga de la clase ostream! <------------------------------------------

// #include <iostream>
// using namespace std;

// class Pareja
// {
// public:
//     double a, b;

//     // constructor parametrizado
//     Pareja(const double a, const double b)
//     {
//         this->a = a;
//         this->b = b;
//     }
// };

// // Sobrecarga del operador +
// Pareja &operator+(const Pareja &p1, const Pareja &p2)
// {
//     return *(new Pareja(p1.a + p2.a, p1.b + p2.b));
// }

// // Sobrecarga del operador << para la clase Pareja
// ostream &operator<<(ostream &o, const Pareja &p)//Yo llamo a la clase ostream
// //recibo un objeto del tipo ostream, y un objeto del tipo Pareja
// {
//     o << "(" << p.a << ", " << p.b << ")"; //uso mi objeto para imprimir los datos
//     //qu quiero. Es muy parecido a lo de ariba, pero aqui lo hago automático!
//     return o;
// }

// int main()
// {
//     Pareja A(50, 75);
//     Pareja B(150, 175);
//     Pareja C = A + B;

//     cout << "A = " << A << "\n";
//     cout << "B = " << B << "\n";
//     cout << "C = " << C << "\n";

//     return 0;
// }

//--------------------> Sobre carga de la clase ostream, pero ahora de su funcion cin <--------------------
// #include <iostream>
// using namespace std;

// class Pareja
// {
// public:
//     //Se pueden tener dos constructores!!!
//     double a, b;

//     // constructor parametrizado
//     Pareja(const double a, const double b)
//     {
//         this->a = a;
//         this->b = b;
//     }
//     //mi segundo constructor!
//     Pareja()
//     {
//         this->a = 0;
//         this->b = 0;
//     }
// };

// // Sobrecarga del operador +
// Pareja &operator+(const Pareja &p1, const Pareja &p2)
// {
//     return *(new Pareja(p1.a + p2.a, p1.b + p2.b));
// }

// // Sobrecarga del operador << para la clase Pareja
// ostream &operator<<(ostream &o, const Pareja &p)
// {
//     o << "(" << p.a << ", " << p.b << ")";
//     return o;
// }

// // Sobrecarga del operador >> para la clase Pareja
// istream &operator>>(istream &i, Pareja &p)
// {
//     cout << "Introducir valores para ( a, b) : ";
//     i >> p.a >> p.b;
//     i.ignore();
//     return i;
// }

// int main()
// {
//     Pareja A(50, 75);
//     Pareja B;
//     cin >> B;
//     Pareja C = A + B;

//     cout << "A = " << A << "\n";
//     cout << "B = " << B << "\n";
//     cout << "C = " << C << "\n";

//     return 0;
// }

//---------------------------->Operadores friend<---------------------------
//Que pasa si los operadores son privados??? :
// #include <iostream>
// using namespace std;

// class Pareja
// {

// private:
//     double a, b;

// public:
//     // constructor parametrizado
//     Pareja(const double a, const double b)
//     {
//         this->a = a;
//         this->b = b;
//     }

//     friend Pareja &operator+(const Pareja &p1, const Pareja &p2);
//     friend ostream &operator<<(ostream &o, const Pareja &p);
// };

// // Sobrecarga del operador + para la clase Pareja
// Pareja &operator+(const Pareja &p1, const Pareja &p2)
// {
//     return *(new Pareja(p1.a + p2.a, p1.b + p2.b));
// }

// // Sobrecarga del operador << para la clase Pareja
// ostream &operator<<(ostream &o, const Pareja &p)
// {
//     o << "(" << p.a << ", " << p.b << ")";
//     return o;
// }

// int main()
// {
//     Pareja A(50, 75);
//     Pareja B(150, 175);
//     Pareja C = A + B;

//     cout << "A = " << A << "\n";
//     cout << "B = " << B << "\n";
//     cout << "C = " << C << "\n";

//     return 0;
// }

//-------------------------Sobre carga, oepradores detro de una clase<-----------------

/*
Los operadores binarios se declaran con un solo parámetro, 
ya que el primer parámetro es pasado por el programa como this, es decir, 
un puntero al mismo objeto.
Los operadores unarios se declaran sin paramétros, 
ya que el único parámetro es pasado por el programa como this.
*/

#include <iostream>

using namespace std;

class Pareja
{

private:
    int a, b;

public:
    // constructor base
    Pareja() : a(0), b(0) {}

    // constructor parametrizado
    Pareja(const int a, const int b)
    {
        this->a = a;
        this->b = b;
    }

    // constructor de copia
    Pareja(const Pareja &);

    // operadores miembros
    Pareja &operator+(const Pareja &p);
    Pareja &operator-(const Pareja &p);
    Pareja &operator*(const Pareja &p);
    Pareja &operator/(const Pareja &p);
    Pareja &operator=(const Pareja &p);
    Pareja &operator++();
    bool operator==(const Pareja &p) const;

    // operadores no miembros
    friend ostream &operator<<(ostream &o, const Pareja &p);
    friend istream &operator>>(istream &o, Pareja &p);
};

// implementacion de los operadores para la clase Pareja
//....................................
Pareja::Pareja(const Pareja &p)
{
    *this = p;
}
//....................................
Pareja &Pareja::operator+(const Pareja &p)
{
    this->a += p.a;
    this->b += p.b;
    return *this;
}
//....................................
Pareja &Pareja::operator-(const Pareja &p)
{
    this->a -= p.a;
    this->b -= p.b;
    return *this;
}
//....................................
Pareja &Pareja::operator*(const Pareja &p)
{
    this->a *= p.a;
    this->b *= p.b;
    return *this;
}
//....................................
Pareja &Pareja::operator/(const Pareja &p)
{
    if (p.a != 0)
        this->a /= p.a;
    if (p.b != 0)
        this->b /= p.b;
    return *this;
}
//....................................
Pareja &Pareja::operator=(const Pareja &p)
{
    if (this != &p)
    { //Comprueba que no se esté intentanod igualar un objeto a sí mismo
        if (p.a != 0)
            this->a = p.a;
        if (p.b != 0)
            this->b = p.b;
    }
    return *this;
}

//....................................
Pareja &Pareja::operator++()
{
    this->a++;
    this->b++;
    return *this;
}

//....................................
bool Pareja::operator==(const Pareja &p) const
{
    return this->a == p.a && this->b == p.b;
}

// implemetaci¢n de operadores no miembros
ostream &operator<<(ostream &o, const Pareja &p)
{
    o << "(" << p.a << ", " << p.b << ")";
    return o;
}

istream &operator>>(istream &i, Pareja &p)
{
    cout << "Introducir valores para ( a, b) :";
    i >> p.a >> p.b;
    i.ignore();
    return i;
}

// prueba para la clase Pareja
int main()
{
    Pareja A(50, 75);
    Pareja B(100, 15);
    Pareja C;

    cout << "A = " << A << "\n";
    cout << "B = " << B << "\n";
    cout << "........................." << endl;
    C = A * B;
    cout << "A = " << A << "\n";
    cout << "C = " << C << endl;
    cout << "........................." << endl;

    ++C;
    cout << "C = " << C << endl;
    cout << "A == B " << ((A == B) ? "Si" : "No");
    cin.get();
    return 0;
}