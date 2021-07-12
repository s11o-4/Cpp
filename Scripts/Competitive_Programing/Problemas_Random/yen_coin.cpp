#include <bits/stdc++.h>
using namespace std;

int pay;
int result = 0;
int cnt = 0;
int factorial(int n)
{
    if (n == 1)
    {
        return 1;
    }
    else
    {
        return n * factorial(n - 1);
    }
}

int cuenta(int n)
{
    int i = 1;
    while (cnt < pay)
    {
        cnt += factorial(i);
        i++;
    }
}

int main()
{
    cin >> pay;
    int i = 1;
    while (cnt < pay)
    {
        cnt += factorial(i);
        result++;
        i++;
    }
    if (cnt > pay)
    {
        i -= 2;
        result = i;
        cnt = factorial(i);
    }
    else
    {
        cout << result << endl;
    }
}