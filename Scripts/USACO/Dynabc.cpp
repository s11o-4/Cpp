#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	vector<int> numbers; 
	
	for(int i = 0; i < 7; i++)
	{
		int temp;
		cin >> temp; 
		numbers.push_back(temp);
	}

	int A = *min_element(numbers.begin(), numbers.end());
	numbers.erase(min_element(numbers.begin(), numbers.end()));
	int B =  *min_element(numbers.begin(), numbers.end());		
	numbers.erase(min_element(numbers.begin(), numbers.end()));
	
	int A_B = A + B;
	numbers.erase(find(numbers.begin(), numbers.end(), A_B));

	int C = *min_element(numbers.begin(), numbers.end());		

	cout << A << " " << B << " " << C;
}

//	for(int i = 0; i < numbers.size(); i++)
//	{
//		cout << numbers[i] << "  ";
//	}
//	cout << endl;


