#include"testcases.h"
#include<stdio.h>
int main(){
    float r1=testcase_prime();
    float r2=testcase_fibonacci();
    float r3=testcase_power();
    float r4=testcase_factorial();
    printf("accuracy in testing prime is %f%%\n",r1);
    printf("accuracy in testing fibonacci is %f%%\n",r2);
    printf("accuracy in testing power is %f%%\n",r3);
    printf("accuracy in testing factorial is %f%%\n",r4);
}
