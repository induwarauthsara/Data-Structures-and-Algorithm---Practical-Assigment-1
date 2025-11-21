#include <stdio.h>

int main() {

    int arr[] = {1,2,3,4,5};

    // find the size of array
    int arr_size = sizeof(arr) / sizeof(arr[0]);

    // Output Array
    printf("Array : ");
    for(int i=0; i<arr_size; i++){
        printf("%d, ",arr[i]);
    }

    int number;
    printf("\nEnter number to delete : ");
    scanf("%d",&number);

    //create new array
    int new_arr[arr_size-1];

    // Find the postition to delete number
    int pos=-1;
    for (int i=0; i<arr_size; i++){
        if (arr[i] != number){
            new_arr[i] = arr[i];
        }
        else{
            pos = i;
            break;
        }
    }

    // copy rest of array
   if (pos != -1)
   {
        for(int i=pos+1; i<arr_size; i++){
            new_arr[i-1] = arr[i];
        }
   }

    printf("---------------------\n");
    printf("New Array : ");

    // Array Travelse
    for(int i=0; i<arr_size-1; i++){
        printf("%d, ",new_arr[i]);
    }

    return 0;
}