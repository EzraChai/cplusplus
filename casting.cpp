#include <iostream>

int main(){

  int books;
  int months;
  double perMonth;

  std::cout << "How many books do you plan to read? ";
  std::cin >> books;
  std::cout << "How many months will it take you to read them? ";
  std::cin >> months;

  perMonth = static_cast<double> (books) / months;

  std::cout << "That is " << perMonth << " books per month.\n";

  return 0;
}
