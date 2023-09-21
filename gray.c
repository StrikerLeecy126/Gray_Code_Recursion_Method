#include <stdio.h>
int n;
int main(){
    printf("Input Bit Length\n");
    scanf("%d",&n);
    int num=1<<n;

    int gray_nbit[num];
    gray_nbit[0]=0;

    for(int i=1;i<=n;i++){
        int gray_half=1<<(i-1);
        for(int j=0;j<gray_half;j++){
            gray_nbit[2*gray_half-j-1]=gray_nbit[j]+gray_half;
        }

    }

    for(int k=0;k<num;k++){
        if (k%16==0) printf("\n");
        printf("%d ",gray_nbit[k]);
    }

}
