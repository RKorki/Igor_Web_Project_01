#include <iostream>
#include<cmath>

using namespace std;


bool czyPierwsza(int val){
    if(val < 2){
        return false;
    }
    for (int i = 2; i*i<=val;i++){
        if(val%i==0){
            return false;
        }
    }
    return true;
}


int czyZPierszych(int val){
    int pierwiastek = (int) sqrt(val);
    if(czyPierwsza(pierwiastek)){
        return pierwiastek;
    }
    return 0;
}




int main(){
    int tab[5]={1838947883,1004098109,851260967,809509261,669266311};
    for(int i = 0; i < 5 ; i++){
        int val = czyZPierszych(tab[i]);
        if(val == 0){
            cout<<tab[i]<<" nie sklada sie z liczb pierwszych "<<endl;
        }
        else{
            cout<<tab[i]<<" sklada sie z liczb pierwszych bo pierwiastek = " << val<<endl;
        }
    }
    return 0;
}






