#include<bits/stdc++.h>
using namespace std;

vector<int> start_end;
vector<int> numbers = {1, 2, 3};
int main() {
    long N;
    cin >> N;
    int aux;
    int res = 0;
    for(int i = 0; i < N; i++){
        cin >> aux;
        numbers.push_back(aux);
        if (aux == N){
            res++;
        }
        if (numbers[aux] >= 2){
            start_end.push_back(aux);
        }
    }
    for (int i = 0; i < start_end.size(); i++){
        long aux2 = start_end[i];

    }
} 
