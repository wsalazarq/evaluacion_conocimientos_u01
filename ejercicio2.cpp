#include <iostream>
using namespace std;

int main(){
    int n1, n2, c = 0, i = 1;

    cout<<"Ingrese el primer numero: ";cin>>n1;
    cout<<"Ingrese el segundo numero: ";cin>>n2;

    while (i <= n1 && i <= n2){
        if (n1 % i == 0 && n2 % i == 0){
            c++;
        }
        i++;
    }
    if (c > 1){
        cout<<"No son PESI";
    }else{
        cout<<"Son PESI";
    }

    return 0;
}