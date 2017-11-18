#pragma once
#include"cocos2d.h"
#include"BackgroundLayer.h"
#include"FishLayer.h"
#include"MenuLayer.h"
//#include"CannonLayer.h"
//#include"PaneLayer.h"

using namespace cocos2d;

class GameScene :public CCScene
{
public:
	GameScene(void);
	CREATE_FUNC(GameScene)
	virtual~GameScene(void);
	
	virtual bool init();
protected:
	
	BackgroundLayer *backgroundLayer;
	//CannonLayer *cannonLayer;
	FishLayer *fishLayer;
	//PaneLayer *paneLayer;
	MenuLayer *menuLayer;
	void preloadResources(void);
	

};

