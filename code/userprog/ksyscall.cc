
#ifndef __USERPROG_KSYSCALL_CPP__ 
#define __USERPROG_KSYSCALL_CPP__ 


#include "main.h"  //extern Kernel *kernel;    
		   //#include "kernel.h"  extern Kernel *kernel;
#include "ksyscall.h"


void SysHalt()
{
  kernel->interrupt->Halt();
}


int SysAdd(int op1, int op2)
{
  return op1 + op2;
}

//=======
int SysOSSub(int op1, int op2)
{
  return op1 - op2;
}

int SysOSMul(int op1, int op2)
{
  return op1*op2;
}

int SysOSDiv(int op1, int op2)
{
  return op1/op2;
}


int SysPrint(int input, int length){
	int a=0;
	cout<<"SysPrint length= "<<length<<endl;
	for(int i=0;i<length;i++) {
	        kernel->machine->ReadMem(input+i,1,&a);
	        //synchConsoleOut->PutChar((char)a);
	        cout<<(char)a;
	}
}

int OSPrint(int input,int num){
    int a = 0, i = 0;
    
	while (true) {
	    kernel->machine->ReadMem(input+i,1,&a);
	//synchConsoleOut->PutChar((char)a);
	    if (a == '%') {
    	    kernel->machine->ReadMem(input+i+1,1,&a);
    	    if (a == 'd') {
    	        cout << num;
    	        ++i;
    	    }
	    } else if (a == 0) {
	        break;
	    } else {
	        cout<<(char)a;
	    }
	    ++i;
	}

    //printf(s.c_str(),i);
    //cout<<i<<s<<endl;;
    //kernel->machine->ReadMem(i,1,&a);
    //return 0;
}

#endif

