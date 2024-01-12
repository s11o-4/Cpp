#include <bits/stdc++.h>

using namespace std;

void reverseString(string &normal)
{
    for (int i = 0; i < normal.length() / 2; i++)
    {
        swap(normal[i], normal[normal.length() - i - 1]);
    }
}

int main()
{
    int tamano;
    int counter = 0;

    cin >> tamano;

    if (!(1 <= tamano <= 50))
    {
        return 1;
    }

    string palindromos[tamano * tamano];
    string palabra;

    cin >> palabra;

    for (int i = 0; i <= tamano; i++)
    {
        for (int c = 0; c <= tamano; c++)
        {
            string token = palabra.substr(c, i);
            string tokenReversed = palabra.substr(c, i);
            reverseString(tokenReversed);

            if (token.compare(tokenReversed) == 0)
            {
                bool flag = false;
                for (int p = 0; p <= counter; p++)
                {
                    if (token.compare(palindromos[p]) == 0)
                    {
                        flag = true;
                    }
                }
                if (!flag)
                {
                    palindromos[counter] = token;
                    counter++;
                }
            }
        }
    }
    cout << counter << endl;
    return 0;
}
