#include <iostream>
using namespace std;
int main(){
    int n, i, j, key;
    cout << "Enter the size of the array:\n";
    cin >> n;
    int a[n];
    cout << "Enter the array elements::\n";
    for (i = 0; i < n; i++){
        cin >> a[i];
    }
    for (i = 1; i < n; ++i){
        key = a[i];
        j = i - 1;
        while (j >= 0 && a[j] > key){
            a[j + 1] = a[j];
            j = j - 1;
        }
        a[j + 1] = key;
    }
    cout << "Sorted Array Elements are:";
    for (i = 0; i < n; i++){
        cout << "\t" << a[i];
    }
    return 0;
}
