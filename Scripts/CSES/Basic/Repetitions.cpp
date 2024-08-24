#include <bits/stdc++.h>
using namespace std;

int repetitions(string input)
{
    int ans = 1, count = 1;
    for (int i = 1; i < input.length(); i++) {
        if (input[i] == input[i - 1]) {
			count += 1;
		}
        else
		{
			count = 1;
		}
        ans = max(ans, count);
    }
    return ans;
}

int main()
{
	string input;
	cin >> input;
	cout << repetitions(input);
}
