#include <iostream>
using namespace std;

int main() {
  double pesos;
  double reais;
  double soles;
  double dollars;

  cout << "Enter number of Colombian Pesos\n";
  cin >> pesos;
  cout << "Enter number of Brazilian Reais\n";
  cin >> reais;
  cout << "Enter number of Peruvian Soles\n";
  cin >> soles;
  // 1 COP = 0.00025000 USD
  // 1 BRL = 0.19868 USD
  // 1 PEN = 0.26048 USD

  dollars = (0.00025000 * pesos) + (0.19868 * reais) + (0.26048 + soles);
  cout << "US Dollars =$ " << dollars << endl;
  return (0);
}
