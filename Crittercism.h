/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, July 26, 2016 at 8:15:16 AM Japan Standard Time
* Operating System: Version 9.1 (Build 13B143)
* Image Source: /var/mobile/Containers/Bundle/Application/3751615E-11D9-4657-82AD-52C04FE38F0D/pokemongo.app/pokemongo
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CritterImpl;

@interface Crittercism : NSObject {

	CritterImpl* _critter;

}

@property (assign,nonatomic) CritterImpl * critter;              //@synthesize critter=_critter - In the implementation block
+(void)setOptOutStatus:(BOOL)arg1 ;
+(void)cr_logCritterError:(id)arg1 ;
+(unsigned long long)maxOfflineCrashReports;
+(void)setMaxOfflineCrashReports:(unsigned long long)arg1 ;
+(void)enableWithAppID:(id)arg1 andConfig:(id)arg2 ;
+(BOOL)logNetworkRequest:(id)arg1 urlString:(id)arg2 latency:(double)arg3 bytesRead:(unsigned long long)arg4 bytesSent:(unsigned long long)arg5 responseCode:(long long)arg6 error:(id)arg7 ;
+(void)leaveBreadcrumb:(id)arg1 ;
+(void)setAsyncBreadcrumbMode:(BOOL)arg1 ;
+(BOOL)getOptOutStatus;
+(BOOL)didCrashOnLastLoad;
+(void)beginTransaction:(id)arg1 withValue:(int)arg2 ;
+(void)failTransaction:(id)arg1 ;
+(void)setValue:(int)arg1 forTransaction:(id)arg2 ;
+(int)valueForTransaction:(id)arg1 ;
+(void)logPluginException:(id)arg1 ;
+(void)resetSharedCritter;
+(void)enableWithAppID:(id)arg1 andDelegate:(id)arg2 andURLFilters:(id)arg3 disableInstrumentation:(BOOL)arg4 ;
+(id)sharedCritter;
+(void)enableFromConfigFile;
+(BOOL)logHandledException:(id)arg1 ;
+(id)getUserUUID;
+(void)cr_cantFindTransaction:(id)arg1 ;
+(void)sendAppLoadData;
+(void)enableWithAppID:(id)arg1 ;
+(void)enableWithAppID:(id)arg1 andDelegate:(id)arg2 ;
+(void)enableWithAppID:(id)arg1 andDelegate:(id)arg2 andURLFilters:(id)arg3 ;
+(void)enableWithAppID:(id)arg1 andURLFilters:(id)arg2 ;
+(BOOL)logNetworkRequest:(id)arg1 url:(id)arg2 latency:(double)arg3 bytesRead:(unsigned long long)arg4 bytesSent:(unsigned long long)arg5 responseCode:(long long)arg6 error:(id)arg7 ;
+(void)setLoggingLevel:(long long)arg1 ;
+(void)setValue:(id)arg1 forKey:(id)arg2 ;
+(void)setDelegate:(id)arg1 ;
+(id)delegate;
+(void)load;
+(BOOL)logError:(id)arg1 ;
+(void)updateLocation:(id)arg1 ;
+(void)beginTransaction:(id)arg1 ;
+(void)endTransaction:(id)arg1 ;
+(void)cancelTransaction:(id)arg1 ;
+(void)addFilter:(id)arg1 ;
+(void)setUsername:(id)arg1 ;
+(long long)loggingLevel;
-(void)setOptOutStatus:(BOOL)arg1 ;
-(void)cr_logCritterError:(id)arg1 ;
-(unsigned long long)maxOfflineCrashReports;
-(void)setMaxOfflineCrashReports:(unsigned long long)arg1 ;
-(void)enableWithAppID:(id)arg1 andConfig:(id)arg2 ;
-(BOOL)logNetworkRequest:(id)arg1 urlString:(id)arg2 latency:(double)arg3 bytesRead:(unsigned long long)arg4 bytesSent:(unsigned long long)arg5 responseCode:(long long)arg6 error:(id)arg7 ;
-(void)leaveBreadcrumb:(id)arg1 ;
-(void)setAsyncBreadcrumbMode:(BOOL)arg1 ;
-(BOOL)getOptOutStatus;
-(BOOL)didCrashOnLastLoad;
-(void)logPluginException:(id)arg1 ;
-(void)enableFromConfigFile;
-(BOOL)logHandledException:(id)arg1 ;
-(id)getUserUUID;
-(void)sendAppLoadData;
-(CritterImpl *)critter;
-(void)setCritter:(CritterImpl *)arg1 ;
-(void)setValue:(id)arg1 forKey:(id)arg2 ;
-(void)setDelegate:(id)arg1 ;
-(id)init;
-(id)delegate;
-(BOOL)logError:(id)arg1 ;
-(void)addFilter:(id)arg1 ;
-(void)setUsername:(id)arg1 ;
@end

