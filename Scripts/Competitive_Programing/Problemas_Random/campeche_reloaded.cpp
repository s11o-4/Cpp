#include <bits/stdc++.h>
using namespace std;

struct Unique_range
{
    int fil_i = 0;
    int fil_f = 0;
    int a_d = 0;
};

int main()
{
    int N, M, K;
    cin >> N >> M >> K;
    struct Unique_range local_range[5001];
    int limit = K * 2;
    for (int i = 0; i < limit; i += 2)
    {
        int x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;
        y2++;
        x2++;
        local_range[y1].fil_i = x1;
        local_range[y1].fil_f = x2;
        local_range[y1].a_d += 1;

        local_range[y2].fil_f = x2;
        local_range[y2].fil_i = x1;
        local_range[y2].a_d -= 1;
    }
    cout << endl;
    for (int i = 1; i <= 10; i++)
    {
        cout << "[" << local_range[i].a_d << "]";
    }

    int final_sub = 0;
    for (int i = 1; i <= 10; i++)
    {
        if (local_range[i].a_d == 0)
        {
            local_range[i].fil_i = local_range[i - 1].fil_i;
            local_range[i].fil_f = local_range[i - 1].fil_f;
        }
        local_range[i].a_d += local_range[i - 1].a_d;
        cout << "local_range[i] = " << local_range[i].a_d << endl;
        if (local_range[i].a_d >= 2)
        {
            if (local_range[i].fil_i <= local_range[i - 1].fil_f && local_range[i].fil_f >= local_range[i - 1].fil_i)
            {
                cout << "\nme cumpli cuando: " << local_range[i].a_d << "\n";
                final_sub++;
            }
        }
    }

    cout << endl;
    for (int i = 1; i <= 10; i++)
    {
        cout << "[" << local_range[i].a_d << "]";
    }
    cout << endl;
    cout << "final_sub: " << final_sub << endl;
    cout << endl;
}
