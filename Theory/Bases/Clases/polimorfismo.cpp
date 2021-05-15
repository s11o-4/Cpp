#include <bits/stdc++.h>
using namespace std;

class Hablar_Animal
{
public:
    void hablar()
    {
        cout << "Habla";
    }
};

class Perro : public Hablar_Animal
{
public:
    void hablar()
    {
        cout << "Wuaf";
    }
};

class Gato : public Hablar_Animal
{
public:
    void hablar()
    {
        cout << "Miau";
    }
};

int main()
{
    Gato gato;
    gato.hablar();
    cout<<"\n";
    Perro perro;
    perro.hablar();
    cout<<"\n";
}