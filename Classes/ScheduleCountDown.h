#pragma once
#ifndef _SCHEDULECOUNTDOWN_H
#define _SCHEDULECOUNTDOWN_H
#include "cocos2d.h"
#include "ScheduleCounterDelegate.h"
USING_NS_CC;
class ScheduleCountDown:public CCNode
{
public:
	static ScheduleCountDown* create(ScheduleCounterDelegate* target, int perimeter, bool loop);
	CC_SYNTHESIZE(int,_currentTime,CurrentTime);
	CC_SYNTHESIZE(int,_maxTime,MaxTime);
	CC_SYNTHESIZE(bool,_loop,Loop);
	CC_SYNTHESIZE(ScheduleCounterDelegate *,_target,Target);
	void schedulePerSecond(float delta);
protected:
	bool init (ScheduleCounterDelegate* target, int perimeter, bool loop);

};

#endif