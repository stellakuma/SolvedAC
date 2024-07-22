#include <iostream>
#include <string>

int main(){

	std::string a;
	short r, r1, r2 = 0;
	std::cin >> r;

	while(r --> 0){

		std::cin >> r1 >> a;
		r2 = r1;	
	
		for(int i = 0; i < a.size(); i++){
		
			while(r1 --> 0){

				std::cout << a[i];

			}r1 = r2;

		}std::cout << "\n";			

	}	

}