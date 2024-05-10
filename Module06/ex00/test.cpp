#include <iostream>
#include <vector>
#include <string>
#include <cstdlib>

// Function to run the converter program with the given argument
void testConverter(const std::string& argument) {
    std::string command = "./converter " + argument;
    std::cout << "Testing with argument: " << argument << std::endl;
    system(command.c_str());
    std::cout << std::endl;
}

int main() {
    // Test cases with different types of data
    std::vector<std::string> testCases = {
        "'c'",      // char literal
        "'cs'",      // char literal
        "42",       // int literal
        "-42",       // int literal
        "-2",       // int literal
        "2",       // int literal
        "0",       // int literal
        "234",       // int literal
        "234234234234234",       // int literal
        "-234234234234234",       // int literal
        "4.2f",     // float literal
        /*"4.2",      // double literal
        "-inf",     // double negative infinity
        "+inf",     // double positive infinity
        "nan",      // double NaN
        "-inff",    // float negative infinity
        "+inff",    // float positive infinity
        "nanf"      // float NaN */
    };

    // Run the converter program with each test case
    for (const auto& testCase : testCases) {
        testConverter(testCase);
    }

    return 0;
}