#include <iostream>
using namespace std;

int main() {
    int n, target, found = -1;
    cout << "Enter the size of the array: ";
    cin >> n;
    
    int arr[100];
    cout << "Enter elements:\n";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    cout << "Enter the element to search: ";
    cin >> target;

    for(int i = 0; i < n; i++) {
        if(arr[i] == target) {
            found = i;
            break;
        }
    }

    if(found != -1) {
        cout << "Element found at position (index): " << found << endl;
    } else {
        cout << "Element not found in the array." << endl;
    }
    
    return 0;
}