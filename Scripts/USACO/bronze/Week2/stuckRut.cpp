#include <bits/stdc++.h>
using namespace std;

struct Paths{
	char direct;
	int x, y;
	int output = 0;
	bool _continue = true;
};

map<pair<int, int>, bool> farm;

int N;
pair<int, int> min_x_max_y = {INT_MAX, 0};
pair<int, int> max_x_min_y = {0, INT_MAX};

vector<int> ejemplo;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	cin >> N;
	vector<Paths> cowsPath(N);
	vector<pair<int, int>> x_y_to_mark;

	for(int i = 0; i < N; i++){
		cin >> cowsPath[i].direct >> cowsPath[i].x >> cowsPath[i].y;
		if(cowsPath[i].direct == 'E'){
			if(cowsPath[i].x < min_x_max_y.first){
				min_x_max_y.first = cowsPath[i].x;
			}
			if(cowsPath[i].y > min_x_max_y.second){
				min_x_max_y.second = cowsPath[i].y;
			}
		}
		if(cowsPath[i].direct == 'N'){
			if(cowsPath[i].x > max_x_min_y.first){
				max_x_min_y.first = cowsPath[i].x;
			}
			if(cowsPath[i].y < max_x_min_y.first){
				max_x_min_y.second = cowsPath[i].y;
			}
		}
	}

	//cout << "min_x_max_y" << min_x_max_y.first << " " << min_x_max_y.second << endl;
	//cout << "max_x_min_y" << max_x_min_y.first << " " << max_x_min_y.second << endl;
	
	while(min_x_max_y.first <= max_x_min_y.first || 
		  min_x_max_y.second >= max_x_min_y.second){
		for(int i = 0; i < cowsPath.size(); i++){
			//cout << "cowsPath: " << cowsPath[i].direct << " " 
				 //<< cowsPath[i].x << " " 
				 //<< cowsPath[i].y << " " << cowsPath[i]._continue << endl;
			if(cowsPath[i].direct == 'N'){
				pair<int, int> temp = {cowsPath[i].x, cowsPath[i].y = cowsPath[i].y++};
				x_y_to_mark.push_back(temp);
				if(!farm[temp] && cowsPath[i]._continue){
					cowsPath[i].output++;
					cowsPath[i].y++;
				}
				else{
					cowsPath[i]._continue = false; 
				}
			}
			if(cowsPath[i].direct == 'E'){
				pair<int, int> temp = {cowsPath[i].x = cowsPath[i].x++, cowsPath[i].y};
				x_y_to_mark.push_back(temp);
				if(!farm[temp] && cowsPath[i]._continue){
					cowsPath[i].output++;
					cowsPath[i].x++;
				}
				else{
					cowsPath[i]._continue = false; 
				}
			}
		}
		for(int i = 0; i < x_y_to_mark.size(); i++){
			farm[x_y_to_mark[i]] = true;
		}
		x_y_to_mark.clear();
		min_x_max_y.first++;
		max_x_min_y.second++;
	}

	for(int i = 0; i < cowsPath.size(); i++){
		if(cowsPath[i]._continue){
			cout << "Infinity" << endl;
		}
		else {
			cout << cowsPath[i].output << endl; 
		}
	}
}
