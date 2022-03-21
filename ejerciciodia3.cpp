#include <iostream>
using namespace std;

void rellenarArray (int num[],int tama){
  for(int i = 0 ; i < tama; i ++){
    num [i] = i ;
  }
}

void sumarDe4en4 (int num[], int tama, int sumaNum []){
  for(int i = 0 ; i < tama; i +=4);
}

void imprimirArray (int array[],int tama){
  for(int i = 0 ; i < tama; i ++){
    cout << array [i] << endl;
  }
}

int main (){
  int tama = 100;
  int num [100];
  int sumaNum [tama/4];




 cout << "Rellenar el array con los 100 primeros numeros" << endl;
 rellenarArray (num, tama);
  /*for (int i = 0; i < tama; i ++){
    num [i] = i;
  }*/
  cout <<"Sumamos de 4 en 4 ." << endl;
  sumarDe4en4 (num, tama, sumaNum);
  /*for (int i = 0; i < tama; i += 4){
    sumaNum[i/4] = i+ i+1 + i+2 + i+3;
  }*/

  /*cout << "Otra forma de hacerlo" << endl;
  int suma = 0;
  int contador = 0 ;
  for (int i = 0; i < tama ; i ++){
    suma += i;
    contador ++;
    if (contador % 4 == 0){
      sumaNum [i/4] = suma ;
      suma = 0;
    }
  } */


  cout << "Imprimimos" << endl;
  /*for (int i = 0; i < tama/4; i++){
  cout << sumaNum [i] << endl ;
}*/
  imprimirArray (sumaNum, tama/4);

return 0 ;
}
