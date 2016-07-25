/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, July 26, 2016 at 8:15:17 AM Japan Standard Time
* Operating System: Version 9.1 (Build 13B143)
* Image Source: /var/mobile/Containers/Bundle/Application/3751615E-11D9-4657-82AD-52C04FE38F0D/pokemongo.app/pokemongo
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol UpsightDynamicConfigurationDelegate;
@class NSDictionary;

@interface UpsightDynamicConfiguration : NSObject {

	id<UpsightDynamicConfigurationDelegate> _delegate;
	NSDictionary* _configuration;

}

@property (assign,nonatomic,__weak) id<UpsightDynamicConfigurationDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSDictionary * configuration;                                         //@synthesize configuration=_configuration - In the implementation block
+(id)defaultConfiguration;
-(void)willUnload;
-(void)updateConfiguration:(id)arg1 ;
-(void)setDelegate:(id<UpsightDynamicConfigurationDelegate>)arg1 ;
-(id<UpsightDynamicConfigurationDelegate>)delegate;
-(void)setConfiguration:(NSDictionary *)arg1 ;
-(NSDictionary *)configuration;
-(id)initWithConfiguration:(id)arg1 ;
@end
