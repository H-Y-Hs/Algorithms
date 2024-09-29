//Merge sort
//Iteratively divides the array into two halves, recursively sorts each half, and then merges the sorted halves until the entire array is sorted.
//Array = "A", length = "N"
#include <iostream>
#include <iomanip>
using namespace std;
int *mergesort(int[], int, int);
int *merge(int[], int, int, int);
int main()
{
    int A[50]={0}, N=0;
    cin >> N;
    for(int i=0; i<N; i++)
    {
        cin >> A[i];
    }
    mergesort(A,0,N);
    for(int i=0; i<N; i++)
    {
        cout << A[i] << " ";
    }
}

int *mergesort(int A[], int l, int r)
{
    if(l+1<r)
    {
        int m = (l+r)/2;
        mergesort(A,l,m);
        mergesort(A,m,r);
        merge(A,l,m,r);
    }
    return A;
}

int *merge(int A[], int l, int m, int r)
{
    int a = 0, b = 0;
    int size1=m-l, size2=r-m;
    int temp1[size1] = {0}, temp2[size2] = {0};
    for(int i=l; i<m; i++)
    {
        temp1[i-l] = A[i];
    }
    for(int i=m; i<r; i++)
    {
        temp2[i-m] = A[i];
    }
    for(int i=l; i<r; i++)
    {
        if(temp1[a]<temp2[b] && a!=size1)
        {
            A[i] = temp1[a];
            a++;
        }
        else if(temp2[b]<temp1[a] && b!=size2)
        {
            A[i] = temp2[b];
            b++;
        }
        else if(a==m-l && b!=size2)
        {
            A[i] = temp2[b];
            b++;
        }            
        else if(b==r-m && a!=size1)
        {
            A[i] = temp1[a];
            a++;
        }
        else
            break;
    }
    return A;
}