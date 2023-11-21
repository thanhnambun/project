#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(){
	int n, sum; 
	int a=0; 
	int number[n];
	int i; 
	int newNumber, oldNumber , addValue, addIndex;
	do{
	printf("\n********menu********\n");
	printf("1. nhap gia tri n cua mang \n");
	printf("2. in cac gia tri trong mang");
	printf("3. tinh trung binh cac phan tu duong trong mang\n");
	printf("4. in ra vi tri cac phan tu trong mang co gia tri bang k\n");
	printf("5. su dung thuat toan noi bot de sap xep mang giam dan\n");
	printf("6. tinh so luong cac phan tu la so nguyen to \n");
	printf("7. Sap xep cac phan tu chan chia het cho 3 o dau mang theo thu tu tang dan, cac phan tu le chia het cho 3 o cuoi mang theo thu tu giam dan, cac phan tu con lai o giua mang theo thu tu tang dan\n");
	printf("8. nhap m tu ban phim chen gia tri m vao mang theo thu tu giam dan \n");
	printf("9. thoat");
	int choice;
	printf("nhap lua chon cua ban \n");
	scanf("%d",&choice);
	switch (choice) { 
	case 1: 
	printf("nhap so phan tu mang\n");
	scanf("%d",&n);
	break;
	case 2: 
	printf("gia tri cua cac phan tu trong mang la \n");
	for(i=0; i<n; i++){
		printf("number[%d]:\n",i);
		scanf("%d",&number[i]); 
	}
	break;
	case 3: 
	for(int i=0; i<n; i++){
		if(number[i]>0){
		sum+=number[i];
		a++;  
		}
	}
	printf("trung binh cac phan tu duong la : %d\n",sum/a);
	break;
	case 4:
		int k;	 
		printf("nhap gia tri can tim \n");
		scanf("%d",&k);
		for(i=0; i<n; i++){
			if(number[i]==k){
			printf("number[%d] \n",i);
			} 
		} 
		break; 
	case 5:
		for(i=0; i<n;i++){
			for(int j=0;j<n-i-1;j++){
				if(number[j]<number[j+1]){
				int temp = number[j+1];
				number[j]=number[j+1];
				number[j]=temp;
				}
			}
		}for(int i=0; i<n; i++){
			printf("%d",number[i]); 
		}
		break;
	case 6:
	int b;
		printf("Cac so nguyen to trong mang: ");
		for(int i=0;i<n;i++){	
			int isPrime = 0;
			if(number[i]>=2){
			for(int j=2;j<=sqrt(number[i]);j++){
					if(number[i]%j==0){
					isPrime = 1;
					break;
					}
				}
			}else{
						isPrime=1;
					}
					if(isPrime==0){
						printf("%d\t",number[i]);
						b++;
					}
				}
				printf("\nSo cac so nguyen to la: %d\n",b);
				break;	

	case 9:
	exit (0);
	break;
}
}while(1==1);
}
