/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, July 26, 2016 at 8:15:16 AM Japan Standard Time
* Operating System: Version 9.1 (Build 13B143)
* Image Source: /var/mobile/Containers/Bundle/Application/3751615E-11D9-4657-82AD-52C04FE38F0D/pokemongo.app/pokemongo
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSObject, NSString, NSMutableArray;

@interface CRRequest : NSObject {

	int _requestType;
	NSObject* _payload;
	NSString* _baseURL;
	NSString* _endpoint;
	NSMutableArray* _parts;

}

@property (retain) NSObject * payload;                  //@synthesize payload=_payload - In the implementation block
@property (copy) NSString * baseURL;                    //@synthesize baseURL=_baseURL - In the implementation block
@property (copy) NSString * endpoint;                   //@synthesize endpoint=_endpoint - In the implementation block
@property (retain) NSMutableArray * parts;              //@synthesize parts=_parts - In the implementation block
-(id)initWithBaseURL:(id)arg1 andEndPoint:(id)arg2 andRequestType:(int)arg3 ;
-(id)getURLRequest;
-(id)buildURIEncodedRequest;
-(id)buildJSONRequest;
-(id)buildMultipartRequest;
-(id)buildPOSTRequest;
-(NSObject *)payload;
-(NSString *)baseURL;
-(NSString *)endpoint;
-(void)setPayload:(NSObject *)arg1 ;
-(void)addPart:(id)arg1 ;
-(void)setParts:(NSMutableArray *)arg1 ;
-(NSMutableArray *)parts;
-(void)setBaseURL:(NSString *)arg1 ;
-(void)setEndpoint:(NSString *)arg1 ;
@end

