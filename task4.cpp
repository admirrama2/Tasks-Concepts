#include <iostream>
#include <string>
#include <algorithm>
#include <concepts>

//Create a template that use's an already existent concept that checks if a value is comparable to  a string
//Use the template to write a function arePermutations that checks if two words are permutations of eachother


int main() {
    std::string s1 = "hello";
    std::string s2 = "world";
    std::string s3 = "olleh";

    std::cout << std::boolalpha;
    std::cout << arePermutations(s1, s2) << std::endl; // false
    std::cout << arePermutations(s1, s3) << std::endl; // true

    const char* c1 = "hello";
    const char* c2 = "world";
    const char* c3 = "olleh";

    std::cout << arePermutations(c1, c2) << std::endl; // false
    std::cout << arePermutations(c1, c3) << std::endl; // true

    return 0;
}
