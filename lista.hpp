#include <iostream>
#include <string>
using namespace std;

struct nodo{
    string nombreCliente, direccionCasa, tipoPupusas, bebida, ingrediente;
    int telefono, numeroPupusas;

    nodo *sig;
}cliente;


class pupuceria{
private:
    nodo *pInicio;
public:
    pupuceria();
    void insertarNodo(void);
    void insertarInicio(string, string, int, int ,string, string, string);
    void mostrarPedido();
    void eliminarPedido();
};

pupuceria::pupuceria(){
    pInicio=NULL;
}

void pupuceria::insertarNodo(){

   system("cls");
    cout<<"Nombre del Cliente: "; 
    getline(cin, cliente.nombreCliente);
    cout<<"Direccion de casa del Cliente: ";
    getline(cin, cliente.direccionCasa);
    cout<<"Telefono del Cliente: ";
    cin>>cliente.telefono;
    cin.ignore();
    cout<<"Cantidad de pupusas: ";
    cin>>cliente.numeroPupusas;
    cin.ignore();
    cout<<"Pupusas De Arroz o Maiz"<<endl;
    cin>>cliente.tipoPupusas;
    cin.ignore();
    system("cls");
    menu();
    cout<<endl;
    cout<<"Ingrediente de pupusas"<<endl;
    getline(cin, cliente.ingrediente);
    cout<<endl;
    cout<<"Bebida: "<<endl;
    getline(cin, cliente.bebida);
    cout<<endl;
    cout<<"Se Guardo Exitosamente"<<endl;
    system("Pause");
    system("cls");
    insertarInicio(cliente.nombreCliente, cliente.direccionCasa, cliente.telefono, cliente.numeroPupusas, cliente.tipoPupusas,cliente.ingrediente, cliente.bebida);
   
    
};

void pupuceria::insertarInicio(string nombreCliente, string direccionCasa, int telefono,int numeroPupusas, string tipoPupusas,string ingrediente, string bedida){

    nodo *nuevo;
    nuevo=new nodo;
    nuevo->nombreCliente = nombreCliente;
    nuevo->direccionCasa = direccionCasa;
    nuevo->telefono = telefono;
    nuevo->numeroPupusas = numeroPupusas;
    nuevo->tipoPupusas = tipoPupusas;
    nuevo->ingrediente = ingrediente;
    nuevo->bebida = bedida;
    nuevo->sig = pInicio;
    pInicio=nuevo;


};

void pupuceria::mostrarPedido(){
    nodo *sigNodo;

    sigNodo=pInicio;
    while (sigNodo != NULL)
    {
    
        cout<<"Cliente: "<<sigNodo->nombreCliente<<endl;
        cout<<"Direccion de Casa: "<<sigNodo->direccionCasa<<endl;
        cout<<"Telefono: "<<sigNodo->telefono<<endl;
        cout<<sigNodo->numeroPupusas<<" Pupusas "<<sigNodo->ingrediente<<" de "<<sigNodo->tipoPupusas<<endl;
        cout<<"Bebida: "<<sigNodo->bebida<<endl;
        cout<<endl;
        
        sigNodo = sigNodo->sig;
    }

};
