#include<stdio.h>
#include<math.h> 
int a[50][50];
int n,m,i,j,hang; 
 
void nhapmatran(int a[50][50] , int &n,int &m) {

   do{
    printf("Nhap kich thuoc n cua ma tran vuong nxn :"); scanf("%d",&n);
} while(n<=0) ;
    printf("Nhap vao ma tran:\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf(">>>>a[%d][%d]",i,j);
			scanf("%d",&a[i][j]);
        }
    }
}
void xuatmatran(int a[50][50],int n,int m) {

    printf("Ma tran vua nhap la:\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("\t%d\t ",a[i][j]);
        }
        printf("\n");
    }
 
}

int Timmax_hang( int a[50][50] , int n ,int m ,int hang){
	
	int max = a[hang][0];
     for(int j=0;j<n;j++){
	 
	 if(max<a[hang][j]) {
	 
	 
	 max= a[hang][j]; 
}
}
return max; 
} 
void timMaxCuaAllHang(int a[50][50],int n,int m) {
	int hang=0;
  while(hang<n) {
  	printf("\nMax cua hang %d la %d ",hang,Timmax_hang(a,n,m,hang));
  	hang++;
  }
}

 char kiemtra_snt(int n){
   for(int i = 2; i<= sqrt(n) ; i++)
   if(n%i==0)
      return 0;
   return 1;
}
 void tamgiacduoi_snt (int a[50][50] , int n, int m)
 {
   printf("\n\nCac so nguyen to cua tam giac duoi la :") ;
   for(int i=0;i<n;i++)
   for(int j=0;j<=i;j++)
   if(kiemtra_snt(a[i][j]) && a[i][j]>=2)
   {
	 printf("%d\t",a[i][j]) ;} 
}
 void tamgiactren_snt (int a[50][50] , int n, int m)
 {
   printf("\n\nCac so nguyen to cua tam giac tren la :") ;
   for(int i=0;i<n;i++)
   for(int j=i;j<n;j++)
   if(kiemtra_snt(a[i][j]) && a[i][j]>=2)
   {
	 printf("%d\t",a[i][j]) ;} 

}

void duongcheochinh_snt (int a[50][50] , int n , int m)
{
	printf("\n\n Cac so nguyen to tren duong cheo chinh la :");
	for(int i=0;i<n;i++)
	for(int j=0;j<n;j++) 
	if(i==j && kiemtra_snt(a[i][j]) && a[i][j]>=2)
	printf("%d\t",a[i][j]);
}
void duongcheophu_snt (int a[50][50] , int n , int m)
{
	printf("\n\n Cac so nguyen to tren duong cheo phu la :");
	for(int i=0;i<n;i++) 
	for(int j=0;j<n;j++)
	if(j==n-1-i && kiemtra_snt(a[i][j]) && a[i][j]>=2)
	printf("%d\t",a[i][j]);
}

int main (){
 nhapmatran (a,n,m) ;
 xuatmatran (a,n,m); 
 timMaxCuaAllHang (a,n,m); 
 tamgiacduoi_snt(a,n,m);
 tamgiactren_snt(a,n,m); 
 duongcheochinh_snt(a,n,m);
 duongcheophu_snt(a,n,m);
 
}
