#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, suma  = 0, pasos = 0;
    cin >> n;
    int n2 = n;
    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        suma += x;
    }
    for(int i = 0; i < n2; i++){
        if(suma % n == 0){
            cout << pasos << endl;
            return 0;
        } else {
            n -= 1;
            pasos += 1;
        }
    }
}