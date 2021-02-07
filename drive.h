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
* File: drive.h
*
* Description:    
*
**************************************************************/

#ifndef DRIVE_H_
#define DRIVE_H_

#include <stdio.h>

#define	ENCODER1	1
#define	ENCODER2	4
#define	ENCODER3	5
#define	ENCODER4	6
#define	LINE5		25
#define	LINE6		28
#define	LINE7		27
#define	LINE8		24
#define	LINE9		26
#define	LINE10		29
#define PWM1		30
#define GOFB1 		21
#define PWM2		22
#define GOFB2 		23
#define PWM3		8
#define GOFB3 		7
#define PWM4		0
#define GOFB4 		2

extern int flag;

void *wheel_one(void *ptr);
void *wheel_two(void *ptr);
void *wheel_three(void *ptr);
void *wheel_four(void *ptr);
int four_wheel_drive(void);
int two_wheel_drive(char d);
void forward(void);
void backward(void);
void turn_right(void);
void turn_left(void);
void slight_right(void);
void slight_left(void);
void stop(void);

#endif
