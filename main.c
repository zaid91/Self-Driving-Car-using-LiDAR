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
* File: main.c
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
#include "drive.h"
#include "line.h"

int main (void)
{
	int x, y;
	printf("Please enter the speed.\n");
	scanf("%d", &x);
	spd = x;
	printf("Please enter the degree of turn.\n");
	scanf("%d", &y);
	deg = y;

  	if (wiringPiSetup () < 0)
  	{
    		fprintf (stderr, "Unable to setup wiringPi: %s\n", strerror (errno)) ;
		return 1;
  	}

	pinMode(LINE5,INPUT);
	pinMode(LINE6,INPUT);
	pinMode(LINE7,INPUT);
	pinMode(LINE8,INPUT);
	pinMode(GOFB1,OUTPUT);
	pinMode(PWM1,OUTPUT);
	softPwmCreate(PWM1,0,100);
	pinMode(GOFB2,OUTPUT);
	pinMode(PWM2,OUTPUT);
	softPwmCreate(PWM2,0,100);
	pinMode(GOFB3,OUTPUT);
	pinMode(PWM3,OUTPUT);
	softPwmCreate(PWM3,0,100);
	pinMode(GOFB4,OUTPUT);
	pinMode(PWM4,OUTPUT);
	softPwmCreate(PWM4,0,100);

	setup();
	
	while(1)
	{
		line_follow();
	}

	return 0;
}
