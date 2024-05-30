#include<stdio.h>
void swap(int *a,int *b)
{
  int temp=*a;
  *a=*b;
  *b=temp;
}
int partition(int *a,int l,int h)
{
  int i=l-1,pivot=a[h];
  for(int j=l;j<h;j++)
  {
     if(a[j]<pivot)
     {
      i++;
       swap(&a[i],&a[j]);
     }
  }
  swap(&a[i+1],&a[h]);
  return i+1;
}
void quickSort(int *a,int l,int h)
{
  if(l<h)
  {
    int p=partition(a,l,h);
    quickSort(a,l,p-1);
    quickSort(a,p+1,h);
  }
}
int main()
{
int arr[] = {10, 7, 8, 9, 1, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    quickSort(arr, 0, n - 1);
    printf("Sorted array: \n");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
    return 0;

}