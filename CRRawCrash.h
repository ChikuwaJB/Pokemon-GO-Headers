/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, July 26, 2016 at 8:15:16 AM Japan Standard Time
* Operating System: Version 9.1 (Build 13B143)
* Image Source: /var/mobile/Containers/Bundle/Application/3751615E-11D9-4657-82AD-52C04FE38F0D/pokemongo.app/pokemongo
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSData, NSDate, NSString, NSNumber;

@interface CRRawCrash : NSObject {

	NSData* _plcData;
	NSDate* _crashDate;
	NSString* _imageUUID;
	NSString* _binaryImageName;
	NSString* _binaryImageArchitecture;
	NSString* _exceptionName;
	NSString* _exceptionReason;
	NSString* _reportedAt;
	NSString* _appVersion;
	NSNumber* _memUsage;
	NSNumber* _diskSpaceFree;

}

@property (retain) NSData * plcData;                                //@synthesize plcData=_plcData - In the implementation block
@property (retain) NSDate * crashDate;                              //@synthesize crashDate=_crashDate - In the implementation block
@property (retain) NSString * imageUUID;                            //@synthesize imageUUID=_imageUUID - In the implementation block
@property (retain) NSString * binaryImageName;                      //@synthesize binaryImageName=_binaryImageName - In the implementation block
@property (retain) NSString * binaryImageArchitecture;              //@synthesize binaryImageArchitecture=_binaryImageArchitecture - In the implementation block
@property (retain) NSString * exceptionName;                        //@synthesize exceptionName=_exceptionName - In the implementation block
@property (retain) NSString * exceptionReason;                      //@synthesize exceptionReason=_exceptionReason - In the implementation block
@property (retain) NSString * reportedAt;                           //@synthesize reportedAt=_reportedAt - In the implementation block
@property (retain) NSString * appVersion;                           //@synthesize appVersion=_appVersion - In the implementation block
@property (retain) NSNumber * memUsage;                             //@synthesize memUsage=_memUsage - In the implementation block
@property (retain) NSNumber * diskSpaceFree;                        //@synthesize diskSpaceFree=_diskSpaceFree - In the implementation block
+(id)crashWithPLCData:(id)arg1 ;
-(NSString *)exceptionName;
-(NSString *)exceptionReason;
-(NSData *)plcData;
-(NSString *)reportedAt;
-(NSNumber *)memUsage;
-(NSNumber *)diskSpaceFree;
-(NSString *)binaryImageName;
-(NSString *)binaryImageArchitecture;
-(id)initWithPLCrashData:(id)arg1 ;
-(BOOL)populateWithPLCrashData:(id)arg1 ;
-(void)setImageUUID:(NSString *)arg1 ;
-(void)setBinaryImageName:(NSString *)arg1 ;
-(void)setBinaryImageArchitecture:(NSString *)arg1 ;
-(void)setExceptionName:(NSString *)arg1 ;
-(void)setExceptionReason:(NSString *)arg1 ;
-(BOOL)populateAppStateDataFromPLCrashReport:(id)arg1 ;
-(void)setReportedAt:(NSString *)arg1 ;
-(void)setMemUsage:(NSNumber *)arg1 ;
-(void)setDiskSpaceFree:(NSNumber *)arg1 ;
-(void)setPlcData:(NSData *)arg1 ;
-(NSDate *)crashDate;
-(void)setCrashDate:(NSDate *)arg1 ;
-(NSString *)imageUUID;
-(NSString *)appVersion;
-(void)setAppVersion:(NSString *)arg1 ;
@end

