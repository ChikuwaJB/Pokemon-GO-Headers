/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, July 26, 2016 at 8:15:16 AM Japan Standard Time
* Operating System: Version 9.1 (Build 13B143)
* Image Source: /var/mobile/Containers/Bundle/Application/3751615E-11D9-4657-82AD-52C04FE38F0D/pokemongo.app/pokemongo
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <pokemongo/pokemongo-Structs.h>
#import <pokemongo/SKPaymentTransactionObserver.h>
#import <pokemongo/SKProductsRequestDelegate.h>

@protocol OS_dispatch_queue;
@class SKProductsRequest, NSObject, NSMutableDictionary, NSString;

@interface NIAInAppBillingProvider : NSObject <SKPaymentTransactionObserver, SKProductsRequestDelegate> {

	SKProductsRequest* _productsRequest;
	NSObject*<OS_dispatch_queue> _workQueue;
	BOOL _addedObserver;
	shared_ptr<nia::game::iap::ios::IosBillingDelegate>* _delegate;
	NSMutableDictionary* _itemToProduct;

}

@property (retain) NSMutableDictionary * itemToProduct;              //@synthesize itemToProduct=_itemToProduct - In the implementation block
@property (readonly) BOOL isBillingAvailable; 
@property (readonly) BOOL isTransactionInProgress; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)formatPrice:(id)arg1 ;
-(BOOL)isBillingAvailable;
-(void)purchasableItems:(id)arg1 ;
-(void)purchaseItem:(id)arg1 forUser:(id)arg2 ;
-(void)didProcessAppleBilling:(BOOL)arg1 transactions:(id)arg2 ;
-(void)removeObserver;
-(void)addObserver;
-(id)getProductForItem:(id)arg1 ;
-(void)completeOnePurchase:(id)arg1 ;
-(void)processTransactions:(id)arg1 ;
-(void)removeTransactions:(id)arg1 ;
-(void)tryToCompleteOutstandingTransactions;
-(NSMutableDictionary *)itemToProduct;
-(void)setItemToProduct:(NSMutableDictionary *)arg1 ;
-(void)finishTransaction:(id)arg1 ;
-(void)paymentQueue:(id)arg1 updatedTransactions:(id)arg2 ;
-(void)paymentQueue:(id)arg1 removedTransactions:(id)arg2 ;
-(void)productsRequest:(id)arg1 didReceiveResponse:(id)arg2 ;
-(void)setDelegate:(const shared_ptr<nia::game::iap::ios::IosBillingDelegate>*)arg1 ;
-(void)dealloc;
-(id)initWithDelegate:(const shared_ptr<nia::game::iap::ios::IosBillingDelegate>*)arg1 ;
-(BOOL)isTransactionInProgress;
@end

