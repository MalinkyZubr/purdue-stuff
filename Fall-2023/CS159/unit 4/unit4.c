#include <stdio.h>
main(){
int i =0;
 char buf[1024];
 char buf[100] = "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa";
 memset(buf, 0, 1024);
 read(0, buf, 1024);
 printf(buf);
}