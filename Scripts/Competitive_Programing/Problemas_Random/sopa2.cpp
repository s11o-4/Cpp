#include <iostream>
using namespace std;

int R, C;
string cuad[102];
int numPalabras;
string palabras[52];

bool coincide(int r, int c, int dr, int dc, string palabra){
    for (int i = 0; i < (int)palabra.size(); i++) {
        if (cuad[r + dr * i][c + dc * i] != palabra[i]) {
            return false;
        }
    }
    return true;
}

int apariciones(string palabra, int dr, int dc) {
    int res = 0;
    for(int r = 0; r < R; r++) {
      for(int c = 0; c < C; c++) {
        int ultC = c + ((int)palabra.size() * dc) - dc;//Con esto yo defino si quiero que vaya hacia la derecha o izquierda
        int ultR = r + ((int)palabra.size() * dr) - dr;
        if(ultC >= 0 && ultC < C && ultR >= 0 && ultR < R) {
          if(coincide(r, c, dr, dc, palabra)){
	    res++;
	  }
        }
      }
    }
    return res;
}

int apariciones(string palabra) {
    int res = 0;
    /// ->
    res += apariciones(palabra, 0, 1);
    /// <-
    res += apariciones(palabra, 0, -1);
    /// ↓
    res += apariciones(palabra, 1, 0);
    /// ↑
    res += apariciones(palabra, -1, 0);
    /// Cuatro diagonales
    res += apariciones(palabra, 1, 1);
    res += apariciones(palabra, -1, -1);
    res += apariciones(palabra, -1, 1);
    res += apariciones(palabra, 1, -1);
    return res;
}

int main() {
    cin >> R >> C;
    for(int r = 0; r < R; r++) {
        cin >> cuad[r];
    }
    cin >> numPalabras;
    for(int i = 0; i < numPalabras; i++) {
        cin >> palabras[i];
        cout << apariciones(palabras[i]) << '\n';
    }
}
