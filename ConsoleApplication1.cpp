#include <iostream>
#include <fstream>
#include <sstream>
#include <cstdlib>
#include <vector>
#include <string>

using namespace std;

int main(int argc, char *argv[]) {
    string line;

    ifstream inputFile(argv[1]);
    ofstream outputFile(argv[2]);

    if (!outputFile || !inputFile) {
        cout << "Указаны неверные файлы";
        return 0;
    };

    while (getline(inputFile, line)) {
        int exitCode = system((string("mult.exe ") + line).c_str());

        outputFile << exitCode << '\n';
    }

    inputFile.close();
    outputFile.close();

    system((string("notepad.exe ") + argv[2]).c_str());

    return 0;
}