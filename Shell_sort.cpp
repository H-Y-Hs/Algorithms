// //Shell sort (gap/space => half)
// //Recursively comparing and swapping elements spaced apart by "space", which is halved in each recursive call until the gap becomes 1.
// //Array="A", length="N"
// #include <iostream>
// #include <iomanip>
// #include <cmath>
// using namespace std;
// void shellsort(int[], int, int);
// int main()
// {
//     int N=0, space=0;
//     cin >> N;
//     int *A = new int[N];
//     for(int i=0; i<N; i++)
//     {
//         cin >> A[i];
//     }
//     if(N%2!=0)
//         space =(N+1)/2;
//     else
//         space = N/2; 
//     shellsort(A, N, space);
//     for(int i=0; i<N; i++)
//     {
//         cout << A[i] << " ";
//     }
// }
// void shellsort(int A[], int N, int space)
// {
//     for(int i=0; i<N-space; i++)
//     {
//         if(A[i]>A[i+space])
//             swap(A[i], A[i+space]);
//     }
//     if (space>1)
//     {
//         if(space%2==0)
//             shellsort(A, N, space/2);
//         else if(space%2!=0)
//             shellsort(A, N, (space+1)/2);
//     }
// }

//Shell sort
//Recursively comparing and swapping elements spaced apart by "space", which is halved in each recursive call until the gap becomes 1.
//Array="A", length="N"
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
void shellsort(int[], int, int);
int main()
{
    int N=0, space=0;
    cin >> N;
    int *A = new int[N];
    for(int i=0; i<N; i++)
    {
        cin >> A[i];
    }
    if(N%2!=0)
        space =(N+1)/2;
    else
        space = N/2; 
    shellsort(A, N, space);
    for(int i=0; i<N; i++)
    {
        cout << A[i] << " ";
    }
}
void shellsort(int A[], int N, int space)
{
    for(int i=0; i<N-space; i++)
    {
        if(A[i]>A[i+space])
            swap(A[i], A[i+space]);
    }
    if (space>1)
    {
        if(space%2==0)
            shellsort(A, N, space/2);
        else if(space%2!=0)
            shellsort(A, N, (space+1)/2);
    }
}