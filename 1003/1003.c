#include <stdio.h>

int main(){
    
    int a,n1;
    int n[101];
    n[0]=1; n[1]=0; n[2]= 0; n[3]=1;
    for(int i=4;i<=100;i++){
        n[i]=n[i-4]+n[i-2];
        n[i+1]=n[i-3]+n[i-1];
}
    scanf("%d",&a);
    

    for(int i = 0; i < a; i++){
        scanf("%d",&n1);
        printf("%d %d\n",n[n1*2],n[n1*2+1]);
    }
    return 0;
}