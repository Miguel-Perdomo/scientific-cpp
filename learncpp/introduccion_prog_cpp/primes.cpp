// construimos un programa para imprimir los numeros primos del 1 al 100
#include <iostream>

// se va a escribir la declaracion de isprime
bool isprime(int m); // retorna un bool, recibe un numero entero

int main(void)
{
    // declara las variables para los limites
    int mmin = 2, mmax = 100;

    // hacer un for para recorrer entre los limites
    for(int m = mmin; m <= mmax; m++){
        // por cada valor verificar si es primo e imprimir
        // si el numero m es primo, imprimo,
        if (isprime(m)){
            std::cout << m << "\n";
        }
    }

    return 0;
}

// implementacion de isprime, aca es como hace las cosas
bool isprime(int m){
    
    bool flag = true; // asumimos que en principio todos son primos
    for(int a = 2; a < m; a++){
        if (m%a == 0){// encontré un divisor, no es prime
            flag = false;
            break; 
        }
    } 
    return flag;
}
