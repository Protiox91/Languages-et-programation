#include <stdio.h>
#include <stdlib.h>
 
 
int main(){
    int a=20;
    int b=5;
    int c=-10;
    int d=2;
    int x=12;
    int y=15;
    int res1,res2,res3,res4,res5,res6,res7,res8,res9,res10;

    res1=5*x+2*((3*b)+4);
    printf("a= %d, b= %d, c= %d, d= %d, x= %d, y= %d, res1= %d\n",a,b,c,d,x,y,res1);
    
    res2=5*(x+2)*3*(b+4);
    printf("a= %d, b= %d, c= %d, d= %d, x= %d, y= %d, res1= %d\n",a,b,c,d,x,y,res2);
    
    res3=a==(b=20);
    printf("a= %d, b= %d, c= %d, d= %d, x= %d, y= %d, res1= %d\n",a,b,c,d,x,y,res3);
    
    res4= a+=x+5;
    printf("a= %d, b= %d, c= %d, d= %d, x= %d, y= %d, res1= %d\n",a,b,c,d,x,y,res4);
    
    res5=a!=(c*=-d);
    printf("a= %d, b= %d, c= %d, d= %d, x= %d, y= %d, res1= %d\n",a,b,c,d,x,y,res5);
    
    res6=a*=c+x-d;
    printf("a= %d, b= %d, c= %d, d= %d, x= %d, y= %d, res1= %d\n",a,b,c,d,x,y,res6);
    
    res7=a/=d++;
    printf("a= %d, b= %d, c= %d, d= %d, x= %d, y= %d, res1= %d\n",a,b,c,d,x,y,res7);
    
    res8=a/=a++;
    printf("a= %d, b= %d, c= %d, d= %d, x= %d, y= %d, res1= %d\n",a,b,c,d,x,y,res8);
    
    res9=(x++)*(a+c);
    printf("a= %d, b= %d, c= %d, d= %d, x= %d, y= %d, res1= %d\n",a,b,c,d,x,y,res9);
    
    res10=a=x*(b<c)+y*!(b<c);
    printf("a= %d, b= %d, c= %d, d= %d, x= %d, y= %d, res1= %d\n",a,b,c,d,x,y,res10);
 
}