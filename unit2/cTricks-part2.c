#include <stdio.h>
#include <string.h>
int *m(){
    static int a[] ={5,8,10,12};
    return a;
}
/*
//compile error
void fun(int &i,int &j){
    *i=*i* *i;
    *j =*j* *j;
}
*/
int count (const char *s){
        const char *p =s;
    while(*(++s));
    return (s-p);
}
/*
//compile error
void foo(const *int *p){
    int j = **p * **p;
    **p=j;
    printf("%d",**p);
}
*/
const char *cal(){
    return "causal call";
}
float f(int,float);

int main(int argc, char const *argv[])
{
    int *ptr,a=64;
    ptr=&a;
    *ptr+=4;
    printf("1.%d %d\n",*ptr,a);

    int arr[4]={1,2,3,4};
    int*p=arr+3;
    printf("2. %d>%d\n",p[-3],arr[*p]);

    int *k=m();
    printf("hello ");
    printf("%d\n",k[0]);

    //int i=2,j=5;
    //fun(*i,*j);
    const char *ss="mohamed"; 
    printf("%ds\n",count(ss));

    char *s="Hello-W";
    int i =10;
    printf("%*s",i,s);

    i=1;
    if(i= !i)printf("ggg");
    else if(i=!0) printf("nj");

    int num=0x31;
    int *cptr=&num;
    printf("\n%c\n",*cptr);
    //62
    /*//compile error
    const int *pp;
    int aa =10;
    pp=&aa;
    *pp=20;
    printf("62.%d\n",*pp);
    */
   //64
   /*
   *cal()='c';
   */
  //65
  /*
  char memory[10]="malloc";
  char const *p =memory;
  *p='c';
  printf("%s\n",memory);
*/
//44
int a1;
a1=f(10,3.14);
printf("44.%d\n",a1);



}
float f(int aa, float bb){
    return ((float)aa+bb);
}