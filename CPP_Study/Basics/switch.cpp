
# include "iostream"

using namespace std;

int main()
{
    cout << "Ingrese la Opción a ejecutar: ";
    int opcion1 = 0;
    cin >> opcion1;

    switch(opcion1)
    {
        case 1: cout << "Usted ha seleccionado la opción 1 \n";
        break;
        case 2: cout << "Usted ha seleccionado la opción 2 \n";
        break;
        case 3: cout << "Usted ha seleccionado la opción 3 \n";
        break;
        default: cout << "Usted ha ingresado una opción incorrecta\n";
    }
    // system("PAUSE"); //Solo ponla si no te da error

    cout << "Ingrese la Opción a ejecutar: ";

    char opcion2;

    cin >> opcion2;

    switch(opcion2)
    {
        case 'a': cout << "Usted ha seleccionado la opción a\n";
        break;
        case 'b': cout << "Usted ha seleccionado la opción b\n";
        break;
        case 'c': cout << "Usted ha seleccionado la opción c\n";
        break;
        default: cout << "Usted ha ingresado una opción incorrecta\n";
    }
    return 0;
}