/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, July 26, 2016 at 8:15:17 AM Japan Standard Time
* Operating System: Version 9.1 (Build 13B143)
* Image Source: /var/mobile/Containers/Bundle/Application/3751615E-11D9-4657-82AD-52C04FE38F0D/pokemongo.app/pokemongo
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <pokemongo/USConfigurationBase.h>

@class NSString;

@interface USQueueConfiguration : USConfigurationBase {

	BOOL _countNetworkFailRetries;
	NSString* _name;
	double _sendInterval;
	unsigned long long _batchSize;
	double _retryInterval;
	unsigned long long _maxRetryCount;
	NSString* _URLFormat;
	NSString* _protocol;
	NSString* _host;

}

@property (nonatomic,copy) NSString * name;                                 //@synthesize name=_name - In the implementation block
@property (assign,nonatomic) double sendInterval;                           //@synthesize sendInterval=_sendInterval - In the implementation block
@property (assign,nonatomic) unsigned long long batchSize;                  //@synthesize batchSize=_batchSize - In the implementation block
@property (assign,nonatomic) BOOL countNetworkFailRetries;                  //@synthesize countNetworkFailRetries=_countNetworkFailRetries - In the implementation block
@property (assign,nonatomic) double retryInterval;                          //@synthesize retryInterval=_retryInterval - In the implementation block
@property (assign,nonatomic) unsigned long long maxRetryCount;              //@synthesize maxRetryCount=_maxRetryCount - In the implementation block
@property (nonatomic,retain) NSString * URLFormat;                          //@synthesize URLFormat=_URLFormat - In the implementation block
@property (nonatomic,retain) NSString * protocol;                           //@synthesize protocol=_protocol - In the implementation block
@property (nonatomic,retain) NSString * host;                               //@synthesize host=_host - In the implementation block
+(id)trashQueueConfigurationDictionary;
+(BOOL)isValidConfigurationDictionary:(id)arg1 ;
+(id)requiredKeys;
-(BOOL)countNetworkFailRetries;
-(NSString *)URLFormat;
-(double)sendInterval;
-(void)setSendInterval:(double)arg1 ;
-(void)setCountNetworkFailRetries:(BOOL)arg1 ;
-(void)setURLFormat:(NSString *)arg1 ;
-(unsigned long long)batchSize;
-(void)setBatchSize:(unsigned long long)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(NSString *)host;
-(NSString *)protocol;
-(void)setMaxRetryCount:(unsigned long long)arg1 ;
-(unsigned long long)maxRetryCount;
-(void)setHost:(NSString *)arg1 ;
-(double)retryInterval;
-(void)setRetryInterval:(double)arg1 ;
-(id)initWithConfigurationDictionary:(id)arg1 ;
-(void)setProtocol:(NSString *)arg1 ;
@end
