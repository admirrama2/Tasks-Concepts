#include <concepts>
#include <iostream>
#include <vector>
#include <numeric>

// Create a concept that requires the template to be a number 
// then use the template in a function Average to find an average of a vector




int main() {

    std::vector<int> intNumbers = { 1, 2, 3, 4, 5 };
    std::vector<double> doubleNumbers = { 1.1, 2.8, 3.2, 4.9, 5.3 };

    double intAverage = Average(intNumbers);
    double doubleAverage = Average(doubleNumbers);

    std::cout << "The average of the int numbers is: " << intAverage << std::endl;
    std::cout << "The average of the double numbers is: " << doubleAverage << std::endl;

}
