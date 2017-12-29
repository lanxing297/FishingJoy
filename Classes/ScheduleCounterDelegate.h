#pragma once
#ifndef _SCHEDULECOUNTERDELEGATE_H
#define _SCHEDULECOUNTERDELEGATE_H
USING_NS_CC;

class ScheduleCounterDelegate
{
public:
	virtual void scheduleTimeUp() = 0;
	virtual void setScheduleNumber(int number)
	{
		return;
	}
protected:
private:
};
#endif