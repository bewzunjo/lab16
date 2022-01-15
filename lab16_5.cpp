#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void shuffle(int *,int *, int *, int *); 

int main(){
	int a = 50, b = 100, c = 500, d = 1000;
	
	srand(time(0));	
	
	for(int i = 0;i < 10;i++){
	    shuffle(&a,&b,&c,&d); 
	    cout << a << " " << b << " " << c << " " << d << "\n";
	}
	
	return 0;
}

void shuffle(int *k,int *l,int *m,int *n){
int e[4];
int f[4];
int g = 0, h = 0, i = 0, j = 0;
e[0] = *k, e[1] = *l, e[2] = *m, e[3] = *n;
g = rand()%4;
f[0] = e[g];
e[g] = 0;
 do{
	 h = rand()%4;
 }while(e[h] == 0);
 f[1] = e[h];
 e[h] = 0;
 do{
	 i = rand()%4;
 }while(e[i] == 0);
 f[2] = e[i];
 e[i] = 0;
do{
	j = rand()%4;
}while(e[j] == 0);
f[3] = e[j];

*k = f[0], *l = f[1], *m = f[2], *n = f[3];

}


