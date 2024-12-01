#include<stdio.h>
int main(){
	int giaTri,viTri,i;
	int numbers[5] = {1,2,3,4,5};
	
	printf("moi ban nhap gia tri sua trong mang");
	scanf("%d",&giaTri);
	printf("moi ban nhap vi tri  mang");
	scanf("%d",&viTri);
	numbers[viTri-1] = giaTri;
	for(i =0;i<5;i++){
		printf("%d",numbers[i]);
	}
	
	return 0;
	
}  
