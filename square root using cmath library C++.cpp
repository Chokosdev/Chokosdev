#include <iostream>  // For input/output operations (cout, endl)
#include <cmath>     // For mathematical functions (sqrt)

using namespace std;  // Use standard namespace to avoid std:: prefix

int main() {
    // Constants declaration
    const int a = 333;  // First constant value
    const int b = 777;  // Second constant value
    const int c = 999;  // Third constant value

    float sum;  // Variable to store the sum of square roots

    // Calculate sum of square roots:
    // 1. sqrt() function computes square root
    // 2. Adding roots of all three constants
    sum = sqrt(a) + sqrt(b) + sqrt(c);

    // Display the result with descriptive message
    cout << "The sum of the square roots is: " << sum << endl;

    return 0;  // Indicates successful program termination
}  // End of main function
