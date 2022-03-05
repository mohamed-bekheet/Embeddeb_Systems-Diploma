#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    //int numbers[] ={2,5,5,1}//array of integers access elements by indexing
    char *names[] ={"mom","mn","njkn","njnmjnv","k"};
    int i;
    char *t;//t is a pointer to char -or- t is a string 
    t=names[3];
    names[3]=names[4];
    names[4]= t;
    //for(i=0;i<=4;i++)printf("%s ",names[i]);
    char p[]="%d\n";
    p[1]='r';
    printf(p,65);
    printf("h");
    printf("\n");
    printf("%c\n","adcdefgh"[4]);
    char a[11]="The african queen";
    printf("%s",a);//note! S vs s
    int arr[][4]={{1,2,3},{1,2,3},{1,2,3},{1,2,3}};

    char* str1="Mohm";
    char* str2 ="MohaM";
    if(str1[0]==str2[0])printf("equal\n");
    else printf("b\n");

    printf("%s\n",strchr(str1,'m'));
    printf("%s\n",strchr(str1,'M'));
    printf("%s\n",strrchr(str1,'m'));
    printf("%s\n",strchr(str2,'M'));
    
    printf("%s\n",str1);
    printf("%s\n",str2);

    int const SIZE = 5;
    double valu[SIZE];

    int i0=sizeof(2.4);//will be handeled as a double
    int i1=sizeof((float)2.4);//will be handeled as a float
    printf("%d\n",i0);
    printf("%d\n",i1);

    int i_operator = 8<10&1&&10>8; // >,< - & - &&
    printf("%d\n",i_operator);

    int i_operator1 = 155; // 
    printf("%d %d %d\n",(i_operator1,++i_operator1,i_operator1++));
    
    i_operator1 = 155; // 
    printf("%d %d %d\n",i_operator1,++i_operator1,i_operator1++);




    signed char c = 125;
    c=125+10;
    printf("%d\n",c);

    int cc = -4;
    cc=cc<<3;
    printf("%d\n",cc);

    c=250;
    int expr;
    //expr = c+!c+~c+ ++c;
    expr = c;
    printf("%d\n",expr);

    c=167;
    expr = !c+ -c+ ~c+ ++c;
    expr = c;
    printf("%d\n",expr);
    

    int a1,b,c1,d,e,f,g,h,k,x;
    a1=2,b=3,c1=1,d=-5,e=1,f=9;
    printf("d %d\n",b-a1-c1||(b+a1+d)*c1&&e-f%3);

    a1=7,b=20,c1=-4;
    x=a1- -(b++ +c1);
    printf("x=%d",x);

    int b2=0x8000;
    short int b3=0x8000;
    printf("%x %x",b2,b3);
    return 0;
}
