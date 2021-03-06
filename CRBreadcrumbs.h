/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, July 26, 2016 at 8:15:16 AM Japan Standard Time
* Operating System: Version 9.1 (Build 13B143)
* Image Source: /var/mobile/Containers/Bundle/Application/3751615E-11D9-4657-82AD-52C04FE38F0D/pokemongo.app/pokemongo
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <pokemongo/CRNetStatObserver.h>

@class CRBreadcrumbsArchive, CritterImpl;

@interface CRBreadcrumbs : NSObject <CRNetStatObserver> {

	CRBreadcrumbsArchive* _crashedArchive;
	CRBreadcrumbsArchive* _previousArchive;
	CritterImpl* _critterDelegate;
	CRBreadcrumbsArchive* _archive;

}

@property (readonly) CRBreadcrumbsArchive * crashedArchive;                 //@synthesize crashedArchive=_crashedArchive - In the implementation block
@property (readonly) CRBreadcrumbsArchive * previousArchive;                //@synthesize previousArchive=_previousArchive - In the implementation block
@property (__weak) CritterImpl * critterDelegate;                           //@synthesize critterDelegate=_critterDelegate - In the implementation block
@property (nonatomic,readonly) CRBreadcrumbsArchive * archive;              //@synthesize archive=_archive - In the implementation block
+(id)extractUserBreadcrumbsFrom:(double)arg1 toEndTime:(double)arg2 ;
+(id)systemBreadcrumbs;
+(id)extractEndpointsFrom:(double)arg1 toEndTime:(double)arg2 ;
+(id)userBreadcrumbs;
+(void)leaveViewBreadcrumb:(int)arg1 withViewName:(id)arg2 ;
+(id)networkBreadcrumbs;
+(void)shuffleUserBreadcrumbs;
+(id)getAllSessionsUserBreadcrumbs;
+(id)extractAllEndpoints;
+(void)setAsyncMode:(BOOL)arg1 ;
+(void)leaveErrorBreadcrumb:(id)arg1 withReason:(id)arg2 ;
+(void)leaveReachabilityBreadcrumb:(int)arg1 ;
+(void)leaveEventBreadcrumb:(id)arg1 ;
+(void)leaveReachabilityBreadcrumb:(int)arg1 forType:(id)arg2 ;
+(void)leaveReachabilityBreadcrumb:(int)arg1 fromType:(id)arg2 toType:(id)arg3 ;
+(void)leaveUserBreadcrumb:(id)arg1 withPriority:(int)arg2 ;
+(id)getWindowsStyleShuffledPluginUserBreadcrumbs;
+(id)getWindowsStyleUserBreadcrumbs;
+(void)leaveSessionStartBreadcrumb;
+(void)leaveNetworkBreadcrumb:(id)arg1 ;
+(void)leaveCrashBreadcrumb:(id)arg1 withReason:(id)arg2 withTimestamp:(id)arg3 ;
-(void)logNetworkRequest:(id)arg1 ;
-(id)recentBreadcrumbsFrom:(double)arg1 toEndTime:(double)arg2 ;
-(CritterImpl *)critterDelegate;
-(void)setCritterDelegate:(CritterImpl *)arg1 ;
-(id)recentBreadcrumbs;
-(void)addBreadcrumb:(int)arg1 withObject:(id)arg2 ;
-(void)clearBreadcrumbs;
-(id)reservedBreadcrumbs;
-(id)initWithName:(id)arg1 withmaxCount:(unsigned)arg2 ;
-(void)leaveSessionStartBreadcrumb;
-(id)getAllSessionsBreadcrumbs;
-(id)getCurrentSessionStartBreadcrumb;
-(void)shuffleBreadcrumbs;
-(id)readFromFile;
-(CRBreadcrumbsArchive *)crashedArchive;
-(CRBreadcrumbsArchive *)previousArchive;
-(CRBreadcrumbsArchive *)archive;
@end

