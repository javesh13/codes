#include <iostream>
#include <ctime>
#include <cstdio>
using namespace std;

int main(){
        time_t currtime(0);
        time_t pretime(0);
       struct tm *now = localtime(&pretime);
       printf("%d:%d:%d", now->tm_hour, now->tm_min, now->tm_sec);
        while(1){
                time(&currtime);
               if(currtime ^ pretime){
                       now = localtime(&currtime);
                       pretime = currtime;
                       printf("\r%d:%d:%d",now->tm_hour, now->tm_min, now->tm_sec);
                       fflush(stdout);
               }
        }

        return 0;
}
                
