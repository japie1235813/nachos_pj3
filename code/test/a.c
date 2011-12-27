#include "syscall.h"

int main(){
    int i;
    for( i=1;i<30;i++){
        OSPrint("%da000\n",i);
        OSPrint("%da001\n",i);
        OSPrint("%da002\n",i);
        OSPrint("%da003\n",i);
        OSPrint("%da004\n",i);
        OSPrint("%da005\n",i);
        OSPrint("%da006\n",i);
        OSPrint("%da007\n",i);
        OSPrint("%da008\n",i);
        OSPrint("%da009\n",i);
        OSPrint("%da010\n",i);
    }
}
