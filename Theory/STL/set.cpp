#include <iostream>
#include <set>
#include <algorithm>

using namespace std;

struct Punto
{
    int X;
    int Y;
    int Z;
    Punto(int x, int y, int z)
    {
        this->X = x;
        this->Y = y;
        this->Z = z;
    }
};

// ordena a tus datos de entrada de X, Y, Z
bool operator<(const Punto &p1, const Punto &p2)
{
    if (p1.X < p2.X)
        return true;
    else
    {
        if (p1.X == p2.X)
        {
            if (p1.Y < p2.Y)
                return true;
            else
            {
                if (p1.Y == p2.Y)
                {
                    if (p1.Z < p2.Z)
                        return true;
                    else
                        return false;
                }
                else
                    return false;
            }
        }
        else
            return false;
    }
}

// no puedes crear ni un set ni un map, si no esta delcarada la funcion
// de como lo va a ordenar

set<Punto> puntos;
int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x, y, z;
        cin >> x >> y >> z;
        Punto P(x, y, z);
        puntos.insert(P);
    }

    for (Punto p : puntos)
    {
        cout << p.X << " " << p.Y << " " << p.Z << endl;
    }

    // if (puntos.find(2) != puntos.end())
    // {
    //     cout << "se encontro \n";
    // }

    cout << endl;
    return 0;
}

/*
set<int> numbers;

int n;
cin >> n;
for(int i = 0; i < n; i++)
{
    int x;
    cin >> x;
    numbers.insert(x);
}

for(int z : numbers)
{
    cout << z << " ";
}

cout << endl;

*/