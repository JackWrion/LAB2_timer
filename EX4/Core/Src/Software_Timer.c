/*
 * Software_Timer.c
 *
 *  Created on: Oct 1, 2022
 *      Author: ASUS
 */

#include "Software_Timer.h"

int timer1_counter = 0;
int timer2_counter = 0;
int timer3_counter = 0;
int timer4_counter = 0;
int timer5_counter = 0;
int timer6_counter = 0;


int timer1_flag = 0;
int timer2_flag = 0;
int timer3_flag = 0;
int timer4_flag = 0;
int timer5_flag = 0;
int timer6_flag = 0;


void setTimer1(int duration){
	timer1_counter = duration;
	timer1_flag = 0;
}

void setTimer2(int duration){
	timer2_counter = duration;
	timer2_flag = 0;
}

void setTimer3(int duration){
	timer3_counter = duration;
	timer3_flag = 0;
}

void setTimer4(int duration){
	timer4_counter = duration;
	timer4_flag = 0;
}

void setTimer5(int duration){
	timer5_counter = duration;
	timer5_flag = 0;
}

void setTimer6(int duration){
	timer6_counter = duration;
	timer6_flag = 0;
}




void timerRun(){
	if (timer1_counter == 1 ){
		//BEGIN-TODO
		timer1_flag = 1;
		//END-TODO
	}
	else timer1_counter--;

	if (timer2_counter == 1 ) timer2_flag = 1;
	else timer2_counter--;

	if (timer3_counter == 1 ) timer3_flag = 1;
	else timer3_counter--;

	if (timer4_counter == 1 ) timer4_flag = 1;
	else timer4_counter--;

	if (timer5_counter == 1 ) timer5_flag = 1;
	else timer5_counter--;

	if (timer6_counter == 1 ) timer6_flag = 1;
	else timer6_counter--;

}
