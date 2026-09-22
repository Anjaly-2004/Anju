#include<stdio.h>
int main()
{
int a[100],b[100],c[200];
int n,m,i,j,temp;
printf("Enter the size of first array:");
scanf("%d",&n);
printf("Enter the elents of first array:\n");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
c[i]=a[i];
}
printf("Enter the size of second array:");
scanf("%d",&m);
printf("Enter size of second array:\n");
for(i=0;i<m;i++)
{
scanf("%d",&b[i]);
c[n+i]=b[i];
}
for(i=0;i<m-1;i++)
{
for(j=0;j<n+m-1-i;j++)
{
if(c[j]>c[j+1])
{
temp=c[j];
c[j]=c[j+1];
c[j+1]=temp;
}
}
}
printf("Merged array:\n");
for(i=0;i<n+m;i++)
{
printf("%d ",c[i]);
}
return 0;
}

