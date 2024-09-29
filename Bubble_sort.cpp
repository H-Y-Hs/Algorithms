//Bubble sort
//Swap adjacent elements from the last to the first unsorted element until the entire array is sorted.
//Array="A", length = "l"
#include <iostream>
#include <iomanip>
using namespace std;
void swap(int*, int*);
int *Bubble_sort(int[], int);
int main()
{
    int l, A[50] = {0};
    cin >> l;
    for(int i=0; i<l; i++)
    {
        cin >> A[i];
    }
    Bubble_sort(A, l);
    for(int i=0; i<l; i++)
    {
        cout << A[i] << " ";
    }
}
int *Bubble_sort(int A[], int l)
{
    for(int i=1; i<l; i++)
    {
        for(int j=l-1; j>=i; j--)
        {
            if(A[j-1]>A[j])
            swap(A[j-1], A[j]);
        }
    }
    return A;
}
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}