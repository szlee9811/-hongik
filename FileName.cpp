#include <iostream>
#include <string>
using namespace std;

int main() {
    
    string base = "Hello World";
    base.replace(0, 5, "Hi"); // "Hi World"

    cout << base;

    return 0;
}
   
