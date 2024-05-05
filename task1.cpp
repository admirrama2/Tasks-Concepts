#include <iostream>
#include <iostream>
#include <string>
#include <concepts>
#include <algorithm>

template<typename T>
//Create a concept that checks if two values are comperable(<,==,> etc.)
//Use the concept to create a template and use it to create a simple function areComperable that prints a message if they are comparable


int main() {

    areComperable(1,2);
    areComperable("1", "1");

    return 0;
}
