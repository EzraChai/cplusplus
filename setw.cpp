#include <iostream>
#include <iomanip>

int main(){

  int num1 = 2897, num2 = 5, num3 = 431,
      num4 = 341, num5 = 55, num6 = 432,
      num7 = 231, num8 = 4, num9 = 43;

  std::cout << std::setw(6) << num1 << std::setw(6) << num2 << std::setw(6) << num3 << std::endl; 
  std::cout << std::setw(6) << num4 << std::setw(6) << num5 << std::setw(6) << num6 << std::endl; 
  std::cout << std::setw(6) << num7 << std::setw(6) << num8 << std::setw(6) << num9 << std::endl; 

  return 0;
}
