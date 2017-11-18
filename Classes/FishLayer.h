#pragma once
#include"cocos2d.h"
#include "Fish.h"
using namespace cocos2d;
class FishLayer :public CCLayer
{
public:
	FishLayer(void);
	CREATE_FUNC(FishLayer);
	virtual bool init();
	virtual ~FishLayer(void);
protected:
	void addFish(float delta);
	CCArray* _fishes;
};


