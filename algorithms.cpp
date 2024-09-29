// //Reverse
// // Construct an array "A" of size "length", and reverse the elements between indices "l" and "r".
// #include <iostream>
// #include <iomanip>
// using namespace std;
// int *Reverse(int[] ,int , int);
// int main()
// {
//     int length=0, l=0, r=0;
//     int A[50];
//     cin >> length >> l >> r;
//     for(int i=0; i<length; i++)
//     {
//         cin >> A[i];
//     }
//     int *arr = Reverse(A, l, r);
//     for(int i=0; i<length; i++)
//     {
//         cout << arr[i];
//     }
// }
// int *Reverse(int A[] ,int l , int r)
// {
//     int temp=0;
//     int half_length= (r-l+1)/2;
//     for(int i=0; i<half_length; i++)
//     {
//         temp = A[l+i];
//         A[l+i] = A[r-i];
//         A[r-i] = temp;
//     }
//     return A;
// }

// //Insertion
// //Insert an element "i" into a sorted array "A" of size "l"
// #include <iostream>
// #include <iomanip>
// using namespace std;
// int *insertion(int[], int, int);
// int main()
// {
//     int l=0, i=0;
//     int A[50];
//     cin >> l >> i;
//     for(int j=0; j<l; j++)
//     {
//         cin >> A[j];
//     }
//     int *arr = insertion(A, i, l);
//     for(int j=0; j<=l; j++)
//     {
//         cout << arr[j] << " ";
//     }
// }
// int *insertion(int A[50], int i, int l)
// {
//     for(int j=l-1; j>=0; j--)
//     {
//         if(A[j]>i)
//         {
//             A[j+1]=A[j];
//             A[j]=i;
//         }
//         else
//         {
//             break;
//         }
//     }
//     return A;
// }

// //Merge
// //Merge two sorted arrays, 'A' of size 'a' and 'B' of size 'b', both arranged in ascending order, to create a merged array of size 'a + b' that is also sorted in ascending order.
// #include <iostream>
// #include <iomanip>
// using namespace std;
// int *merge(int[], int , int[], int, int[]);
// int main()
// {
//     int a=0, b=0;
//     int A[50]={0}, B[50]={0}, C[100]={0};
//     cin >> a >> b;
//     for(int i=0; i<a; i++)
//     {
//         cin >> A[i];
//     }
//     for(int i=0; i<b; i++)
//     {
//         cin >> B[i];
//     }
//     int *arr = merge(A, a, B, b, C);
//     for(int i=0; i<a+b; i++)
//     {
//         cout << arr[i] << " ";
//     }
// }
// int *merge(int A[], int a, int B[], int b, int array[])
// {
//     int countA=0, countB=0;
//     for(int i=0; i<a+b; i++)
//     {
//         if(A[countA]>=B[countB] && countB != b)
//         {
//             array[i]=B[countB];
//             countB++;
//         }
//         else if(A[countA]<B[countB] && countA != a)
//         {
//             array[i]=A[countA];
//             countA++;
//         }
//         else if (countB == b)
//         {
//             array[i]=A[countA];
//             countA++;
//         }
//         else if (countA == a)
//         {
//             array[i]=B[countB];
//             countB++;
//         }
//     }
//     return array;
// }

// //Partition
// //Part the Array "A" with size "a" into two parts, with base value "A[a-1]".
// #include <iostream>
// #include <iomanip>
// using namespace std;
// int *partition(int[], int);
// void swap(int*, int*);
// int main()
// {
//     int a=0;
//     int A[50]={0};
//     cin >> a;
//     for(int i=0; i<a; i++)
//     {
//         cin >> A[i];
//     }
//     int *arr = partition(A, a);
//     for(int i=0; i<a; i++)
//     {
//         cout << arr[i] << " ";
//     }
// }
// int *partition(int A[], int a)
// {
//     int count=0, base=A[a-1];
//     for(int i=0; i<a-1; i++)
//     {
//         if(A[i]<base)
//         {
//             swap(A[i], A[count]);
//             count++;
//         }
//     }
//     swap(A[count],A[a-1]);
//     return A;
// }
// void swap(int *a, int *b)
// {
//     int temp = *a;
//     *a = *b;
//     *b = temp;
// }