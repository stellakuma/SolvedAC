#include <iostream>

int main(){

	int m[8] = {0, };
	int step,mixed = 0;	
	
	for( int i = 0; i < 8; i++ ){
		
		std::cin >> m[i];
		if( i != 0 ){
			
			if( i == 1 ){ step = m[i] - m[i-1]; }
			else if( step != m[i] - m[i-1] ){ 
			    
			        mixed = 1;
			    
			    }
			
		}
	
	}
	
	if( mixed == 1 ) std::cout << "mixed";
	else if( step == 1 ) std::cout << "ascending";
	else if( step == -1 ) std::cout << "descending";
	
	
}