#include <iostream>
using namespace std;

int main (){
  int numJuegos = 10;
  string juegos [numJuegos];
  int vector [100];
  int vector1 [25];

  for (int i = 0; i < 100; i += 4 ){
    vector1 [i] = i ;
  }

  for (int i = 0; i < 100 ; i += 4 ){
    cout << vector1 [i] << endl;
  }

for (int i = 0 ; i < numJuegos ; i ++){
  string jue;
  cout << "Intruce el nombre del juego: ";
  cin >> jue;
  juegos [i] = jue;
  }

juegos [4] = "Tetris";

for (int i = 0; i < numJuegos ; i ++){
  cout << "juegos" << i << " = " << juegos [i] << endl;
}

for (int i = 0; i < 100; i ++){
  vector [i] = i;
}

for (int i = 0; i < 100; i ++){
  cout << vector [i] << endl;
}

for (int i = 0; i < 100; i += 4){
  vector1 [i] = i ;
}

for (int i = 0; i < 100 ; i += 4){
  cout << vector1 [i] << endl;
}

/* RELLENAR UN VECTOR CON LOS 100 PRIMEROS NUMEROS
  SUMAR DE 4 EN 4 LOS NUMEROS Y GUARDARLOS EN OTRO VECTOR.
    {0.1.2.3.4.5...}->(6,22,38)*/



return 0 ;
}
