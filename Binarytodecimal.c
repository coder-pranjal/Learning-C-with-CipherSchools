#include<stdio.h>
int main(){
    int binary;scanf("%d",&binary);
    int power=1;
    int decimal=0;
    while(binary!=0){
        int num=binary%10;
        binary/=10;
        decimal=decimal+(num*power);
        power*=2;
    }
    printf("%d",decimal);
    return 0;

}