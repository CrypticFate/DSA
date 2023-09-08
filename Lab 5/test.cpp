#include <iostream>
#include <vector>
#include <stack>

using namespace std;

int main() {
    vector<int> A = {1, 3, -1, -3, 5, 3, 6, 7};
    int k = 3;

    int n = A.size();
    vector<int> result(n - k + 1);

    stack<int> maxStack;

    // Process the first window and initialize the result array
    for (int i = 0; i < k; ++i) {
        while (!maxStack.empty() && A[i] >= A[maxStack.top()]) {
            maxStack.pop();
        }
        maxStack.push(i);
    }

    result[0] = A[maxStack.top()];

    // Slide the window and update the maximum as we go
    for (int i = k; i < n; ++i) {
        // Remove elements that are outside the current window
        while (!maxStack.empty() && maxStack.top() <= i - k) {
            maxStack.pop();
        }

        // Remove elements that are smaller than the current element
        while (!maxStack.empty() && A[i] >= A[maxStack.top()]) {
            maxStack.pop();
        }

        maxStack.push(i);
        result[i - k + 1] = A[maxStack.top()];
    }

    cout << "Maximum values in each contiguous subarray of size " << k << " are: ";
    for (int value : result) {
        cout << value << " ";
    }
    cout << endl;

    return 0;
}
