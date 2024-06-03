# Week 5
1. 1D array
* how to define an array
    * type_t arr_name[const_n]
    * index starts with 0 to N-1
* how to initialise an array
`int arr[0] = {0}`
`int arr[5] = {1,2,3,4,5}`
`int arr[3] = {0,0,0,0}`
`char arr[6] = {'h', 'e', 'l', 'l', 'o', '\0'}`
* how to traverse the array or scan in the value into the array
```
for(int i = 0; i < size; i ++) {
    printf("%d\n", arr[i]);
}
```
* how to pass an int array into function
    * `void functionName(int *arr)`
    * `void functionName(int arr[])`
    * `functionName(arr)`
2. String
* difference between string and int array
    * last element in string is '\0'
    * each block is 1 byte(char)
* how to compare two strings
    * using strlen for length (in string.h)
    * strcmp for comparsion
3. 2D array
* how to traverse an 2D array