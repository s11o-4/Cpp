#include <bits/stdc++.h>
using namespace std;

struct InputData{ int day;
	string name;
	int change;
};

int N, maxScore = 7, changes = 0;
map<string, int> cows; 
map<string, int> display;
int main(){

	freopen("measurement.in", "r", stdin);
	freopen("measurement.out", "w", stdout);

	cin >> N;
	InputData dataArray[N];
	for(int i = 0; i < N; i++){
		cin >> dataArray[i].day >> dataArray[i].name >> dataArray[i].change;
		cows[dataArray[i].name] = 7;
	}
	for(int i = 0; i < N; i++){
		int min = dataArray[i].day;
		int min_index = i; 
		for(int j = i + 1; j < N; j++){
			if(dataArray[j].day < min){
				InputData temp = dataArray[min_index];
				dataArray[min_index] = dataArray[j];
				dataArray[j] = temp;
				min = dataArray[min_index].day;
			}
		}
	}

	//cout << "array sorted: " << endl; 
	//for(int i = 0; i < N; i++){
	//	cout << dataArray[i].day << " " 
	//		<< dataArray[i].name << " " 
	//		<< dataArray[i].change << " " << endl; 
	//}

	for(int i = 0; i < N; i++){
		cows[dataArray[i].name] += dataArray[i].change;
		string temp_cow_name = dataArray[i].name;
		int temp_cow_score = cows[dataArray[i].name];
		//cout << "tem_cow_name: " << temp_cow_name << endl;
		//cout << "tem_cow_score: " << temp_cow_score << endl;

		if((display.find(temp_cow_name) != display.end()) && 
			cows[temp_cow_name] < maxScore){
			maxScore = temp_cow_score;
			map<string, int>::iterator it = cows.begin();
			bool flag = false;
			while(it != cows.end()){
				if(it -> second == maxScore){
					display.erase(temp_cow_name);
					display[it -> first] = it -> second;
					flag = true;
				}
				if(it -> second > maxScore){
					display.clear();
					maxScore = it -> second;
					display[temp_cow_name] = maxScore;
					flag = true;
				}	
				++it;
			}
			if(flag){
				changes += 1;
				continue;
			}
			else {
				it = cows.begin();
				while(it != cows.end()){
					if(it -> second == temp_cow_score && 
					   it -> first != temp_cow_name){
						display[it -> first] = it -> second; 
						flag = true;
					} 
					++it;
				}
				if(flag){
					changes += 1;
					continue;
				}
			}
			continue;
		}
		if(temp_cow_score == maxScore){
			changes += 1;
			maxScore = maxScore;
			display[temp_cow_name] = maxScore;
		} 
		if(temp_cow_score > maxScore){
			display.clear();
			changes += 1;
			maxScore = temp_cow_score;
			display[temp_cow_name] = maxScore;
		}
	}	

	cout << changes;  
}
