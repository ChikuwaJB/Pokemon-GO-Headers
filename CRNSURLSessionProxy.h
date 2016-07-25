/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, July 26, 2016 at 8:15:16 AM Japan Standard Time
* Operating System: Version 9.1 (Build 13B143)
* Image Source: /var/mobile/Containers/Bundle/Application/3751615E-11D9-4657-82AD-52C04FE38F0D/pokemongo.app/pokemongo
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSProxy.h>

@class NSURLSession, CRNetStatDispatch;

@interface CRNSURLSessionProxy : NSProxy {

	NSURLSession* _session;
	CRNetStatDispatch* _dispatch;

}

@property (nonatomic,readonly) NSURLSession * session;                    //@synthesize session=_session - In the implementation block
@property (nonatomic,readonly) CRNetStatDispatch * dispatch;              //@synthesize dispatch=_dispatch - In the implementation block
+(BOOL)isInstrumented;
+(void)instrumentNSURLSessionWithDispatch:(id)arg1 ;
+(void)uninstrumentNSURLSession;
-(id)initWithSession:(id)arg1 dispatch:(id)arg2 ;
-(id)dataTaskWithURL:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)downloadTaskWithRequest:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)dataTaskWithURL:(id)arg1 ;
-(id)downloadTaskWithResumeData:(id)arg1 ;
-(id)downloadTaskWithURL:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)downloadTaskWithResumeData:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)dataTaskWithRequest:(id)arg1 ;
-(NSURLSession *)session;
-(BOOL)respondsToSelector:(SEL)arg1 ;
-(id)description;
-(id)debugDescription;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(void)forwardInvocation:(id)arg1 ;
-(id)dataTaskWithRequest:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)downloadTaskWithURL:(id)arg1 ;
-(id)downloadTaskWithRequest:(id)arg1 ;
-(CRNetStatDispatch *)dispatch;
@end
