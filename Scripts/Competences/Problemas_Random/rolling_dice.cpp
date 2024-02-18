#include <iostream>
using namespace std;

int tries, sum;
int main()
{
    cin >> tries >> sum;
    int tmp_var = sum % 6;
    if (tmp_var > 0)
    {
        tmp_var = 1;
    }
    int bst_tries = (sum / 6) + tmp_var;
    if (bst_tries == tries)
    {
        cout << "Yes";
    }
    else
    {
        cout << "No";
    }
}