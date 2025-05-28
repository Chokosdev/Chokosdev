#include <iostream>   // For input/output (cout, endl)
#include <cstdlib>    // For rand() (random number generation)
#include <cmath>      // For sqrt() (square root function)

using namespace std;  // Use standard namespace to avoid std::

int main() {
    float sum;  // Variable to store the sum of square roots

    // Calculate the sum of 3 random square roots:
    // 1. rand() generates a random integer
    // 2. sqrt() computes its square root
    // 3. Three such values are added together
    sum = sqrt(rand()) + sqrt(rand()) + sqrt(rand());

    // Display the result
    cout << "The sum of the square roots is: " << sum << endl;

    return 0;  // Indicates successful program termination
}  // End of main()
