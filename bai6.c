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
	 printf ("Nhap vao gia tri x: ");
	 scanf ("%d",&x);
	 for (int i=0;i<n;i++){
	 if (arr[i]==x){
		printf ("vi tri cua %d la: arr[%d]\n",x,i) ;
	    flag=1;}  
		} 	
	    if (flag==0){
	 	printf ("%d khong xuat hien trong mang\n",x);
	    }  
			
	 return 0; 
	 
	 }
	 
