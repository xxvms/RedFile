#include <iostream>
#include <fstream>                                                      // for file I/O
#include <string>


int main() {
    char ch;
    int j;
    double d;
    std::string string1;
    std::string string2;

    std::ifstream infile("fdata.txt");          // create ifstream object extract (read) data from it
    infile >> ch >> j >> string1 >> string2;


    std::cout << ch << "\t" << j << "\t" << string1 << "\t" << string2;

    system("pause");
    return 0;
}