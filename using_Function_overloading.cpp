#include <iostream>
using namespace std;

double average(double num[], int n)
{
    double sum = 0;
    for (int i = 0; i < n; i++) {
        sum += num[i];
    }
    return sum / n;
}

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    if (n <= 0) {
        cout << "Please enter a valid number of elements." << endl;
        return 0;
    }
    double num[n];

    cout << "Enter " << n << " numbers: ";
    for (int i = 0; i < n; i++) {
        cin >> num[i];
    }
    cout << "Average of the numbers: " << average(num, n) << endl;
    return 0;
}
