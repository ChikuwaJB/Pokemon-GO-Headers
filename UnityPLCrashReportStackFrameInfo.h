/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, July 26, 2016 at 8:15:16 AM Japan Standard Time
* Operating System: Version 9.1 (Build 13B143)
* Image Source: /var/mobile/Containers/Bundle/Application/3751615E-11D9-4657-82AD-52C04FE38F0D/pokemongo.app/pokemongo
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class UnityPLCrashReportSymbolInfo;

@interface UnityPLCrashReportStackFrameInfo : NSObject {

	unsigned long long _instructionPointer;
	UnityPLCrashReportSymbolInfo* _symbolInfo;

}

@property (nonatomic,readonly) unsigned long long instructionPointer;                  //@synthesize instructionPointer=_instructionPointer - In the implementation block
@property (nonatomic,readonly) UnityPLCrashReportSymbolInfo * symbolInfo;              //@synthesize symbolInfo=_symbolInfo - In the implementation block
-(id)initWithInstructionPointer:(unsigned long long)arg1 symbolInfo:(id)arg2 ;
-(unsigned long long)instructionPointer;
-(UnityPLCrashReportSymbolInfo *)symbolInfo;
-(void)dealloc;
@end

