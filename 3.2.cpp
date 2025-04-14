#include <iostream>
#include <vector>

using namespace std;

// Recursive function to calculate sum
int recursiveSum(const vector<int>& arr, int n) {
    if (n == 0)
        return 0;
    return arr[n - 1] + recursiveSum(arr, n - 1);
}

// Iterative function to calculate sum
int iterativeSum(const vector<int>& arr) {
    int sum = 0;
    for (int num : arr)
        sum += num;
    return sum;
}

int main() {
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;

    vector<int> arr(size);
    cout << "Enter " << size << " elements:" << endl;
    for (int i = 0; i < size; ++i)
        cin >> arr[i];

    int sumRecursive = recursiveSum(arr, arr.size());
    int sumIterative = iterativeSum(arr);

    // Output Results
    cout << "\nResults:\n";
    cout << "Recursive Sum: " << sumRecursive << "\n";
    cout << "Iterative Sum: " << sumIterative << "\n";
cout << endl << "Vishwa padaliya" << " " << "ID No: 24CE068" << endl;
    return 0;
}
