#include<stdio.h>
int main(){
	int i,n,giaTri,viTri,viTriXoa;
	int array[n];
	int chon;
	do{
		printf("menu\n");
		printf("1 nhap vao mang\n");
		printf("2 hien thi mang\n");
		printf("3 them phan tu\n");
		printf("4 sua phan tu\n");
		printf("5 xoa phan tu\n");
		printf("6 thoat\n");
		printf("moi ban lua chon ");
		scanf("%d",&chon);
		
		switch(chon){
			case 1 :
				printf("moi ban nhap so phan tu cua mang");
	            scanf("%d",&n);
	            for(i =0;i<n;i++){
	        	printf("array[%d] = \n",i);
	        	scanf("%d",&array[i]);
	        }
	        break;
	        case 2 :
	        	for(i =0;i<n;i++){
	        	printf("%d\n",array[i]);
	        }
	        break;
	        case 3 :
	            printf("moi ban nhap gia tri them vao mang");
            	scanf("%d",&giaTri);
            	printf("moi ban nhap vi tri them vao mang");
              	scanf("%d",&viTri);
            	if(viTri <= n){
        		array[viTri] = giaTri;
        		printf("array[%d] = %d\n",viTri,giaTri);
            	}else{
         		printf("ko hop le");
            	}
            break;
            case 4 :
            	printf("moi ban nhap gia tri sua trong mang");
	            scanf("%d",&giaTri);
            	printf("moi ban nhap vi tri  mang");
             	scanf("%d",&viTri);
             	array[viTri-1] = giaTri;
             	for(i =0;i<n;i++){
          		printf("%d\n",array[i]);
          	}
          	break;
          	case 5 :
          		printf("moi ban nhap vi tri muon xoa cua mang");
	            scanf("%d",&viTriXoa);
	            if(viTriXoa <= n){
		        for(i = viTriXoa-1; i < n - 1; i++){
                array[i] = array[i + 1];
                }
                --n;
                for(i = 0; i < n; i++){
                printf("%d\n ", array[i]);
                }
    
	            }else{
	          	printf("ko hop le");
	          }
	          break;
	          case 6 :
	          	printf(" chuong trinh ket thuc");
         		default:
         			printf("lua chon khong hop le");
		}
	            
	
	}while(chon !=5);
	
	return 0;
}
