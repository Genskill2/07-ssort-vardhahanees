#include<stdio.h>


void swap_max(int arr[], int l, int n)
{
  int t;
  int max = arr[n];
  for(int i=n; i<l; i++)
  {
    if(arr[i]>max)
    {
      max = arr[i];
    }
    if(arr[i]==max)
    {
      t = arr[n];
      arr[n] = arr[i];
      arr[i]  =t;
    }
  }
}


void ssort(int arr[], int l)
{
  for(int i=0; i<l-1; i++)
  {
    swap_max(arr,l,i);
  }
}
