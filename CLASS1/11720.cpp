#include <iostream>
#include <string>

int main(){

	int n,s = 0;
	std::string m = "";
	
	std::cin >> n >> m;
	
	while( n-- ){
		
	    s += m[n]-48;
		
	}std::cout << s;

}