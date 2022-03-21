#include <iostream>
#include <vector>
using namespace std;

void mostrarVector (vector<int> vector){
  cout << "[";
  int i;

  for (i = 0; i < vector.size()-1 ; i++) {
    cout << vector [i] << ", ";
  }
  cout << vector [i] << "]";
}

vector <int> rellenarVector () {
  vector <int> vector ;
  int tama, numero;


  cout << "¿Cuantos numeros quieres introducir? ";
  cin >> tama;
  for (int i = 0; i < tama ; i++){
    cout << "Introduce un numero" << endl;
    cin >> numero;
    vector.push_back(numero);
  }
  return vector;
}

int main (){
  //Sin inicializar
  vector<int> miVector1;
  vector<string> miVectorS;
  vector <int> miVector2;
  //Inicializa un vector de tama 10 relleno de "2".
  // vector <int> miVector2(10,2);
  //Inicializa un vector con los valores introducidos.
  vector<int> miVector3{1,2,3,4,5}; // [1|2|3|4|5]
  miVector3 = {1,2,3,4,5};

  miVectorS = {"La casa verde"};
  //cout << miVectorS[0] << endl;

  miVector2 = rellenarVector();
  mostrarVector(miVector2);


  return 0;
}
