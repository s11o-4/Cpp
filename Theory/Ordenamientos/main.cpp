#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[5] = {212, 3232, 3, 4343, 1};

    for (int i = 0; i < 5; i++)
    {
        int min_index = i;
        int cpy_i = i;
        while (cpy_i < 5)
        {
            if (arr[cpy_i] < arr[i])
            {
                min_index = cpy_i;
            }
            cpy_i++;
        }
        int aux = arr[i];
        arr[i] = arr[min_index];
        arr[min_index] = aux;
    }

    for (int l = 0; l < 5; l++)
    {
        cout << " " <<arr[l] << " ";
    }
    cout << endl;
}