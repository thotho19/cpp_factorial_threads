#include<iostream>
#include<pthread.h>
#include<stdio.h>
using namespace std;
void *factorial(void *arg){
    int n;
    int total =1;
    printf("Enter the factorial Number:");
    scanf("%d" , &n);
    for(int i = n ; i>=1;--i)
        total = total * i;
    cout<<total;
    pthread_exit(NULL);
    }
    
    
int main(){
    pthread_t t1;
    pthread_create(&t1 , NULL , factorial , NULL);
    pthread_join(t1,NULL);
    return 0;
    }
