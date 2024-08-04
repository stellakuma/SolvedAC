#include <iostream>

int main(){

	short a, b = 0;
	while(true){
		
		std::cin >> a >> b;
		if( a == 0 and b == 0 ) break;
		std::cout << a+b << "\n";
		
	}

}