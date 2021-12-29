#include <stdio.h>
#include <stdlib.h>
void makeArray(int a[], int n)
{
  int j;
  printf("Enter the numbers of elements: ");
  for (j = 0; j < n; j++)
  {
    scanf("%d", &a[j]);
  }
}
void display_Arr(int *b, int n)
{
  int j;
  printf("The array is: \n");
  for (j = 0; j < n; j++)
  {
    printf("%d ", *(b + j));
  }
  printf("\n");
}
void insertionSort(int *q, int n)
{
  int i, j, temp;
  for (i = 1; i < n; i++)
  {
    temp = *(q + i);
    j = i - 1;
    while (*(q + j) > temp && j >= 0)
    {
      *(q + j + 1) = *(q + j);
      j--;
    }
    *(q + j + 1) = temp;
  }
}
void selectionSort(int a[], int n)
{
  int i, j, p, temp;
  for (i = 0; i < n; i++)
  {
    p = i;
    for (j = i + 1; j < n; j++)
    {
      if (a[p] > a[j])
      {
        p = j;
      }
      if (p != i)
      {
        temp = a[i];
        a[i] = a[p];
        a[p] = temp;
      }
    }
  }
}
void mergeArray(int a[], int l, int mid, int h)
{
  int p = l, k = mid + 1, m = l, b[10];
  while (p <= mid && k <= h)
  {
    if (a[p] < a[k])
    {
      b[m] = a[p];
      p++;
      m++;
    }
    else
    {
      b[m] = a[k];
      m++;
      k++;
    }
  }
  while (p <= mid)
  {
    b[m] = a[p];
    m++;
    p++;
  }
  while (k <= h)
  {
    b[m] = a[k];
    m++;
    k++;
  }
  for (m = l; m <= h; m++)
  {
    a[m] = b[m];
  }
}
void mergeSort(int *a, int l, int h)
{
  int mid;
  if (l < h)
  {
    mid = (h + l) / 2;
    mergeSort(a, l, mid);
    mergeSort(a, mid + 1, h);
    mergeArray(a, l, mid, h);
  }
}
int partition(int a[], int p, int r)
{
  int i, j, x, t;
  x = a[p];
  i = p;
  j = r;
  while (i < j)
  {
    while (a[i] <= x)
    {
      i = i + 1;
    }
    while (a[j] > x)
    {
      j = j - 1;
    }
    if (i < j)
    {
      t = a[i];
      a[i] = a[j];
      a[j] = t;
    }
    else
    {
      t = a[p];
      a[p] = a[j];
      a[j] = t;
      return j;
    }
  }
}
void quickSort(int a[], int p, int r)
{
  int q;
  if (p < r)
  {
    q = partition(a, p, r);
    quickSort(a, p, q - 1);
    quickSort(a, q + 1, r);
  }
}
int main()
{
  int arr[10], n = 0, choice, t = 1;
  printf("Press 1. Insertion Sort \nPress 2. Selection Sort\nPress 3. Merge Sort \nPress 4. Quick Sort\nPress 5. Exit\n");
  while (1)
  {
    printf("Enter Your Choice: ");
    scanf("%d", &choice);
    if (choice < 5 && choice > 0)
    {
      printf("Enter the size of an array: ");
      scanf("%d", &n);
      makeArray(arr, n);
    }
    switch (choice)
    {
    case 1:
      insertionSort(arr, n);
      break;
    case 2:
      selectionSort(arr, n);
      break;
    case 3:
      mergeSort(arr, 0, n - 1);
      break;
    case 4:
      quickSort(arr, 0, n - 1);
      break;
    case 5:
      exit(0);
    default:
      printf("Invalid Input");
      t = 0;
    }
    if (t == 1)
    {
      display_Arr(arr, n);
    }
  }
  return 0;
}