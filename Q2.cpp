#include <iostream>
#include <cstring>

using namespace std;

int main(){
    int a,b,c,x,f,sum,num[10]{0,1,2,3,4,5,6,7,8,9},val[10]{6,2,5,5,4,5,6,3,7,6},y[50],j,count,n;

    cout<<"enter number of test cases: "<<endl;
    cin>>n;

    for (int p=0;p<n;p++){
        cout<<"enter values for a,b,c,x: "<<endl;
    cin>>a>>b>>c>>x;

    f=(a*x)+(b*x)+c;

    j=0;
    count=0;

    if (f<10){
        for (int i=0;i<10;i++){
            if (f==num[i]){
                cout<<val[i];
            }
    }
    }

    else{
        while (f!=0){
            y[j]=f%10;
            j++;
            f=f/10;
        }

        for (int k=0;k<j;k++){
            for (int l=0;l<10;l++){
                if (y[k]==num[l]){
                    count+=val[l];
                }
            }
        }
        cout<<count<<endl;
    }
    }

    return 0;
}
