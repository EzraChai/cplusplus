#include <iostream>

using namespace std;

int main(){
  char grade = 'A';
  string phrase = "Giraffe";
  int age = 50;
  float gpa = 3.92f;
  double cgpa = 4.0;
  bool isMale = true;

  std::cout << cgpa << endl;
  std::cout << gpa << endl;
  std::cout << age << endl;
  std::cout << grade << endl;
  std::cout << phrase << endl;
  std::cout << phrase[2] << endl;
  std::cout << phrase.length() << endl;
  std::cout << phrase.find("ffe",0) << endl;
  std::cout << phrase.substr(5,2) << endl;
  std::cout << isMale << endl;

  return 0;
}
