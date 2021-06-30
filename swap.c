#include <stdio.h>
#include <stdlib.h>
int max;
void swap_max(int arr[], int l, int n)
{
  for (int i=0; i<l-1; i++)
  {
    max = i;
    for (int j=n; j<l; j++)
    {
    if (arr[j] > arr[max])
    {
      int temp = arr[j];
      arr[j] = arr[max];
      arr[max] = temp;
    }
   }
}
int ssort (int a[], int l)
{
  for (int i=0; i<l; i++)
  {
    swap_max(a, l, i);
   }
}
