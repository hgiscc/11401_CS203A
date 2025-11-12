#include <stdio.h>
#include <stdlib.h>

int main() {
    int *array;
    int n = 10;

    // malloc跟電腦要空間
    array = (int *) malloc(n * sizeof(int));

    // 如果沒要成功就回傳失敗並結束  
    if (array == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    // Print 
    printf("Initial memory address: %p\n", (void*)array);//%p是 輸出位置 ---------------(void*)是什麼? 
    printf("Initial memory end address  : %p\n", (void*)(array + n * sizeof(int) - 1));

    // Initialize elements
    for (int i = 0; i < n; i++) {
        array[i] = i + 1;
    }

    // Print elements
    printf("Initial array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", array[i]);// %d 是輸出10進位
    }
    printf("\n");
    
    // 更新大小
    n = n * 2;
    array = (int *) realloc(array, n * sizeof(int)); // realloc 幫已經有值的array重新要空間
    if (array == NULL) {
        printf("Reallocation failed\n");
        return 1;
    }

    // Print the new memory address
    printf("After realloc memory address: %p\n", (void*)array);
    printf("After realloc end address   : %p\n", (void*)(array + n * sizeof(n) - 1));

    // Initialize new elements
    for (int i = n/2; i < n; i++) {
        array[i] = i + 1;
    }

    // Print all elements
    printf("Resized array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    // 釋出空間很重要!!!
    free(array);
    return 0;
}
