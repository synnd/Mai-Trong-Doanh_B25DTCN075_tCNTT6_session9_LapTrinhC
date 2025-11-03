#include <stdio.h>
#include <math.h> 
int main(){
	int n,sum=0 ;
	int flag=1;
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
		printf ("Cac so nguyen to trong mang la: "); 
	 for(int i=0;i<n;i++){
		if (arr[i]<2){
			continue ; 
		 } 
		for (int j=2;j<=sqrt(arr[i]);j++){
		if (arr[i]%j==0){
		 flag=0;
         break;	}
          }
	     if (flag==1){
		 printf("%d ",arr[i]);
		 sum+=arr[i] ;
	     }
         }
   	     printf ("\nTong cac so nguyen to la: %d",sum)	;
	   return 0;		
   } 
