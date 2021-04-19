//
//  main.c
//  Gcd_recursion
//
//  Created by Vasanth Kumar on 19/04/21.
//

#include <stdio.h>
int gcd(int m,int n){
    if(n==0)
        return m;
    return gcd(n,m%n);
}

int main(int argc, const char * argv[]) {
    // insert code here...
    int m=98,n=56;
    printf("GCD : %d\n",gcd(m,n));
    return 0;
}
