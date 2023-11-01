#include <iostream>
using namespace std;

class Average {
private:
    int sum;
    int count;

public:
    Average() : sum(0), count(0) {}

    Average& operator+=(int num) {
        sum += num;
        count++;
        return *this;
    }
     double operator()() const {
        if (count == 0) {
            return 0;
        }
        return (double)sum / count;
    }
};

int main() {
    Average avg;
    int n;
    cout << "Enter the count of numbers: ";
    cin >> n;

    cout << "Enter " << n << " numbers:" << endl;
    for (int i = 0; i < n; ++i) {
        int num;
        cin >> num;
        avg += num;
    }
    cout << "The average is: " << avg() << endl;

    return 0;
}
