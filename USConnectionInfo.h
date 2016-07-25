/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, July 26, 2016 at 8:15:17 AM Japan Standard Time
* Operating System: Version 9.1 (Build 13B143)
* Image Source: /var/mobile/Containers/Bundle/Application/3751615E-11D9-4657-82AD-52C04FE38F0D/pokemongo.app/pokemongo
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSURLConnection, NSMutableData, NSOperationQueue, NSString, NSError;

@interface USConnectionInfo : NSObject {

	NSURLConnection* _connection;
	NSMutableData* _responseData;
	NSOperationQueue* _callbackQueue;
	NSString* _referenceID;
	NSString* _signature;
	NSError* _error;
	/*^block*/id _completionHandler;

}

@property (nonatomic,retain) NSURLConnection * connection;                  //@synthesize connection=_connection - In the implementation block
@property (nonatomic,retain) NSMutableData * responseData;                  //@synthesize responseData=_responseData - In the implementation block
@property (nonatomic,retain) NSOperationQueue * callbackQueue;              //@synthesize callbackQueue=_callbackQueue - In the implementation block
@property (nonatomic,retain) NSString * referenceID;                        //@synthesize referenceID=_referenceID - In the implementation block
@property (nonatomic,retain) NSString * signature;                          //@synthesize signature=_signature - In the implementation block
@property (nonatomic,retain) NSError * error;                               //@synthesize error=_error - In the implementation block
@property (nonatomic,copy) id completionHandler;                            //@synthesize completionHandler=_completionHandler - In the implementation block
-(void)notifyClientWithCompletionHandler:(/*^block*/id)arg1 ;
-(NSString *)referenceID;
-(void)setReferenceID:(NSString *)arg1 ;
-(NSError *)error;
-(id)completionHandler;
-(void)setCompletionHandler:(id)arg1 ;
-(NSURLConnection *)connection;
-(void)setConnection:(NSURLConnection *)arg1 ;
-(void)setSignature:(NSString *)arg1 ;
-(NSString *)signature;
-(NSMutableData *)responseData;
-(void)setResponseData:(NSMutableData *)arg1 ;
-(void)setCallbackQueue:(NSOperationQueue *)arg1 ;
-(NSOperationQueue *)callbackQueue;
-(void)setError:(NSError *)arg1 ;
@end
