#ifndef TESTCASE_H
#define TESTCASE_H

#include "function.h"

float testcase_prime() {
    float marks = 0;
    if (isPrime(-2) == 0) marks++;
    if (isPrime(2) == 1) marks++;
    if (isPrime(3) == 1) marks++;
    if (isPrime(4) == 0) marks++;
    if (isPrime(27) == 0) marks++;
    if (isPrime(11) == 1) marks++;
    if (isPrime(23) == 1) marks++;
    if (isPrime(10000) == 0) marks++;
    if (isPrime(258) == 0) marks++;
    if (isPrime(7) == 1) marks++;
    if (isPrime(13) == 1) marks++;
    if (isPrime(14) == 0) marks++;
    if (isPrime(-50) == 0) marks++;
    if (isPrime(57) == 0) marks++;
    if (isPrime(99999) == 0) marks++;
    if (isPrime(98) == 0) marks++;
    return marks * 100 / 16; 
}

float testcase_power() {
    float j = 0;
    if(power(2,3)==8) j++;
    else if(power(2,-1)==0.5)  j++;
    else if(power(-2,-3)==-0.125) j++;
    else if(power(4.5,-3)==8/729) j++;
    else if(power(-2.5,-4)==0.0256) j++;
    else if(power(5,6)==15625) j++;
    else if(power(5,-6)==0.000064) j++;
    else if(power(5.5,5)==5032.84375) j++;
    else if(power(2.3,0)==1) j++;
    else if(power(-2.3,5==-64.36343)) j++;
    else if(power(-0.2,3)==-.008) j++;
    else if(power(2.7,6)== 387.420489) j++;
    else if(power(-10,8)==100000000) j++;
    else if(power(45,3)==91125) j++;
    else if(power(-25,4)==390625) j++;
    else if(power(5.7,6.0)==34296.447249) j++;
    else if(power(7.6,6)==192699.928576) j++;
    else if(power(5.5,5)==5032.84375) j++;
    else if(power(2.3,9)==1801.152661463) j++;
    else if(power(2,23)==8388608) j++;
    return j*100/20;
}

#endif 
