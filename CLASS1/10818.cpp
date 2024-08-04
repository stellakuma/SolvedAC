#include <iostream>

int main(){

	int n,temp = 0;
	int min = 1000000;
	int max = -1000001;
	
	std::cin >> n;
	while(n --> 0){

		std::cin >> temp;
		if( temp < min ) min = temp;
		if( temp > max ) max = temp;

	}std::cout << min << " " << max;

}
