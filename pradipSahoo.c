// #include <stdio.h>
// int sum(int a,int b);

// int main(){
//   int a=20;
//   int b=30;

//   int z=sum(a,b);
//   printf("%d" , z);

//   return 0;
// }

// int sum(int a, int b){
//   int su=a+b;
//   return su;
// }

// # include <stdio.h>
// int even(int a);

// int main(){
//   int a=100;
//   int z=even(a);
//   printf("%d",z);
// }

// int even(int a){
//   for(int i=0; i<a; i++){
//     if ( i % 2 == 0){
//       printf("%d",i);
//     }
//   }

// #include<stdio.h>
// void moldifyvalue(intx){
//   int x=20;
// }
//   int main(){
//   int a=10;
//   moldifyvalue(a);
//   printf("%d",a);
//   return 0;

// }

// #include<stdio.h>
// void modify(int*x){
//   *x=20;
// }
// int main(){
//   int a=10;
//   modify(&a);
//   printf("%d",a);
//   return 0;
// }

// recursion topic

// #include<stdio.h>
// int factorial(int n){
//   if (n==0||n==1){
//     return 1;
//   }
//   else {
//     return n*factorial(n-1);
//   }
// }
//   int main(){
//     int n=5;
//     int result=factorial(n);
//     printf("%d",result);
//     return 0;
//   }

// #include <stdio.h>

// int main() {
    
//     int arr[2][3] = {
//         {10, 20, 30},
//         {40, 50, 60}
//     };

    
//     for (int i = 0; i < 2; i++) {
//         for (int j = 0; j < 3; j++) {
//             printf("Element at arr[%d][%d] = %d\n", i, j, arr[i][j]);
//         }
//     }

//     return 0;
// }


#include <stdio.h>
int main(){
  int x[2][3],i,j,count;
  count = 10;
  for(i=0; i<2; i++){
    for(j=0; j<3; j++){
      x[i][j] =count;
      count +=10;
      
    }
  }
}
