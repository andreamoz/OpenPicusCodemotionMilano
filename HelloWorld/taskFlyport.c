#include "taskFlyport.h"

void FlyportTask()
{
	// Flyport connects to default network
	WFConnect(WF_DEFAULT);
	while(WFGetStat() != CONNECTED);
	vTaskDelay(25);
	UARTWrite(1,"Flyport Wi-fi G connected...hello world!\r\n");
	
	while(1)
	{
		//	Main user's firmware loop
	}
}




