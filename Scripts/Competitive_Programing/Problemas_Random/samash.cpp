#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int base = 60;
string final_result = "";
int conversor_babilonio(int n)
{
    string result = "";
    int decenas = n / 10;
    int unidades = n % 10;
    result += ".";
    for (int l = 0; l < unidades; l++)
    {
        result.insert(0, "I");
    }
    for (int i = 0; i < decenas; i++)
    {
        result.insert(0, "L");
    }
    final_result.insert(0, result);
    return 0;
}

unsigned int base_60(unsigned int number_10)
{
    if (number_10 == 0)
    {
        return 0;
    }
    conversor_babilonio(number_10 % base);
    return base_60(number_10 / base);
}

int main()
{
    unsigned int number_10 = 0;
    cin >> number_10;
    base_60(number_10);

    int tam = final_result.size();
    final_result.erase(tam - 1, tam);

    cout << final_result << "\n";
}
