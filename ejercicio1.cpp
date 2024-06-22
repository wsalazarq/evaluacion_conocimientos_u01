#include <iostream>
using namespace std;

int main(){
    float n1,n2,r;
    char op;

    cout<<"Ingrese el primer numero: ";cin>>n1;
    cout<<"Ingrese el segundo numero: ";cin>>n2;
    cout<<"Tienes las siguientes operaciones a elegir: "<<endl;
    cout<<"Suma (+),    Resta(-),    Multiplicacion(*),     Division(/):  ";cin>>op;

    switch (op){
    case '+':
        r = n1 + n2;
        break;
    case '-':
        r = n1 - n2;
        break;
    case '*':
        r = n1 * n2;
        break;
    case '/':
        r = n1 / n2;
        break;        
    }

    cout<<"El resultado es: "<<r<<endl;    
}