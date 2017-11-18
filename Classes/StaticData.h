#pragma once
#ifndef STATICDATA_H_
#define STATICDATA_H_
#include "cocos2d.h"
#include <string>
USING_NS_CC;
#define STATIC_DATA_STRING(key) StaticData::sharedStaticData()->stringFromKey(key)
#define STATIC_DATA_INT(key) StaticData::sharedStaticData()->intFromKey(key)
#define STATIC_DATA_FLOAT(key) StaticData::sharedStaticData()->floatFromKey(key)
#define STATIC_DATA_BOOLEAN(key) StaticData::sharedStaticData()->booleanFromKey(key)
#define STATIC_DATA_POINT(key) StaticData::sharedStaticData()->pointFromKey(key)
#define STATIC_DATA_RECT(key) StaticData::sharedStaticData()->rectFromKey(key)
#define STATIC_DATA_SIZE(key) StaticData::sharedStaticData()->sizeFromKey(key)

class StaticData :
	public cocos2d::CCObject
{
private:
	StaticData(void);
	virtual ~StaticData(void);
	
protected:
	cocos2d::CCDictionary* _dictionary;
	std::string _staticFileName;
	bool StaticData::init();
	
public:
	
	static StaticData* sharedStaticData();
	const char* stringFromKey(std::string key);
	int intFromKey(std::string key);
	int floatFromKey(std::string key);
	bool booleanFromKey(std::string key);
	cocos2d::CCPoint pointFromKey(std::string key);
	cocos2d::CCRect rectFromKey(std::string key);
	cocos2d::CCSize sizeFromKey(std::string key);
	void purge();

	CC_SYNTHESIZE_READONLY(std::string,_staticDataPath,StaticDataPath);
};
#endif

