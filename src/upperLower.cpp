#include <iostream>
using namespace std;

void upperLower(){
  char arr[] = { 'a', 'B', 'c', 'D' };

  for(int i = 0; i < 4; i++){
    cout << "GIVEN: " << arr[i] << endl;

    if(char(arr[i]) > 64 && char(arr[i]) < 91){
      char toLower(char(arr[i] + 32));
      cout << "TO LOWER: " << toLower << endl;
    }else if(char(arr[i]) > 96 && char(arr[i]) < 123) {
      char toUpper(char(arr[i] - 32));
      cout << "TO UPPER: " << toUpper << endl;
    }
  }
}