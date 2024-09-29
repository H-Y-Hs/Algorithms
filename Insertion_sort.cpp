//Insertion sort
//Repeatedly taking the next unsorted element and inserting it into its correct position, the array becomes sorted.
//Array="A", length = "N"
#include <iostream>
#include <iomanip>
using namespace std;
int *insertion_sort(int[], int);
void swap(int*, int*);
int main()
{
    int N=0, A[50]={0};
    cin >> N;
    for(int i=0; i<N; i++)
    {
        cin >> A[i];
    }
    insertion_sort(A, N);
    for(int i=0; i<N; i++)
    {
        cout << A[i] << " ";
    }
}
int *insertion_sort(int A[], int N)
{
    int temp=0;
    for(int i=1; i<N; i++)
    {
        temp=A[i];
        for(int j=i-1; j>=0; j--)
        {
            if(temp<A[j])
            {
                swap(A[j+1], A[j]);
                continue;
            }
            else
            break;
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
