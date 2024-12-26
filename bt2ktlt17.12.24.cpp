#include <stdio.h>
//So nguyen to la so chi chia het cho 1 va chinh no
int main(){
//Dem cac so nguyen ma N chia het tu 2 den N-1
int n;
printf("Nhap n:"); scanf("%d",&n);
int dem=0;
for(int i=2; i<=n/2;i++){
    if(n%i==0)
        dem = dem + 1; 
}
printf("Dem = %d", dem);
if(dem==0)
    printf("\n%d la so nguyen to", n); 
else
printf("\n%d la KHONG so nguyen to", n); 
return 0;
}
