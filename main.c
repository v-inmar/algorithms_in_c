#include <stdio.h> // directive for using printf operation


/**
 * @brief Performs a linear search on an array to find the index of a specified value.
 *
 * This function searches for the first occurrence of a specified value (`search_value`)
 * in an array of integers. It iterates through the array from the beginning to the end
 * and compares each element with the target value. If the value is found, the function 
 * returns the index of the first matching element. If the value is not found, it returns -1.
 * 
 * Linear search has a time complexity of O(n), where `n` is the number of elements in the array.
 * It is best suited for unsorted or small arrays.
 * 
 * @param arr_ptr A pointer to the first element of the integer array. This array will be searched.
 * 
 * @param arr_size The number of elements in the array. This is used to limit the search to the valid range.
 * 
 * @param search_value The value to search for in the array. The function will compare each array element to this value.
 * 
 * @return The index of the first occurrence of `search_value` in the array if found. 
 *         If the value is not found, the function returns -1.
 * 
 * @note This implementation assumes the array contains at least one element (i.e., `arr_size > 0`).
 */
int linearSearch(int *arr_ptr, int arr_size, int search_value)
{
    for (int i = 0; i < arr_size; i++)
    {
        if (*(arr_ptr+i) == search_value)
        {
            return i;
        }
    }
    return -1;
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
    int arr[] = {23, 56, 1, 2, 45, 78, 34, 89, 101, 67};

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

    // print array search space
    printf("The search space: ");
    print_array(arr_prt, arr_size);

    // declare search value
    int search_value = 78;
    // print search value
    printf("Search value: %d\n", search_value);

    // call search - found
    printf("Index is %d\n", linearSearch(arr_prt, arr_size, search_value)); // index 5

    // change search value to non-existent
    search_value = 500;
    // print search value
    printf("Search value: %d\n", search_value);

    // call search - not found
    printf("Index is %d\n", linearSearch(arr_prt, arr_size, search_value)); // returns -1

    return 0;
}