#include <stdio.h>
char *checkeo(int n){
    if(n%2==0){
        return "Even";
    }else{
        return "Odd";
    }
}
int main()
{
    int n;
    scanf("%d",&n);
    printf("%s",checkeo(n));

    return 0;
}

