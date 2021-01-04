/*
 * @Author: geekli
 * @Date: 2021-01-04 16:59:50
 * @LastEditTime: 2021-01-04 17:03:21
 * @LastEditors: your name
 * @Description: 
 * @FilePath: /OS_Test/osTest/test1/test1.c
 */
void main(){
int pid1=fork();
printf("**1**\n");
int pid2=fork();
printf("**2**\n");
if(pid1==0){
    int pid3=fork();
    printf("**3**\n");
}
else printf("**4**\n");
}