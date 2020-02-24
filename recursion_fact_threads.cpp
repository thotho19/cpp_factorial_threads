#include <iostream>
#include<pthread.h>
#include<stdio.h>
using namespace std;
int calculateFact(int n){ 
    if(n==1 || n==0) // !0 = 1
        return 1;
    else
        return(n*calculateFact(n-1));
}

void *factorial(void *arg){
    int n;
    cout<<"Enter the Number:"; cin>>n;
    printf("N is equal:%d",calculateFact(n));
    pthread_exit(NULL);
    
}

int main()
{
    pthread_t t1;
    pthread_create(&t1 , NULL , factorial, NULL);
    pthread_join(t1,NULL);

    return 0;
}
