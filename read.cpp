#include <iostream>
#include <cstdlib>
#include <string>
#include <fstream>
#include <ctime>
#include <cctype>


void convert(std::string& s){

    for(int i = 0; i<s.length(); i++){

        s[i] = tolower(s[i]);
    }

}

int main()
{ 
    std::string pw = "abcdefghijklmnopqrstuvwxyz!@$#&%^123456789";
    std::string names[1004];
    int size = 1004;
    
    std::ifstream fin("names.txt");

    /* no need for srand really 
    std::srand(time(0)); */

    for(int i=0; i<size; i++){
        
        fin >> names[i];

        convert(names[i]);

        std::cout << "sending username: " << names[i] + std::to_string(rand()%100) << "@gmail.com" << " and"
        << " password: " << pw[rand() % pw.length()] << pw[rand() % pw.length()] << pw[rand() % pw.length()]
        << pw[rand() % pw.length()] << pw[rand() % pw.length()] << pw[rand() % pw.length()] << pw[rand() % pw.length()] << "\n";
    }
    
    
    fin.close();
    return 0;
}


