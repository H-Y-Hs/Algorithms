//Counting sort
//Create an array "B" to count occurrences of each element, then iteratively fill the original array with elements based on their counts to sort the array.
//Array="A", length="N",  largest value of element = "max"
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
void countsort(int[], int, int);
void swap(int*, int*);
int main()
{
    int N=0, max=0, A[50]={0};
    cin >> N >> max;
    for(int i=0; i<N; i++)
    {
        cin >> A[i];
    }
    countsort(A,N,max);
    for(int i=0; i<N; i++)
    {
        cout << A[i] << " ";
    }
}
void countsort(int A[], int N, int max)
{
    int B[max]={0}, count=0;
    for(int i=0; i<N; i++)
    {
        B[A[i]]++;
    }
    for(int i=0; i<N; i++)
    {
        while(B[count]==0)
        {
            count++;
        }
        A[i] = count;
        B[count]--;
    }
}
void swap(int* A, int* B)
{
    int temp = *A;
    *A = *B;
    *B = temp;
}