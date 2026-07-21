// programa que suma entre nmin y nmax.
#include<iostream>
#include<string>
#include<cmath>

bool is_prime(int a);

int main(int argc, char **argv){// esto lo que hace es permitrirme leer cosas de la linea de comandos.
    // leer los numeros desde la linea de comandos
    // la ejecución debe ser: ./a.out nmin nmax
    int nmin = std::stoi(argv[1]); // string a entero, muy importante, lo que se lee de la linea de comandos son strings.
    int nmax = std::stoi(argv[2]);

    int suma = 0; 

    // para cada numero verificar si es primo o no
    for(int n = nmin; n<=nmax; n++){
        if(is_prime(n)){
            suma = suma + n;
        }
    }
    
    std::cout << suma <<"\n";

    // si es primo imprimirlo 
}

bool is_prime(int a){
    if(a <= 1) return false;
    if(a == 2) return true;
    if(a % 2 == 0) return false; 

    bool flag = true;
    // una vez descartados necesito entonces que el for no tenga en cuenta esos pares.
    int m = std::sqrt(a);
    for(int i = 3; i<=m; i = i+2){
        if(a%i == 0){
            return false;
        }
    }
    return flag;
}