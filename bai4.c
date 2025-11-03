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
	  int ave ; 
	    for (int i=0;i<n;i++){
	     ave = (arr[i]+=arr[i])/n ;
	     } 
	  	 printf ("Gia tri trung binh cac phan tu la: %d",ave);

    
	return 0; }
