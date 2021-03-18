#include "os_cpu.h"
#include "stdio.h"
#include "ucos_ii.h"

void  OSInitHookBegin (void)
{

}

void  OSInitHookEnd (void)
{

}

void  OSTaskCreateHook (OS_TCB *ptcb)
{

}

void  OSTaskDelHook (OS_TCB *ptcb)
{

}

void  OSTaskIdleHook (void)
{

}

void  OSTaskStatHook (void)
{

}

OS_STK* OSTaskStkInit (void (*task)(void *p_arg), void *p_arg, OS_STK *ptos, INT16U opt)
{
    OS_STK* stk=NULL;
    return stk; 
}

void  OSTaskSwHook (void)
{

}

void  OSTCBInitHook (OS_TCB *ptcb)
{

}

void  OSTimeTickHook (void)
{

}

void OSTaskReturnHook(OS_TCB *ptcb)
{

}


