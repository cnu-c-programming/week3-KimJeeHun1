#include <stdio.h>
#include <stdarg.h>
void my_sum(char alphabet, int count,...){
    va_list ap;
    va_start(ap, count);
    if(alphabet == 'S'){
        for(int i =0;i<count; i++ ){
            printf("%s ", va_arg(ap, char *));
        }
    }
    if(alphabet == 'C'){
        for(int i =0 ; i<count; i++){
            printf("%c",va_arg(ap, int));
        }

    }
    if(alphabet == 'D'){
        int sum = 0;
        for(int i=0; i<count; i++){
            sum += va_arg(ap, int);
        }
        printf("%d", sum);
    }
    va_end(ap);
    printf("\n");}

int main(){
    my_sum('S',2,"Hello","World");
    my_sum('C',3,'C','N','U');
    my_sum('D',4,10,20,30,40);

    return 0;
}
