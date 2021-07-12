// Given an array of integers of size ‘n’.
// Our aim is to calculate the maximum sum of ‘k’ 
// consecutive elements in the array.

// // This is the Brute Force Approach
// // O(n*k) solution for finding maximum sum of
// // a subarray of size k
// #include <bits/stdc++.h>
// using namespace std;

// // Returns maximum sum in a subarray of size k.
// int maxSum(int arr[], int n, int k)
// {
//     // Initialize result
//     int max_sum = INT_MIN;

//     // Consider all blocks starting with i.
//     //n - k + 1 -> why -> because you know that you iteration needs to finish
//     //"z" times before the limit of the size of your array
//     //x espacios antes de tu longitud
//     for (int i = 0; i < n - k + 1; i++)
//     {
//         int current_sum = 0;
//         for (int j = 0; j < k; j++)
//             current_sum = current_sum + arr[i + j];

//         // Update result if required.
//         max_sum = max(current_sum, max_sum);
//     }

//     return max_sum;
// }

// // Driver code
// int main()
// {
//     int arr[] = {1, 4, 2, 10, 2, 3, 1, 0, 20};
//     int k = 4;
//     int n = sizeof(arr) / sizeof(arr[0]);
//     cout << maxSum(arr, n, k);
//     return 0;
// }

// -----------------Sliding WIndow----------------------
// This is not the Brute force aproach
// O(n) solution for finding maximum sum of
// a subarray of size k
#include <iostream>
using namespace std;

// Returns maximum sum in a subarray of size k.
int maxSum(int arr[], int n, int k)
{
    // n must be greater
    if (n < k)
    {
        cout << "Invalid";
        return -1;
    }

    // Compute sum of first window of size k
    int max_sum = 0;
    for (int i = 0; i < k; i++)
        max_sum += arr[i];

    // Compute sums of remaining windows by
    // removing first element of previous
    // window and adding last element of
    // current window.
    int window_sum = max_sum;
    cout << "window sum : " << window_sum << "\n";
    for (int i = k; i < n; i++)
    {
        window_sum += arr[i] - arr[i - k];
        cout << "window sum : " << window_sum << "\n";
        max_sum = max(max_sum, window_sum);
    }

    return max_sum;
}

// Driver code
int main()
{
    int arr[] = {1, 4, 2, 10, 2, 3, 1, 0, 20};
    int k = 4;
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << maxSum(arr, n, k);
    return 0;
}
