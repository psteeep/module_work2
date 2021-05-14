#include <iostream>
#include <fstream>
#include <string>

int main() {


    //std::ofstream out;          
    //out.open("testing.txt"); 
    //if (out.is_open())
    //{
    //    out << "asdkjqjdlkqejdeifjewlfkwjelk" << std::endl;
    //}

    std::string line;

    std::string S = "";
    std::ifstream in("testing.txt"); 
    if (in.is_open())
    {
        while (getline(in, line))
        {
            S += line;
            std::cout << line << std::endl;
        }
    }
    in.close();
 

    char l1;
    char l2;
    
    int num_l1 = 0;
    int num_l2 = 0;
    
    std::cout << "enter l1 and l2: ";
    std::cin >> l1;
    std::cin >> l2;


    for (int i = 0; i < S.size(); i++) {
        if (S[i] == l1) {
            num_l1++;
        }
        if (S[i] == l2) {
            num_l2++;
        }
    }
    std::cout << "symbol " << l1 << " = " << num_l1 << " times!!" << std::endl;
    std::cout << "symbol " << l2 << " = " << num_l2 << " times!!" << std::endl;


	return 0;
}