#include <bits/stdc++.h>
using namespace std;

class MyClass
{
    public:
    int num1;
    MyClass(int num1){
        this->num1 = num1 * num1;
    }
};

int main()
{
    MyClass objeto1(10);
    cout<<objeto1.num1;
}