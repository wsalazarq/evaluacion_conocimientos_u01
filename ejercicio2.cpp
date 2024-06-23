#include <iostream>
using namespace std;

int main(){
    int n1, n2, c = 0, menor;

    cout<<"Ingrese el primer numero: ";cin>>n1;
    cout<<"Ingrese el segundo numero: ";cin>>n2;

    if (n1 < n2){
        menor = n1;
    }else{
        menor = n2;
    }

    for (int i = 1; i <= menor; i++){

        if (n1 % i == 0 && n2 % i == 0){
            c++;
        }
    }
    
    if (c > 1){
        cout<<"No son PESI";
    }else{
        cout<<"Son PESI";
    }

    return 0;
}