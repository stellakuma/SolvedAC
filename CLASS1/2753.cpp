#include<iostream>

int main(){

	int n = 0;
	std::cin >> n;
	std::cout << ( n%4 == 0 and (n%100 != 0 or n%400 == 0) )? 1 : 0; 

}