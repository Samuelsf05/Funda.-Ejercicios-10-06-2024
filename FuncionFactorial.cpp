#include <iostream>

 using namespace std;
 int facto(int n){

    int respuesta;
    if(n==0){
        respuesta=1;
    }
    else{
         respuesta = 1;
        for (int i = 1; i<=n ; i++)
        {
            respuesta = respuesta * i;
        }
    }

    return respuesta;
}
int main(){
    
    int n;
    cout << "Ingrese un numero entero: \n";
    cin >> n;

    cout << "El factorial de " << n << " es " << facto(n) << "\n";

return 0;
}