/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, July 26, 2016 at 8:15:16 AM Japan Standard Time
* Operating System: Version 9.1 (Build 13B143)
* Image Source: /var/mobile/Containers/Bundle/Application/3751615E-11D9-4657-82AD-52C04FE38F0D/pokemongo.app/pokemongo
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableURLRequest, NSThread, NSError;

@interface GTMOAuth2AuthorizationArgs : NSObject {

	NSMutableURLRequest* request_;
	id delegate_;
	SEL sel_;
	id completionHandler_;
	NSThread* thread_;
	NSError* error_;

}

@property (retain) NSMutableURLRequest * request; 
@property (retain) id delegate; 
@property (assign) SEL selector; 
@property (copy) id completionHandler; 
@property (retain) NSThread * thread; 
@property (retain) NSError * error; 
+(id)argsWithRequest:(id)arg1 delegate:(id)arg2 selector:(SEL)arg3 completionHandler:(id)arg4 thread:(id)arg5 ;
-(NSError *)error;
-(void)setDelegate:(id)arg1 ;
-(void)dealloc;
-(id)delegate;
-(NSMutableURLRequest *)request;
-(void)setSelector:(SEL)arg1 ;
-(id)completionHandler;
-(void)setCompletionHandler:(id)arg1 ;
-(SEL)selector;
-(void)setThread:(NSThread *)arg1 ;
-(NSThread *)thread;
-(void)setRequest:(NSMutableURLRequest *)arg1 ;
-(void)setError:(NSError *)arg1 ;
@end

