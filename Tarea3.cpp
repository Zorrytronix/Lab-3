#include <iostream>

#include  <cstdlib>

#include <math.h>

using namespace std;

int main (){

    float A = 0, B = 0, C = 0, X1 = 0, X2 = 0, S = 0, P = 0;

    cout<<"Ingresa el valor de A: "<<endl; cin>>A;

    cout<<"ingrese el valor de B: "<<endl; cin>>B;

    cout<<"ingrese el valor de C: "<<endl; cin>>C;

    P = pow(B,2);

    S = sqrt(P-(4*(A)*(C)));

    X1 = ((-(B)+S)/(2*(A)));

    X2 = ((-(B)-S)/(2*(A)));

    cout<<"tu primer valor es: "<<X1<<endl;

    cout<<"tu segundo valor es: "<<X2<<endl;

    system("pause");

    return 0;


}