#include <cmath>

int square_digits(int num) {
  int square = 0;
  int teiler = 10;
  while(num > 0) {
    square += ((num%teiler)*(num%teiler))/(teiler/10);
    num -= num%teiler;
    teiler *= 10;
  }
}