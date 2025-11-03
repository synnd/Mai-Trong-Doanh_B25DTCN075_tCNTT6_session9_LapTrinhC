#include <stdio.h>
int main (){
	int n; 
	printf ("Nhap vao so phan tu mang: ") ;
	scanf ("%d",&n);
	while (n<=0){
		printf ("So khong hop le\nVui long nhap so nguyen duong: ");
		scanf ("%d",&n);	 
	} 
	 int arr[100];
	  for (int i=0;i<n;i++){
	  	printf ("arr[%d]: ",i); 
	  	scanf ("%d",&arr[i]); 
	  } 
     printf ("Mang da nhap la: ");
	 for (int j=0;j<n;j++){
	 	printf ("%d ",j); 
	 } 
	return 0; 
	 
} 
