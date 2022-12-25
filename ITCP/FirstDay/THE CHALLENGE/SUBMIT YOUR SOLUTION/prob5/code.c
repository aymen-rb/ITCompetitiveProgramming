#include <stdio.h> 
#include <math.h>

int main(){
    int n=4;
    float x[]={1 ,-5,-4,-1} ;//this are the coorediantes of n th point (n is the indice)
    float y[]={2,1,1,0};
    
    float dis;

    dis = sqrtf(((x[0]-x[1])*(x[0]-x[1]))+((y[0]-y[1])*(y[0]-y[1])));
    for(int i = 0;i<=n;i+=2){//devided into even and odd
        
        for(int j = 1;j<=n;j+=2){
            
            if (dis >= sqrtf(((x[i]-x[j])*(x[i]-x[j]))+((y[i]-y[j])*(y[i]-y[j])))) {
                dis = sqrtf(((x[i]-x[j])*(x[i]-x[j]))+((y[i]-y[j])*(y[i]-y[j])));
            }
        }
    }

    printf("%f",dis);//float value is not presice thx C :(




    return 0;

}