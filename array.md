Array
===
###### a contiguous iof memory place where can store data.

Dimension of array
---
- 1D
  ```c
  int array[5];
  array[5] = {1,2,3,4,5};
  ```
  - visiual picture
- 2D
  ```c
  int array[3][3];
  array[5] = {{1,2,3},{4,5,6},{7,8,9}};
  ```
  - visiual picture
- 3D
  ```c
  int array[3][2][2];
  array[5] = {{{1,2},{3,4}},{{5,6},{7,8}},{{9,10},{11,12}}};
  ```
  - visiual picture
   
Array in C
---
#### Static array
> Fixed-length<br>can not change index number 
+ Declaration
  ```c
  int array[5];
  array[5] = {1,2,3,4,5};
  //char
  char array[5];
  array[5] = {'a','b','c','d','e'}
  //string
  char string array[5];
  array[5] = {"aaa","bbb"}
  ```
+ Initialization
+ Access
+ Resize
#### Dynamic Array
> length can be chang by using remalloc / need malloc at the first time
+ Declaration
  ```c
  int *array;
  int n = 10;
  array = (int *) malloc(n * sizeof(int));
  ```
+ Initialization
  ```c
  for(int i = 0; i < n; i++) {
    array[i] = i + 1;
  }
  ```
+ Access
  ```c
  for (int i = 0; i < n; i++) {
    printf("%d ", array[i]);//%d:十進位顯示
  }
  ```
+ Resize
  ```c
  n = n * 2;
  array = (int *) realloc(array, n * sizeof(int));
  for (int i = n/2; i < n; i++) {
    array[i] = i + 1; 
  }
  ```
Sort
---
+ Bubble sort
```C
#include <stdio.h>

void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) { 
        for (int j = 0; j < n - 1 - i; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j]; // 交換
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}
//每做一個for_j  最大值就會往右放
```
+ Selection Sort
```C
#include <stdio.h>

void selectionSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int min = i; // i 是最小值的index
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex]) {
                min = j; // 找到更小的就更新最小值位置
            }
        }
        // 交換 i 和 min
        int temp = arr[i];
        arr[i] = arr[min];
        arr[min] = temp;
    }
}
//選最小的更新
```

ADT
---
+ Creat(n)
  : creat a array in size n
+ Access(A,i)
  : Return element at array A[i]
+ Update(A,i,x)
  : make element in A[i] become x
+ Insert(A,i,x)
  : add a element x at array A[i]
+ Delete(A,i)
  : delete element at array A[i]
+ Traverse(A)
  : Visit the entire array A
+ Search(A,x)
  : find element x in array A
+ Resize(A,m)
  : make size of array A become m


Time complexity
---
|Operation|time complexity|
| :--: | :--: |
|Access|O(1)|
|Update|O(1)| 
|Insrte|O(n)|
|Delete|O(n)|
|Traverse|O(n)|
|Search|O(n)|
|Bobble sort|O(n^2)|
|Selction sort|O(n^2)|
