#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr1[7] = {2,4,5,9,12,15,21};
    int arr2[4] = {8,10,15,20};

    int *proto_acumulado = NULL;
    int max = 0;
    for (int i = 0; i < 4; i++)
    {
        if(arr2[i] > max)
        {
            max = arr2[i];
        }
    }
    proto_acumulado = new int[max];
    sort(arr1, arr1 + 7);
    for (int l = 0; l < max; l++)
    {
        if(arr1[l] <= max)
        {
            
        }
    }
    
}