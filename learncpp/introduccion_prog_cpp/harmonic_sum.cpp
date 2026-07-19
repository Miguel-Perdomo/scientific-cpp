// generar un codigo que compute la suma armonica hasta cierto limite.

#include<iostream>
#include<cmath>

double harmonic_sum(int a);

int main(void){

    int number = 0;
    std::cout << "inserte el numero hasta el limete de la suma armónica: \n"; 
    std::cin >> number; 
    
    if(number > 0){
        std::cout << "el resultado es: \n " << harmonic_sum(number) << "\n";
    }
    else{
        std::cout << "su número no es valido para la serie armonica que inicia de 1 hasta inf. \n";
    }

    return 0; 
}   

double harmonic_sum(int a){
    double count = 0; // se guarde el resultado en cada iteracion 

    for (int i = 1; i <= a; i++){
        count = count + 1.0/i; 
    }
    return count;
}   