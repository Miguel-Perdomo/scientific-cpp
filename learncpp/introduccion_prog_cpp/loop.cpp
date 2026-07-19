// un programa basico para entender loops

#include<iostream>
#include<string>
#include<cmath>

bool is_prime(int a);

int main(void){

    int number;

    std::cout << "Escriba un numero:" << std::endl;
    std::cin >> number; 
    
    if (number <= 10){
        if (is_prime(number) == 1){
            std::cout << "el numero insertado es primo!\n";
        }
        else {
            std::cout << "el numero no es primo\n";
        }
    }
    else {
        std::cout << "su numero es mas grande que 10.\n";
    }
}

bool is_prime(int a){
    bool flag = true;
    for (int i = 2; i< a; i++){
        if (a%i == 0){
            flag = false; 
            break;
        }// encontré un divisor, no es primo
    }
    return flag; 
}