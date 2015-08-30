#include<stdio.h>
//#include<conio.h>
#include<string.h>
long int max(long int a,long int b){
     if(a>b)
      return a;
      else return b;
}

char arr[99999];
int main(){
memset(arr,'0',sizeof(arr));
  long int dp[10]={0};
char x;
//printf("%c",arr[0]);
 scanf("%c",&x);
  long int c=0;
while (x>='0'&& x<='9') {
  arr[c]=x;
  scanf("%c", &x);
  ++c;
  
}
//printf("%ld\n",c);
  int f8=0,f7=0,f1=0,f0=0,i;
  for(i=0;i<c;i++){
    if(arr[i]=='1'){
     f1=1;
     dp[1]++;
    }
    else if(arr[i]=='8'){
         if(f1==1 &&f8==0){
              dp[8]=dp[1]+1;
              f8=1;    
         }
         else if(f1==1 &&f8==1){
              dp[8]=max(dp[8],dp[1])+1;
         }      
    } 
    
    else if(arr[i]=='0'){
         if(f1==1 &&f8==1 &&f0==0){
              dp[0]=dp[8]+1;
              f0=1;    
         }
         else if(f1==1 &&f8==1 &&f0==1){
              dp[0]=max(dp[0],dp[8])+1;
         }      
    }                                   
   
   else if(arr[i]=='7'){
       // printf("HI\n");
         if(f1==1 &&f8==1 &&f0==1&&f7==0){
              dp[7]=dp[0]+1;
              f7=1;   
             // printf("hi\n"); 
         }
         else if(f1==1 &&f8==1 &&f0==1 &&f7==1){
              dp[7]=max(dp[0],dp[7])+1;
         }      
  
    }
      //printf("%ld %ld %ld %ld\n",dp[7],dp[0],dp[8],dp[1]);                                   
} 
   printf("%ld\n",dp[7]);
  // getch();
   return 0;
} 
