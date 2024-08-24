#include <bits/stdc++.h>
using namespace std;

#define f first
#define s second

vector<array<int, 3>> north;
vector<array<int, 3>> east;
int myINF = INT_MAX;

int N;
int main(){
	cin >> N;

	vector<pair<int, int>> pos(N);

	for(int i = 0; i < N; i++){
		char d;
		cin >> d;
		pair<int, int> p;
		cin >> p.f >> p.s;

		array<int, 3> varr = {p.f, p.s, i};

		if(d == 'E'){
			east.push_back(varr);
		}
		else {
			north.push_back(varr);
		}
		pos[i] = p;
	}

	vector<vector<int>> meetTime;

	for(auto nC : north){
		cout << endl; 
		cout << nC[0] << " " << nC[1] << " " << nC[2] << endl; 
		cout << endl; 
		for(auto eC : east){
			int yT = eC[1] - nC[1];
			int xT = nC[0] - eC[0];

			if(xT == yT){
				continue;
			}

			if(yT > xT && xT > 0){
				//0 => norte
				meetTime.push_back({yT, nC[2], eC[2], 0});
			}
			else if(yT < xT && yT > 0){
				//1 => este 
				meetTime.push_back({xT, eC[2], nC[2], 1});
			}
		}
	}

	sort(meetTime.begin(), meetTime.end());

	vector<int> ans(N, myINF);

	for(auto mt : meetTime){
		if(ans[mt[2]] == myINF && ans[mt[1]] == myINF){
			ans[mt[1]] = mt[0];
			continue;
		}
		if(ans[mt[1]] == myINF){
			if(mt[3]) {
				int start = pos[mt[2]].s;
				int end = start + ans[mt[2]];

				if(pos[mt[1]].s >= start && pos[mt[1]].s <= end){
					ans[mt[1]] = mt[0];
				}
			}
			else {
				int start = pos[mt[2]].f;
				int end = start + ans[mt[2]];

				if(pos[mt[1]].f >= start && pos[mt[1]].f <= end){
					ans[mt[1]] = mt[0];
				}
			}
		}
	}

	for(auto v : ans){
		if(v == myINF){
			cout << "Infinity" << endl;
		}
		else{
			cout << v << endl;
		}
	}	
}
