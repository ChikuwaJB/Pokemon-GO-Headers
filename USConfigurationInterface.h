/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, July 26, 2016 at 8:15:17 AM Japan Standard Time
* Operating System: Version 9.1 (Build 13B143)
* Image Source: /var/mobile/Containers/Bundle/Application/3751615E-11D9-4657-82AD-52C04FE38F0D/pokemongo.app/pokemongo
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSDictionary;


@protocol USConfigurationInterface <NSObject>
@property (nonatomic,readonly) NSDictionary * configurationDictionary; 
@required
+(BOOL)isValidConfigurationDictionary:(id)arg1;
+(id)requiredKeys;
-(BOOL)isEqualToConfiguration:(id)arg1;
-(id)initWithConfigurationDictionary:(id)arg1;
-(NSDictionary *)configurationDictionary;

@end

