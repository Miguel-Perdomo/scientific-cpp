// clasificar números del 1 al 10000 según la suma de sus divisores propios

#include<iostream>
#include<cmath>

// Declaraciones: 

bool divisor(int a, int b);
int suma_divisores(int a);

int main(void){
    for (int n = 1; n <= 10000; n++){
        int suma = suma_divisores(n);
        
        // Guardar: n, suma_divisores, y un código numérico para el tipo
        int tipo;
        if (suma == n) tipo = 0;      // perfecto
        else if (suma > n) tipo = 1;  // abundante
        else tipo = 2;                // deficiente
        
        std::cout << n << "\t" << suma << "\t" << tipo << std::endl;
    }
    return 0;
}

bool divisor(int a, int b){
    return a%b == 0; // devuelve true si b divide a a 
}

int suma_divisores(int a){
     if (a <= 1) return 0; // Basicamente porque 1 no es perfecto

    int count = 1; 

    int m = std::sqrt(a);

    for (int i = 2; i <= m; i++){
        if(divisor(a, i)==true){
            count = count + i; 
            if (i != a / i){  // Evitar duplicar si n es cuadrado perfecto
                count += a / i;
            }
        }    

    }

    return count;
}