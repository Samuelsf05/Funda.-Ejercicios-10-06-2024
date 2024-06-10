#include <iostream>

 using namespace std;

 int facto(int n){

    int resultado;
    if(n==0){
        resultado = 1;
    }
    else{
    resultado = n*facto(n-1);
    }

    return resultado;
 }
 int main(){

      int n;
    cout << "Ingrese un numero entero: \n";
    cin >> n;

    cout << "El factorial de " << n << " es " << facto(n) << "\n";

return 0;
 }