#include <iostream>
#include <fstream>
#include <sstream>
#include <cstdlib>
#include <vector>
#include <string>

using namespace std;

int main(int argc, char* argv[]) {
	int res = 1;

	for (int i = 1; i < argc; ++i) {
		res *= atoi(argv[i]);
	}

	return res;
}