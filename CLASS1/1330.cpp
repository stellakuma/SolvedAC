#include <iostream>

int main(){

	short a,b = 0;
	std::cin >> a >> b;
	std::cout << ((a==b)?"==":(a>b)?">":"<");

}
