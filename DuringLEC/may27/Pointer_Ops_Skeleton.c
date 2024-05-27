#include <stdio.h>

void foo(int op1, int arr[], int* op2){
    op1++;
    arr[3]++;
    (*op2)++;
}

int main(void)
{
    int n = 3;
    int o = 4;
    int p = 5;
    int array[5] = {10, 20, 30, 40, 50};
    int* ptr_n;
    int *ptr_o, *ptr_p;

    // 1. Validate the reference operator (&)
    printf("Value n (%d) is stored at Address: 0x%p\n", n, &n);
    printf("Value n (%d) is stored at Address: 0x%p\n", o, &o);
    printf("Value n (%d) is stored at Address: 0x%p\n", p, &p);
    printf("Value at i=4 (%d) is stored at Address: 0x%p\n", array[4], &array[4]);
    printf("Value at i=3 (%d) is stored at Address: 0x%p\n", array[3], &array[3]);
    printf("Value at i=2 (%d) is stored at Address: 0x%p\n", array[2], &array[2]);
    printf("Value at i=1 (%d) is stored at Address: 0x%p\n", array[1], &array[1]);
    printf("Value at i=0 (%d) is stored at Address: 0x%p\n", array[0], &array[0]);

    // 2. Validate the dereference operator (*)
    ptr_n = &n;
    ptr_o = &o;
    ptr_p = &p;
    printf("\nValue at address pointed to by ptr_n (0x%p) is: %d\n", ptr_n, *ptr_n);
    printf("\nValue at address pointed to by ptr_n (0x%p) is: %d\n", ptr_o, *ptr_o);
    printf("\nValue at address pointed to by ptr_n (0x%p) is: %d\n", ptr_p, *ptr_p);

    // 3. Validate Array name as address
    printf("Array is stored at address: 0x%p\n", array);


    // 4. Check data size through addresses
    //done above

    // 5. Pass a pointer into a function and see what happens
    printf("n = %d; Array[3] = %d; o = %d\n", n, array[3], o);
    foo(n, array, &o);
    printf("n = %d; Array[3] = %d; o = %d\n", n, array[3], o);
    printf("\n");


    return 0;
}