/*
Escribir un programa que calcule la función totient de Euler,
para n = [2, 1000]. La funcion cuenta cuántos números entre 1 y n son coprimos
es decir, máximo común divisor =1 con n.
*/

#include<iostream>
#include<cmath>

// declaraciones

// primero necesito una funcion que calcule el mcd (máximo comun divisor) devuelva un booleano que sea t rue si es 1
int mcd(int a, int b); // entran dos numeros y calcula su mcd
bool is_coprime(int a, int b);
int count_coprimes(int n); // calcula cuantos coprimos hay entre 1 y n

int main(void){

    for (int n = 2; n <= 1000; n++){
        std::cout << n << "\t" << count_coprimes(n) << "\n";
    }
    return 0; 
}

int mcd(int a, int b){ // este es basicamente el algoritmo de euclides, mcd(a,b)=mcd(b,r), donde a = bq + r

    while (a%b != 0){
        int residuo = a%b;
        a = b; 
        b = residuo;
    }
    
    return b; 
}

bool is_coprime(int a, int b){
    bool flag = false; // suponemos no es coprimo 

    if (mcd(a, b) == 1){
        flag = true;
        return flag; // tenemos coprimo
    }

    return flag;
}   

int count_coprimes(int n){

    // iniciamos en 0 coprimos
    int count = 0;

    for (int i = 1; i <= n; i++){
        if (is_coprime(i, n) == true){// es coprimo
            count = count + 1; // cuentelo
        }
    }

    return count; // retorneme el numero de coprimos hasta n
}   
