#include <stdio.h>
#include <math.h>


int main(){
    int n,x1,y1,z1,x2,y2,z2;
    double gay,les;
    scanf("%d",&n);
    for(int i=0; i<n;i++){
        scanf("%d%d%d%d%d%d",&x1,&y1,&z1,&x2,&y2,&z2);
        gay = sqrt(pow(x1 - x2,2) + pow(y1 - y2,2)); 
        les = z1 > z2 ? z1 - z2 : z2 - z1;
        if(  (x1 == x2) && (y1 ==y2) && (z1 == z2)    ){
            printf("-1\n");
            continue;
        }
        if( gay  < (z1+z2)    &&  gay > les )  {
            printf("2\n");
            continue;
        } 
        else if(  gay  ==(z1+z2) ||  gay == les   ){
            printf("1\n");
            continue;
        }
        else{
            printf("0\n");
            continue;
        }
        
    }
    
    
    return 0;
}