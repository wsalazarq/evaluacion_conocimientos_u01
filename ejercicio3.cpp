#include <iostream>
using namespace std;

float suma(int a);
float factorial(int b);

int main(){
    int n;
    float sum;
    cout << "Ingrese un numero: "; cin >> n;

    sum = suma(n);
    cout << sum << endl;

    return 0;
}

float suma(int a){
    float s = 0;
    for (int i = 1; i <= a; i++){
        s = s + factorial(i) / (2 * i);
    }
    return s;
}

float factorial(int b){
    float f = 1;
    for (int i = 2; i <= b; i++){ 
        f = f * i;
    }
    return f;
}