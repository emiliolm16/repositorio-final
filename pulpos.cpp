#include <iostream>
using namespace std;



 bool comprobarComida (string comida){
 	string comidaBuena = "crustaceos";
 	bool result = false;

 	if  ( comidaBuena == comida) {
 		result = true;
 	}
 	else {
 		cout << "no le des eso de comer" << endl;
 	}

 	return result;
 }

int pasarOctal (int numero){
	int contador;
	contador = numero/8;
	return numero + contador + contador ;
}

void reorganizarComida (int pecerasComida[], int tama){
  int sobran = 0;
  for (int i = 0; i < tama ; i ++){
    pecerasComida [i] += sobran;
    sobran = pecerasComida [i]%3;
    pecerasComida [i] -= sobran;
  }
}

int main (){
	string comidaPaPulpos;
	int numeroIntroducido;
	int numeroOctal;
	int cuantosPulpos = 5;
	string listaNombres[cuantosPulpos] = {"Paco","Cerveza","Alhambra","Zumo","Pascual"};
	string faltas [cuantosPulpos];
	string respuestaNombres;
  int crustaceos [] = {23, 74, 92, 64, 27, 13, 84, 73};

	/*cout << "Emilio" << endl;

	bool pulpoAlimentado = false;

	while(pulpoAlimentado == false) {
		cout << "¿Que le vas a dar de comer a los pulpos?" << endl;
		cin >> comidaPaPulpos;

		pulpoAlimentado = comprobarComida(comidaPaPulpos);
	}

	cout << "alimentado" << endl;

	cout << "Introduce un numero para pasar a octal" << endl;
	cin >> numeroIntroducido;

	numeroOctal = pasarOctal (numeroIntroducido);

	cout << numeroOctal << endl;

	int contador = 0;
	cout << "Pasa lista a los nombres con SI/NO" << endl;
	for (int i = 0; i < cuantosPulpos; i ++ ){
		cout << listaNombres [i] << endl;
		cin >> respuestaNombres ;

		if (respuestaNombres == "no"){
			faltas[contador] = listaNombres[i];
			contador ++;
		}

	}

	for (int i = 0; i < contador; i ++){
		cout << "Su nombre es " << faltas[i] << endl;
	}

	cout << "Han faltado " << contador << " pulpos" << endl; */
imprimirLista (crustaceos, 8);
reorganizarComida (crustaceos, 8 );
reorganizarComida (int pecerasComida []);

return 0;
}
