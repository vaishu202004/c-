#include <iostream>
#include <utility>

std::pair<int, int>& findMaxMin(int arr[], int size) {
    std::pair<int, int> result = std::make_pair(arr[0], arr[0]);
    for (int i = 1; i < size; ++i) {
        if (arr[i] > result.first) {
            result.first = arr[i];
        }
        if (arr[i] < result.second) {
            result.second = arr[i];
        }
    }
    static std::pair<int, int> res;
    res = result;
    return res;
}

int main() {
    int arr[] = {5, 3, 9, 2, 7};
    int size = sizeof(arr) / sizeof(arr[0]);

    std::pair<int, int>& result = findMaxMin(arr, size);
    std::cout << "Max: " << result.first << ", Min: " << result.second << std::endl;

    return 0;
}

