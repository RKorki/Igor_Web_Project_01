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


int obliczPierwiastek(int val){
    int pierwiastek = (int) sqrt(val);
    return pierwiastek;
}




int main(){
    int tab[5]={1838947883,1004098109,851260967,809509261,669266311};
    for(int i = 0; i < 5 ; i++){
        int squareRoot = obliczPierwiastek(tab[i]);
        bool flag = czyPierwsza(squareRoot);
        if(flag == false){
            cout<<tab[i]<<" nie sklada sie z liczb pierwszych bo pierwiastek wynosi "
            << squareRoot <<endl;
        }
        else{
            cout<<tab[i]
            <<" sklada sie z liczb pierwszych bo pierwiastek jest liczba pierwsza bo wynosi " 
            << squareRoot <<endl;
        }
    }
    return 0;
}