#include <iostream>
using namespace std;

int main() {
    int n, pos, elem;
    cout << "Enter the size of the array: ";
    cin >> n;
    
    int arr[100];
    cout << "Enter elements:\n";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    cout << "Enter the position (0-indexed) where you want to insert: ";
    cin >> pos;
    cout << "Enter the element to insert: ";
    cin >> elem;

    // Elements ko right shift karein
    for(int i = n; i > pos; i--) {
        arr[i] = arr[i - 1];
    }
    arr[pos] = elem;
    n++;

    cout << "Updated array:\n";
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    
    return 0;
}