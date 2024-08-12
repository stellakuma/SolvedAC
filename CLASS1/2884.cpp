#include <iostream>

int main(){

	int h, m = 0;
	std::cin >> h >> m;
	if(m-45 < 0){
		
		m = 60+(m-45);
		h = (h-1 < 0)? 23 : h-1;
	
	}else{
		
		m = m-45;
		
	}

	std::cout << h << " " << m;

}