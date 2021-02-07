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
* File: drive.c
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

int flag = 0;

pthread_t thread_id6, thread_id7, thread_id8, thread_id9, thread_id10, thread_id11;

/*
void *wheel_one(void *ptr)
{
	int pwm = spd;

	while(flag == 1)
	{
		while((int)encoder1 > (int)encoder4)
		{
			pwm++;
			softPwmWrite(PWM1, pwm);
		}

		while((int)encoder1 > (int)encoder4)
		{
			pwm--;
			softPwmWrite(PWM1, pwm);
		}
		delay(STALL);
	}
	pthread_cancel(thread_id6);
	pthread_exit(NULL);
}
*/

void *wheel_two(void *ptr)
{
	int pwm = spd;

	while(flag == 1)
	{
		while((int)encoder2 < (int)encoder1)
		{
			pwm++;
			softPwmWrite(PWM2, pwm);
		}

		while((int)encoder2 > (int)encoder1)
		{
			pwm--;
			softPwmWrite(PWM2, pwm);
		}
		delay(STALL);
	}
	pthread_cancel(thread_id7);
	pthread_exit(NULL);
}

void *wheel_three(void *ptr)
{
	int pwm = spd;

	while(flag == 1)
	{
		while((int)encoder3 < (int)encoder1)
		{
			pwm++;
			softPwmWrite(PWM3, pwm);
		}

		while((int)encoder3 > (int)encoder1)
		{
			pwm--;
			softPwmWrite(PWM3, pwm);
		}
		delay(STALL);
	}
	pthread_cancel(thread_id8);
	pthread_exit(NULL);
}

void *wheel_four(void *ptr)
{
	int pwm = spd;

	while(flag == 1)
	{
		while((int)encoder4 < (int)encoder2)
		{
			pwm++;
			softPwmWrite(PWM4, pwm);
		}

		while((int)encoder4 > (int)encoder2)
		{
			pwm--;
			softPwmWrite(PWM4, pwm);
		}
		delay(STALL);
	}
	pthread_cancel(thread_id9);
	pthread_exit(NULL);
}

void *wheel_three_diff(void *ptr)
{
	int pwm = spd - deg;

	while(flag == 1)
	{
		while((int)encoder3 < (int)encoder1)
		{
			pwm++;
			softPwmWrite(PWM3, pwm);
		}

		while((int)encoder3 > (int)encoder1)
		{
			pwm--;
			softPwmWrite(PWM3, pwm);
		}
		delay(STALL);
	}
	pthread_cancel(thread_id10);
	pthread_exit(NULL);
}

void *wheel_four_diff(void *ptr)
{
	int pwm = spd - deg;

	while(flag == 1)
	{
		while((int)encoder4 < (int)encoder2)
		{
			pwm++;
			softPwmWrite(PWM4, pwm);
		}

		while((int)encoder4 > (int)encoder2)
		{
			pwm--;
			softPwmWrite(PWM4, pwm);
		}
		delay(STALL);
	}
	pthread_cancel(thread_id10);
	pthread_exit(NULL);
}

int four_wheel_drive(void)
{
	printf("\nSPD: %d", spd);
	softPwmWrite(PWM1,spd);
	softPwmWrite(PWM2,spd);
	softPwmWrite(PWM3,spd);
	softPwmWrite(PWM4,spd);
	delay(STALL);
	
	flag = 1;

	int status;
/*
	status = pthread_create(&thread_id6, NULL, &wheel_one, NULL);
	if(status < 0)
	{
		printf("Unable to create pthread: [%s]\n", strerror (status));
		return 1;
	}
*/
	status = pthread_create(&thread_id7, NULL, &wheel_two, NULL);
	if(status < 0)
	{
		printf("Unable to create pthread: [%s]\n", strerror (status));
		return 1;
	}

	status = pthread_create(&thread_id8, NULL, &wheel_three, NULL);
	if(status < 0)
	{
		printf("Unable to create pthread: [%s]\n", strerror (status));
		return 1;
	}

	status = pthread_create(&thread_id9, NULL, &wheel_four, NULL);
	if(status < 0)
	{
		printf("Unable to create pthread: [%s]\n", strerror (status));
		return 1;
	}
}

int two_wheel_drive(char d)
{
	if(d == 'r')
	{
		softPwmWrite(PWM1,spd);
		softPwmWrite(PWM2,spd - deg);
		softPwmWrite(PWM3,spd);
		softPwmWrite(PWM4,spd - deg);

     		flag = 1;	
		int status;

		status = pthread_create(&thread_id9, NULL, &wheel_three, NULL);
		if(status < 0)
		{
			printf("Unable to create pthread: [%s]\n", strerror (status));
			return 1;
		}

		status = pthread_create(&thread_id11, NULL, &wheel_four_diff, NULL);
		if(status < 0)
		{
			printf("Unable to create pthread: [%s]\n", strerror (status));
			return 1;
		}
	}
	else if(d == 'l')
	{
		softPwmWrite(PWM1,spd - deg);
		softPwmWrite(PWM2,spd);
		softPwmWrite(PWM3,spd - deg);
		softPwmWrite(PWM4,spd);

     		flag = 1;	
		int status;

		status = pthread_create(&thread_id9, NULL, &wheel_four, NULL);
		if(status < 0)
		{
			printf("Unable to create pthread: [%s]\n", strerror (status));
			return 1;
		}

		status = pthread_create(&thread_id10, NULL, &wheel_three_diff, NULL);
		if(status < 0)
		{
			printf("Unable to create pthread: [%s]\n", strerror (status));
			return 1;
		}
	}
	else
	{
		printf("You have enter the wrong turn signal\n");
		return 1;
	}
}

void forward(void)
{	
	flag = 0;
	digitalWrite(GOFB1,HIGH);
	digitalWrite(GOFB2,LOW);
	digitalWrite(GOFB3,HIGH);
	digitalWrite(GOFB4,LOW);
	four_wheel_drive();
}

void backward(void)
{
	flag = 0;
	digitalWrite(GOFB1,LOW);
	digitalWrite(GOFB2,HIGH);
	digitalWrite(GOFB3,LOW);
	digitalWrite(GOFB4,HIGH);
	four_wheel_drive();
}

void turn_right(void)
{
	flag = 0;
	digitalWrite(GOFB1,HIGH);
	digitalWrite(GOFB2,HIGH);
	digitalWrite(GOFB3,HIGH);
	digitalWrite(GOFB4,HIGH);
	four_wheel_drive();
}

void turn_left(void)
{
	flag = 0;
	digitalWrite(GOFB1,LOW);
	digitalWrite(GOFB2,LOW);
	digitalWrite(GOFB3,LOW);
	digitalWrite(GOFB4,LOW);
	four_wheel_drive();
}

void slight_right(void)
{
	flag = 0;
	digitalWrite(GOFB1,HIGH);
	digitalWrite(GOFB2,LOW);
	digitalWrite(GOFB3,HIGH);
	digitalWrite(GOFB4,LOW);
	two_wheel_drive('r');
}

void slight_left(void)
{
	flag = 0;
	digitalWrite(GOFB1,HIGH);
	digitalWrite(GOFB2,LOW);
	digitalWrite(GOFB3,HIGH);
	digitalWrite(GOFB4,LOW);
	two_wheel_drive('l');
}

void stop(void)
{
	flag = 0;
	softPwmWrite(PWM1,0);
	softPwmWrite(PWM2,0);
	softPwmWrite(PWM3,0);
	softPwmWrite(PWM4,0);
}

