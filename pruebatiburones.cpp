#include <iostream>
using namespace std;

  int aniosADias (int anios){
  const int DIASENUNANIO = 365;
  return DIASENUNANIO * anios;
  }

  int aniosAMeses (int anios){
  const int MESENUNANIO = 12;
  return MESENUNANIO * anios;
  }


  int dientesCaidosConTope (int anios, int maxAnios){
    int meses;
    int maxMeses;
    int total = 0;

    meses = aniosAMeses (anios);
    maxMeses = aniosAMeses(maxAnios);
    for (int i = 0; i <= meses && i < maxMeses ; i += 5){
    total += i;
    }
    return total;
}

int main (){

  int aniosTiburon;
  int mesesTiburon;
  int diasTiburon;
  int totalDientes;
  int tope = 8;
  //Imprime tu nombre por pantalla.
  cout << "Emilio" << endl;

  //Pregunta cuantos años tiene el tiguron
  cout << "¿Cuantos años tiene el tiburon?" << endl;
  cin >> aniosTiburon ;
  cout << "El tiburon tiene " << aniosTiburon << " anios." << endl;

  // Partiendo de un numero de años, (edad del tiburon) calcula cuanto tiempo en dias y cuanto tiempo en meses ha pasado
   diasTiburon = aniosADias(aniosTiburon);
   cout << "El tiburon ha vivido " << diasTiburon << " dias" << endl;

   mesesTiburon = aniosAMeses (aniosTiburon);
   cout << "El tiburon tiene " << mesesTiburon << " meses" << endl;

   // Cada 5 , al tiburon se le cae tantos dientes como meses tenga, es decir:
   //a los 5 meses 5 dientes, a los 10 meses 10 dientes. En total 15 dientes.
   //A los 15 meses se le caen 15, en total 30 dientes.
   // CALCULA LOS DIENTES QUE SE LE HAN CAIDO.
   /*totalDientes = dientesCaidos (aniosTiburon);
   cout << "Al tiburon se le han caido " << totalDientes << " dientes" << endl;*/

   //Si el tiburon tiene mas de 8 años ya no le quedan dientes que se le puedan caer.
   //Modifica la funcion anterior para que deje de sumar dientes caidos cuando los meses llegen
   //a 8 años.
   totalDientes = dientesCaidosConTope (aniosTiburon,tope);
   cout << "Al tiburon ya no tiene " << totalDientes << " dientes" << endl;

return 0 ;
}
