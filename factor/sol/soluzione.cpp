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
  bool first = true;
  if(n == 1) cout << 1 << endl;
  else {
    for(int i = 2; i<=n; i++)
      while(is_divisor(i,n)) {
        if(first) {
	  cout << i;
	  first = false;
        }
        else cout << "*" << i;
        n/=i;
      }
    cout << endl;
  }
  return 0;
}

