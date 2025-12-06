#include<stdio.h>
int ways(int n){
    if(n==1||n==2) return 1;
    else {
    int sum =0;
    for(int i=1; i<n; i++){
        sum+=ways(i)*ways(n-i);
    }
    return sum;
}
}
int main(){
    int n;
    printf("Enter the number of matrices to be multiplied:");
    scanf("%d",&n);
    int a = ways(n);
    printf("no. of ways in which they can be multiplied is:%d",a);
    return 0;
}