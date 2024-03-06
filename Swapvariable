#include<iostream>
using namespace std;

class Swapper {
public:
    int a, b;
    
    // Constructor to initialize variables
    Swapper(int x, int y) {
        a = x;
        b = y;
    }
    
    // Function to swap variables
    void swapVariables() {
        a = a + b;
        b = a - b;
        a = a - b;
    }
    
    // Function to display variables
    void displayVariables() {
        cout << "After swapping: a = " << a << ", b = " << b << endl;
    }
};

int main() {
    // Initialize variables
    int x = 5, y = 10;
    
    // Create Swapper object
    Swapper obj(x, y);
    
    // Display original variables
    cout << "Before swapping: a = " << obj.a << ", b = " << obj.b << endl;
    
    // Swap variables
    obj.swapVariables();
    
    // Display swapped variables
    obj.displayVariables();
    
    return 0;
}
