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
* File: task.h
*
* Description:    
*
**************************************************************/

#ifndef ENCODER_H_
#define ENCODER_H_

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
#define STALL		250

extern float encoderCount1;
extern float encoderCount2;
extern float encoderCount3;
extern float encoderCount4;
extern float encoder1;
extern float encoder2;
extern float encoder3;
extern float encoder4;
//extern float encodera;
//extern float encoderb;
//extern float encoderc;

extern int spd;
extern int deg;

int setup(void); 

void interrupt_one (void); // count for encoder pulses 1
void interrupt_two (void); // count for encoder pulses 2
void interrupt_three (void); // count for encoder pulses 3
void interrupt_four (void); // count for encoder pulses 4

void *get_cm_per_sec_1 (void *ptr); // gives cm per sec wheel 1
void *get_cm_per_sec_2 (void *ptr); // gives cm per sec wheel 2
void *get_cm_per_sec_3 (void *ptr); // gives cm per sec wheel 3
void *get_cm_per_sec_4 (void *ptr); // gives cm per sec wheel 4
void *print_cm_all (void *ptr);

#endif
