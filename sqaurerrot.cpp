#include <iostream>
#include <algorithm>
using namespace std;

void square(int arr[], int n) {
    for(int i = 0; i < n; i++) {
        arr[i] = arr[i] * arr[i];
    }

    sort(arr, arr + n);
}

int main() {
    int arr[5] = {1, 2, 3, 4, 5};

    square(arr, 5);

    for(int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}