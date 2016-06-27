/* --------------------------------------------------------------------------------
 #
 #	4DPlugin.h
 #	source generated by 4D Plugin Wizard
 #	Project : Calendar Watch
 #	author : miyako
 #	2016/06/27
 #
 # --------------------------------------------------------------------------------*/

#include "sqlite3.h"

// --- Calendars
void Calendar_GET_LIST(sLONG_PTR *pResult, PackagePtr pParams);
void Calendar_ADD_TO_WATCH(sLONG_PTR *pResult, PackagePtr pParams);
void Calendar_REMOVE_FROM_WATCH(sLONG_PTR *pResult, PackagePtr pParams);

void listenerInit(void);
void listenerLoop(void);
void listenerLoopStart(void);
void listenerLoopFinish(void);
void listenerLoopExecute(void);
void listenerLoopExecuteMethod(void);

typedef PA_long32 process_number_t;
typedef PA_long32 process_stack_size_t;
typedef PA_long32 method_id_t;
typedef PA_Unichar* process_name_t;

void onStartup();
void onCloseProcess();
bool isProcessOnExit();

typedef enum
{
	
	notification_create = 0,
	notification_update = 1,
	notification_delete = 2
	
} notification_t;