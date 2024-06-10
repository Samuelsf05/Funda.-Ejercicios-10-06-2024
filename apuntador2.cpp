#include <iostream>

 using namespace std;
 int main(int argc, char *argv[]){

    int x;
    int *apuntador = &x;

    cout << "Ingrese un numero entero: \n";
    cin >> *apuntador;
    
    cout << "Usted ingreso el numero: " << &apuntador << "\n";
    cout << "Usted ingreso el numero: "<<x<<"\n";

return 0;
 }