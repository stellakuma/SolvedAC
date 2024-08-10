#include <iostream>

int main(){

	int n = 0;
	std::cin >> n;

	for(int i = 1; i < n+1; i++){
		
		int ii = i;
		int t = n-i;
		while(t --> 0) std::cout << " ";
		while(i --> 0) std::cout << "*";
		i = ii;
		std::cout << "\n";
		
	}

}