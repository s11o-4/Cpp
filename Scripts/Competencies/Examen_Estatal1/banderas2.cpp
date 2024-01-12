#include <iostream>
using namespace std;

unsigned long long int n;
int numOs;

void imprimirParesDeO(int x) {
  for(int i = 0; i < x; i++) {
    cout<<"OO";
  }
  cout<<'\n';
}

void imprimirTriangulo(int x){
  if (x > 0) {
    int max = x / 2 + x % 2;
    for (int i = 1; i <= max; i++) {
      imprimirParesDeO(i);
    }
    if (x % 2 == 0) {
      imprimirParesDeO(max);
    }
    for (int i = max - 1; i >= 1; i--) {
      imprimirParesDeO(i);
    }
  }
}

int main() {
  cin >> n;
  while (n != 0) {
    int digAct = (n % 2);
    if (digAct == 0) {
      imprimirTriangulo(numOs);
      numOs = 0;
      cout << "I\n";
    }else{
      numOs++;
    }
    n = n / 2;
  }
  imprimirTriangulo(numOs);
}
