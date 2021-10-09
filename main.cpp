#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <iostream>
using namespace std;

int main() {
    int p;
    cout<<"masukkan nomor(2929 untuk exit)"<<endl;
    cin>>p;
    while(p!=2929){
        for(int i=1;i<p+1;i++)
            cout<<i<<endl;
        cout<<"masukkan nomor(2929 untuk exit)"<<endl;
        cin>>p;
    }

return 0;
}
