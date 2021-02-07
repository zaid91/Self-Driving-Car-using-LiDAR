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
* File: line.c
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
#include "encoder.h"
#include "drive.h"
#include "line.h"

void line_follow(void)
{
		//stops the robot if you pick it up 
		if(digitalRead(LINE5) == HIGH && digitalRead(LINE6) == HIGH  && digitalRead(LINE7) == HIGH && digitalRead(LINE8) == HIGH)
		{
			stop();
		}

		//to keep on the line from the right
		if(digitalRead(LINE5) == HIGH && digitalRead(LINE6) == LOW ) 
		{
			slight_left();
		}

		//to keep on the line from the left side
		if(digitalRead(LINE6) == HIGH && digitalRead(LINE5) == LOW ) 
		{
			slight_right();
		}
		
		//to make sharp right turns
		if(digitalRead(LINE7) == HIGH && digitalRead(LINE8) == LOW && digitalRead(LINE5) == LOW && digitalRead(LINE6) == LOW) 
		{
			while(digitalRead(LINE6) != HIGH)
			{
				turn_right();
			}
		}

		//to make sharp left turns
		if(digitalRead(LINE8) == HIGH && digitalRead(LINE7) == LOW && digitalRead(LINE5) == LOW && digitalRead(LINE6) == LOW) 
		{
			while(digitalRead(LINE5) != HIGH)
			{	
				turn_left();
			}	
		}

		//to go forward inbetween reads
		if(digitalRead(LINE5) == LOW  && digitalRead(LINE6) == LOW)
		{
			forward();
		}

}
