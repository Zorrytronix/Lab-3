#include <iostream>

#include <cstdlib>

#include <math.h>

using namespace std;

int main (){

    double R = 0, A = 0, P = 0;

    cout<<"Coloca el valor de tu radio: "<<endl; cin>>R;

    A = 3.141516 * pow(R,2);
    
    P = (2*3.141516)*pow(R,2);

    cout<<"tu area es: "<<A<<endl;

    cout<<"tu perimetro es: "<<P<<endl;

    system("pause");

    return 0;

}