/**
 *  Soluzione di bisestile
 *
 *  Autore: Romeo Rizzi
 *
 *  Descrizione: Banale
 */
#include <iostream>
using namespace std;

const int num_days_non_bisestile = 365; // earth planet
const int num_days_bisestile = 366; // earth planet

int num_days_of_year(int n) {
    if (n % 400 == 0)
        return num_days_bisestile;
    if (n % 100 == 0) {
      if(n >= 1582) {
        return num_days_non_bisestile;
      }
      else {
        return num_days_bisestile;
      }
    }  	
    if (n % 4 == 0)
        return num_days_bisestile;
    return num_days_non_bisestile;
}

int main() {
  int N;
  cin >> N;
  cout << num_days_of_year(N) << endl;
  return 0;
}

