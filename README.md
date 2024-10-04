# Algorithms
#**algorithms** : There are several functions for sorting, such as Reverse, Insertion, Merge, and Partition.

#**Bubble sort** : Swap adjacent elements from the last to the first unsorted element until the entire array is sorted. (Array="A", length = "l")  
time complexity : $O(n^2)$  

#**Insertion sort** : Repeatedly taking the next unsorted element and inserting it into its correct position, the array becomes sorted. (Array="A", length = "N")  
time complexity : $O(n^2)$  

#**Merge sort** : Iteratively divides the array into two halves, recursively sorts each half, and then merges the sorted halves until the entire array is sorted. (Array = "A", length = "N")  
time complexity : $O(n\log n)$  

#**Quick sort** : I use two methods to implement Quick Sort. The first method is less efficient because it combines both for and while loops. Select the first element of array "A" as the base value, then iteratively partition the array so that elements smaller than the base value are placed before it, and elements larger than the base value are placed after it. (Array = "A", length = "N")  
time complexity : $O(n\ log\ n)$

#**Counting sort** : Create an array "B" to count occurrences of each element, then iteratively fill the original array with elements based on their counts to sort the array. (Array="A", length="N",  largest value of element = "max")  
time complexity : $O(n+k)$ 

#**Shell sort** : Recursively comparing and swapping elements spaced apart by "space", which is halved in each recursive call until the gap becomes 1. (Array = "A", length = "N") 
time complexity : $O(n\ log\ n)$  
