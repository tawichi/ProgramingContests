#include <iostream>
using namespace std;

int main(){
  int n , r;
  cin >> n >> r;
  if (n > 9) cout <<r << endl;
  else cout << r + 100 *(10 - n) << endl;
}
