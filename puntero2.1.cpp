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

//Rellenamos el array con las notas
double* rellenarArrayNotas (int tama){
  double* array = new double [tama];
  string fumao;

  for (int i = 0; i < tama ; i++){
    cout << "Introduce una nota: " << endl;
  getline (cin, fumao);
  array[i] = stoi (fumao);
}
  return array;
}



//Funcion para rellenar vector con colores
string* rellenarColores (int numColores){
  string* colores = new string [numColores];
  for (int i = 0; i < numColores ; i++){
    cout << "Introduce un color: " << endl;
    getline (cin, colores[i]);
  }
  return colores;
}


//Funcion para imprimir por pantalla rellenarColores
  void imprimirColores(string* colores, int numColores){
  cout << "Colores introducidos: " << endl;
    for (int i = 0; i < numColores ; i++){
      cout << colores[i] << " " << endl;
    }
  }

//Estamos creando funcion que nos devuelva el array con la nota subida
  double* subirNotaArray (double* array, int tama, double porcentaje){
    double* nuevoArray = new double [tama];
        for (int i = 0 ; i < tama ; i++){
          nuevoArray [i] = array[i]*porcentaje/100;
        }
  return nuevoArray;
  }

int main (){
// TERCERA PARTE

  string* colores = NULL;
  double* notas = NULL;
  string line;
  int numColores;
  int nuevasNotas;
  double porcentaje = 20;
  double numero;

  //cout << "Valor de *colores con == NULL: " << colores << endl;
  cout << "¿Cuantos colores y notas quieres introducir?" << endl;
  //cin >> numColores;
  getline(cin, line);
  numColores = stoi(line);


  //notas = new double [numColores];
  notas =  rellenarArrayNotas (numColores);
  nuevasNotas = subirNotaArray(notas, numero, porcentaje);
  imprimirColores (notas, numColores);

  //cout << "Valor de *colores = new string []:  " << colores << endl;

  //Rellenamos EL array
 /*colores = rellenarColores (numColores);
 imprimirColores (colores, numColores);*/




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

delete [] notas;
notas = NULL;

delete [] nuevasNotas;
nuevasNotas = NULL;


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
