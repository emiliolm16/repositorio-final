#include <iostream>
using namespace std;

class Persona {
  private:
    string nombre;
    string dni;
  public:
    Persona (string nombre = "Emilio", string dni = "132456789"){
    this->nombre = nombre;
    this->dni = dni;
  }
  ~Persona(){
    cout << "!Adios!" << endl;
  }

  void imprimir(){
    cout << "Me llamo " << this->nombre << "y mi DNI es " << this ->dni << "." << endl;
  }
};

int main (){

cout << "Hola" << endl;

  return 0;
}
