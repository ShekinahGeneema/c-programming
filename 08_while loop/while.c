#include <stdio.h>

int main() {
    int input,i=1;
        while(1){
        printf("\n Enter your number %d:",i);
        scanf("%d",&input);
        if(input>0){
        int product=1;
        int j=1;
        while(j<=input){
            product*=j;
            j++;}
         printf("\n The factorial of a given %d number = %d \n",input,product);
         i++;
        }
        else{
            printf("you have entered the negative value");
            break;
        }
        }

    return 0;
}
