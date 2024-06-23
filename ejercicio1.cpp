#include <iostream>
using namespace std;

int main(){
    float n1,n2,r = 0;
    char op,otra;
    bool validacion, nuevaOperacion;

    do{
        validacion = true;

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
                cout<<"El numero no puede ser dividido entre 0"<<endl;
                validacion = false;
            }else{
                r = n1 / n2;
            }
            break;        
        default:
            cout<<"Ingrese una operacion valida"<<endl;
            validacion = false;
            break;
        }

        if (validacion){
            cout<<"El resultado es: "<< r <<endl;

            do{
                cout<<"¿Desea realizar otra operacion?:   si (s)  no (n): ";cin>>otra;

                if (otra == 's'){
                    nuevaOperacion = true;
                }else if (otra == 'n'){
                    cout<<"Cerrando el programa"<<endl;
                    nuevaOperacion = false;
                }else{
                    cout<<"Ingrese una opcion valida"<<endl;
                }        
           
            } while (otra != 's' && otra != 'n');
            
        }else{
            nuevaOperacion = true; 
        }

    } while (nuevaOperacion);
    
    return 0;
}