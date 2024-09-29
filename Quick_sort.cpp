// //Quick sort I
// //Using for and while loops make the code a bit more complex, so Quick Sort II better.
// //Array = "A", length = "N"
// #include <iostream>
// #include <iomanip>
// using namespace std;
// void quicksort(int[], int, int);
// void swap(int *a, int *b);
// int main()
// {
//     int N=0, A[50]={0};
//     cin >> N;
//     for(int i=0; i<N; i++)
//     {
//         cin >> A[i];
//     }
//     quicksort(A,0,N-1);
//     for(int i=0; i<N; i++)
//     {
//         cout << A[i] << " ";
//     }
// }

// void quicksort(int A[], int l, int r)
// {
//     int start = l, end = r;
//     while(start!=end)
//     {
//         if (l>=r)
//         return;
//         for(int i=r; i>=l; i--)
//         {
//             if(start==end)
//             {
//                 swap(A[l],A[start]);
//                 break;
//             }
//             else if(A[i]>=A[l])
//             end--;
//             else if(A[i]<A[l])
//             break;
//         }
//         for(int j=l; j<=r; j++)
//         {
//             if(start==end)
//             {
//                 swap(A[l],A[start]);
//                 break;
//             }
//             else if(A[j]<=A[l])
//             start++;
//             else if(A[j]>A[l])
//             break;
//         }
//         if(start!=end)
//         {
//             swap(A[start], A[end]);
//         }
//     }
//     quicksort(A,l,start-1);
//     quicksort(A,start+1,r);
// }
// void swap(int *a, int *b)
// {
//     int temp = *a;
//     *a = *b;
//     *b = temp;
// }

//Quick sort II
//Select the first element of array "A" as the base value, then iteratively partition the array so that elements smaller than the base value are placed before it, and elements larger than the base value are placed after it.
//Array = "A", length = "N"
#include <iostream>
#include <iomanip>
using namespace std;
void quicksort(int[], int, int);
void swap(int *a, int *b);
int main()
{
    int N=0, A[50]={0};
    cin >> N;
    for(int i=0; i<N; i++)
    {
        cin >> A[i];
    }
    quicksort(A,0,N-1);
    for(int i=0; i<N; i++)
    {
        cout << A[i] << " ";
    }
}
void quicksort(int A[], int l, int r)
{
    if(l>=r)
    return;
    int start=l, end=r;
    int base=A[l];
    while(A[end]>=base && start < end)
    {
        end--;
    }
    while(A[start]<base && start < end)
    {
        start++;
    }
    if(start!=end)
    {
        swap(A[start], A[end]);
        quicksort(A,l,end);
    }
    else if(start==end)
        swap(A[l], A[start]);
    quicksort(A,l,start-1);
    quicksort(A,start+1,r);
}
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}