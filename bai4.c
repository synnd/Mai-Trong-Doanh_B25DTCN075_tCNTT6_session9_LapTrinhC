#include <stdio.h>
int main (){
	int n; 
	int sum=0; 
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
	  	sum+=arr[i] ;
	  } 
	  
	
	 float aver=(sum)/n ;
	  	 printf ("Gia tri trung binh cac phan tu la: %.2f ",aver);

    
	return 0; }
