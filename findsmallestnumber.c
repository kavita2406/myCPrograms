
#include <stdio.h>
#include <stdbool.h>

int smallestpositivenumber(int arr[], int mp_size, int arr_size){
    int i = 0;
    int array[mp_size+1];
    
    for (i=0;i<=mp_size;i++){
        array[i] = false;
    }
    
    for (i=0;i<arr_size;i++){
        if(arr[i] > 0){
            array[arr[i]] = true;
        }
    }
    
    for (i = 1; i<=mp_size; i++){
        if(array[i] == false){
            return i;
        }
    }
    
    return mp_size+1;
    
}

int main()
{
    int arr[] = { 7, 2, 3, 1, 8, 9, 6, 5, 4, 0, -11};
    int size = sizeof(arr)/sizeof(arr[0]);
    int largest_number =arr[0];
    for (int i = 0; i<size;i++){
        if (largest_number < arr[i])
            largest_number = arr[i];
    }
    
    int number = smallestpositivenumber(arr, largest_number, size);
    
    printf("\nSmallest positive number not in the array is %d\n", number);

    return 0;
}
