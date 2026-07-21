// imprimir los primos del 1 al 150, luego computar la suma de los primos del 500 al 1234.

#include<iostream>
#include<cmath>
#include<vector>

// declarar is_prime

bool is_prime(int a);

int main(void){

    for (int i =1; i<=150; i++){
        if(is_prime(i)){
            std::cout << i << std::endl;
        }
    }
    std::vector<int> primos;

    for(int i=500; i<=1234; i++){
        if(is_prime(i)){
            primos.push_back(i);
        }   
    }

    int suma_primos=0;
    for(int n : primos){
        suma_primos = suma_primos + n;
    }

    std::cout << "La suma de los primos entre 500 y 1234 es: " << "\t" << suma_primos << "\n";
    
    return 0;
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
