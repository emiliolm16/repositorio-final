//No tiene la libreria escrita
#include <iostream>
using namespace std;


int sumarNotaTeclado  (int* numNotas){
  int nota = 0;
  int suma = 0;

    cout << "Introduce una nota: " << endl;
    cin >> nota;
    for (*numNotas = 0 ; nota != -1 ; (*numNotas)++){  //Este bucle comienza con iterador en "0", en el que cuando este iterador sea menor que 2000 Y sea distinto de -1, que sume 1.
        suma += nota;
        cout << "Introduce una nota: ";
        cin >> nota;
      }
    return suma;
    }


int main() {
    //Cambio el nombre de variables ya que el nombre que tiene es poco identificativo.
    int nota = 0;
    int suma = 0;
    double media = 0;
    int numNotas;
    int sumaTotal;


do {
  sumaTotal = sumarNotaTeclado (&numNotas);
  cout << "Numero de notas: " << numNotas << endl;
  cout << "Suma de notas: " << sumaTotal << endl;
  media = (sumaTotal)/(numNotas);
} while (media >=5 );

    if (media >= 5){
        cout << "apto";
    }
    else if (media > 9){
        cout << "super apto";
    }
  return 0;
}
