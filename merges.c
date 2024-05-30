#include <stdio.h>

void merge(int *a, int l, int mid, int h)
{
  int n1 = mid - l + 1;
  int n2 = h - mid;
  int left[n1], right[n2];

  for (int i = 0; i < n1; i++)
    left[i] = a[l + i];
  for (int i = 0; i < n2; i++)
    right[i] = a[mid + 1 + i];

  int i = 0, j = 0, k = l;

  while (i < n1 && j < n2)
  {
    if (left[i] <= right[j])
    {
      a[k++] = left[i++];
    }
    else
    {
      a[k++] = right[j++];
    }
  }

  while (i < n1)
  {
    a[k++] = left[i++];
  }

  while (j < n2)
  {
    a[k++] = right[j++];
  }
}

void mergeSort(int *a, int l, int h)
{
  if (l < h)
  {
    int mid = l + (h - l) / 2;
    mergeSort(a, l, mid);
    mergeSort(a, mid + 1, h);
    merge(a, l, mid, h);
  }
}

int main()
{
  int a[5] = {4, 8, 3, 2, 7};
  int n = sizeof(a) / sizeof(a[0]);
  mergeSort(a, 0, n - 1);

  for (int i = 0; i < n; i++)
  {
    printf("%d ", a[i]);
  }
  printf("\n");

  return 0;
}
