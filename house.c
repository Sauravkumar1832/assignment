#include<stdio.h>
int main(){
    int a,b;
    for(int i=1; i<=11;i++){
        for(int j=1 ;j<=17 ;j++){
            if(i==1){
                if(j>=3 && j<=15) printf("* ");
                else printf("  ");
            }
            if(i==2){
                if( j==2 || j==16) printf("* ");
                else printf("  ");
            }
            if(i==3) printf("* ");

            if(i>3 && i<11){
                if(j ==3 || j==15) printf("* ");
                else if((i==10 || i==9) && (j==8 || j==10)) printf("* ");
                else if(i==8 && (j==8 || j==9 || j==10)) printf("* ");
                else if((i==7 || i==6) && (j==5 || j==6 || j==12 || j==13)) printf("* ");
                else printf("  ");    
            }
            if(i==11){
                if(j>=3 && j<=15) printf("* ");
                else printf("  ");
            }
        }
        printf("\n");
    }
    return 0;
}