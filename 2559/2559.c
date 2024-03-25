#include <stdio.h>
#include <math.h>


int main(){
    int x,y,z,max;
    z=0;
    scanf("%d%d",&x,&y);
    int n[100000];
    for(int i = 0; i < x; i++)
        scanf("%d",&n[i]);
    
    
    for (int i = 0; i < y; i++) {
        z += n[i];
    }
    max = z;
    for (int i =y; i < x; i++) {
        z += n[i] - n[i - y];
        if (z > max) {
            max = z;
        }
    }
    printf("%d",max);
        
    
    return 0;
}