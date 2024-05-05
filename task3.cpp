#include <concepts>
#include <iostream>
#include <vector>
//write a concept that checks if the  value can be printed  
//and use that concept in function that prints elements of a vector
 

int main() {
    std::vector<int> ints{ 1, 2, 3, 4, 5 };
    std::vector<std::string> strings{ "hello", "world" };

    PrintVector(ints);
    PrintVector(strings);

    return 0;

}
