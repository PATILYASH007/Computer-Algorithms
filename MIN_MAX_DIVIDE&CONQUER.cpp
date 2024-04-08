// NAME : YASH DARGONDA PATIL
// CLASS : SY CSE(AI)
//PRN : 22UAI100
#include <iostream>
using namespace std;

int my_max(int a, int b) {
    return (a > b) ? a : b;
}

int my_min(int a, int b) {
    return (a < b) ? a : b;
}
void max_min(int numbers[], int x, int y, int &max_val, int &min_val) {
    if (y - x <= 1) {
        max_val = my_max(numbers[x], numbers[y]);
        min_val = my_min(numbers[x], numbers[y]);
    } else {
        int mid = (x + y) / 2;
        int max1, min1, max2, min2;
        max_min(numbers, x, mid, max1, min1);
        max_min(numbers, mid + 1, y, max2, min2);
        max_val = my_max(max1, max2);
        min_val = my_min(min1, min2);
    }
}
int main() {
    int size,max,min,i;
	cout<<"Enter the number of elements : ";
	cin>>size;
	int numbers[size];
	cout<<"Enter the elements : "<<endl;
	for(i=0;i<size;i++)
	{
		cin>>numbers[i];
	} 
    int max_val, min_val;
    max_min(numbers,0, size-1, max_val, min_val);
    cout << "Max: " << max_val << endl;
    cout << "Min: " << min_val << endl;
    return 0;
}
