/* 
 * File:   main.cpp
 * Author: ali
 *
 * Created on 16 de noviembre de 2012, 17:19
 */

#include <cstdlib>
#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    std::cout << "working";
    system("./minisat/build/release/bin/minisat simple_v3_c2.cnf salida.txt");
    
    
    
    //printf("This is a directory list...");
    return 0;
}

