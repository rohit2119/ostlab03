#include<stdio.h>
int main()
{
int a[10],i,n;
printf("enter nof elements");
scanf("%d",&n);
printf("enter elements");
for(i=0;i<n;i++)
{
scanf("%d\n ",&a[i]);
}
quicksort(a,0,n);
printf("elements after sorting");
for(i=0;i<n;i++)
{
printf("%d\n",a[i]);
}
void merge(int a[],int p,int q,int r)
{
int b[5];
int i,j,k;
k=0;
i=p;
j=q+1;
while(i<=q&&j<=r)
{
if(a[i]<a[j])
{
b[k++]=a[i++];
}
else
{
b[k++]=a[j++];
}
}
while(i<=q)
{
b[k++]=a[i++];
}
while(j<=r)
{
b[k++]=a[j++];
}
for(i=r;i>=p;i--)
{
a[i]=b[--k];
}
}
void mergesort(int a[],int p,int r)
{
int q;
if(p<r)
{
q=(p+q)/2;
mergesort(a,p,q);
mergesort(a,q+1,r);
merge(a,p,q,r);
}
}
}
