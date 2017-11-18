#pragma once
#include "cocos2d.h"
using namespace cocos2d;
class PaneLayer :
	public CCLayer
{
public:
	PaneLayer(void);
	CREATE_FUNC(PaneLayer);
	virtual bool init();
	virtual ~PaneLayer(void);
};

