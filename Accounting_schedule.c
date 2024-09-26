  1 #include<stdio.h>
  2 #include<unistd.h>
  3 int main()
  4 {
  5     int n=9;
  6     while(n)
  7     {
  8         printf("%d\r",n--);
  9         fflush(stdout);
 10         sleep(1);
 11     }
 12     return 0;                                                                                                                                                                          
 13 }
