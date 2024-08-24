#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	freopen("mixmilk.in", "r", stdin);
	freopen("mixmilk.out", "w", stdout);


	pair<int, int> Bessie;
	pair<int, int> Elsie;
	pair<int, int> Mildred;

	pair<int, int> cows[3] = { Bessie, Elsie, Mildred };

	int N = 0;
	while(N < 3){
		cin >> cows[N].first;
		cin >> cows[N].second;
		N++;
	}

	int aux = 0;
	for(int i = 0; i < 100; i++){
		//cout << cows[0].first << " " << cows[0].second << " ";
		//cout << cows[1].first << " " << cows[1].second << " ";
		//cout << cows[2].first << " " << cows[2].second << " ";
		//cout << endl;
		//Del tercero al primero
		if(aux == 2){
			cows[0].second += cows[aux].second;
			if(cows[0].second > cows[0].first){
				cows[aux].second = cows[0].second - cows[0].first;
				cows[0].second = cows[0].first;
				aux = 0;
				continue;
			}
			cows[aux].second = 0;
			aux = 0;
			continue;
		}
		//Cualquier otro caso
		cows[aux + 1].second += cows[aux].second;
		if(cows[aux + 1].second > cows[aux + 1].first){
			cows[aux].second = cows[aux + 1].second - cows[aux + 1].first;
			cows[aux + 1].second = cows[aux + 1].first;
			aux++;
			continue;
		}
		cows[aux].second = 0;
		aux++;
	}

	for(int i = 0; i < 3; i++){
		cout << cows[i].second << endl;
	}
}
