#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char* argv[]){
	vector<int> vec {6, 5, 4};
	vec.push_back(3);
	vec.push_back(2);
	vec.push_back(3);

	cout << "vec.at(0)" << endl << vec.at(0) << endl;
	cout << "vec.at(1)" << endl << vec.at(1) << endl;

	for (size_t i = 0U; i < vec.size(); i++) {
		cout << vec.at(i) << endl;
	}

	return EXIT_SUCCESS;
}
