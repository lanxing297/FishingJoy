#include "MenuLayer.h"


MenuLayer::MenuLayer(void)
{
}


MenuLayer::~MenuLayer(void)
{
}
bool MenuLayer::init(){
	if(!CCLayer::init()){
		return false;
	}
	return true;
}