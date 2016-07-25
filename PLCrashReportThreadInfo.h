/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, July 26, 2016 at 8:15:16 AM Japan Standard Time
* Operating System: Version 9.1 (Build 13B143)
* Image Source: /var/mobile/Containers/Bundle/Application/3751615E-11D9-4657-82AD-52C04FE38F0D/pokemongo.app/pokemongo
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray;

@interface PLCrashReportThreadInfo : NSObject {

	long long _threadNumber;
	NSArray* _stackFrames;
	BOOL _crashed;
	NSArray* _registers;

}

@property (nonatomic,readonly) long long threadNumber;              //@synthesize threadNumber=_threadNumber - In the implementation block
@property (nonatomic,readonly) NSArray * stackFrames;               //@synthesize stackFrames=_stackFrames - In the implementation block
@property (nonatomic,readonly) BOOL crashed;                        //@synthesize crashed=_crashed - In the implementation block
@property (nonatomic,readonly) NSArray * registers;                 //@synthesize registers=_registers - In the implementation block
-(id)initWithThreadNumber:(long long)arg1 stackFrames:(id)arg2 crashed:(BOOL)arg3 registers:(id)arg4 ;
-(long long)threadNumber;
-(NSArray *)stackFrames;
-(BOOL)crashed;
-(NSArray *)registers;
-(void)dealloc;
@end

