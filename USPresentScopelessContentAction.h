/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, July 26, 2016 at 8:15:17 AM Japan Standard Time
* Operating System: Version 9.1 (Build 13B143)
* Image Source: /var/mobile/Containers/Bundle/Application/3751615E-11D9-4657-82AD-52C04FE38F0D/pokemongo.app/pokemongo
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <pokemongo/USBaseAction.h>

@class NSString;

@interface USPresentScopelessContentAction : USBaseAction {

	NSString* _selfID;
	NSString* _nextID;

}

@property (nonatomic,readonly) NSString * selfID;              //@synthesize selfID=_selfID - In the implementation block
@property (nonatomic,readonly) NSString * nextID;              //@synthesize nextID=_nextID - In the implementation block
+(id)type;
-(id)initWithParameters:(id)arg1 map:(id)arg2 handler:(/*^block*/id)arg3 ;
-(NSString *)nextID;
-(NSString *)selfID;
@end

