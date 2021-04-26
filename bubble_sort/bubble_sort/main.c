//
//  main.c
//  bubble_sort
//
//  Created by Vasanth Kumar on 26/04/21.
//

#include <stdio.h>
#include <time.h>
void bubble_sort(int arr[ ],int n){
    int temp;
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1;j++){
            if(arr[j+1]<arr[j]){
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    printf("after sorting :\n");
    for(int i=0;i<n;i++){
        printf("%d->",arr[i]);
    }
    printf("\n");
}

int main(int argc, const char * argv[]) {
    time_t start,end;
    int n,arr[20];
    // insert code here...
    printf("enter the number of elements in the array :");
    scanf("%d",& n);
    printf("enter the elements of the array :\n");
    for(int i=0;i<n;i++){
        scanf("%d",& arr[i]);
    }
    printf("selection sort :\n");
    start=time(NULL);
    bubble_sort(arr,n);
    end=time(NULL);
    printf("time required is %.5f\n",difftime(end, start)*1000);
    return 0;
}
