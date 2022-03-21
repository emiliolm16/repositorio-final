    //FIN DE LA CLASE
//------
void Persona::setSueldo (float nuevoSueldo){
    this -> sueldo = nuevoSueldo;
}
float Persona::getSueldo (){
    return this-> sueldo;
}
//-------
void Persona::setEdad (int nuevaEdad){
    this -> edad = nuevaEdad;
}
int Persona::getEdad (){
    return this -> edad;
}
// ------ 
void Persona::setLetradni (char nuevaLetradni){
     this -> letradni = nuevaLetradni;
}
char Persona::getLetradni () {
    return this -> letradni;
}
//-------

// #-INICIO DEL CODIGO PRINCIPAL-----------------
int main() {
    
    Persona persona1;
    
    persona1.setSueldo (100);
    cout << persona1.getSueldo() <<endl;
    
    persona1.setEdad(24);
    cout <<persona1.getEdad () <<endl;
    
    persona1.setLetradni ('k');
    cout <<persona1.getLetradni() <<endl;
    
    string palabra1 = "POLLA";
    string palabra2 ;
    palabra2 = palabra1;
    cout << palabra2;
    
    char pla1[20]="zanahoria";
    char pla2 [20];
    
    for (int i = 0; i < 20; i++){
        pal2[i] = pal1[i];
    }
    cout <<pal2;
    return 0;
}