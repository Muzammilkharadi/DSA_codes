2#include<stdio.h>

void bubblesort(int[], int );
void readarray(int[] ,int );
void displayarray(int[], int);

int main()
{
  int a[100];
  int n;
  scanf("%d",&n);
  bubblesort(a,n);
  readarray(a,n);
  displayarray(a,n);
  return 0;
}

void bubblesort(int a[100] , int n)
{
  int i,j,temp;
  for(i=0 ; i<n-1 ; i++)
  {
    for(j=0 ; j<n-1-i ; j++)
    {
      if(a[j] > a[j+1])
      {
        temp=a[j];
        a[j]=a[j+1];
        a[j+1]=temp;
      }
    }
  }
}

void readarray(int a[100] , int n)
{
    int i;
    for(i=0 ; i<n ; i++)
        scanf("%d",&a[i]);
}

void displayarray(int a[100] , int n)
{
    int i;
    for(i=0 ; i<n ; i++)
        printf("%d",a[i]);
}
