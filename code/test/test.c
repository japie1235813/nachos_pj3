	//#include <stdio.h>
#include "syscall.h"

int main(){
	int i,j,k,m,d,res;
	j=OSAdd(20,10);
	//k=OSSub(20,10);
	//res=OSAdd(j,k);	
	//m=OSMul(3,4);
	//d=OSDiv(5,2);
	Print( "Hello, I am b97901084\n", 34 );
	
	//for(i=0;i<10;i++){
	//Print( "Hello, I am b97901084\n", 34 );
	//}
	for(i=1;i<30;i++){
        OSPrint("%da000\n",i);
        /*OSPrint(“%da001\n”,i);
        OSPrint(“%da002\n”,i);
        OSPrint(“%da003\n”,i);
        OSPrint(“%da004\n”,i);
        OSPrint(“%da005\n”,i);
        OSPrint(“%da006\n”,i);
        OSPrint(“%da007\n”,i);
        OSPrint(“%da008\n”,i);
        OSPrint(“%da009\n”,i);
        OSPrint(“%da010\n”,i);*/
    }
	
	Halt();

}


