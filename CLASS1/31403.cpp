#include <iostream>
#include <string>

using namespace std;

int main(){

	int a, b, c = 0;
	string s = "";
	cin >> a >> b >> c;
	cout << a+b-c << endl;
	s += to_string(a)+to_string(b);
	cout << stoi(s) - c;

}
