/*crear un programa que declare un programa que declare variables: 

int: sin inicializarlo,
double: con valor incial de -9.87e-8,
std::string: inicializado con el primer nombre
stad::vector<double> con 10 valores sin inicializar 
*/ 
#include<iostream>
#include<string>
#include<vector>

int main(void){

    // primero el entero sin inicializar: 
    int a; 

    // luego el double con un valor grande:
    double b = -9.87e-8;

    // luego el string:
    std::string nombre = "Miguel"; 

    //Para crear un vector con 10 valores sin inicializar, supongo que: 
    std::vector<int> v(10); // pero cómo sé que son 10 valores? con ().
    // se puede tambien reservear
//  v.reserve(10), esto lo que hacce es reservar un espacio.
    
    // vamos a imprimirlos: 
    std::cout << "el entero es " << a << "\n"; 
    std::cout << "el double es " << b << "\n";
    std::cout << "el nombre es " << nombre << "\n"; 
 
    return 0; 
}