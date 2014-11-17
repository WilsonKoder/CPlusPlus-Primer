//Compile a program that has incorrectly nested comments.

#include <iostream>

int main()
{
    /*This /* Program */ prints hello world */
    std::cout << "Hello World" << std::endl;
}

//You can't compile this, there are errors.
