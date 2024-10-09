#include<stdio.h>
    2 #include<stdlib.h>
    3 #include<sys/wait.h>
    4 #include<sys/types.h>
    5 #include<assert.h>
    6 int main()
    7 {
E>  8     pid_t id=fork();
    9     assert(id!=-1);
   10     if(id==0)
   11     {
   12         int cnt=50;
   13         while(cnt--)
   14         {
E> 15             printf("%d\n",getpid());
E> 16             sleep(1);
   17         }
   18         exit(2);
   19     }
   20     int status=0;
   21     int ret=waitpid(id,&status,0);
   22     if(ret)
   23     {
   24         if(WIFEXITED(status))
   25         {
   26         printf("%d\n",WEXITSTATUS(status));
   27     }
   28         else{
   29             printf("退出");                                                                      
   30         }
   31     }
   32     //printf("pic:%d,ext:%d,sig:%d\n",ret,(status>>8)&0xFF,status&0x7F);
   33     return 0;
