#include<stdio.h>
  2 #include<stdlib.h>
  3 #include<unistd.h>
  4 #include<sys/types.h>
  5 #include<sys/wait.h>
  6 int main()
  7 {
  8     pid_t id1=fork();
  9     if(id1==0)
 10     {
 11         int cnt=0;
 12         while(1)
 13         {
 14             printf("%d\n",getpid());
 15             sleep(1);
 16             int *t=NULL;
 17             *t=8;                                                                      
 18 
 19             if(++cnt==5)
 20             {
 21                 exit(20);
 22             }
 23         }
 24     }
 25     int status=0;
 26     pid_t ret=waitpid(id1,&status,0);
 27     printf("ret=%d,sig=%d,ext=%d",ret,status&0x7F,(status>>8)&0xFF);
 28 
 29     return 0;
 30 }
