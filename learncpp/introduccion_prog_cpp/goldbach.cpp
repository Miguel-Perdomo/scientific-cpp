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

    verificar_goldbach(10000);

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

void verificar_goldbach(int limite){
    std::vector<int> primos = generar_primos(limite); // genero los primos
    
    int contador_impresos = 0; // Para llevar la cuenta de los primeros 20

    for(int i = 7 ; i<= limite; i=i+2){ // voy de 2 en dos debido a que son impares, empiezo en 7
        bool encontrado = false;
        int p1_encontrado = 0, p2_encontrado = 0, p3_encontrado = 0; // Guardar los primos

        for(int p1 : primos){// recorremos el vector buscando algo (de principio a fin del vector).
            if (p1 >= i){ // porque si es mayor o igual a i, no se puede sumar nada.
                break; 
            }
            for (int p2 : primos){
                if (p1 + p2 >= i) break;

                int p3 = i - p1 - p2;

                if(is_prime(p3)){
                    // encontrado!!
                    encontrado = true;
                    p1_encontrado = p1;
                    p2_encontrado = p2;
                    p3_encontrado = p3;
                    break;
                }
            }
            if(encontrado) break;
        } 
        
        // Verificar si NO se encontró (contraejemplo)
        if (!encontrado) {
            std::cout << "¡Contraejemplo encontrado! " << i << " no se puede expresar como suma de 3 primos." << std::endl;
        } 
        // Si se encontró Y aún no hemos impreso 20
        else if (contador_impresos < 20) {
            std::cout << i << " = " << p1_encontrado << " + " << p2_encontrado << " + " << p3_encontrado << std::endl;
            contador_impresos++;
        }
    }
}