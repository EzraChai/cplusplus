#include <iostream>

int main(){
  int numbers[] = {1,2,3,4,5,6};

  std::cout << *(numbers+4) << std::endl;
 
  //std::cout << !('A' > 'Z');

  for (int i =0, j=10; i < 10, j > 5; i++, j--){
    if(i % 2 == 0){
      std::cout << "hey";
      continue;
    }else if( j== 4){
      std::cout << "j==4";
      break;
    }else 
      std::cout << "Current i is " <<i<< " and j is " <<j << std::endl ;
  }

  return 0;
}
