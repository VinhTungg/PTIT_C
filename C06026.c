#include<stdio.h>
#include<math.h>
#include<string.h>

#define foru(i,a,b) for(int i=a;i<=b;++i)
#define ford(i,b,a) for(int i=b;i>=a;--i)
#define ll long long
#define fill(a,b) memset(a,b,sizeof(a))

struct dt{
    char s[105];
    int cnt;
};

typedef struct dt dt;
char s1[105];
dt a[1005];
int sz,maxl,kt;

int palin(char s[105]){
    int n=strlen(s);
    foru(i,0,n/2)
        if (s[i]!=s[n-i-1]) return 0;
    return 1;
}

int main(){
    sz=0;
    maxl=0;
    while(scanf("%s",s1)!=-1){
        if (palin(s1)){
            if (maxl<strlen(s1)) maxl=strlen(s1);
            if (!sz){
                strcpy(a[sz].s,s1);
                a[sz].cnt=1;
                sz++;
            }
            else{
                kt=0;
                foru(i,0,sz-1)
                    if (strcmp(a[i].s,s1)==0){
                        a[i].cnt++;
                        kt=1;
                        break;
                    }
                if (!kt){
                    strcpy(a[sz].s,s1);
                    a[sz].cnt=1;
                    sz++;
                }
            }
        }
    }
    foru(i,0,sz-1)
        if (strlen(a[i].s)==maxl) printf("%s %d\n",a[i].s,a[i].cnt);
}
