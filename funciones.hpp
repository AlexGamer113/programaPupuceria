#include <iostream>
#include <string>

using namespace std;

void ingresarPedido();

int menu(){

    cout<<"Precio de las pupusas"<<endl;
    cout<<"-Frijol con Queso $0.50"<<endl;
    cout<<"-Revueltas $0.50"<<endl;
    cout<<"-Queso $0.70"<<endl;
    cout<<""<<endl;
    cout<<"Precio de las Bebidas: "<<endl;
    cout<<"Pepsi $0.60"<<endl;
    cout<<"-Coca Cola $0.50"<<endl;
}

int opciones(){
    int opcionMenu;
    cout<<"Programa de pedidos Pupuceria Any"<<endl;
    cout<<"1-Ingresar pedido"<<endl;
    cout<<"2-Mostrar lista de pedidos"<<endl;
    cout<<"3-Salir"<<endl;
    cout<<"Opcion ";
    cin>>opcionMenu; 
    cin.ignore();
    system("cls");
    return opcionMenu;

}

/*int opcionesPedido(){
    int pedido;
    cout<<"Menu de opciones de pedido"<<endl;
    cout<<"1-Ingresar Pupusas al pedido"<<endl;
    cout<<"2-Ingresar Bebidas al pedido"<<endl;
    cout<<"3-Terminar el pedido"<<endl;
    cin>>pedido;
    cin.ignore();
    return pedido;

    switch (pedido)
    {
    case 1:
    
        int opcionPupusas;
        menu();
        switch (opcionPupusas)
        {
        case 1:
            
            break;
        
        default:
            break;
        }

        break;
    
    default:
        break;
    }
    

};*/

/*void ingresarPedido(){
    bool opcionPedido=true;

    do
    {
        switch (opcionesPedido()){

        case 1:
            menu();
            break;
        case 2:
            break;
        case 3:
            opcionPedido=false;
            break;
        default:
            break;
        }
    } while (opcionPedido);
    
}*/