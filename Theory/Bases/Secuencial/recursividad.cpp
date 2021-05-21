#include <bits/stdc++.h>
using namespace std;

int factorial(int num)
{
    if (num == 0)
    {
        num = 1;
    }
    else
    {
        num = num * factorial(num - 1);
    }
    return num;
}

int main()
{
    cout<<factorial(10)<<"\n";
}