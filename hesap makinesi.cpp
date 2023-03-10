#include <iostream>

using namespace std;

int main(){

  double sayi1 = 0.0, sayi2 = 0.0, sonuc = 0.0;
  char islem = 'x';

  cout << "<sayi1> <islem> <sayi2> : ";
  cin >> sayi1 >> islem >> sayi2;

  switch (islem){
    case '+':
    sonuc = sayi1 + sayi2;
      break;
    case '-':
    sonuc = sayi1 - sayi2;
      break;
    case '*':
    sonuc = sayi1 * sayi2;
      break;
    case '/':
    sonuc = sayi1 / sayi2;
      break;
    default:
    sonuc = 0;
      break;
  }

  cout << sonuc;

  return 0;
}
