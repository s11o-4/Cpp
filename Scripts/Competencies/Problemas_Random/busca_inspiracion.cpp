#include <bits/stdc++.h>
using namespace std;

int herr_disp = 0;
int porcentajes[105];
int main()
{
    cin >> herr_disp;
    for (int i = 0; i < herr_disp; i++)
    {
        cin >> porcentajes[i];
    }
    sort(porcentajes, porcentajes + herr_disp);
    reverse(porcentajes, porcentajes + herr_disp);
    int final_result;
    int acumulador = 0;
    for (int l = 0; l < herr_disp; l++)
    {
        acumulador += porcentajes[l];
        final_result++;
        if (acumulador >= 100)
        {
            break;
        }
    }
    cout<<final_result;
}