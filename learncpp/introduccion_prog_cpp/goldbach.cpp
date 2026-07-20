// Escribe un programa que verifique la conjetura débil de Goldbach para 
// números impares hasta 10000.

// La conjetura dice: Todo número impar mayor que 5 puede expresarse 
// como la suma de tres números primos.

#include<iostream>
#include<vector>
#include<cmath>

bool is_prime(int a);
std::vector<int> generar_primos(int limite);
void verificar_goldbach(int limite);

int main(void){


    return 0;
}

bool is_prime(int a){
    bool flag = true; // asumo que es primo 

    int m = std::sqrt(a);
    for (int i = 2; i <= m; i++)
    {
        if (a%i == 0){ // encuentro un divisor por lo que no es.
            flag = false; 
            break;
        }
    }
    return flag;
}

std::vector<int> generar_primos(int limite){
    // vector vacio para guardar arreglo de primos
    std::vector<int> primos;

    for (int i =2; i < limite; i++){
        if(is_prime(i)==true){
            primos.push_back(i);
        }
    }
    return primos; // retornar el arreglo;
}