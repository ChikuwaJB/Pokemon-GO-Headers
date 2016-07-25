/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, July 26, 2016 at 8:15:17 AM Japan Standard Time
* Operating System: Version 9.1 (Build 13B143)
* Image Source: /var/mobile/Containers/Bundle/Application/3751615E-11D9-4657-82AD-52C04FE38F0D/pokemongo.app/pokemongo
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, PLCrashReportProcessorInfo;

@interface PLCrashReportMachineInfo : NSObject {

	NSString* _modelName;
	PLCrashReportProcessorInfo* _processorInfo;
	unsigned long long _processorCount;
	unsigned long long _logicalProcessorCount;

}

@property (nonatomic,readonly) NSString * modelName;                                    //@synthesize modelName=_modelName - In the implementation block
@property (nonatomic,readonly) PLCrashReportProcessorInfo * processorInfo;              //@synthesize processorInfo=_processorInfo - In the implementation block
@property (nonatomic,readonly) unsigned long long processorCount;                       //@synthesize processorCount=_processorCount - In the implementation block
@property (nonatomic,readonly) unsigned long long logicalProcessorCount;                //@synthesize logicalProcessorCount=_logicalProcessorCount - In the implementation block
-(id)initWithModelName:(id)arg1 processorInfo:(id)arg2 processorCount:(unsigned long long)arg3 logicalProcessorCount:(unsigned long long)arg4 ;
-(PLCrashReportProcessorInfo *)processorInfo;
-(unsigned long long)logicalProcessorCount;
-(NSString *)modelName;
-(void)dealloc;
-(unsigned long long)processorCount;
@end
