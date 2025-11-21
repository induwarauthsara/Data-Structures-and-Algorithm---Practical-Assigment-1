#include <stdio.h>

int power(int base, int exponent){
    int result = base;
    for (int i=1; i<exponent; i++){
        result *= base; 
    }
    if(exponent == 0){
        result=1;
    }
    return result;
}

int main() {
    // Input numbers to array
    // 1. Ask nuber count.
    printf("How many numbers going to input? : ");
    int count;
    scanf("%d", &count);

    // 2. Enter numbers to array
    int arr[count];
    int number=0;
    for(int i=0; i<count; i++){
        printf("Eneter number %d : ", i+1);
        scanf("%d", &arr[i]);

        number += arr[i] * power(10,count-1-i);
    }

    printf("\n---------------------\n");
    printf("Number is : %d", number);

    return 0;
}