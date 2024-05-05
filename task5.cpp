#include <iostream>
#include <string>
#include <concepts>


//One of the following structures is a Person-like structure with :
//name that is a string, age that is an integer, and height that is a double.
//You need to write a concept IsPerson that checks if the structures have the credentials mentioned above

struct s1 {
private:
    std::string name;
    int age;
    int height;

public:
    std::string get_name() const { return name; }
    int get_age() const { return age; }
    int get_height() const { return height; }
};

struct s2 {
private:
    std::string name;
    int age;
    double height;

public:
    std::string get_name() const { return name; }
    int get_age() const { return age; }
    double get_height() const { return height; }
};
struct s3 {
private:
    int name;
    std::string age;
    double height;

public:
    int get_name() const { return name; }
    std::string get_age() const { return age; }
    double get_height() const { return height; }
};

int main() {
    std::cout << std::boolalpha;
    std::cout << IsPerson<s1> << std::endl; // Should output false
    std::cout << IsPerson<s2> << std::endl; // Should output true
    std::cout << IsPerson<s3> << std::endl; // Should output false
    return 0;
}
