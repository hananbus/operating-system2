#include "kernel/types.h"
#include "user/user.h"
#include "kernel/fcntl.h"


int main(int argc, char**argv){
 if(fork() == 0){
     printf("father cpu: %d\n" , get_cpu());
 }
 else{
     printf("child cpu: %d\n" , get_cpu());
     printf("num of procces on cpu 0: %d\n cpu 1: %d\n cpu 2: %d\n " , cpu_proccess_count(0),cpu_proccess_count(1),cpu_proccess_count(2));
 }
    exit(0);
}