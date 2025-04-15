#include <iostream>
using namespace std;

// create main array & temporary array
int arr[20], B[20];
// n is array input size
int n;

#include<iostream>
using namespace std;

// Create main and temporary array
int arr[20], B[20];
int n;

void input() {
    while (true) 
    {
        cout << "masukkan panjang element array : ";
        cin >> n;

        if (n <= 20) 
        {
            break;
        }
        else 
        {
            cout << "\nMaksimal panjang array adalah 20";
        }
    }
    cout << "\n--------------------------" << endl;
    cout << "\nInputkan isi element array" << endl;
    cout << "\n--------------------------" << endl;

    for (int i = 0; i < n; i++) 
    {
        cout << "array index ke- " << i << " : ";
        cin >> arr[i];
    }  
}

// create function mergeSort
void mergeSort(int low, int high)
{
    
}
