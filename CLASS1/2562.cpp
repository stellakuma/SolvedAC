#include <iostream>

int main(){

	short n[11] = {0,};
	short i = 9;
	while(i --> 0){
	
		std::cin >> n[i];
		if(n[i] > n[9]){ n[9] = n[i]; n[10] = i; }

	}
	std::cout << n[9] << "\n" << 9-n[10];

}
