/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, July 26, 2016 at 8:15:17 AM Japan Standard Time
* Operating System: Version 9.1 (Build 13B143)
* Image Source: /var/mobile/Containers/Bundle/Application/3751615E-11D9-4657-82AD-52C04FE38F0D/pokemongo.app/pokemongo
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface PLCrashReporterConfig : NSObject {

	unsigned long long _signalHandlerType;
	unsigned long long _symbolicationStrategy;

}

@property (nonatomic,readonly) unsigned long long signalHandlerType;                  //@synthesize signalHandlerType=_signalHandlerType - In the implementation block
@property (nonatomic,readonly) unsigned long long symbolicationStrategy;              //@synthesize symbolicationStrategy=_symbolicationStrategy - In the implementation block
+(id)defaultConfiguration;
-(unsigned long long)symbolicationStrategy;
-(unsigned long long)signalHandlerType;
-(id)initWithSignalHandlerType:(unsigned long long)arg1 symbolicationStrategy:(unsigned long long)arg2 ;
-(id)init;
@end

