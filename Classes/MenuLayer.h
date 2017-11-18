#pragma once
#include "cocos2d.h"
using namespace cocos2d;
class MenuLayer :
	public CCLayer
{
public:
	MenuLayer(void);
	CREATE_FUNC(MenuLayer);
	virtual bool init();
	virtual ~MenuLayer(void);
};

