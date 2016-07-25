/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, July 26, 2016 at 8:15:17 AM Japan Standard Time
* Operating System: Version 9.1 (Build 13B143)
* Image Source: /var/mobile/Containers/Bundle/Application/3751615E-11D9-4657-82AD-52C04FE38F0D/pokemongo.app/pokemongo
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <pokemongo/USDeliveryQueueInterface.h>

@protocol USDeliveryQueueDelegate;
@class USQueueConfiguration, NSString, NSOperationQueue;

@interface USTrashDeliveryQueue : NSObject <USDeliveryQueueInterface> {

	id<USDeliveryQueueDelegate> _delegate;
	USQueueConfiguration* _queueConfiguration;
	NSOperationQueue* _operationQueue;

}

@property (nonatomic,retain) USQueueConfiguration * queueConfiguration;                //@synthesize queueConfiguration=_queueConfiguration - In the implementation block
@property (nonatomic,retain) NSOperationQueue * operationQueue;                        //@synthesize operationQueue=_operationQueue - In the implementation block
@property (nonatomic,readonly) NSString * name; 
@property (assign,nonatomic,__weak) id<USDeliveryQueueDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)initWithQueueConfiguration:(id)arg1 operationQueue:(id)arg2 ;
-(USQueueConfiguration *)queueConfiguration;
-(void)enqueuePacket:(id)arg1 ;
-(void)setQueueConfiguration:(USQueueConfiguration *)arg1 ;
-(void)setDelegate:(id<USDeliveryQueueDelegate>)arg1 ;
-(id)init;
-(id<USDeliveryQueueDelegate>)delegate;
-(NSString *)name;
-(void)setOperationQueue:(NSOperationQueue *)arg1 ;
-(void)drain;
-(NSOperationQueue *)operationQueue;
@end
