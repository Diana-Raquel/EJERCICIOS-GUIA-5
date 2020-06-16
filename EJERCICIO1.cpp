/*Funcion que devuelva el Maximo Comun Divisor de dos numeros, utilizando el metodo de Euclides.*/

#include "iostream"

using namespace std;

//funcion para calcular mcd de dos numeros
int mcd()
{
  int n1, n2, cociente, residuo;

  cout << endl;
  cout << "ESTE PROGRAMA CALCULA EL M.C.D DE DOS NUMEROS NATURALES :D" << endl;
  cout << "POR FAVOR DIJITE DOS NUMEROS!" << endl<< endl;

  cout << "DIGITE EL PRIMER NUMERO: " << endl;
  cin >> n1;
  cout << "DIGITE ELL SEGUNDO NUMERO: " << endl;
  cin >> n2;

  cociente = n1 / n2;
  residuo = n1 % n2;

  while (residuo != 0)
  {
    n1 = n2;
    n2 = residuo;
    if (n1 > n2)
    {
      cociente = n1 / n2;
      residuo = n1 % n2;
    }
  }
  return n2;
}

int main()
{
  int aux = mcd();

  cout << "EL M.C.D DE SUS DOS NUMEROS ES:  " << aux << endl;
  return 0;
}