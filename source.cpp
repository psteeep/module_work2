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

    char S[] = "dwdwefweqf23ewdkdlwjwlfjwq0wsad"; 
    char l1;
    char l2;
    
    int num_l1 = 0;
    int num_l2 = 0;
    
    std::cout << "enter l1 and l2: ";
    std::cin >> l1;
    std::cin >> l2;


    for (int i = 0; i < strlen(S); i++) {
        if (S[i] == l1) {
            num_l1++;
        }
        if (S[i] == l2) {
            num_l2++;
        }
        else
            std::cout << "no like that" << std::endl;
    }
    std::cout << "symbol " << l1 << " = " << num_l1 << " times!!" << std::endl;
    std::cout << "symbol " << l2 << " = " << num_l2 << " times!!" << std::endl;


	return 0;
}