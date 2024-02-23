#include<stdio.h>
#include<sys/types.h>
#include<unistd.h>
int main(){
pid_t retval;
retval=fork();
if(retval==0){
printf("I am Child with PID %d\n",getpid());
printf("My parent PID is %d\n",getppid());
}
else{
printf("I am parent with PID %d\n",getpid());
printf("My child PID is %d\n",retval);
}
return 0;
}