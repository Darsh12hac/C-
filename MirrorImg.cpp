#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

void printMirrorImage(int number) {
    
    string numStr = to_string(number);

    
    reverse(numStr.begin(), numStr.end());

    int mirImg = stoi(numStr);

    // Output the mirror image
    cout << "Mirror image of " << number << " is: " << mirImg<< endl;
}

int main() {
    int number;

    // Input the number
    cout << "Enter a number: ";
    cin >> number;

    // Print the mirror image
    printMirrorImage(number);

    return 0;
}
