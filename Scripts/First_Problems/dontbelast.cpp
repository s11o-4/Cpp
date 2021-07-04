#include <bits/stdc++.h>

using namespace std;
ifstream fin("notlast.in");
ofstream fout("notlast.out");

map<string,int> bucket;
map<int, string> names;
map<int, int> cnt;
int main()
{
    bucket["Bessie"] = 0;
    bucket["Elsie"] = 0;
    bucket["Daisy"] = 0;
    bucket["Gertie"] = 0;
    bucket["Annabelle"] = 0;
    bucket["Maggie"] = 0;
    bucket["Henrietta"] = 0;
    int n;
    fin >> n;
    for (int i = 0; i < n; i++) {
        string s;
        int cant;
        fin >> s >> cant;
        bucket[s] += cant;
    }
    int i = 0;
    int change = 0;
    int last = 0;
    string name = "";
    for (pair<string,int> p: bucket) {
        names[p.second] = p.first;
        cnt[p.second]++;
    }
    if (names.size() == 1) {
        fout << "Tie\n";
        return 0;
    }
    int c = 0;
    for (pair<int,string> p: names) {
        if (i > 0) {
            if (last != p.first) {
                change = 1;
                c = cnt[p.first];
                name = p.second;
                break;
            }
        }
        last = p.first;
        i++;
    }
    if (c > 1) {
        fout << "Tie\n";
    }
    else {
        fout << name << endl;
    }
    return 0;
}
