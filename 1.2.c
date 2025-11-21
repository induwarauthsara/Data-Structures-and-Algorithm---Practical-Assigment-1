#include <stdio.h>

int main() {
    // Input numbers to array
    // 1. Ask nuber count.
    printf("How many numbers going to input? : ");
    int count;
    scanf("%d", &count);

    // 2. Enter numbers to array
    int arr[count];
    for(int i=0; i<count; i++){
        printf("Eneter number %d : ", i+1);
        scanf("%d", &arr[i]);
    }

    // Check duplicate
    int is_duplicate_find = 0;
    for(int i=0; i<count; i++){
        for(int j=i+1; j<count;j++){
            if(arr[i]==arr[j]) is_duplicate_find = 1;
            break;
        }
    }

    printf("\n---------------------\n");
    is_duplicate_find ? printf("Array have duplicate numbers") : printf("Array don't have duplicate numbers");

    return 0;
}