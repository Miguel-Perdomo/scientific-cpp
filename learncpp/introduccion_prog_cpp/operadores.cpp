// escriba tres funciones, una que use operadores aritmeticos, otra que use los operadores de comparacion y otra los operadores lógicos, llamelas en el main.
#include<iostream>
#include<string>
#include<vector>

// const double Y = 0.5 esto es una variable global. USAR MAYUSCULA, ojo, es mala idea igual. si lo hace, pongale const antes esto es siempre buena idea minuto 20.

double suma(double a, double b);
bool comparativo(double a, double b);
bool logico(int edad);

int main(void){

    // funcion suma
    double a = 0;
    double b = 0;
    std::cout << " Escribe dos numeros que quieras que se sumen: \n";
    std::cout << "a:" << "\n"; 
    std::cin >> a;
    std::cout << "b:" << "\n"; 
    std::cin >> b;

    // implementamos suma: 
    double resultado_suma = suma(a, b);
    std::cout << "el resultado es: " << resultado_suma << "\n";

    // funcion de comparacion
    bool es_menor = comparativo (a, b);
    
    std::cout << "es " << a << " menor que " << b << "?\n";
    if (es_menor == true){
        std::cout << "lo son, a, es mas pequeño que b \n";
    }
    else{
        std::cout << "no lo es.\n";
    }
    // funcion de operadores logicos
    std::cout << "introduce tu edad: " << "\n";
    int edad = 0;
    std::cin >> edad;

    bool permiso = logico(edad);

    if (permiso == true){
        std::cout << "eres mayor, entra!!\n";
    }
    else{
        std::cout << "No puedes entrar, a casa!!\n";
    }

    double c = 6*2/3+1;
    std::cout << "el valor de C es: " << c << "\n"; 
    
    return 0; 
}

double suma(double a, double b){
    double c = a + b; //declaramos c como double porque a y b pueden ser float
    return c; 
}

bool comparativo(double a, double b){
    return a < b;
}

bool logico(int edad){
    int permiso = 18; 
    if (edad >= permiso){
        return true;
    }
    else{
        return false;
    }
}