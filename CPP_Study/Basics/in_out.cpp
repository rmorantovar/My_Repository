#include "iostream"
#include "string"

using namespace std;

int main()
{
    cout << "Hola! Este es un ejemplo en C++" << "\n" << "Por favor ingrese su nombre:" << "\n";
    //La instrucción \n es un salto de línea Mostrando los textos separados

   string nombre;//En esta variable estará almacenado el nombre ingresado.
   //cin >> nombre; //Esta línea da problemas si se lee un valor con espacios
   // En su lugar, usamos getline, con el flujo de entrada de cin y lo asignamos as nombre
   getline(cin, nombre); //Esta línea no dará problemas con los espacios en el nombre

   cout << "Bienvenido al sistema " << nombre << ". Gracias por usar nuestra aplicación" << "\n";


   return 0;
}