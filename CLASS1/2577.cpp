#include <iostream>

int main(){

	int a,b,c,r = 0;
	int num[10] = {0, };
	std::cin >> a >> b >> c;
	r = a*b*c;
	while( r != 0 ){
		
		++num[r%10];
		r = r/10;
		
	}
	while( r < 10 ){
		
		std::cout << num[r] << "\n";
		++r;
		
	}
	

}