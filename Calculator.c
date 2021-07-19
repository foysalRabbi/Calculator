//scientific calculator for 29 function

#include<stdio.h>
#include<math.h>
#define PI 3.14159265

float add(float a,float b){
   return a+b;
}

float sub(float a,float b){
   return a-b;
}

float multi(float a,float b){
   return a*b;
}

float div(float a,float b){
   return a/b;
}

int find_remainder(int a, int b){
      int remainder;
      remainder = a % b;
     return remainder;
}


int fact(int n){
   return n==0||n==1 ? 1 : n*fact(n-1);
}

int fibo(int n){
   return n==0||n==1 ? n : fibo(n-1)+fibo(n-2);
}

int power(int x,int y){
   return y==0 ? 1 : x*power(x,y-1);
}

void quad(float a,float b,float c){
    float d,x1,x2;
    d=b*b-4*a*c;
    if(d<0)
        printf("The roots are imaginary.\n");
    else{
        x1=(-b+sqrt(d))/(2*a);
        x2=(-b-sqrt(d))/(2*a);
        printf("x1=%f \n x2=%f ",x1,x2);
    }
}

double exponential(int a){
   return  exp(a);
}

double ln(float a){
   return  log(a);
}

double Logten(float a){
   return  log10(a);
}

int square(int a){
   return sqrt(a);
}

int absulate(int a){
   return fabs(a);
}
///////////////////////////////////////////

void  cosInverse(){
   double x, angle;
    printf("Enter a number : ");
    scanf("%lf",&x);
   angle = acos(x) *180.0 / PI ;
   printf("The arc cosine of %lf is %lf degrees", x, angle);
}

void sinInverse(){
   double x, angle;
    printf("Enter a number : ");
   scanf("%lf",&x);
   angle = asin(x)*180.0 / PI ;
   printf("The arc sine of %lf is %lf degrees", x, angle);
}


void tanInverse(){
   double x, angle;
    printf("Enter a number : ");
   scanf("%lf",&x);
   angle = atan (x)*180/PI;
   printf("The arc tangent of %lf is %lf degrees", x, angle);
}

void cosValue(){
    double x, ret, val;
    printf("Enter a number : ");
    val = PI / 180.0;
   scanf("%lf",&x);
   ret = cos( x*val );
   printf("The cosine of %lf is %lf degrees\n", x, ret);
}

void sinValue(){
     double x, ret, val;
      printf("Enter a number : ");
      scanf("%lf",&x);
     val = PI / 180.0;
    ret = sin( x*val );
    printf("The sine of %lf is %lf degrees\n", x, ret);
}

void tanValue(){
    double x, ret, val;
    printf("Enter a number : ");
    scanf("%lf",&x);
    val = PI / 180.0;
    ret = tan( x*val );
    printf("The cosine of %lf is %lf degrees\n", x, ret);

}

void decimal_To_binary(){

 long int decnum, rem, quot;
 int binnum[100], i=1, j;
 printf("Enter any decimal number : ");
 scanf("%ld",&decnum);
 quot=decnum;
 while(quot!=0){
  binnum[i++]=quot%2;
  quot=quot/2;
 }
 printf("Equivalent binary value of %d :\n",decnum);
 for(j=i-1; j>0; j--)
 {
  printf("%d",binnum[j]);
 }

}

void binary_To_decimal(){

 long int binnum, decnum=0, i=1, rem;
 printf("Enter any binary number : ");
 scanf("%ld",&binnum);
 while(binnum!=0){
  rem=binnum%10;
  decnum=decnum+rem*i;
  i=i*2;
  binnum=binnum/10;
 }
 printf("Equivalent decimal value = %ld",decnum);

}

void decimal_To_ocatal()
{
 long int decnum, rem, quot;
 int i=1, j, octnum[100];
 printf("Enter any decimal number : ");
 scanf("%ld",&decnum);
 quot=decnum;
 while(quot!=0)
 {
  octnum[i++]=quot%8;
  quot=quot/8;
 }
 printf("Equivalent octal value of %d is : \n",decnum);
 for(j=i-1; j>0; j--)
 {
  printf("%d",octnum[j]);
 }
}

void octal_To_decimal()
{

 long int octnum, decnum=0;
 int i=0;
 printf("Enter any Octal Number : ");
 scanf("%ld",&octnum);
 while(octnum!=0)
 {
  decnum = decnum + (octnum%10) * pow(8, i);
  i++;
  octnum=octnum/10;
 }
 printf("Equivalent Decimal Value = %ld",decnum);

}

void decimal_To_hexa()
{

 long int decnum, rem, quot;
 char hexdecnum[100];
 int i=1, j, temp;
 printf("Enter any decimal number : ");
 scanf("%ld",&decnum);
 quot=decnum;
 while(quot!=0)
 {
  temp=quot%16;
  // to convert integer into character
  if(temp<10)
  {
   temp=temp+48;
  }
  else
  {
   temp=temp+55;
  }
  hexdecnum[i++]=temp;
  quot=quot/16;
 }
 printf("Equivalent hexadecimal value of %d is : \n",decnum);
 for(j=i-1; j>0; j--)
 {
  printf("%c",hexdecnum[j]);
 }

}



void binary_To_octal()
{
 long int binnum, rem, quot;
 int octnum[100], i=1, j;
 printf("Enter any binary number : ");
 scanf("%ld",&binnum);
 quot=binnum;
 while(quot!=0)
 {
  octnum[i++]=quot%8;
  quot=quot/8;
 }
 printf("Equivalent octal value of %d :\n",binnum);
 for(j=i-1; j>0; j--)
 {
  printf("%d",octnum[j]);
 }

}

void octal_To_binary()
{
 long int i=0;
 char octnum[1000];
 printf("Enter any Octal Number : ");
 scanf("%s",octnum);
 printf("Equivalent Binary Value = ");
 while(octnum[i])
 {
  switch(octnum[i])
  {
   case '0' : printf("000");
    break;
   case '1' : printf("001");
    break;
   case '2' : printf("010");
    break;
   case '3' : printf("011");
    break;
   case '4' : printf("100");
    break;
   case '5' : printf("101");
    break;
   case '6' : printf("110");
    break;
   case '7' : printf("111");
    break;
   default : printf("\nInvalid Octal Digit %c",octnum[i]);
    break;
  }
  i++;
 }

}


int main(){

    int num,n,r;
    int p,q;
    float a,b,x,y,z;
    printf("1 for addition.\n");
    printf("2 for subtraction.\n");
    printf("3 for multipolictaion.\n");
    printf("4 for division.\n");
    printf("5 for reminder.\n");
    printf("6 for factorial.\n");
    printf("7 for permutation.\n");
    printf("8 for combination.\n");
    printf("9 for fibonacci.\n");
    printf("10 for quadratic equation.\n");
    printf("11 for power x^y.\n");
    printf("12 for exponential.\n");
    printf("13 for log.\n");
    printf("14 for log base 10.\n");
    printf("15 for square.\n");
    printf("16 for absulate.\n\n");

    printf("17 for cos inverse.\n\n");
    printf("18 for sin inverse.\n\n");
    printf("19 for tan inverse.\n\n");
    printf("20 for cos value.\n\n");
    printf("21 for sin value.\n\n");
    printf("22 for tan value.\n\n");

    printf("23 for decimat to binary .\n\n");
    printf("24 for binary to decimal .\n\n");
    printf("25 for decimal to octal .\n\n");
    printf("26 for octal to decimal .\n\n");
    printf("27 for decimal to hexa .\n\n");
    printf("28 for biray to octal  .\n\n");
    printf("29 for octal to binary .\n\n");


    while(1){

    printf("\n\nEnter the switch input: ");
    scanf("%d",&num);
    printf("\n\n");
    switch(num){

    case 1:
        printf("Enter two number: ");
        scanf("%f%f",&a,&b);
        printf("Addition=%f",add(a,b));
        break;

    case 2:
        printf("Enter two number: ");
        scanf("%f%f",&a,&b);
        printf("Subtraction=%f",sub(a,b));
        break;

    case 3:
        printf("Enter two number: ");
        scanf("%f%f",&a,&b);
        printf("Multipolication=%f",multi(a,b));
        break;

    case 4:
        printf("Enter two number: ");
        scanf("%f%f",&a,&b);
        printf("Division=%f",div(a,b));
        break;

    case 5:
        printf("Enter two number: ");
        scanf("%d%d",&p,&q);
        printf("Reminder=%d",find_remainder(p,q));
        break;

    case 6:
        printf("Enter a number: ");
        scanf("%d",&n);
        printf("Factorial value=%d",fact(n));
        break;

    case 7:
        printf("Enter two number: ");
        scanf("%d%d",&n,&r);
        printf("permutation=%d",fact(n)/fact(n-r));
        break;

    case 8:
        printf("Enter two number: ");
       scanf("%d%d",&n,&r);
        printf("Combination=%d",fact(n)/(fact(r)*fact(n-r)));
        break;

    case 9:
        printf("Enter a number: ");
        scanf("%d",&n);
        printf("nth fibonacci=%d",fibo(n));
        break;

    case 10:
        printf("Enter three number: ");
        scanf("%f%f%f",&x,&y,&z);
        quad(x,y,z);
        break;

    case 11:
        printf("Enter two number: ");
        scanf("%d%d",&p,&q);
        printf("Power=%d",power(p,q));
        break;

    case 12:
        printf("Enter a number: ");
        scanf("%d",&p);
        printf("Exp=%lf",exponential(p));
        break;

    case 13:
        printf("Enter a number: ");
        scanf("%lf",&x);
        printf("Exp=%lf",ln(x));
        break;

   case 14:
        printf("Enter a number: ");
        scanf("%lf",&x);
        printf("log10=%lf",Logten(x));
        break;

    case 15:
        printf("Enter a number: ");
        int x1;
        scanf("%d",&x1);
        printf("Square root=%d",square(x1));
        break;

      case 16:
        printf("Enter a number: ");
        int x2;
        scanf("%d",&x2);
        printf("Absulate value=%d",absulate(x2));
       break;

      case 17:
          cosInverse();
          break;

         case 18:
             sinInverse();
             break;

         case 19:
             tanInverse();
             break;

         case 20:
             cosValue();
             break;
         case 21:
             sinValue();

        break;

         case 22:
             tanValue();
             break;

         case 23:
             decimal_To_binary();
             break;

         case 24:
             binary_To_decimal();
             break;

         case 25 :
             decimal_To_ocatal();
             break;

        case 26 :
            octal_To_decimal();

            break;

        case 27 :
            decimal_To_hexa();
            break;

        case 28 :
            binary_To_octal();
            break;

        case 29 :
            octal_To_binary();
            break;



    default:
        printf("Input must be take in 1 to 29.");
        break;

}
    }

return 0;

}

