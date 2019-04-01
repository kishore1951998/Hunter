#include <stdio.h>

int main()
{
  int a[50],b[100],i,j,n,c=0,k=0,t=0;
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {
      scanf("%d",&a[i]);
  }
  for(i=0;i<n;i++)
  {
      for(j=i+1;j<n;j++)
      {
      if(a[i]==a[j])
      {
          c=1;
          a[j]='\0';
      }
      }
      if(c==1)
      {
          b[k]=a[i];
          k++;
      }
      c=0;
  }
  for(i=0;b[i]!='\0';i++)
  {
      for(j=i+1;b[j]!='\0';j++)
  {
      if(b[i]>b[j])
      {
   t=b[i];
   b[i]=b[j];
   b[j]=t;
      }
  }
  }
  for(i=0;b[i]!='\0';i++)
  {
      printf("%d ",b[i]);
  }
    return 0;
}

