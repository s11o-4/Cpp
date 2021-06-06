#include <bits/stdc++.h>
using namespace std;

// Recursividad 1
// int factorial(int n)
// {
//     if (n == 0)
//     {
//         return 1;
//     }
//     else
//     {
//         n = n * factorial(n - 1);
//     }
//     return n;
// }

// int main()
// {
//     cout << factorial(10) << endl;
// }
 
int factorial(int n)
{
    if (n == 1)
    {
        return 1;
    }
    return n * factorial(n - 1);
}

int main()
{
    cout << factorial(5) << endl;
}