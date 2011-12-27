#include "syscall.h"
int main(){
int i;
for( i=1;i<30;i++){
    OSPrint("%db000\n",i);
    OSPrint("%db001\n",i);
    OSPrint("%db002\n",i);
    OSPrint("%db003\n",i);
    OSPrint("%db004\n",i);
    OSPrint("%db005\n",i);
    OSPrint("%db006\n",i);
    OSPrint("%db007\n",i);
    OSPrint("%db008\n",i);
    OSPrint("%db009\n",i);
    OSPrint("%db010\n",i);
    }
}
