#include <bits/stdc++.h>
using namespace std;
int *orden_list = NULL;

bool b_search(int n, int ls)
{
    int li = 0, mitad = 0;
    while (li <= ls)
    {
        mitad = (li + ls) / 2;
        if (orden_list[mitad] == n)
        {
            return true;
        }
        else if (orden_list[mitad] > n)
        {
            ls = mitad - 1;
        }
        else
        {
            li = mitad + 1;
        }
    }
    return false;
}

int main()
{
    int *list = NULL;
    int cant_elements;
    while (cin >> cant_elements)
    {
        list = new int[cant_elements];
        orden_list = new int[cant_elements];
        for (int i = 0; i < cant_elements; i++)
        {
            cin >> list[i];
            orden_list[i] = list[i];
        }
        sort(orden_list, orden_list + cant_elements);
        int n_1 = orden_list[cant_elements - 1] - 1;
        bool flag = false;
        for (int i = 1; i < cant_elements; i++)
        {
            int n1 = list[i];
            int n2 = list[i - 1];
            if (n2 > n1) 
            {
                int r = n2 - n1;
                if (r <= n_1)
                {
                    flag = b_search(r, n_1 + 1);
                    if (!flag)
                    {
                        break;
                    }
                }
            }
            else
            {
                int r = n1 - n2;
                if (r <= n_1)
                {
                    flag = b_search(r, n_1 + 1);
                    if (!flag)
                    {
                        break;
                    }
                }
            }
        }
        (flag) ? cout << "Jolly" : cout << "Not jolly";
    }
}