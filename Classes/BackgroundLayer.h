#pragma once
#include "cocos2d.h"
using namespace cocos2d;
class BackgroundLayer :
	public CCLayer
{
public:
	BackgroundLayer(void);
	static BackgroundLayer *create(){
		BackgroundLayer *layer=new BackgroundLayer();
		if(layer &&layer->init()){
			return layer;
		}
		else{
			delete layer;
		}
	}
	virtual bool init();
	virtual ~BackgroundLayer(void);
};

