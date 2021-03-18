//#define OS_LOWEST_PRIO  	       30

//#define OS_TASK_STAT_EN          1
//#define OS_TICK_STEP_EN          1

//#define OS_TASK_CREATE_EXT_EN    1
//#define OS_ARG_CHK_EN            1

//#define OS_MAX_EVENTS            10
//#define OS_Q_EN									 1
//#define OS_FLAG_EN               1
//#define OS_MBOX_EN               1

//#define OS_SEM_EN                0

//#define OS_CRITICAL_METHOD       3



//#if OS_CRITICAL_METHOD==1
//	#define OS_ENTER_CRITICAL()		 (Cli())
//	#define OS_EXIT_CRITICAL()		 (Sti())
//#elseif OS_CRITICAL_METHOD==2
//	#define OS_ENTER_CRITICAL()    (PushAndCli())
//	#define OS_EXIT_CRITICAL()     (Pop())
//#elseif OS_CRITICAL_METHOD==3
//	#define OS_ENTER_CRITICAL()    (cpu_sr=OSCPUSaveSR())
//	#define OS_EXIT_CRITICAL()     (OSCPURestoreSR(cpu_sr))
//#endif
