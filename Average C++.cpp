#include <iostream>  // Include standard input/output library

using namespace std;  // Use standard namespace to avoid std::

int main() {
    // Variable declaration
    int a, b;         // Store two input numbers
    float average;    // Store calculated average (float for decimal precision)

    // Get first number from user
    cout << "Give the first number: ";
    cin >> a;

    // Get second number from user
    cout << "Give the second number: ";
    cin >> b;

    // Calculate average (with explicit float conversion)
    // The (float) cast ensures decimal division
    average = (float)(a + b) / 2;

    // Display the result
    cout << "The average is: " << average << endl;

    return 0;  // Indicate successful program termination
}  // End of main function
