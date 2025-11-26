#include <stdio.h>

/**
 * @brief Sorts an array of integers using the bubble sort algorithm.
 *
 * This function sorts an array of integers in ascending order using the bubble sort
 * algorithm. The algorithm repeatedly steps through the list, compares adjacent elements,
 * and swaps them if they are in the wrong order. The process is repeated until no swaps
 * are needed, indicating that the array is sorted.
 * 
 * The algorithm improves slightly by reducing the range of elements to compare in each
 * pass, as the largest elements "bubble up" to the end of the array.
 * 
 * @param arr_ptr A pointer to the first element of the integer array. The array will
 *                be sorted in place using this pointer.
 * 
 * @param arr_size The number of elements in the array. This defines the size of the array
 *                 and dictates the number of passes the algorithm makes.
 * 
 * @return This function does not return a value. The array is sorted in place.
 * 
 * @note The bubble sort algorithm has a time complexity of O(n²) in the worst and average cases.
 *       It is not efficient for large datasets.
 */
void bubbleSort(int *arr_ptr, int arr_size)
{
    int swapped; // represent true (1) or false (0)

    for (int i = 0;  i< arr_size-1; i++)
    {
        swapped = 0;

        // arr_size-i-1: the range of j shrinks because the largest elements bubble up to the end of the array, 
        // so there’s less work to do for subsequent passes.
        for (int j = 0; j < arr_size-i-1; j++)
        {
            if(*(arr_ptr+j) > *(arr_ptr+j+1))
            {
                // use of temp variable to perform swapping
                int temp = *(arr_ptr+j);
                *(arr_ptr+j) = *(arr_ptr+j+1);
                *(arr_ptr+j+1) = temp;
                swapped = 1;
            }
        }

        if (swapped == 0) {
            break; // array is sorted already, can stop early
        }
    }
}

/**
 * @brief Prints the elements of an integer array.
 * 
 * This function iterates over the elements of an integer array, starting 
 * from the memory location pointed to by `arr_ptr`, and prints each element 
 * to the standard output. The elements are displayed in a space-separated 
 * list enclosed in square brackets.
 *
 * @param arr_ptr A pointer to the first element of the integer array.
 *                The function will access the array using this pointer.
 *
 * @param arr_size The number of elements in the array. This determines 
 *                 how many values will be printed.
 *                 
 * @return This function does not return any value. It simply prints the 
 *         elements of the array to the console.
 */
void print_array(int *arr_ptr, int arr_size)
{
    printf("[ ");
    for(int i = 0; i < arr_size; i++)
    {
        printf("%d ", *(arr_ptr + i)); // dereference pointer to print value
    }
    printf("]\n");
}


int main()
{
    // decalre and initialize the array; 10 elements
    // int arr[] = {23, 56, 1, 2, 45, 78, 34, 89, 101, 67};
    int arr[] = {64, 34, 25, 12,90, 22, 11};

    // get the total number of bytes used by entire array
    int max_bytes = sizeof(arr);
    printf("Max Bytes: %d\n", max_bytes);

    // get number of bytes of 1 element in array
    int element_bytes = sizeof(arr[0]);
    printf("Element Bytes: %d\n", element_bytes);

    // get the size of the array
    int arr_size = max_bytes / element_bytes;
    printf("Number of elements in the array: %d\n", arr_size);

    int *arr_prt = arr; // get pointer to the array

    // print array before sorting
    print_array(arr_prt, arr_size);

    // sort call
    bubbleSort(arr_prt, arr_size);

    // print array after sorting
    print_array(arr_prt, arr_size);


    return 0;
}