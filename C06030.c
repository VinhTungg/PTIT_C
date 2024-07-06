#include<stdio.h>
#include<math.h>
#include<string.h>

#define foru(i,a,b) for(int i=a;i<=b;++i)
#define ford(i,b,a) for(int i=b;i>=a;--i)
#define ll long long
#define fill(a,b) memset(a,b,sizeof(a))

struct vanban{
	char s[10005];
	int cnt;
};

typedef struct vanban vb;
vb a[1005];
int max = -1e9;
char c[1005],b[60][60];
int dem = 0,sz = 0;

int check(char c[]){
	int d = strlen(c);
	if(d > max) max = d;
}

int main(){
	while(scanf("%s",c) != -1){
		check(c);
		strcpy(b[dem++],c);
	}
	for(int i=0;i<dem;i++){
		int len = strlen(b[i]);
		if(len == max){
			if(!sz){
				strcpy(a[sz].s,b[i]);
				a[sz].cnt++;
				++sz;
			}else{
				int kt = 0;
				for(int j=0;j<sz;++j){
					if(strcmp(a[j].s,b[i])==0){
						++a[j].cnt;
						kt = 1;
					}
				}
				if(!kt){
					strcpy(a[sz].s,b[i]);
					a[sz].cnt++;
					++sz;
				}
			}
		}
	}
	for(int i=0;i<sz;++i) printf("%s %d %d\n",a[i].s,max,a[i].cnt);
}

