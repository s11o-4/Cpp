#include <iostream>
#include <utility>
using namespace std;
pair <string, int> par("Hola", 5);
int main()
{
    cout << par.first << " " << par.second;
    return 0;
}