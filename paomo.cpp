#include<stdio.h>
  int main(){
  	int i,j,n,k,a[5];
  	for(i=0;i<=3;i++){
  		scanf("%d",&a[i]);
	  }
	for(j=0;j<=3;j++){
		for(n=0;n<=3-j;n++){
			if(a[n]>a[n+1]){
			  int t=a[n];
			  a[n]=a[n+1];
			  a[n+1]=t;
			}
		}
	}
	for(n=0;n<=4;n++){
	  printf("%d  ",a[n]);
	}
	return 0;
  }
