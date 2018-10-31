/**
 *  Soluzione di list_divisors
 *
 *  Autore: Romeo Rizzi
 *
 *  Descrizione: Banale
 */
#include <iostream>
using namespace std;

bool is_divisor(int d, int n) {
    if(n % d)  return false;
    return true;
}

int main() {
  int n;
  cin >> n;
  for(int i = 1; i<=n; i++)
    if(is_divisor(i,n))
      cout << i << endl;
  return 0;
}

