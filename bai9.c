#include <stdio.h>

int main() {
    int arr[] = {2, 5, 2, 3, 7, 2, 5, 5, 5, 3};
    int size  = sizeof(arr) / sizeof(arr[0]); 

    int max_count = 0;
	int most_freq;   
	printf ("Mang da cho la : "); 
    for (int i=0;i<size ;i++){
    	printf ("%d ",arr[i]) ;
	} 
	
    for (int i = 0; i < size ; i++) {
        int count = 1;
        for (int j = i + 1; j < size ; j++) {
            if (arr[i] == arr[j]) {
                count++;
            }
            } 
        if (count > max_count) {
            max_count = count;
            most_freq = arr[i];
        }
    }

    
    printf("\nPhan tu xuat hien nhieu nhat la: %d\n", most_freq);
    printf("So lan xuat hien: %d\n", max_count);

    return 0;
}
 
