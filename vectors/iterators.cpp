#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char* argv[]) {
	vector<int> vec = {6, 5, 4};
	
	vector<int>::iterator it = vec.begin();
	it = vec.insert(it, 3);
	++it;
	it = vec.insert(it, 1);
	it = vec.end();
	it = vec.insert(it, 2);

	for (it = vec.begin(); it < vec.end(); it++) {
		cout << *it << endl;
	}
	return EXIT_SUCCESS;
}
