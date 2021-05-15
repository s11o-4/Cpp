#include <bits/stdc++.h>
using namespace std;

class Setter_Getter
{
    int var_priv1 = 0; //por defecto son privadas
    int var_priv2 = 0;

public:
    void setvar_priv1(int setnumber1);
    int getvar_priv1();
};


void Setter_Getter::setvar_priv1(int setnumber1)
{
    var_priv1 = setnumber1;
}
int Setter_Getter::getvar_priv1(){
    return var_priv1;
}


int main()
{
    Setter_Getter objeto1;
    objeto1.setvar_priv1(10);
    cout<<objeto1.getvar_priv1()<<"\n";
}