#include <stdio.h>
  

    void  print_fabonacci(int n){
        //checking the number for fabbonacci series
        printf("The fabiniko series are :");
        int i,a=0,b=1;
        for (i = 0;i<n;i++ ){
            //programmin the fabiniko algo
            printf("%d ",a);
            int c = a +b;
            a = b;
            b = c;

        }
    }


int main()
{
int num;
printf("Enter the number for fabbonacci series:");
scanf("%d", &num);
print_fabonacci(num);

    return 0;
}