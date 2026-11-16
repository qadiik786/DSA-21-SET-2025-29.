#include <iostream>
using namespace std;

int main() {
    int n, target;
    cout << "Enter the size of the sorted array: ";
    cin >> n;
    
    int arr[100];
    cout << "Enter sorted elements:\n";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    cout << "Enter the element to search: ";
    cin >> target;

    int low = 0, high = n - 1, found = -1;
    while(low <= high) {
        int mid = low + (high - low) / 2;
        if(arr[mid] == target) {
            found = mid;
            break;
        } else if(arr[mid] < target) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    if(found != -1) {
        cout << "Element found at position (index): " << found << endl;
    } else {
        cout << "Element not found in the array." << endl;
    }
    
    return 0;
}