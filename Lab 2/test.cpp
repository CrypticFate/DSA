#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

// Function to count inversions in a string
int countInversions(const std::string &s) {
    int count = 0;
    int n = s.length();
    
    for (int i = 0; i < n; ++i) {
        for (int j = i + 1; j < n; ++j) {
            if (s[i] > s[j]) {
                count++;
            }
        }
    }
    
    return count;
}

int main() {
    int length, n;
    std::cin >> length >> n;
    
    std::vector<std::string> sequences(n);
    std::vector<int> inversions(n);
    
    for (int i = 0; i < n; ++i) {
        std::cin >> sequences[i];
        inversions[i] = countInversions(sequences[i]);
    }
    
    // Sort the sequences and inversions in parallel
    for (int i = 0; i < n - 1; ++i) {
        for (int j = i + 1; j < n; ++j) {
            if (inversions[i] > inversions[j]) {
                std::swap(inversions[i], inversions[j]);
                std::swap(sequences[i], sequences[j]);
            }
        }
    }
    
    // Print the sorted sequences with their inversions
    for (int i = 0; i < n; ++i) {
        std::cout << sequences[i] << " " << inversions[i] << "\n";
    }
    
    return 0;
}
