#include <iostream>

using namespace std;

int main()
{

    float arr[77442];
    long k,i;
    char ch[100];
    k=0;

    do{
        cin>>ch;
        arr[k]=atof(ch);
        k++;
     }while(ch[0]=='0');

    cout<<"Array output"<<endl;
    for(i=0;i<k;i++){
        cout<<arr[i]<<endl;
    }

    return 0;
}
