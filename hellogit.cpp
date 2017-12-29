#include "stdafx.h"
#include <iostream>
using namespace std;

void aFunction(int param);

int main(int argc, char** argv) {
    std::cout << "This simply writes a line" << std::endl;
    aFunction(argc);
}

void aFunction(int param) {
    std::cout << "The param is: " << param << std::endl;
}
