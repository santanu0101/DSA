#include <stdio.h>


int partition(int a[], int start,int end){
    int pivot = a[end];
    int i = start - 1;

    for (int j = start; j <= end-1; j++){
        if (a[j] < pivot){
            i++;
            int t = a[i];
            a[i] = a[j];
            a[j] = t;
        }

    }
    int t  = a[i+1];
    a[i+1] = a[end];
    a[end] = t;
    return i+1;

}

void quick_sort(int a[], int start, int end){
    if (start < end){
        int p = partition(a, start, end);
        quick_sort(a, start, p-1);
        quick_sort(a, p+1, end);
    }
}

void print_arr(int a[], int n){
    for (int i = 0; i < n; i++){
        printf("%d ", a[i]);
    }
}

int main(){

    int a[] = {29,55,6,77,44,3};
    int n = sizeof(a) / sizeof(a[0]);
    printf("before sorting array element are: \n");
    print_arr(a, n);
    quick_sort(a, 0, n-1);
    printf("\nafter sorting array element are: \n");
    print_arr(a, n);
    

}