#include<stdio.h>
#include<math.h>

int parent(int i)
{
  return (i-1)/2;
}
int left(int i)
{
  return 2*i+1;
}
int right(int i)
{
  return 2*i+2;
}
void maxheapify(int arr[], int n, int i)
{
  int l, r,largest,temp;
  l = left(i);
  r = right(i);
  if(l<n && arr[l] > arr[i])
    largest = l;
  else
    largest = i;
  if(r<n && arr[r] > arr[largest])
    largest = r;

  if(largest != i)
  {
    temp = arr[i];
    arr[i] = arr[largest];
    arr[largest] = temp;
    maxheapify(arr,n,largest);
  }
}

void main()
{
  int arr[20];
  int i=0,n;

  printf("Enter the the of element in array : ");
  scanf("%d",&n);
  printf("\nEnter the elements : ");
  for(i=0;i<n;i++)
    scanf("%d",&arr[i]);

  printf("\n\tArray before max heap \n\n");
  for(i=0;i<n;i++)
    printf("%d ",arr[i]);

  for(i=(n-1)/2;i>=0;i--)
    maxheapify(arr,n,i);

  printf("\n\n\tArray after Max Heap \n\n");

  for(i=0;i<n;i++)
    printf("%d ",arr[i]);

    printf("\nMax Element is : %d",arr[0]);
    printf("\nMin Element is : %d",arr[n-1]);

}
