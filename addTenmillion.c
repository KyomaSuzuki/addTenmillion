//入力された値を1千万回加算するプログラム

#include <stdio.h>

int main(void){
    int i;
    //キーボード入力を受け付ける
    double x;
    printf("数値を入力してください: ");
    scanf("%lf",&x);
    double sum=0.0;
    
    for(i=0;i<10000000;i++){
        sum+=x;
    }
    printf("sum=%lf\n",sum);
    return 0;
};