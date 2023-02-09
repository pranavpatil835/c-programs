//finding the roots of a quadratic equation
#include<stdio.h>
#include<math.h>
int main () {
    float a,b,c,root1,root2,disc,imagep,realp;
    printf("enter a, b , c\n");
    scanf("%f %f %f", &a,&b,&c);
    if(a==0&&b==0&&c==0) {
        printf("roots cannot be determined\n");
    }
    else{
        disc = b*b-4*a*c;
        if(disc>0) {
            root1 = (-b+sqrt(disc))/(2*a);
            root2 = (-b+sqrt(disc))/(2*a);
            printf("roots are real and distinct\n");
            printf("root1 = %f\n", root1);
            printf("root2 = %f\n", root2); 
        }
        else if (disc==0) {
            root1 = -b/(2*a);
            root1=root2;
            printf("roots are real and equal\n");
            printf("root1 = %f\n", root1);
            printf("root2= %f\n", root2);
        }  
        else if(disc<0) {
            realp=-b/(2*a);
            imagep=sqrt(fabs(disc)/(2*a));
            printf("roots are complex\n");
            printf("root1=%f+i%f\n",realp);
            printf("root 2=%f-i%f\n",imagep);
        }
    }
    return 0;
}
