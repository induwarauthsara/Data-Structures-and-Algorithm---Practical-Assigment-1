#include <stdio.h>

int main() {

    int arr[] = {1,2,4,5,6,7};

    int number;
    printf("Enter number : ");
    scanf("%d",&number);

    // find the size of array
    int arr_size = sizeof(arr) / sizeof(arr[0]);

    //create new array
    int new_arr[arr_size+1];

    // Find the best postition to enter number
    // number added position 
    int pos=-1;
    for (int i=0; i<arr_size; i++){
        if (arr[i]<number){
            new_arr[i] =arr[i];
        }
        else{
            pos = i;
            new_arr[pos] = number;
            break;
        }
    }

    // copy rest of array
   if (pos != -1)
   {
        for(int i=pos+1; i<arr_size+1; i++){
            new_arr[i] = arr[i-1];
        }
   }else{
        new_arr[arr_size] = number;
   }

    printf("---------------------\n");
    printf("New Array : ");

    // Array Travelse
    for(int i=0; i<arr_size+1; i++){
        printf("%d, ",new_arr[i]);
    }

    return 0;
}