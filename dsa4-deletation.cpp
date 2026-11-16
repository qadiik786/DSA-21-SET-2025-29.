#include <iostream>
using namespace std;

int main() {
    int n, pos;
    cout << "Enter the size of the array: ";
    cin >> n;
    
    int arr[100];
    cout << "Enter elements:\n";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    cout << "Enter the position (0-indexed) of the element to delete: ";
    cin >> pos;

    if(pos < 0 || pos >= n) {
        cout << "Invalid position!" << endl;
    } else {
        // Elements ko left shift karein
        for(int i = pos; i < n - 1; i++) {
            arr[i] = arr[i + 1];
        }
        n--;

        cout << "Updated array:\n";
        for(int i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
    
    return 0;
}