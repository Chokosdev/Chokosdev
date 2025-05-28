#include <iostream>  // Include the standard input/output library

// This program asks the user for their age and displays it back

using namespace std;  // Use standard namespace to avoid writing std::

int main() {
    int a;  // Variable to store the user's age

    // Prompt user to enter their age
    cout << "Give your age : ";
    // Read the input age and store it in variable 'a'
    cin >> a;

    // Display the entered age back to the user
    cout << "Your age is " << a << " years old" << endl;

    return 0;  // Indicates successful program execution
}  // End of main function
