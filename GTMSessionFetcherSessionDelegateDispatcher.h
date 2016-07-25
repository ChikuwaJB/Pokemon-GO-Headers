/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, July 26, 2016 at 8:15:16 AM Japan Standard Time
* Operating System: Version 9.1 (Build 13B143)
* Image Source: /var/mobile/Containers/Bundle/Application/3751615E-11D9-4657-82AD-52C04FE38F0D/pokemongo.app/pokemongo
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSURLSessionDelegate.h>

@protocol OS_dispatch_semaphore;
@class GTMSessionFetcherService, NSURLSession, NSObject, NSMutableDictionary, NSTimer, NSString;

@interface GTMSessionFetcherSessionDelegateDispatcher : NSObject <NSURLSessionDelegate> {

	GTMSessionFetcherService* _parentService;
	NSURLSession* _session;
	NSObject*<OS_dispatch_semaphore> _sessionCreationSemaphore;
	NSMutableDictionary* _taskToFetcherMap;
	NSTimer* _discardTimer;
	double _discardInterval;

}

@property (retain) NSURLSession * session; 
@property (readonly) NSObject*<OS_dispatch_semaphore> sessionCreationSemaphore;              //@synthesize sessionCreationSemaphore=_sessionCreationSemaphore - In the implementation block
@property (assign) double discardInterval; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithParentService:(id)arg1 sessionDiscardInterval:(double)arg2 ;
-(void)abandon;
-(NSObject*<OS_dispatch_semaphore>)sessionCreationSemaphore;
-(void)setFetcher:(id)arg1 forTask:(id)arg2 ;
-(void)removeFetcher:(id)arg1 ;
-(void)setDiscardInterval:(double)arg1 ;
-(void)discardTimerFired:(id)arg1 ;
-(void)destroySessionAndTimer;
-(void)destroyDiscardTimer;
-(void)startDiscardTimer;
-(id)fetcherForTask:(id)arg1 ;
-(void)removeTaskFromMap:(id)arg1 ;
-(double)discardInterval;
-(void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveResponse:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)URLSession:(id)arg1 dataTask:(id)arg2 didBecomeDownloadTask:(id)arg3 ;
-(void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3 ;
-(void)URLSession:(id)arg1 dataTask:(id)arg2 willCacheResponse:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)URLSession:(id)arg1 task:(id)arg2 willPerformHTTPRedirection:(id)arg3 newRequest:(id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)URLSession:(id)arg1 task:(id)arg2 didReceiveChallenge:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)URLSession:(id)arg1 task:(id)arg2 needNewBodyStream:(/*^block*/id)arg3 ;
-(void)URLSession:(id)arg1 task:(id)arg2 didSendBodyData:(long long)arg3 totalBytesSent:(long long)arg4 totalBytesExpectedToSend:(long long)arg5 ;
-(void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3 ;
-(void)URLSession:(id)arg1 didBecomeInvalidWithError:(id)arg2 ;
-(NSURLSession *)session;
-(id)init;
-(NSString *)description;
-(void)setSession:(NSURLSession *)arg1 ;
-(void)URLSession:(id)arg1 downloadTask:(id)arg2 didFinishDownloadingToURL:(id)arg3 ;
-(void)URLSession:(id)arg1 downloadTask:(id)arg2 didWriteData:(long long)arg3 totalBytesWritten:(long long)arg4 totalBytesExpectedToWrite:(long long)arg5 ;
-(void)URLSession:(id)arg1 downloadTask:(id)arg2 didResumeAtOffset:(long long)arg3 expectedTotalBytes:(long long)arg4 ;
@end

