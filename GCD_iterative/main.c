//
//  main.c
//  GCD_iterative
//
//  Created by Vasanth Kumar on 19/04/21.
//

#include<stdio.h>
int euclid(int a , int b)
{
    int q,r;

    while(b>0)
{
    q = a/b;
    r = a-q*b;
    a = b;
    b = r;
}
return a;
}

int main()
{
    int a,b;
    printf("enter the values of a and b : ");
    scanf("%d%d",& a,& b);
    printf("euclid(%d,%d) = %d\n",a,b,euclid(a,b));
    return 0;
}
