#include <stdio.h>
int main (){
	int n;
	int flag=0;
	int count=0;
	printf ("Nhap so phan tu cua  mang: ");
	scanf ("%d",&n) ;
	int arr[n];
	while (n<=0) {
		printf ("So khong hop le!|nVui long nhap la: ");
		scanf("%d",&n);
	}
	for(int i=0;i<n;i++){
		printf("arr[%d] : ",i);
		scanf("%d",&arr[i]);
	 }
	 printf ("Cac so chan trong mang la: ");
	 for (int i=0;i<n;i++){
	 	if(arr[i]%2==0){
	 	printf ("%d ",arr[i]);
		 flag++; 
		} 
		}  
	 printf ("\nCac so le trong mang la: ");
	     for (int i=0;i<n;i++){
	 	if(arr[i]%2!=0){
	 	printf ("%d ",arr[i]);
	 	count++;
		} 
	    }	
		printf ("\nTonng so chan: %d",flag);
		printf ("\nTong so le: %d",count);
   	 
   	
} 
