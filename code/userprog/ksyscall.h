/**************************************************************
 *
 * userprog/ksyscall.h
 *
 * Kernel interface for systemcalls 
 *
 * by Marcus Voelp  (c) Universitaet Karlsruhe
 *
 **************************************************************/

#ifndef __USERPROG_KSYSCALL_H__ 
#define __USERPROG_KSYSCALL_H__ 

#include "kernel.h"
//#include "synchconsole.h"



void SysHalt();


int SysAdd(int op1, int op2);
//=======
int SysOSSub(int op1, int op2);
int SysOSMul(int op1, int op2);
int SysOSDiv(int op1, int op2);
int SysPrint(int input, int length);
int OSPrint(int input,int length);

#endif /* ! __USERPROG_KSYSCALL_H__ */
