#include <iostream>

using namespace std;
#define debug(x) cout << #x << " = " << x << endl //-> debuger improvisado

int A[100005];
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> A[i];
    }
    //Solucion
    int maximo = 1;
    int k = 1;
    int j_max = 1;
    for (int i = 1; i <= n; i++)
    {
        k = 1;
        j_max = i; // -> cuando no se cumpla el primer if. entonces
        // si no pusieras esta linea, i valdría por siempre 1
        for (int j = i + 1; j <= n; j++)
        {
            //Verificacion
            if (A[j - 1] > A[j])
            {
                k++;
                j_max = j;
            }
            else
            {
                break;
            }
        }
        i = j_max;
        maximo = max(maximo, k);
    }
    cout << maximo << '\n';
    return 0;
}
