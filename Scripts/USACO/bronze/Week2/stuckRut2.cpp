#include<bits/stdc++.h>
using namespace std;

struct Paths{
	int x, y, id;
};

struct Convergences{
	int time, id_nort, id_east;
	char direct;
};

bool sortConvergences(Convergences item1, Convergences item2){
	return item1.time < item2.time;
}

/*
 * Punteros
 * Iteradores
 * Sort
 * 
 * */

int N;
int main(){
	cin >> N;
	vector<Paths> nort_coor;
	vector<Paths> east_coor;

	for(int i = 0; i < N; i++){
		char direct;
		cin >> direct;
		if(direct == 'N'){
			Paths temp; 
			cin >> temp.x >> temp.y;
			temp.id = i;
			nort_coor.push_back(temp);
		}
		if(direct == 'E'){
			Paths temp;
			cin >> temp.x >> temp.y;
			temp.id = i;
			east_coor.push_back(temp);
		}
	}

	vector<Convergences> convergences;

	//cout << "nort coordinates: " << endl;
	//for(auto item : nort_coor){
	//	cout << item.x << " " << item.y << endl;
	//}

	//cout << "east coordinates: " << endl;
	//for(auto item : east_coor){
	//	cout << item.x << " " << item.y << endl;
	//}

	for(int i = 0; i < nort_coor.size(); i++){
		for(int j = 0; j < east_coor.size(); j++){
			int time_x = nort_coor[i].x - east_coor[j].x;
			int time_y = east_coor[j].y - nort_coor[i].y;

			if(time_x == time_y){
				continue;
			}

			if(time_x < time_y && time_x >= 0){
				Convergences new_item = { time_y, nort_coor[i].id, east_coor[j].id, 'N'};
				convergences.push_back(new_item);
			}

			if(time_x > time_y && time_y >= 0){
				Convergences new_item = { time_x, nort_coor[i].id, east_coor[j].id, 'E' };
				convergences.push_back(new_item);
			}
		}
	}

	sort(convergences.begin(), convergences.end(), sortConvergences);

	//for(auto temp : convergences){
	//	cout << temp.time
	//		 << " " 
	//		 << temp.direct
	//		 << " " 
	//		 << temp.id_nort
	//		 << " " 
	//		 << temp.id_east
	//		 << endl;
	//}

	vector<int> result(N, INT_MAX);

	for(auto item : convergences){
		int id_nort = item.id_nort;
		int id_east = item.id_east;
		if(result[id_nort] == INT_MAX && 
		   result[id_east] == INT_MAX){
			if(item.direct == 'N'){
				result[id_nort] = item.time;
			}
			else{
				result[id_east] = item.time;
			}
		}
		if(item.direct == 'N' && 
		   result[id_nort] == INT_MAX){
			if((nort_coor[id_nort].x >= east_coor[id_east].x) && (nort_coor[id_nort].x <= (east_coor[id_east].x + result[id_east]))){
				result[id_nort] = item.time;
			}
		}
		if(item.direct == 'E' &&
		   result[id_east] == INT_MAX){
			if((east_coor[id_east].x <= nort_coor[id_nort].x) && (east_coor[id_east].y <= (nort_coor[id_nort].y + result[id_nort]))){
				result[id_east] = item.time;
			}
		}
	}	 

	for(auto item : result){
		if(item == INT_MAX){
			cout << "Infinity"<< endl;  
		}
		else{
			cout << item << endl; 
		}
	}
}
