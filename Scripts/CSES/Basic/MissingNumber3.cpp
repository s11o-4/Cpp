#include <iostream>
#include <vector>

using namespace std;

int findMissingNumber(const vector<int>& nums)
{
    // Calculate the total sum
    int n = nums.size() + 1;
    int totalSum = n * (n + 1) / 2;

    // Calculate sum of all elements in the given array
    int arraySum = 0;
    for (int num : nums) {
        arraySum += num;
    }

    // Subtract  and return the total sum with the sum of
    // all elements in the array
    int missingNumber = totalSum - arraySum;

    return missingNumber;
}

int main()
{

    vector<int> numbers = { 1, 2, 4, 5, 6 };
    int missing = findMissingNumber(numbers);
    cout << "The missing number from the array is: "
         << missing << endl;

    return 0;
}
