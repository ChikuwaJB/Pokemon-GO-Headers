/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, July 26, 2016 at 8:15:17 AM Japan Standard Time
* Operating System: Version 9.1 (Build 13B143)
* Image Source: /var/mobile/Containers/Bundle/Application/3751615E-11D9-4657-82AD-52C04FE38F0D/pokemongo.app/pokemongo
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSDictionary;

@interface USUXMVariableSchema : NSObject {

	id _defaultValue;
	NSString* _type;
	NSString* _tag;
	NSString* _variableDescription;

}

@property (nonatomic,readonly) id defaultValue;                                      //@synthesize defaultValue=_defaultValue - In the implementation block
@property (nonatomic,readonly) NSString * type;                                      //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) NSString * tag;                                       //@synthesize tag=_tag - In the implementation block
@property (nonatomic,readonly) NSString * variableDescription;                       //@synthesize variableDescription=_variableDescription - In the implementation block
@property (nonatomic,readonly) NSDictionary * dictionaryRepresentation; 
-(NSString *)variableDescription;
-(BOOL)isValidValue:(id)arg1 ;
-(id)init;
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)type;
-(NSString *)tag;
-(NSDictionary *)dictionaryRepresentation;
-(id)defaultValue;
@end

