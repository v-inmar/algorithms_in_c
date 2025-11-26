# Bubble Sort 
*Note: Definition, Explanation and Pseudo Code are lifted from ChatGPT*

A simple sorting algorithm that repeatedly steps through the list, compares adjacent elements, and swaps them if they are in the wrong order. The algorithm gets its name because larger elements "bubble" to the top of the list while smaller elements "sink" to the bottom.


## Explanation
**1.** The algorithm starts at the beginning of the array.
**2.** It compares the first two elements. If the first is greater than the second, they are swapped.
**3.** Then it moves to the next pair of adjacent elements, compares them, and swaps if necessary.
**4.** This process repeats until the end of the array.
**5.** After one full pass, the largest element is guaranteed to be in the correct position.
**6.** The algorithm continues with fewer elements each pass, as the largest elements are already sorted at the end of the array.
**7.** This process continues until no more swaps are needed, indicating the array is sorted.

## Pseudo Code
```
BubbleSort(arr)
    n = length of arr
    for i = 0 to n-1
        swapped = false
        for j = 0 to n-i-2
            if arr[j] > arr[j+1]     // Compare adjacent elements
                swap(arr[j], arr[j+1])  // Swap if they're in the wrong order
                swapped = true
        if not swapped   // If no swaps occurred, the array is sorted
            break
```

## How To Run
```
gcc -Wall -w main.c -o main

./main
```

## Result
```
Max Bytes: 28
Element Bytes: 4
Number of elements in the array: 7
[ 64 34 25 12 90 22 11 ]
[ 11 12 22 25 34 64 90 ]
```