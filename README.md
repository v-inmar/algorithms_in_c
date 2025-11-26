# Linear Serach 

A very simple searching algorithm where the space gets traversed once and compared against the search argument. This is not the best searching algorithm, although no sorting is required.


## Explanation
**1.** The algorithm starts at the beginning of the array.
**2.** It checks the nth element of the array for comparison against the search parameter.
**3.** Moves to the next element if comparison turns out to be false. Returns the index if comparison is true.
**4.** This process gets repeated until it founds the value or it does not, which returns -1


## Pseudo Code
```
BubbleSort(arr, s)
    n = length of arr
    for i = 0 to n-1
        if arr[i] == s
            return i
    return -1
```

## How To Run
```
gcc -Wall -w main.c -o main

./main
```

## Result
```
Max Bytes: 40
Element Bytes: 4
Number of elements in the array: 10
The search space: [ 23 56 1 2 45 78 34 89 101 67 ]
Search value: 78
Index is 5
Search value: 500
Index is -1
```