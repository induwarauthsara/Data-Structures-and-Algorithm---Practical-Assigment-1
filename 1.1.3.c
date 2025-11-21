#include <stdio.h>

int main() {
    // Input numbers to array
    // 1. Ask nuber count.
    printf("How many numbers going to input? : ");
    int count;
    scanf("%d", &count);

    // 2. Enter numbers to array
    int arr[count];
    int largest, second_largest;
    for(int i=0; i<count; i++){
        printf("Eneter number %d : ", i+1);
        scanf("%d", &arr[i]);

        if(i==0){
            largest = arr[i]; 
        }else{
            if(largest<arr[i] && largest != arr[i]){
                second_largest = largest;
                largest = arr[i];
            }
            else if(second_largest<arr[i] && largest != arr[i]){
                second_largest = arr[i];
            }
        }
    }

    printf("---------------------\n");
    printf("Second largest Number is : %d", second_largest);

    return 0;
}