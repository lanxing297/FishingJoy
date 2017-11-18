#include "FishLayer.h"
#include "Fish.h"
#define FISH_MAX_COUNT 50


FishLayer::FishLayer(void)
{
}


FishLayer::~FishLayer(void)
{
	CC_SAFE_RELEASE_NULL(_fishes);

}
bool FishLayer::init()
{
	if (!CCLayer::init())
	{
		return false;
	}

	_fishes = CCArray::createWithCapacity(FISH_MAX_COUNT);

	CC_SAFE_RETAIN(_fishes);
	for (int i = 0; i < FISH_MAX_COUNT; i++)
	{
		//int type = CCRANDOM_0_1() * k_Fish_Type_Count;
		int type= CCRANDOM_0_1() * (k_Fish_Type_Count-1)+1;
		CCLOG("FishLayer type=%d",type);
		Fish *fish = Fish::create((FishType)type);
		_fishes->addObject(fish);
	}
	this->schedule(schedule_selector(FishLayer::addFish),3.0);
	return true;
}

/*bool FishLayer::init()
{
	if (!CCLayer::init())
	{
		return false;
	}
	Fish *fish = Fish::create((FishType)1);
	addChild(fish);
	fish->setPosition(ccp(1024,800));
	return true;
}*/



void FishLayer::addFish(float delta)
{
	int addToCount = CCRANDOM_0_1() * 5 + 1;
	int count = 0;
	CCObject *obj;
	CCSize winSize = CCDirector::sharedDirector()->getWinSize();
	CCARRAY_FOREACH(_fishes, obj)
	{
		Fish *fish = (Fish *)obj;
		if (fish->isRunning())
		{
			continue;
		}
		count++;
		srand(time(0));
		fish->setPosition(ccp((rand()%100/(float)101)*winSize.width, (rand()%100/(float)101)*winSize.height));
		this->addChild(fish);
		if (count == addToCount)
		{
			break;
		}
	}
}