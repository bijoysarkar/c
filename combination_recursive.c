#include<stdio.h>

void comb(char *a,int n,int k,int r,int c);

void main(){

  char a[]={'a','b','c','d','e'};
  int n=5;
  int k=3;
  int r=0;
  int c=0;

  comb(a,n,k,r,c);

}

void comb(char *a,int n,int k,int r,int c){
    int i;
    char temp;

    if(r==k){
        printf("\n");
        for(i=0;i<k;i++){
            printf("%c ",a[i]);
        }
        return;
    }

    for(i=c;i<n;i++){
        temp=a[i];
        a[i]=a[r];
        a[r]=temp;
        comb(a,n,k,r+1,i+1);
        temp=a[i];
        a[i]=a[r];
        a[r]=temp;
    }

}
