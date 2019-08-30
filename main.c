#include <stdio.h>
void quicksort(int a[] , int L, int R) {// lebel (( 1 ))
    int i, j, temp, pivot;
    i = L;
    j = R;
    pivot = a[(L + R) / 2];
    printf("i=%d, j=%d, pivot=%d \n", i, j, pivot);
    do {// lebel (( 2 ))
        while (a[i] < pivot)// lebel (( 3))
            i++;
        printf("i = %d   ", i);
        while (a[j] > pivot)// lebel (( 4 ))
            j--;
        printf("j = %d \n", j);
        if (i <= j) {
            temp = a[i];
            a[i] = a[j];   //a[i] und a{j] tauchen
            a[j] = temp;
            i++;
            j--;
            printf("i=%d, j=%d \n", i, j);
        }

    } while (i <= j);
    for (int b = 0; b < 6; b++) {
        printf(" %d ,", a[b]);

    }
    printf("\n--------------------- \n");
    if (L < j){
        printf("L = %d , j = %d \n", L,j);
    quicksort(a, L, j);// lebel (( 5 ))

    }
    if (R > i) {
    printf("R = %d ,i = %d \n", R,i);
    quicksort(a, i, R); // lebel (( 6 ))

    }

}

//void quicksort(int a[], int L, int R);
int main() {
   // printf("Hello, World!\n");

    int n[]={1,11,3,14,5,15};
    int j;

    quicksort(n,0,5);

    /* output each array element's value */
//    for (j = 0; j < 5; j++ ) {
//        printf(", %d ",n[j] );
//    }
    return 0;
}
