#include <iostream>

using namespace std;

int main(){

    string Nombre;
    float precio, Total;
    int Cantidad;


    cout<<"Coloque el nombre del producto por favor: "<<endl; cin>>Nombre;

    cout<<"Coloque el precio del producto: "<<endl; cin>>precio;

    cout<<"Coloque la cantidad a llevar por favor: "<<endl; cin>>Cantidad;

    Total = (Cantidad)*(precio);

    cout<<"su total es: $"<<Total<<endl;

    system("pause");

    return 0;
}