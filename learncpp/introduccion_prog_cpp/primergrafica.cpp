/* write a program that prints the number of primes less than n fon n = [2, 2000]
    plot it using either gnuplot or matplotlib.
*/
#include<iostream>
#include<vector>
#include<cmath>

// declaración
int count_primes_less_than(int n); 
bool is_prime(int a);

int main(void)
{
    // variar n entre 2 y 2000.
    for (int n = 2; n <= 2000; n++){
        std::cout << n << "\t" << count_primes_less_than(n) << "\n";
    }
        // para cada n imprimir la cantidad de numeros primos menores que ese n. 
        // eso podria ser una funcion count_primes_less_than(int n)
    return 0; 
}

// implementación 
int count_primes_less_than(int n)
{
    // recorrer los enteros hasta n-1 y contar cuantos son primos
    int count = 0;

    for(int i = 2; i < n; i++){ // aca es mala idea usar n como indice, debemos usar otra cosa.
        if (is_prime(i) == true){
            count = count + 1;
        }
    }
    return count; 
}

bool is_prime(int a){
    if (a <= 1) return false; // el 1 y los necetivos no son primos

    bool flag = true; 
    int m = std::sqrt(a); // es para ahorrar pasos en el bucle, ir hasta la raiz del numero es suficiente
    for (int b = 2;  b <= m; b++){ // empezamos desde 2 porque 1 no interesa, todos son divisibles por 1
        if (a % b == 0){ // es divisor, entonces no es primo
            flag = false;
            break;
        }
    }
    return flag; 
}