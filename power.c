#include <stdio.h>
#include "myMath.h"
#define E 2.7182;

double Exponent(int x){
    double answer = 1;
    if(x != 0){
        for(int i=0; i<x; i++){
            answer *= E;
        }
        return answer;
    }
    else return 1;
}

double Power(double x, int y){
    double answer = 1;
    if(x*y != 0){
        for(int i=0 ; i<y ; i++){
            answer *= x;
        }
        return answer;
    }
    else return 0;
}
