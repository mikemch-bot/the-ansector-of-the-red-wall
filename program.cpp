#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;

char str[10005];
int tot=0;

int main(){
    int i,j;
    freopen("script.txt","r",stdin);
    freopen("output.txt","w",stdout);
    for(i=0;i<1000;i++){
        cin>>str;
        if(str[strlen(str)-1]==':'){
            str[strlen(str)-1]='\0';
            cout<<"\n\\item["<<str<<".]"<<endl;
        }
        else
            cout<<str<<" ";
    }
    return 0;
}
