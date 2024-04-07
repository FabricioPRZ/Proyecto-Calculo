#include <iostream>
#include <cmath>

using namespace std;

int main() {
  // Declarar las variables
  double a, u, derivada;

  // Obtener los valores de a y u del usuario
  cout << "Ingrese el valor de a: ";
  cin >> a;
  cout << "Ingrese el valor de u: ";
  cin >> u;

  // Calcular la derivada
  derivada = exp(u * log(a)) * log(a) * u;

  // Mostrar el resultado
  cout << "La derivada de y = a^u con respecto a x es: " << derivada << endl;

  return 0;
}