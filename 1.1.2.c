#include <stdio.h>

int main() {
    // Input numbers to array
    // 1. Ask nuber count.
    printf("How many numbers going to input? : ");
    int count;
    scanf("%d", &count);

    // 2. Enter numbers to array
    int arr[count];
    int smallest;
    for(int i=0; i<count; i++){
        printf("Eneter number %d : ", i+1);
        scanf("%d", &arr[i]);

        if(i==0){
            smallest = i; 
        }else{
            if(arr[i-1]>arr[i]){
                smallest = i; 
            }
        }

    }

    printf("---------------------\n");
    printf("Smallest Number possition is %d and value is : %d", smallest+1, arr[smallest]);

    return 0;
}