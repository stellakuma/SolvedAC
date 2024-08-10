#include <iostream>
#include <vector>

using namespace std;

int main(){

	int n, x, t = 0;
	cin >> n >> x;
	vector<int> a;
	while( n --> 0 ){

		cin >> t;
		if( t < x ) a.push_back(t);
		
	}
	
	for( t = 0; t < a.size(); t++ ){
		
		cout << a[t] << " ";
		
	}

}