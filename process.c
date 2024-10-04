#include"process.h"
void ProncessOn()
{
    int cnt=0;
    char bar[NUM];
    char*c="|\\-/";
    memset(bar,'\0',sizeof(bar));
    while(cnt<=100)
    {
        printf("[%-100s][%3d%%][%c]\r",bar,cnt,c[cnt%4]);
        fflush(stdout);
        bar[cnt++]=STYLE;
        usleep(50000);
    };
    printf("\n");
}
