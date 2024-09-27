// Tu Nombre:
// Programa que sigue pidiendo numeros hasta que oprimes CTRL+d

#include <iostream>

using namespace std;

int main() {
  string st;

  while (cin >> st) {
    cout << "Entraste: " << st << endl;
  }
  cout << "Adios" << endl;
  return 0;
}
