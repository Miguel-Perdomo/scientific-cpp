// programa que pregunta mi nombre y luego me saluda

#include<iostream> 
#include<string> // para definir una variable str

// using std::string; esto para solo escirbir string, NO USAR NAMESPACES, MALA PRACTICA

int main(void){

    //preguntar nombre
    std::cout << "Escribe tu nombre: \n";

    //leer el nombre
    std::string nombre; 
    //std::cin >> nombre; // cin esta en la libreria estandar iostream
    std::getline(std::cin, nombre); // funcion global que vive dentro dew la libreria <string>

    //imprimir el saludo
    std::cout << "Hola " << nombre << "\n";

    return 0; 
}