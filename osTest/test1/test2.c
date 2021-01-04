/*
 * @Author: geekli
 * @Date: 2021-01-04 17:00:13
 * @LastEditTime: 2021-01-04 17:00:13
 * @LastEditors: your name
 * @Description: 
 * @FilePath: /OS_Test/osTest/test1/test2.c
 */
#include <stdio.h>  
#include <stdlib.h>  
#include <sys/types.h>  
#include <unistd.h>  
   
main()  
{  
    if ( fork() == 0 )       // 子进程1  
    {  
        printf("b\n");  
        exit(0);  
    }  
    else  
    {  
        if ( fork() == 0 )   // 子进程2  
        {  
            printf("c\n");  
            exit(0);  
        }  
   
        printf("a\n");      // 父进程  
        exit(0);  
    }  
}  