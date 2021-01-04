/*
 * @Author: geekli
 * @Date: 2021-01-04 17:00:31
 * @LastEditTime: 2021-01-04 17:00:31
 * @LastEditors: your name
 * @Description: 
 * @FilePath: /OS_Test/osTest/test1/test3.c
 */
#include<stdio.h>  
#include<sys/types.h>  
#include<unistd.h>  
int main(){  
    int i, a = 0;  
    pid_t pid;  
    if((pid = fork())) a = 1;  
    for(i=0;i<2;i++){  
        printf("X" );  
    }  
    if(pid == 0) printf("%d\n", a);  
    return 0;  
}  