#include "funciones.hpp"
#include "lista.hpp"

using namespace std;

int main (void){
    system("cls");
    cout<<"Bienvenido al programa de pedidos Pupuceria Any, buena suerte en tu trabajo"<<endl;
    system("Pause");
    system("cls");
    bool continuar=true;
    pupuceria objLista;

    do
    {
        switch (opciones())
        {
        case 1:
            objLista.insertarNodo();
            break;
        case 2:
            objLista.mostrarPedido();
            system("Pause");
            system("cls");
            break;
        case 3:
            continuar=false;
            break;
        default:
            cout<<"Opcion no valida"<<endl;
            break;
        }
    } while (continuar);
    
}