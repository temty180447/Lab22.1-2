#include <iostream>
#include <sstream>
#include <vector>

double calculateAverage(const std::vector<double>& numbers) {
    double total = 0;
    for (double num : numbers) {
        total += num;
    }
    return total / numbers.size();
}

int main(int argc, char* argv[]) {
    if (argc < 2) {
        std::cout << "Please input numbers to find average." << std::endl;
        return 0;
    }

    std::vector<double> numbers;
    for (int i = 1; i < argc; ++i) {
        std::istringstream iss(argv[i]);
        double num;
        if (iss >> num) {
            numbers.push_back(num);
        } else {
            std::cout << "Invalid input. Please enter valid numbers." << std::endl;
            return 1;
        }
    }

    double average = calculateAverage(numbers);
    std::cout << "---------------------------------" << std::endl;
    std::cout << "Average of " << numbers.size() << " numbers = " << average << std::endl;
    std::cout << "---------------------------------" << std::endl;

    return 0;
}