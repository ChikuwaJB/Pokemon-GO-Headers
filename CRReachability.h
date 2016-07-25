/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, July 26, 2016 at 8:15:16 AM Japan Standard Time
* Operating System: Version 9.1 (Build 13B143)
* Image Source: /var/mobile/Containers/Bundle/Application/3751615E-11D9-4657-82AD-52C04FE38F0D/pokemongo.app/pokemongo
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <pokemongo/pokemongo-Structs.h>
@class NSString;

@interface CRReachability : NSObject {

	BOOL localWiFiRef;
	BOOL _scheduled;
	SCNetworkReachabilityRef _reachabilityRef;
	NSString* _notificationCenterKey;

}

@property (retain) NSString * notificationCenterKey;              //@synthesize notificationCenterKey=_notificationCenterKey - In the implementation block
+(id)reachabilityForHostName:(id)arg1 withNotificationKey:(id)arg2 ;
+(id)reachabilityWithAddress:(const sockaddr_in*)arg1 withKey:(id)arg2 ;
+(id)reachabilityForWiFiWithNotificationKey:(id)arg1 ;
+(id)reachabilityForHostName:(id)arg1 ;
+(id)reachabilityForWiFi;
+(id)reachabilityForInternetConnection;
-(id)initWithNotificationKey:(id)arg1 ;
-(void)setNotificationCenterKey:(NSString *)arg1 ;
-(id)currentReachabilityStatusString;
-(NSString *)notificationCenterKey;
-(void)dealloc;
-(BOOL)connectionRequired;
-(int)currentReachabilityStatus;
-(BOOL)startNotifier;
-(void)stopNotifier;
@end
