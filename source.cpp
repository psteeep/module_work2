#include <iostream>
#include <fstream>
#include <string>

int main() {


    std::ofstream out;          
    out.open("testing.txt"); 
    if (out.is_open())
    {
        out << "asdkjqjdlkqejdeifjewlfkwjelk" << std::endl;
    }


	return 0;
}