#include <stdio.h>
#include <stdlib.h>

int main()
{
    // question 1
    int x[10],y,c=0,min,max;
    for(y=0;y<=9;y+=1){
        printf("Enter value %d:",y+1);
        scanf("%d:",&x[y]);
        c=c+x[y];
    }
    min=x[0];
    max=x[0];
    for(y=1;y<=9;y+=1){
            if(x[y]>max){max=x[y];}
            if(x[y]<min){min=x[y];}
    }
    printf("Maximum value = %d\n",max);
    printf("Minimum value = %d\n",min);
    printf("Average value = %.2f\n",(float)c/10.0);
    printf("Reverse oder of values \n");
    for(y=9;y>=0;y-=1){
        printf("Value %d-%d\n",y+1,x[y]);
    }

    // question 2
    {
        int a;
        printf("Enter the size for the Array 1 and Array 2 (Array 1 and Array 2 both should have equal size)-");
        scanf("%d",a);
        int b[a],c[a],d,e,f,g[a],h[a],j;
        printf("\nArray 1\n");
        for(d=0;d<a;d+=1){
                printf("Enter value %d:",d+1);
                scanf("%d:",&b[d]);
        }
        printf("\nArray 2\n");
        for(d=0;d<a;d+=1){
            printf("Enter value %d:",d+1);
            scanf("%d:",&c[d]);
        }

        e=b[0];
        f=c[0];

        for(d=0;d<a;d+=1){
                e=e+b[d];
                f=f+c[d];
        }
        printf("\n Scaler sum of Array 1-%d\n",e);
        printf("\n Scaler sum of Array 2-%d\n",f);
        printf("\n Vector sum of Array 1 and Array 2-");

        for(d=0;d<a;d+=1){
                g[d]=b[d]*c[d];
                printf("%d",g[d]);
        }

        printf("\n Vector product of Array 1 and Array 2-");
        for(d=0;d<a;d+=1){
                h[d]=b[d]*c[d];
                printf("%d",g[d]);
        }
        j=h[0];
        for(d=1;d<a;d+=1){
                j=j+h[d];
                printf("\n Scaler product of Array 1 and Array 2- %d\n",j);
        }
    }


    return 0;
}
