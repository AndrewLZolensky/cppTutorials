#include <iostream>
#include <string>

using namespace std;

int main (int argc, char* argv[]) {
	string st = "Hello";
	for (char c : st) {
		cout << c << endl;
	}	
	
	return EXIT_SUCCESS;
}
