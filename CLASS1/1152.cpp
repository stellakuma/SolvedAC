#include <iostream>
#include <string>

int main(){
	
	std::string input = "";
	int count = 0;
	getline(std::cin, input);
	
	if( input.size() == 1 and input[0] == char(32) ){
	    
	    std::cout << 0;
	    return 0;
	    
	}
	
	for( int i = 0; i < input.size(); i++ ){
		
		if( i == 0 or i == input.size()-1 ) continue;
		else if( input[i] == char(32) ) count+=1;
		
	}std::cout << count+1;
	
}