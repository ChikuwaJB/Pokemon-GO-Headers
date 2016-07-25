/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, July 26, 2016 at 8:15:17 AM Japan Standard Time
* Operating System: Version 9.1 (Build 13B143)
* Image Source: /var/mobile/Containers/Bundle/Application/3751615E-11D9-4657-82AD-52C04FE38F0D/pokemongo.app/pokemongo
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <pokemongo/USBaseAction.h>

@class NSString, NSArray;

@interface USModifyValueAction : USBaseAction {

	NSString* _type;
	NSArray* _matchValues;
	NSArray* _operations;

}

@property (nonatomic,readonly) NSString * type;                    //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) NSArray * matchValues;              //@synthesize matchValues=_matchValues - In the implementation block
@property (nonatomic,readonly) NSArray * operations;               //@synthesize operations=_operations - In the implementation block
+(id)type;
-(id)initWithParameters:(id)arg1 map:(id)arg2 handler:(/*^block*/id)arg3 ;
-(NSArray *)matchValues;
-(NSString *)type;
-(NSArray *)operations;
@end

