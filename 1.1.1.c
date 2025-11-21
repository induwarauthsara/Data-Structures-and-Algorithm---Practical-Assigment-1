#include <stdio.h>

int main() {
    // Input numbers to array
    // 1. Ask nuber count.
    printf("How many numbers going to input? : ");
    int count;
    scanf("%d", &count);

    // 2. Enter numbers to array
    int arr[count];
    int sum = 0;
    for(int i=0; i<count; i++){
        printf("Eneter number %d : ", i+1);
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    int av = sum / count;

    printf("---------------------\n");
    printf(" Sum : %d \n Mean : %d", sum, av);

    return 0;
}