#include <stdio.h>
int main (){
	int n,x;
	int flag=0;
	printf ("Nhap so phan tu cua mang: ");
	scanf ("%d",&n) ;
	int arr[100];
	while (n<=0) {
		printf ("So khong hop le!|nVui long nhap la: ");
		scanf("%d",&n);
	    }
	for(int i=0;i<n;i++){
		printf("arr[%d] : ",i);
		scanf("%d",&arr[i]);
		}
		
	for (int i = 0; i < n/2; i++) {
        int temp = arr[i];
        arr[i] = arr[n - 1 - i];
        arr[n - 1 - i] = temp;
    }

    printf("Mang sau khi dao nguoc la:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
	
		
	}
