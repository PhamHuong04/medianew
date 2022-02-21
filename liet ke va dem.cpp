#include <stdio.h>
#define ll long long
#include <math.h>
int snt (int n){
    if (n<2) return 0;
    for (ll i=2;i<=sqrt(n);i++)
        if (n%i==0) return 0;
    return 1;
}
int ktso(ll n){
    while (n>0){
        int r= n%10;
        if (snt(r)==0) return 0;
        n/=10;
    }
    return 1;
}
main (){
    ll i=0;
    ll a[50000];
    ll b[1000000000]={0};
    while (i<50000){
        scanf ("%lld",&a[i]);
        if (a[i]==0) break;
        if (ktso(a[i])) b[a[i]]++;
        i++;
    }
    for (ll j=0;j<i;i++){
        if (b[a[j]] >0) {
            printf ("%lld %lld\n",a[j],b[a[j]]);
            b[a[j]]=0;
        }
    }
    return 0;
}

