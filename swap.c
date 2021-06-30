#include <stdio.h>
#include <stdlib.h>
void swap_max(int arr[], int l, int n)
{
  int max = arr[n];
  for (int i=n; i<l; i++)
  {
    if (arr[i] > max)
    {
      max = arr[i];
    } 
    int temp = arr[i];
    arr[i] = max;
    max = temp;
   }
}
int ssort (int a[], int l)
{
  for (int i=0; i<l; i++)
  {
    swap_max(a, l, i);
   }
}
