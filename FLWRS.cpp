#include<stdio.h>
#include<math.h>
//#include<conio.h>
//http://www.spoj.com/problems/FLWRS/ faling on the last test case.plz help
    



int main(){
     long long dp[9999]={0};
    int t=28;
    while(t--){
         long long n,k,i;
         scanf("%lld %lld",&n,&k);
             dp[0]=0;
         dp[1]=1;
         dp[2]=0;
         dp[3]=0;
         dp[4]=2;
      //   printf("Hi");
         for(i=5;i<=n;i++){
          dp[i]=((( ( (i+1)%k )*(dp[i-1]%k) ) -( ( (i-2)%k )*(dp[i-2]%k) ))%k   -(( ( (i-5)%k )*(dp[i-3]%k) )+( ( (i-3)%k )*(dp[i-4]%k) ))%k)%k;
         //dp[i]=(i+1)*dp[i-1]-(i-2)*dp[i-2]-(i-5)*dp[i-3]+(i-3)*dp[i-4];
          }
         printf("%lld\n",dp[n]%k);
         }
    //    getch();
        return 0;
    }                                           
