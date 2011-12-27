#include "syscall.h"
int main(){
    int i;
    for( i=1;i<30;i++){
    OSPrint("%dc000\n",i);
    OSPrint("%dc001\n",i);
    OSPrint("%dc002\n",i);
    OSPrint("%dc003\n",i);
    OSPrint("%dc004\n",i);
    OSPrint("%dc005\n",i);
    OSPrint("%dc006\n",i);
    OSPrint("%dc007\n",i);
    OSPrint("%dc008\n",i);
    OSPrint("%dc009\n",i);
    OSPrint("%dc010\n",i);
    }
    Exit(0);
}
