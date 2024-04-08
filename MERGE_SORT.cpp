//PRN:22UAI100
/*In This programe we are Implementing Merge Sort algorithm using Divide & Conquer method */
#include <iostream>
using namespace std;

const int MAX_SIZE = 100; 
int a[MAX_SIZE], b[MAX_SIZE];

void Merge(int low, int high, int mid) {
    int h, i, j, k;
    h = low;
    i = low;
    j = mid + 1;
// Merging two sorted arrays into one
    while (h <= mid && j <= high) {
        if (a[h] <= a[j]) {
            b[i] = a[h];
            h++;
        } else {
            b[i] = a[j];
            j++;
        }
        i++;
    }
    if (h > mid) 
	{
        for (k = j; k <= high; k++) 
		{
            b[i] = a[k];
            i++;
        }
    }
    else 
	{
        for (k = h; k <= mid; k++) 
		{
            b[i] = a[k];
            i++;
        }
    }
    for (k = low; k <= high; k++)
	{
        a[k] = b[k];
    }
    
}
//sorting the two elements in the array
void MergeSort(int low, int high) {
    if (low < high) {
        int mid = (low + high) / 2;
        MergeSort(low, mid);
        MergeSort(mid + 1, high);
        Merge(low, high, mid);
    }
}

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    MergeSort(0, n - 1);

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;

    return 0;
}

