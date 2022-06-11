# include<stdio.h>

int main(){
    int a,b,c,d,e;
    float add,num,diff;
    printf("\n\n **********COMPUTER WILL TELL THE NUMBER YOU THOUGHT**************\n\n\nThink of any number greater than zero(0)...\nWhen thought, type 1 and press 'Enter'\n");
    while(a!=1){
    scanf("%d",&a);
    if(a==1){
        break;
    }
        printf("\nPlease type 1 and try again\n");
    }
    if(a==1){
        printf("\nMultiply the number by 2.\nWhen done, type 1 and press 'Enter'\n");
    }
    while(b!=1){
    scanf("%d",&b);
    if(b==1){
        break;
    }
        printf("\nPlease type 1 and try again\n");
    }
    if(b==1){
        printf("\nEnter any number which you would like to add in your result\n");
        scanf("%f",&add);
    }
    printf("\nEnter 1 to go further\n");
    while(c!=1){
    scanf("%d",&c);
    if(c==1){
        break;
    }
        printf("\nPlease type 1 and try again\n");
    }
    if(c==1){
        printf("\nDivide the result by 2.\nWhen done, type 1 and press 'Enter'\n");
    }
    while(d!=1){
    scanf("%d",&d);
    if(d==1){
        break;
    }
        printf("\nPlease type 1 and try again\n");
    }
    if(d==1){
        printf("\nSubtract the number you thought in the beginning from your current result.\nWhen done, type 1 and press 'Enter'\n");
    }
    while(e!=1){
    scanf("%d",&e);
    if(e==1){
        break;
    }
        printf("\nPlease type 1 and try again\n");
    }
    if(e==1){
        printf("\nHow much more(+) or less(-) is the result from the original number that you thought?\nFor e.g If you thought 5 in the beginning and your current answer is 3,\nthen enter -2 and if your current answer is 9,\nthen enter 4\n");
    scanf("%f",&diff);
    }
    num=((add/2)-diff);

    printf("\n *** THE NUMBER YOU THOUGHT WAS %.2f ***\n",num);
    return 0;
}