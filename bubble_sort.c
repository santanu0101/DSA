#include <stdio.h>

void main(){
    int arr[100];
    int n;
    printf("Enter the number of element: ");
    scanf("%d", &n);

    for (int k = 0; k < n; k++){
        scanf("%d", &arr[k]);
    }
    
    for (int i = 0; i < n-1; i++){
        for (int j = 0; j < n-i-1; j++){
            if(arr[j] > arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }

    for (int l = 0; l < n; l++){
        printf("%d, ", arr[l]);
    }
}

