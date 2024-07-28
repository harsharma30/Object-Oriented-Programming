//You are given a sorted array arr[] =  {3, 4, 6, 7, 8, 9, 11, 15, 18} and a number entered by the user. Using binary search, you have to find if the number is present in the array
//The function should return the index position of the number if found, otherwise should print "Not found".
#include <iostream>
using namespace std;

int binarySearch(int arr[], int size, int target) {
    int left = 0;
    int right = size - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] == target) {
            return mid;
        }
        else if (arr[mid] < target) {
            left = mid + 1;
        }
        else {
            right = mid - 1;
        }
    }
    return -1;
}

int main() {
    int arr[] = {3, 4, 6, 7, 8, 9, 11, 15, 18};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target;

    cin >> target;

    int result = binarySearch(arr, size, target);

    if (result != -1) {
        cout << result << endl;
    } else {
        cout << "Not found" << endl;
    }

    return 0;
}
