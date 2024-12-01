#include<stdio.h>
int main(){
	int n,i,giaTri,viTri;
	int numbers[100];
	printf("moi ban nhap so phan tu cua mang");
	scanf("%d",&n);

	for(i = 0;i<n;i++){
		printf("numbers[%d]\n",i);
		scanf("%d",&numbers[i]);
	}
	printf("moi ban nhap gia tri them vao mang");
	scanf("%d",&giaTri);
	printf("moi ban nhap vi tri them vao mang");
	scanf("%d",&viTri);
	if(viTri <= n){
		numbers[viTri] = giaTri;
		printf("numbers[%d] = %d",viTri,giaTri);
	}else{
		printf("ko hop le");
	}
	for(i =0;i<n;i++){
	    printf("%d\n",numbers[i]);
}
	
	return 0;
	
}  
