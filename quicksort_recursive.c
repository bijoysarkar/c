#include <stdio.h>

void quicksort(int arr[],int low, int high);

int main(void) {
  int array[200000];

  int i,j,k,n,q,t;
  int temp;

  scanf("%d",&n);

  for(i=0;i<n;i++){
    scanf("%d",&array[i]);
  }

  quicksort(array, 0, (n - 1));

  for(i=0;i<n;i++)
    printf("%d  ",array[i]);

  return 0;
}

void quicksort(int arr[], int low, int high) {
  int i = low;
  int j = high;
  int y = 0;
  int z = arr[(low + high) / 2];

  do {
    while(arr[i] < z) i++;
    while(arr[j] > z) j--;

    if(i <= j) {
      y = arr[i];
      arr[i] = arr[j]; 
      arr[j] = y;

      i++; 
      j--;
    }
  } while(i <= j);

  if(low < j) 
    quicksort(arr, low, j);

  if(i < high) 
    quicksort(arr, i, high); 
}
