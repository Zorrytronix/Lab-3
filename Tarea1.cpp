#include <iostream>

#include <cstdlib>

using namespace std;

int main (){

    float a = 0, b = 0, c = 0, d = 0;

    cout<<"ingrese el primer valor:" <<endl; cin>> a;
    cout<<"ingrese segundo valor: "<<endl; cin>>b;
    cout<<"ingrese el tercer valer: "<<endl; cin>>c;

    d = (a+b+c)/3;
    
    cout<<"su pormedio es: "<<d<<endl;

    system("PAUSE");

    return 0;
}
