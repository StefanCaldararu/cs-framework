#include <iostream>
#include <fstream>
#include <vector>
#include <thread>
#include <chrono>
#include <eigen3/Eigen/Dense>

int main() {
    // Create an array of length 10,000 filled with zeros
    std::vector<int> data(10000, 0);

    // Sleep for 3 seconds
    std::this_thread::sleep_for(std::chrono::seconds(3));

    // Write "0,0,0" to a CSV file
    std::ofstream csvFile("submission.csv");
    if (csvFile.is_open()) {
        for (int i = 0; i < 3; ++i) {
            csvFile << "0";
            if (i < 2) {
                csvFile << ",";
            }
        }
        csvFile << std::endl;
        csvFile.close();
    } else {
        std::cerr << "Failed to open the CSV file." << std::endl;
        return 1;
    }

    return 0;
}