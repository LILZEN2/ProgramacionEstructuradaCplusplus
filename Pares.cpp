#include<iostream>

using namespace std;

int pares(int i);

int main(){

    int signo=1, j=1,resultado;
   
    for(int i=1;i<=10;i++){
        resultado=pares(i)*j;
        signo=signo+1; //Posicion dos
        if(signo>2){
            j= j*-1;
	        signo = 1;
		}
        cout<<"["<<resultado<<"]";
    } 
}
int pares(int i){
    int pares=0,j;

    for(j=1;j<=i;j++){
    pares=pares+2;
    }
    return pares;
}