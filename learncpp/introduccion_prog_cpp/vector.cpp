#include <vector>  // ¡No olvides incluirlo!

// 1. Crear un vector vacío
std::vector<int> primos;

// 2. Añadir elementos al final
primos.push_back(2);   // primos = [2]
primos.push_back(3);   // primos = [2, 3]
primos.push_back(5);   // primos = [2, 3, 5]

// 3. Acceder a elementos (como un arreglo normal)
int primer_primo = primos[0];  // 2
int segundo_primo = primos[1]; // 3

// 4. Saber cuántos elementos tiene
int cantidad = primos.size();  // 3

// 5. Recorrer un vector
for (int i = 0; i < primos.size(); i++) {
    std::cout << primos[i] << std::endl;
}

// 6. Recorrer con "range-based for" (más elegante)
for (int p : primos) {
    std::cout << p << std::endl;
}