#include <iostream>
#include <fstream>

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
    
    in_file >> line >> num >> total;
    cout << " First line is : " << line << std::endl;
    cout << " Second line is : " << num << std::endl;
    cout << " Third line is : " << total << std::endl;
   
    in_file.close();
    return 0;
}