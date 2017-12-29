#pragma once
#include "cocos2d.h"
#include "GoldCounterLayer.h"
#include "ScheduleCounterDelegate.h"
#include "ScheduleCountDown.h"
USING_NS_CC;

class PanelLayer:public cocos2d::CCLayer,public ScheduleCounterDelegate
{
public:
	virtual bool init();
	PanelLayer(void);
	~PanelLayer(void);

    CREATE_FUNC(PanelLayer)
    CC_SYNTHESIZE_READONLY(GoldCounterLayer *, _goldCounter, GoldCounter)

protected:
	virtual void scheduleTimeUp();
	virtual void setScheduleNumber(int number);
	CCLabelAtlas *_scheduleLabel;
};

