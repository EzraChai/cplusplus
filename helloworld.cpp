#include <iostream>

using namespace std;

int sum(int a, int b){
  return a +b ;
}

int main(){

  int num1, num2;
  cin >> num1;
  cin >> num2;
  int sumNum = sum(num1,num2);
  cout << sumNum; 
  return 5;
}


