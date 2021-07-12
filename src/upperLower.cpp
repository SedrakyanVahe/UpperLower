#include <iostream>
using namespace std;
void upperLower(){

    char arr[]={'a', 'B', 'c', 'D'};

    for(int i = 0; i < 4; i++){

        cout << "NORMAL: " << arr[i] << endl;
        // if my letter is biger made this cunditioni  A > a
        // and print it
        if(char(arr[i]) > 64 && char(arr[i]) < 91){
            char toLower (char(arr[i] + 32));
            cout << "TO LOWER: " << toLower << endl;

        // if my letter is smaller made this cundition a > A
        // and print it
        }else if(char(arr[i]) > 96 && char(arr[i]) < 123) {
            
            char toUpper (char(arr[i] - 32));
            cout << "TO UPPER: " << toUpper << endl;
        }
    
    }

}



