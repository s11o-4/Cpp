#include <bits/stdc++.h>

using namespace std;
struct punto
{
    int x;
    int y;
    int z;
    punto(){}
    punto(int X, int Y, int Z){
        x = X;
        y = Y;
        z = Z;
    }

};

bool operator<(const punto& p1, const punto& p2){
    if (p1.x < p2.x) return true;
    else {
        if (p1.x == p2.x) {
            if (p1.y < p2.y) return true;
            else {
                if (p1.y == p2.y) {
                    if (p1.z < p2.z) return true;
                    else return false;
                }
                else return false;
            }
        }
        else return false;
    }
}

set<punto> puntos;
int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++ ) {
        int x,y,z;
        cin >> x >> y >> z;
        punto P(x, y, z);
        puntos.insert(P);
    }
    puntos.find()!=puntos.end()
    for (punto p: puntos) {
        cout << p.x << " " << p.y << " " << p.z << endl;
    }
    return 0;
}
