#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>

using namespace std;
int main()
{
    std::ifstream in_file{"../infile.txt"};
    std::ofstream out_file{"../poutput.txt", std::ios::app};
    int count = 0;
    
    if(!in_file) {
        std::cerr << "Error opening a file" << std::endl;
        return 1;
    }
    
    if(!out_file) {
        std:cerr << "Error creating a file" << std::endl;
        return 1;
    }
    
    std::string line {};
    while(std::getline(in_file, line))  {
        if(line == "") {
            out_file << std::endl;
        }
        else {
               out_file << count++ <<  std::setw(7) << line << std::endl;      
        }
    }
    out_file.close();
    
    return 0;
}