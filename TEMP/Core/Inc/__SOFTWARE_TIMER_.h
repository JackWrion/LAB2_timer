/*
 * timer.h
 *
 *  Created on: Sep 23, 2022
 *      Author: ASUS
 */

#ifndef __SOFTWARE_TIMER_
#define __SOFTWARE_TIMER_

extern int timer1_flag;
extern int timer2_flag;

void setTimer(int duration);
void setTimer2(int duration);

void timerRun();

int timer1_counter = 0;
int timer1_flag = 0;

int timer2_counter = 0;
int timer2_flag = 0;

void setTimer(int duration){
	timer1_counter = duration;
	timer1_flag = 0;
}
void setTimer2(int duration){
	timer2_counter = duration;
	timer2_flag = 0;
}

void timerRun(){
	if(timer1_counter > 0){
		timer1_counter--;
		if(timer1_counter == 0){
			timer1_flag = 1;
		}
	}
}

#endif /* INC_TIMER_H_ */
