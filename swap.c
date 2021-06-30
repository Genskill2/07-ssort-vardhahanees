#include <stdio.h>
void swap_max(int arr[], int l, int n)
{
  int max = arr[n];
  int temp;
  for (int i=n; i<l; i++)
  {
    if (arr[i] > max)
    {
      max = arr[i];
    }
    if (arr[i]==max)
    {  
      temp = arr[n];
      arr[n] = arr[i];
      arr[i] = temp;
    }
   }
}
void ssort (int arr[], int l)
{
  for (int i=0; i<l-1; i++)
  {
    swap_max(arr, l, i);
   }
}
