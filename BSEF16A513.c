#include<stdio.h>

#include<pthread.h>

#include<stdlib.h>




int array[1000];


void* summation(void*  ar)

{
 int sum=0;
for(int a=(int)ar;a<(int)ar+100;a++)
sum=sum+array[a];

return (void*)sum;
}



int main()

{

for(int i=0;i<1000;i++)
ar[i]=i;

pthread_t threads[10];
for(int i=0;i<10;i++)
pthread_create(&threads[i],NULL,summation,(void*)i*100);

 int *ints[10],int sum=0;
for(int i=0;i<10;i++)
{
pthread_join(threads[i],(int*)&ints[i]);
sum=sum+(int*)ints[i];
}

printf("%d",sum);

}
