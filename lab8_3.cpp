#include<iostream>
using namespace std;

char before(char x){
    char i;
    if(x>='A' and x<='Z'){
        if(x == 'A'){
            i = 'Z';
        }else{
          i = x-1;
        }
        
    }else{
        i = '0';
    }
    return i;
}

int main(){
	//Test Case
	cout << before('A') << "\n";
	cout << before('B') << "\n";
	cout << before('P') << "\n";
	cout << before('T') << "\n";
	cout << before('Z') << "\n";
	cout << before('a') << "\n";
	cout << before('0') << "\n";
	cout << before('c') << "\n";
	return 0;
}
