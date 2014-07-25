#include<stdio.h>

void comb(char *a,char *temp,int n,int k,int r,int c);

void main(){

  char a[]={'a','b','c','d','e'};
  char temp[3];
  int n=5;
  int k=3;
  int r=0;
  int c=0;

  comb(a,temp,n,k,r,c);

}

void comb(char *a,char *temp,int n,int k,int r,int c){
    int i;

    if(r==k){
        printf("\n");
        for(i=0;i<k;i++){
            printf("%c ",temp[i]);
        }
        return;
    }

    for(i=c;i<n;i++){
        temp[r]=a[i];
        comb(a,temp,n,k,r+1,i+1);
    }

}
