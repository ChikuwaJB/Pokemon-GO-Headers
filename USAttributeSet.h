/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, July 26, 2016 at 8:15:17 AM Japan Standard Time
* Operating System: Version 9.1 (Build 13B143)
* Image Source: /var/mobile/Containers/Bundle/Application/3751615E-11D9-4657-82AD-52C04FE38F0D/pokemongo.app/pokemongo
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <pokemongo/USConfigurationBase.h>

@class NSArray, NSString;

@interface USAttributeSet : USConfigurationBase {

	NSArray* _excludes;
	NSArray* _includes;
	NSString* _name;

}

@property (nonatomic,retain) NSArray * excludes;              //@synthesize excludes=_excludes - In the implementation block
@property (nonatomic,retain) NSArray * includes;              //@synthesize includes=_includes - In the implementation block
@property (nonatomic,retain) NSString * name;                 //@synthesize name=_name - In the implementation block
+(BOOL)isValidConfigurationDictionary:(id)arg1 ;
+(id)requiredKeys;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(NSArray *)includes;
-(NSArray *)excludes;
-(void)setIncludes:(NSArray *)arg1 ;
-(void)setExcludes:(NSArray *)arg1 ;
-(id)initWithConfigurationDictionary:(id)arg1 ;
@end

