#include <iostream>
using namespace std;

int suma10 (int num){
  num += 10;
  return num;
}

int suma10 (int* punteroNum){
  *punteroNum +=10;
  return *punteroNum;
}

//Funcion para rellenar vector con colores
void rellenarColores (string* colores, int numColores){
  for (int i = 0; i < numColores ; i++){
    cout << "Introduce un color: " << endl;
    getline (cin, colores[i]);
  }
}


//Funcion para imprimir por pantalla rellenarColores
  void imprimirColores(string* colores, int numColores){
  cout << "Colores introducidos: " << endl;
    for (int i = 0; i < numColores ; i++){
      cout << colores[i] << " " << endl;
    }
  }


int main (){
// TERCERA PARTE

  string* colores = NULL;
  string line;
  int numColores;

  //cout << "Valor de *colores con == NULL: " << colores << endl;
  cout << "¿Cuantos colores quieres introducir?" << endl;
  //cin >> numColores;
  getline(cin, line);
  numColores = stoi(line);


  colores = new string [numColores];
  //cout << "Valor de *colores = new string []:  " << colores << endl;

  //Rellenamos EL array
rellenarColores (colores, numColores);

imprimirColores (colores, numColores);





//RELLENANDO EL VECTOR CON COLORES
  /*for (int i = 0; i < numColores ; i++){
    cout << "Introduce un color: " << endl;
    //cin >> colores [i];
    getline (cin, colores[i]);
  }*/
  //AQUI LOS MOSTRAMOS POR PANTALLA
/*cout << "Colores introducidos: " << endl;
  for (int i = 0; i < numColores ; i++){
    cout << colores[i] << " " << endl;
  }*/

delete [] colores;
colores = NULL;




//SEGUNDA PARTE


/*  int numero = 10;
  int resultado;

  cout << "Imprimir numero " << numero << endl;
  resultado = suma10(numero);
  cout << "Imprimir numero despues de llamar la funcion de sumar10(int): " << numero << endl;
  cout << "Imprimir resultado despues de sumar10(int): " << resultado << endl;


  cout << "Imprimir numero: " << numero << endl;
  resultado = suma10(&numero);
  cout << "Imprimir numero despues de llamar la funcion sumar10(*int): " << numero << endl;
  cout << "Imprimir resultado despues de sumar10(*int): " << resultado << endl; */

  return 0;
}
