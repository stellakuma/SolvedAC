#include <iostream>

int main(){

	short n, m = 10;
	std::cin >> n;

	while( m --> 1 ){

		std::cout << n << " * " << 10-m << " = " << n*(10-m) << "\n";

	}

}
