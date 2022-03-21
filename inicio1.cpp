#include <iostream>
using namespace std;
int main (){
    string palabradelcin = "gato";
    int numero;
    double numerodecimal;
    char letra; // Van con una sola comilla ' ' ' 
    bool booleano; // Verdadero o Falso, va en minuscula

//-------PALABRAS---------------------------------
   /* palabradelcin = "perro";

    cout << palabradelcin << endl;

    cout << "Escribe algo: ";
    cin >> palabradelcin;
    cout << palabradelcin << endl;*/

//-------NUMEROS---------------------------------
    int numero1 = 1;
    int numero2 = 2;
    int numero3 = 3;
    int numero4 = 0;
    const int NUMERO = 0; // Ya no se puede modificar la variable NUMERO

   /* cout << numero1 <<endl;
    cout << numero2 << endl;
    cout << numero3 << endl;
    
    double decimal1 = 5.4;
    cout << decimal1 << endl;
    double decimal2 = 5.5;
    cout << decimal2 << endl; 

//------CHAR-------------------------------------
    letra = 'a';
    cout << letra << endl;
    numero4 = letra;
    cout << numero4 << endl; 
    char letraExtra = 65;
    cout << letraExtra << endl;
    letraExtra = 145;
    cout << letraExtra << endl;

//------BOOLEANOS---------------------------------
    booleano = true;
    cout << booleano << endl;
    
    booleano = false;
    cout << booleano << endl;

    booleano = 1;
    cout << booleano << endl;

    numero1 = booleano;
    cout << booleano << endl; */

//------JUGAR CON OPERADORES-----------------------
    numero1 = 4 + 5;
    cout << numero1 << endl;
    numero1 = 4 - 5;
    cout << numero1 << endl;
    numero1 = 4 * 5;
    cout << numero1 << endl;
    numero1 = 4 / 5; 
    cout << numero1 << endl; 



    return 0;
}