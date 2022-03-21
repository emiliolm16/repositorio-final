#include <iostream>
using namespace std;


class Triangulo {
private: //Parte privada de la clase que no se puede modificar
  double cateto1;
  double cateto2;
  double hipotenusa;
  string color;
  bool comprobarLongitudLados( double a, double b, double c){
    double min = a;
    double perimetro = a+b+c;
    if (max>b) max = b;
    if(max>c) max= c;
    return (perimetro - max > max);
  }
public://Constructor, estas son las partes modificables de la clase.
  Triangulo(double cateto1 = 1, double cateto2 = 1, double hipotenusa = 1, string = "azul"){
     /*setCateto1(cateto1);
     setCateto2(cateto2);
     setHipotenusa(hipotenusa);*/
    if (comprobarLongitudLados(cateto1, cateto2,hipotenusa)){
     if(cateto1 > 0) this-> cateto1 = cateto1;
     if(cateto2 > 0) this-> cateto2 = cateto2;
     if(hipotenusa > 0)this-> hipotenusa = hipotenusa;
  }
    this ->color = color;
  }
    //Set, sirve para llamar la funcion.
  void setCateto1 (double lado){
  //Comprobar que la suma de los lados pequeños es mayor que el lado mayor.
  if (comprobarLongitudLados(lado, this->cateto2,this->hipotenusa)){
    this-> cateto1 = lado;
    }
  }
  void  setCateto2 (double cateto2){
    //(cateto2 > 0) ? this ->cateto2 = cateto2 : this->cateto2 = 1;
    if (comprobarLongitudLados(lado, this->cateto1,this->hipotenusa)){
      this-> cateto2 = lado;
  }
}
  void setHipotenusa (double hipotenusa){
    //(cateto2 > 0) ? this ->cateto2 = cateto2 : this->cateto2 = 1;
    if (comprobarLongitudLados(lado, this->cateto1,this->cateto2)){
      this-> hipotenusa = lado;
  }
}
//Get sirve para consultar la funcion.
  double getCateto1(){
    return this -> cateto1;
  }
  double getCateto2(){
    return this -> cateto2;
  }
  double getHipotenusa(){
    return this -> hipotenusa;
  }
  // Metodo, sirve para decir que funcion va a hacer.
  double area(){
    return (this ->cateto1* this-> cateto2) /this->hipotenusa;
  }
  double perimetro (){
    return this ->cateto1 + this->cateto2 + this->hipotenusa;
  }
 };


int main () {
Triangulo normal (4,4,9);

//INTENTANDO METER LOS NUMEROS POR PANTALLA.

/*Triangulo normal ( float cateto1, float cateto2,float  hipotenusa);
float  cateto1;
float cateto2;
float hipotenusa;
float primerCateto = cateto1;
float segundoCateto = cateto2;*/
double areaTriangulo;
double perimetroTriangulo;
areaTriangulo = normal.area();
perimetroTriangulo = normal.perimetro();

/*cout << "Introduce el cateto 1: " << endl;
cin >> primerCateto;
cout << "Introduce el cateto 2: " << endl;
cin >> segundoCateto;
cout << "Introduce la hipotenusa: " << endl;
cin >> hipotenusa;*/



cout << "El area del triangulo es: " << areaTriangulo << endl;
cout << "Y el perimetro del triangulo es: " << perimetroTriangulo << endl;



  return 0;
}
