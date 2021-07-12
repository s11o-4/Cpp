#include <iostream>
#include <vector>
using namespace std;
int main()
{
    // Declaring a vector
    vector<int> v = {1, 2, 3};

    // Declaring an iterator
    vector<int>::iterator i;

    int j;

    cout << "Without iterators = ";

    // Accessing the elements without using iterators
    for (j = 0; j < 3; ++j)
    {
        cout << v[j] << " ";
    }

    cout << "\nWith iterators = ";

    // Accessing the elements using iterators
    for (i = v.begin(); i != v.end(); ++i)
    {
        //recuerda que el "*", es un operador de un puntero que guarda
        //la dirección en memoria
        //de tu variable u objeto. Pero cuando lo vuelves a usar, invierte esto
        cout << *i << " ";
    }

    // Adding one more element to vector
    v.push_back(4);

    cout << "\nWithout iterators = ";

    // Accessing the elements without using iterators
    for (j = 0; j < 4; ++j)
    {
        cout << v[j] << " ";
    }

    cout << "\nWith iterators = ";

    // Accessing the elements using iterators
    for (i = v.begin(); i != v.end(); ++i)
    {
        cout << *i << " ";
    }

    //<descubrmiento nobel>
    vector<int> v1 = {3, 23, 4, 9, 11, 12, 6, 65};
    vector<int>::iterator i;
    cout << "tamaño: " << v1.size() << endl;
    for (i = v1.begin(); i < v1.end(); i++)
    {
        // if (i == v1.begin() + 3)
        // {
        //     i = v1.insert(i, 5);
        // }
        if (*i == 9)
        {
            cout << *i << endl;
            i = v1.erase(i);
            i = v1.insert(i, 5);
        }
        else if (i == v1.begin() + 8)
        //agregaste un elemento antes. el tamaño se extiende !
        {
            i = v1.erase(i);
        }
    }
    return 0;
}