//Selection sort
//Swap the minimum element from the unsorted portion with the first element of the unsorted part.
//Array="A", length=N
#include <iostream>
#include <iomanip>
using namespace std;
void swap(int*, int*);
int minimum(int[], int, int);
int *selection_sort(int[], int);
int main()
{
    int N=0, A[50]={0};
    cin >> N;
    for(int i=0; i<N; i++)
    {
        cin >> A[i];
    }
    int *Ans = selection_sort(A,N);
    for(int i=0; i<N; i++)
    {
        cout << Ans[i] << " ";
    }
}
int *selection_sort(int A[], int N)
{
    int count=0;
    for(int i=0; i<N; i++)
    {
        int min=minimum(A,i,N);
        swap(A[i],A[min]);
    }
    return A;
}

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
int minimum(int B[], int l, int N)
{
    int min=B[l];
    int min_num=l;
    for(int i=l; i<N; i++)
    {
        if(B[i]<min)
        {
            min_num=i;
            min = B[i];
        }        
    }
    return min_num;
}