#include <iostream>

template <typename T>
T average(T arr[], int size) {
    T sum = 0;
    for (int i = 0; i < size; ++i) {
        sum += arr[i];
    }
    return sum / size;
}

int main() {
    int intArr[] = {1, 2, 3, 4, 5};
    double doubleArr[] = {1.1, 2.2, 3.3, 4.4, 5.5};

    std::cout << "Average of intArr: " << average(intArr, 5) << std::endl;
    std::cout << "Average of doubleArr: " << average(doubleArr, 5) << std::endl;

    return 0;
}

