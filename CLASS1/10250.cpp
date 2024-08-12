#include <iostream>

using namespace std;


int getFloorNum(int n, int h){
    
		int r = 0;
		if( n%h == 0 ) r = h;
		else r = n%h;
		
		return r;
    
    }
    
int getRoomNum(int n, int h){
    
		int r = n/h+1;
		if( n%h == 0 ) r -= 1;
		
		return r;
    
    }
	
int getRNum(int n, int h){
	
	int r = (getFloorNum(n,h)*100)+getRoomNum(n,h);
	return r;
	
}

int main(){

	int t, h, w, n = 0;
	
	cin >> t;
	
	while(t --> 0){
		
		cin >> h >> w >> n;
		
		cout << getRNum(n,h) << "\n";
		
	}

}