#include "PanelLayer.h"
#include "GameScene.h"

USING_NS_CC;
PanelLayer::PanelLayer(void)
{

}

PanelLayer::~PanelLayer(void)
{

}
bool PanelLayer::init()
{
	if(!CCLayer::init())
	{
		return false;
	}

	_goldCounter = GoldCounterLayer::create(0);
	addChild(_goldCounter);
	_goldCounter->setPosition(ccp(600, 25));
	
	int maxTime =10;
	ScheduleCountDown *countDown =ScheduleCountDown::create(this,maxTime,true);
	addChild(countDown,0, 99);
	_scheduleLabel=CCLabelAtlas::create(CCString::createWithFormat("%d",maxTime)->getCString(),"baoshiyu_shuzi_02-ipadhd.png",50,54,'0');
	addChild(_scheduleLabel);
	_scheduleLabel->setPosition(ccp(100,1000));
    return true;
}
void PanelLayer::scheduleTimeUp()
{
	((GameScene *)getParent())->alterGold(200);
	ScheduleCountDown *countDown =(ScheduleCountDown *)getChildByTag(99);
	if(countDown->getLoop()==false)
	{
		_scheduleLabel->setVisible(false);
	}
}
void PanelLayer::setScheduleNumber(int number)
{
	_scheduleLabel->setString(CCString::createWithFormat("%d",number)->getCString());
}