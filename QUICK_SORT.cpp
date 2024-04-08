// NAME : YASH DARGONDA PATIL
// CLASS : SY CSE(AI)
//PRN : 22UAI100
#include <iostream>
using namespace std;

const int MAX_SIZE = 100; 
int a[MAX_SIZE];
int Partition(int a[], int m, int p) 
{
    int v = a[m];
    int i = m + 1;
    int j = p;

    while (true) 
	{
        while (i <= j && a[i] <= v) 
		{
            i++;
        }
        while (a[j] > v) 
		{ 
            j--;
        }
        if (i >= j) 
		{
            break;
        }
        swap(a[i], a[j]);
        i++;
        j--;
    }
    swap(a[m], a[j]);

    return j;
}

void QuickSort(int p, int q) {
    if (p < q) {
        int j = Partition(a, p, q);
        QuickSort(p, j - 1);
        QuickSort(j + 1, q);
    }
}

int main() 
{
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++)
	{
        cin >> a[i];
    }
    
    QuickSort(0, n - 1);
    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout <<endl;

    return 0;
}

