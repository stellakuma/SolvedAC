#include<iostream>

int main(){

	int c[3] = {0, 0, 5};
	while(c[2]--){
		
		std::cin >> c[0];
		c[1] += c[0]*c[0];
		
	}std::cout << c[1]%10;

}