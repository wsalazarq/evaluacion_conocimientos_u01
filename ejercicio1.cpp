#include <iostream>
using namespace std;

int main(){
    float n1,n2,r = 0;
    char op,otra;
    bool validacion = true, nuevaOperacion;

    do{
        cout<<"Ingrese el primer numero: ";cin>>n1;
        cout<<"Ingrese el segundo numero: ";cin>>n2;
        cout<<"Tienes las siguientes operaciones a elegir: ";
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
            if (n2 == 0){
                cout<<"El numero no puede ser dividido entre 0";
                validacion = false;
            }else{
                r = n1 / n2;
            }
            break;        
        default:
            cout<<"Ingrese una operacion valida";
            validacion = false;
            break;
        }

        if (validacion){
            cout<<"El resultado es: "<< r <<endl;

            cout<<"¿Desea realizar otra operacion?: "<<endl;
            cout<<"si (s),    no(n): ";cin>>otra;
            if (otra == 's'){
                nuevaOperacion = true;
            }else if (otra == 'n'){
                nuevaOperacion = false;
            }else{
                cout<<"Ingrese una opcion vallida";
                nuevaOperacion = false;
            }
            
                
        }
    } while (nuevaOperacion == true);
    
    
    
    return 0;
}