/**************************************************************
* Class: CSC-615-01 Spring 2020
*
* Name: Aaron Schlichting
* Github Name: Lobogato  
* Student ID: 917930213
* Github ID: 51682665
*
* Name: 
* Github Name:  
* Student ID: 
* Github ID: 
*
* Name: 
* Github Name:  
* Student ID: 
* Github ID: 
*
* Name: 
* Github Name:  
* Student ID: 
* Github ID: 
*
* Project: Group Project
*
* File: task.c
*
* Description:    
*
**************************************************************/

#include <softPwm.h>
#include <stdio.h>
#include <string.h>
#include <errno.h>
#include <stdlib.h>
#include <wiringPi.h>
#include <pthread.h>
#include "encoder.h"

float encoderCount1 = 0;
float encoderCount2 = 0;
float encoderCount3 = 0;
float encoderCount4 = 0;
float encoder1 = 0;
float encoder2 = 0;
float encoder3 = 0;
float encoder4 = 0;

int spd = 0;
int deg = 0;

int setup(void) 
{
  	if (wiringPiISR (ENCODER1, INT_EDGE_RISING, &interrupt_one) < 0)
  	{
    		fprintf (stderr, "Unable to setup ISR: %s\n", strerror (errno)) ;
    		return 1;
  	}

  	if (wiringPiISR (ENCODER2, INT_EDGE_RISING, &interrupt_two) < 0)
  	{
    		fprintf (stderr, "Unable to setup ISR: %s\n", strerror (errno)) ;
    		return 1;
  	}
  	if (wiringPiISR (ENCODER3, INT_EDGE_RISING, &interrupt_three) < 0)
  	{
    		fprintf (stderr, "Unable to setup ISR: %s\n", strerror (errno)) ;
    		return 1;
  	}
  	if (wiringPiISR (ENCODER4, INT_EDGE_RISING, &interrupt_four) < 0)
  	{
    		fprintf (stderr, "Unable to setup ISR: %s\n", strerror (errno)) ;
    		return 1;
  	}

        pthread_t thread_id1, thread_id2, thread_id3, thread_id4, thread_id5;

	int status;

	status = pthread_create(&thread_id1, NULL, &get_cm_per_sec_1, NULL);
	if(status < 0)
	{
		printf("Unable to create pthread: [%s]\n", strerror (status));
		return 1;
	}

	status = pthread_create(&thread_id2, NULL, &get_cm_per_sec_2, NULL);
	if(status < 0)
	{
		printf("Unable to create pthread: [%s]\n", strerror (status));
		return 1;
	}

	status = pthread_create(&thread_id3, NULL, &get_cm_per_sec_3, NULL);
	if(status < 0)
	{
		printf("Unable to create pthread: [%s]\n", strerror (status));
		return 1;
	}

	status = pthread_create(&thread_id4, NULL, &get_cm_per_sec_4, NULL);
	if(status < 0)
	{
		printf("Unable to create pthread: [%s]\n", strerror (status));
		return 1;
	}

	status = pthread_create(&thread_id5, NULL, &print_cm_all, NULL);
	if(status < 0)
	{
		printf("Unable to create pthread: [%s]\n", strerror (status));
		return 1;
	}
}

void interrupt_one (void)
{
  	++encoderCount1;
}

void interrupt_two (void)
{
  	++encoderCount2;
}

void interrupt_three (void)
{
  	++encoderCount3;
}

void interrupt_four (void)
{
  	++encoderCount4;
}

void *get_cm_per_sec_1 (void *ptr)
{	
	while(1)
	{
		float count = encoderCount1;
		delay(STALL);
		count = encoderCount1 - count; 
		encoder1 = 1047.32775 * count / STALL;	    	//w = (2pi(n)/Nt) * 1000ms/s * 3.33375cm 
		encoderCount1 = 0;
	}	
}
void *get_cm_per_sec_2 (void *ptr)
{	
	while(1)
	{
		float count = encoderCount2;
		delay(STALL);
		count = encoderCount2 - count; 
		encoder2 = 1047.32775 * count / STALL;	    	//w = (2pi(n)/Nt) * 1000ms/s * 3.33375cm 
		encoderCount2 = 0;
	}	
}

void *get_cm_per_sec_3 (void *ptr)
{	
	while(1)
	{
		float count = encoderCount3;
		delay(STALL);
		count = encoderCount3 - count; 
		encoder3 = 1047.32775 * count / STALL;	    	//w = (2pi(n)/Nt) * 1000ms/s * 3.33375cm 
		encoderCount3 = 0;
	}	
}

void *get_cm_per_sec_4 (void *ptr)
{	
	while(1)
	{
		float count = encoderCount4;
		delay(STALL);
		count = encoderCount4 - count; 
		encoder4 = 1047.32775 * count / STALL;	    	//w = (2pi(n)/Nt) * 1000ms/s * 3.33375cm 
		encoderCount4 = 0;
	}	
}

void *print_cm_all (void *ptr)
{	
	while(1)
	{
		//printf("\rEncoder1: %4d, Encoder2: %4d, Encoder3: %4d, Encoder4: %4d", (int)encoder1, (int)encoder2, (int)encoder3, (int)encoder4);  
		//fflush(stdout);
		//delay(STALL);
	}	
}
