#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;
int main()
{
    std::ifstream in_file;
    in_file.open("test.txt");
    std::string line;
    int num, total;
    
    if(!in_file) {
        std::cerr << " We couldnt open this " << std::endl;
        return  1;
    }
    
    while(!in_file.eof()) {
        in_file >> line >> num >> total;
        std::cout << std::setw(10) << std::left << line 
                        << std::setw(10) << num
                        << std::setw(10) << total
                        <<std::endl;
    }
    in_file.close();
    return 0;
}