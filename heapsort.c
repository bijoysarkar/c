
#include<stdio.h>

void heap(int *,int);


void main()
{
  int x[100];
  int i,n;
  int temp;

  scanf("%d",&n);
  for(i=0;i<n;i++)
    scanf("%d",&x[i]);

  heap(x,n);

  for(i=n;i>=1;i--)
  {
    temp=x[i];
    x[i]=x[0];
    x[0]=temp;
    heap(x,i-1);
  }

  for(i=0;i<n;i++)
    printf("%d	",x[i]);
}


void heap(int *a,int n)
{
  int i,temp;
  for(i=n/2;i>=0;i--)
  {
    if((2*i+2)<=n && (2*i+1)<=n && a[(2*i)+1] < a[(2*i)+2])
    {
      temp = a[(2*i)+1];
      a[(2*i)+1] = a[(2*i)+2];
      a[(2*i)+2] = temp;
    }
    if((2*i+1)<=n && a[(2*i)+1] > a[i])
    {
      temp = a[(2*i)+1];
      a[(2*i)+1] = a[i];
      a[i] = temp;
    }
  }
}
