/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, July 26, 2016 at 8:15:17 AM Japan Standard Time
* Operating System: Version 9.1 (Build 13B143)
* Image Source: /var/mobile/Containers/Bundle/Application/3751615E-11D9-4657-82AD-52C04FE38F0D/pokemongo.app/pokemongo
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <pokemongo/pokemongo-Structs.h>
#import <libobjc.A.dylib/NSCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSNumber;

@interface USSession : NSObject <NSCoding, NSCopying> {

	double _startTime;
	double _sessionDuration;
	double _previousSessionsDuration;
	unsigned long long _sessionNumber;
	NSNumber* _messageID;
	NSNumber* _campaignID;

}

@property (assign,nonatomic) double startTime;                              //@synthesize startTime=_startTime - In the implementation block
@property (assign,nonatomic) double sessionDuration;                        //@synthesize sessionDuration=_sessionDuration - In the implementation block
@property (assign,nonatomic) double previousSessionsDuration;               //@synthesize previousSessionsDuration=_previousSessionsDuration - In the implementation block
@property (assign,nonatomic) unsigned long long sessionNumber;              //@synthesize sessionNumber=_sessionNumber - In the implementation block
@property (nonatomic,retain) NSNumber * messageID;                          //@synthesize messageID=_messageID - In the implementation block
@property (nonatomic,retain) NSNumber * campaignID;                         //@synthesize campaignID=_campaignID - In the implementation block
-(NSNumber *)campaignID;
-(BOOL)isEqualToSession:(id)arg1 ;
-(double)previousSessionsDuration;
-(void)setCampaignID:(NSNumber *)arg1 ;
-(double)sessionDuration;
-(id)initWithStartTime:(double)arg1 sessionDuration:(double)arg2 previousSessionsDuration:(double)arg3 sessionNumber:(unsigned long long)arg4 messageID:(id)arg5 campaignID:(id)arg6 ;
-(void)setPreviousSessionsDuration:(double)arg1 ;
-(void)setSessionDuration:(double)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(void)setStartTime:(double)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(double)startTime;
-(unsigned long long)sessionNumber;
-(void)setSessionNumber:(unsigned long long)arg1 ;
-(NSNumber *)messageID;
-(void)setMessageID:(NSNumber *)arg1 ;
@end
