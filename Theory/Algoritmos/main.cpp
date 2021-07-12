#include <iostream>
using namespace std;

int max_sum(int arr[], int k, int longitud)
{
    int max_sum = 0;
    for (int i = 0; i < k; i++)
    {
        max_sum += arr[i];
    }

    int cnt = max_sum;
    for (int i = k; i < longitud; i++)
    {
        cnt += arr[i] - arr[i - k];
        max_sum = max(cnt, max_sum);
    }

    return max_sum;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 6, 7, 7};
    int longitud = sizeof(arr) / sizeof(arr[0]);
    cout << max_sum(arr, 4, longitud);
    cout << endl;
}