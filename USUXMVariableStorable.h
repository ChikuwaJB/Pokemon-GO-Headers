/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, July 26, 2016 at 8:15:17 AM Japan Standard Time
* Operating System: Version 9.1 (Build 13B143)
* Image Source: /var/mobile/Containers/Bundle/Application/3751615E-11D9-4657-82AD-52C04FE38F0D/pokemongo.app/pokemongo
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <pokemongo/UpsightStorableObject.h>

@class NSString;

@interface USUXMVariableStorable : UpsightStorableObject {

	id _value;
	NSString* _valueType;
	NSString* _tag;

}

@property (nonatomic,retain) id value;                            //@synthesize value=_value - In the implementation block
@property (nonatomic,readonly) NSString * valueType;              //@synthesize valueType=_valueType - In the implementation block
@property (nonatomic,readonly) NSString * tag;                    //@synthesize tag=_tag - In the implementation block
-(id)initWithType:(id)arg1 version:(id)arg2 ID:(id)arg3 ;
-(id)initWithTag:(id)arg1 valueType:(id)arg2 ;
-(id)init;
-(id)value;
-(void)setValue:(id)arg1 ;
-(NSString *)tag;
-(NSString *)valueType;
@end

