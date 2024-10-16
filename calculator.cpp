#include <iostream>

using namespace std;

int main(){
 
  int num1, num2,selection;
  std::cout << "Please choose a number: \n 1: Addition\n 2: Subtraction\n";

  std::cin >> selection;

  if(selection == 1){

    std::cout << "\nEnter first number: ";

    std::cin >> num1;

    std::cout << "Enter second number: ";

    std::cin >> num2;

    int sum = num1 + num2;

    std::cout << "Sum = " << sum << endl;

  }else if( selection == 2){
    std::cout << "\nEnter first number: ";

    std::cin >> num1;

    std::cout << "Enter second number: ";

    std::cin >> num2;

    int sub = num1 - num2;

    std::cout << "Sub = " << sub << endl;

  }
  return 0;
}
