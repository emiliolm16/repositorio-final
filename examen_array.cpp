#include<iostream>
#include<time.h>
#include<stdlib.h>
using namespace std;


int* crearListaAleatoria(int tama){
  srand(time(NULL));
  int numero;
  int* ptrarray = new int[tama];
  for (int i = 0 ; i < tama ; i++){
    numero = 0 + rand()%10;
    ptrarray[i] = numero;
  }
  return ptrarray;
}

void imprimirLista(int*  ptrlista, int tama){
  for (int i = 0 ; i < tama ; i++){
    cout << ptrlista[i] << " ";
  }
  cout << endl;
}

void imprimirListaAlReves(int*  ptrlista, int tama){
  for (int i = 0 ; i >= 0 ; i--){
    cout << ptrlista[i] << " ";
  }
  cout << endl;
}

void cambiarPorDobleLista(int* ptrlista, int tama, int pos){
  if (pos<tama){
    ptrlista[pos-1] *=2;
  }
}

int eliminarPosicionLista(int* ptrLista, int tama, int pos){
  for (int i = pos-1 ; i < tama ; i++){
    ptrLista[i] = ptrLista[i+1];
  }
  return tama-1;
}

int main(){

  int* ptrarray1;
  int tama = 5;
  cout << "Emilio Lopez \n" << endl;

  cout << "Generar lista aleatoria";
  ptrarray1 = crearListaAleatoria(tama);
  imprimirLista(ptrarray1, tama);
  cout << "Cambiar por doble " << endl;
  cambiarPorDobleLista(ptrarray1, tama,3);
  imprimirLista(ptrarray1,tama);
  cout << "Eliminar Posicion de la Lista" << endl;
  tama = eliminarPosicionLista(ptrarray1, tama, 2);
  imprimirLista(ptrarray1,tama);
  cout << "Imprimir lista al reves" << endl;
  eliminarListaAlReves(ptrarray1,)



  return 0;
}
