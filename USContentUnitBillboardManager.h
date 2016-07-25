/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, July 26, 2016 at 8:15:17 AM Japan Standard Time
* Operating System: Version 9.1 (Build 13B143)
* Image Source: /var/mobile/Containers/Bundle/Application/3751615E-11D9-4657-82AD-52C04FE38F0D/pokemongo.app/pokemongo
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <pokemongo/USContentUnitViewControllerCacheDelegate.h>
#import <pokemongo/USActionMapManagerObserver.h>
#import <pokemongo/USContentUnitBillboardDataSource.h>
#import <pokemongo/USBillboardManager.h>

@protocol UpsightDataStoreInterface, USActionMapManagerInterface;
@class NSDictionary, USContentUnitViewControllerCache, USURLLoader, NSMutableDictionary, NSMutableArray, NSString;

@interface USContentUnitBillboardManager : NSObject <USContentUnitViewControllerCacheDelegate, USActionMapManagerObserver, USContentUnitBillboardDataSource, USBillboardManager> {

	NSDictionary* _actionTypeToHandlerMap;
	USContentUnitViewControllerCache* _controllersCache;
	USURLLoader* _URLLoader;
	id<UpsightDataStoreInterface> _dataStore;
	NSMutableDictionary* _scopeToBillboardMap;
	NSMutableArray* _presentScopedContentRecords;
	NSMutableDictionary* _triggerIfContentAvailableTasks;
	id<USActionMapManagerInterface> _actionMapManager;

}

@property (nonatomic,readonly) id<UpsightDataStoreInterface> dataStore;                         //@synthesize dataStore=_dataStore - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * scopeToBillboardMap;                         //@synthesize scopeToBillboardMap=_scopeToBillboardMap - In the implementation block
@property (nonatomic,retain) NSMutableArray * presentScopedContentRecords;                      //@synthesize presentScopedContentRecords=_presentScopedContentRecords - In the implementation block
@property (nonatomic,retain) USContentUnitViewControllerCache * controllersCache;               //@synthesize controllersCache=_controllersCache - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * triggerIfContentAvailableTasks;              //@synthesize triggerIfContentAvailableTasks=_triggerIfContentAvailableTasks - In the implementation block
@property (nonatomic,readonly) id<USActionMapManagerInterface> actionMapManager;                //@synthesize actionMapManager=_actionMapManager - In the implementation block
@property (nonatomic,readonly) NSDictionary * actionTypeToHandlerMap;                           //@synthesize actionTypeToHandlerMap=_actionTypeToHandlerMap - In the implementation block
@property (readonly) USURLLoader * URLLoader;                                                   //@synthesize URLLoader=_URLLoader - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)billboardForScope:(id)arg1 ;
-(void)actionMapManager:(id)arg1 didDestroyActionMap:(id)arg2 ;
-(NSDictionary *)actionTypeToHandlerMap;
-(NSMutableDictionary *)scopeToBillboardMap;
-(/*^block*/id)buildContent;
-(/*^block*/id)presentScopedContent;
-(/*^block*/id)presentScopelessContent;
-(/*^block*/id)sendEvent;
-(/*^block*/id)triggerIfContentAvailable;
-(/*^block*/id)notifyRewards;
-(/*^block*/id)notifyPurchases;
-(/*^block*/id)triggerActions;
-(/*^block*/id)openURL;
-(/*^block*/id)sendFormData;
-(/*^block*/id)presentCloseButton;
-(/*^block*/id)associateOnce;
-(/*^block*/id)openInAppStore;
-(USContentUnitViewControllerCache *)controllersCache;
-(NSMutableDictionary *)triggerIfContentAvailableTasks;
-(id)findBillboardForActionMap:(id)arg1 ;
-(USURLLoader *)URLLoader;
-(void)cache:(id)arg1 didAddController:(id)arg2 ;
-(BOOL)isContentAvailableForBillboard:(id)arg1 ;
-(id)initWithDataStore:(id)arg1 actionMapManager:(id)arg2 ;
-(void)setControllersCache:(USContentUnitViewControllerCache *)arg1 ;
-(void)setScopeToBillboardMap:(NSMutableDictionary *)arg1 ;
-(NSMutableArray *)presentScopedContentRecords;
-(void)setPresentScopedContentRecords:(NSMutableArray *)arg1 ;
-(void)setTriggerIfContentAvailableTasks:(NSMutableDictionary *)arg1 ;
-(id<USActionMapManagerInterface>)actionMapManager;
-(BOOL)presentViewController:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(id<UpsightDataStoreInterface>)dataStore;
@end
