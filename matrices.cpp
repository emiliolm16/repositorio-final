#include <iostream>
using namespace std;

int const TAMA = 10;

void rellenarMatrizCeros(int matriz [TAMA][TAMA], int nFila, int nColumna){
  for (int i = 0; i < nFila; i++){
    for (int j = 0; j < nColumna; j++){
      matriz [i][j] = 0;
    }
  }
}

int main (){

  int array[TAMA];
  int matriz[TAMA][TAMA];

  return 0;
}
