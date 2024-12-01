#include<stdio.h>
int main(){
	int n,i,viTriXoa;
	int numbers[100];
	printf("moi ban nhap so phan tu cua mang");
	scanf("%d",&n);

	for(i = 0;i<n;i++){
		printf("numbers[%d]\n",i);
		scanf("%d",&numbers[i]);
	}
	printf("moi ban nhap vi tri muon xoa cua mang");
	scanf("%d",&viTriXoa);
	if(viTriXoa <= n){
		for(i = viTriXoa-1; i < n - 1; i++){
        numbers[i] = numbers[i + 1];
    }
    --n;
        for(i = 0; i < n; i++){
        printf("%d ", numbers[i]);
    }
    
	}else{
		printf("ko hop le");
	}
	
	return 0;
	
}  
