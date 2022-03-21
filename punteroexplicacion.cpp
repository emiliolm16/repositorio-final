#include <iostream>
using namespace std;

int main (){
  string juego = "Tetris";
  string &ocio = juego;
  int num = 5;
  //string juegos [5];
  string* punteroJuego = &juego;
  // string* punteroOcio = juego;
  int* punteroNum = &num;

  cout << "Imprimo el juego: " << juego << endl;
  cout << "Imprimo el &juego: " <<  &juego << endl;
  cout << "Imprimo el ocio: " <<  juego << endl;
  cout << "Imprimo el &ocio: " <<  &ocio << endl;
  cout << "Imprimo el punteroJuego: " << punteroJuego << endl;
  cout << "Imprimo el punteroJuego: " << *punteroJuego << endl;
  // cout << "Imprimo el punteroOcio: " << punteroOcio << endl;
  cout << "Imprimo el *punteroNum: " << *punteroNum <<  " ASI se accede a la posicion de memoria " << endl;
  cout << "Imprimo el &num: " << &num << endl;
  cout << "Imprimo el punteroNum: " << num << endl;
  return 0;
}
