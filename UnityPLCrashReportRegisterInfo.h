/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, July 26, 2016 at 8:15:16 AM Japan Standard Time
* Operating System: Version 9.1 (Build 13B143)
* Image Source: /var/mobile/Containers/Bundle/Application/3751615E-11D9-4657-82AD-52C04FE38F0D/pokemongo.app/pokemongo
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface UnityPLCrashReportRegisterInfo : NSObject {

	NSString* _registerName;
	unsigned long long _registerValue;

}

@property (nonatomic,readonly) NSString * registerName;                       //@synthesize registerName=_registerName - In the implementation block
@property (nonatomic,readonly) unsigned long long registerValue;              //@synthesize registerValue=_registerValue - In the implementation block
-(id)initWithRegisterName:(id)arg1 registerValue:(unsigned long long)arg2 ;
-(NSString *)registerName;
-(unsigned long long)registerValue;
-(void)dealloc;
@end

