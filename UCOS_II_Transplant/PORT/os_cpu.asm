        EXPORT  OSStartHighRdy               
        EXPORT  OSCtxSw
        EXPORT  OSIntCtxSw
		EXPORT  OS_CPU_SR_Save
    	EXPORT  OS_CPU_SR_Restore    
     
NVIC_INT_CTRL   	EQU     0xE000ED04  ;
NVIC_SYSPRI2    	EQU     0xE000ED22  ;
NVIC_PENDSV_PRI 	EQU         0xFFFF  ;
                                        ;
NVIC_PENDSVSET  	EQU     0x10000000  ;

	PRESERVE8 
		
		AREA    |.text|, CODE, READONLY
        THUMB 
	
OS_CPU_SR_Save
    NOP

OS_CPU_SR_Restore
    NOP

OSStartHighRdy
    NOP

OSCtxSw
    NOP

OSIntCtxSw
    NOP
	end