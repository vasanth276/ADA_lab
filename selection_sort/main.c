//
//  main.c
//  selection_sort
//
//  Created by Vasanth Kumar on 26/04/21.
//

#include <stdio.h>
#include <time.h>
void selection_sort(int arr[ ],int n){
    int min,temp;
    for(int i=0;i<n-1;i++){
        min=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[min])
                min=j;
        }
        temp=arr[i];
        arr[i]=arr[min];
        arr[min]=temp;
    }
    printf("elements after sorting :\n");
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
    selection_sort(arr,n);
    end=time(NULL);
    printf("time required is %.5f\n",difftime(end, start)*1000);
    return 0;
}
