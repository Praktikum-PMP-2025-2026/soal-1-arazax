//Nama     : Afdhal Razaq
//NIM      : 13224004
//Soal     : 01

#include <stdio.h>
void analisis(int arr[], int n, int *sum, float *avg, int *max, int *first){
    *sum = 0;
    *max = arr[0];
    *first = 0;

    for(int i = 0; i < n; i++){
        *sum += arr[i];
        if(arr[i] > *max){
            *max = arr[i];
            *first = i;
        }
    }
    *avg = (float)*sum / n;

    printf("SUM %d\n", *sum);
    printf("AVG %.2f\n", *avg);
    printf("MAX %d\n", *max);
    printf("IDX %d\n", *first);

}

int main(void) {
    int n;
    scanf("%d", &n);
    int arr[n];
    int sum, max, first;
    float avg;
    int *ptr = arr;
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    analisis(ptr, n, &sum, &avg, &max, &first);
    return 0;
    
}
