/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, July 26, 2016 at 8:15:17 AM Japan Standard Time
* Operating System: Version 9.1 (Build 13B143)
* Image Source: /var/mobile/Containers/Bundle/Application/3751615E-11D9-4657-82AD-52C04FE38F0D/pokemongo.app/pokemongo
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSCoding.h>

@class NSString, NSArray;

@interface USUpsightDataFilter : NSObject <NSCoding> {

	NSString* _key;
	NSArray* _values;

}

@property (nonatomic,readonly) NSString * key;                //@synthesize key=_key - In the implementation block
@property (nonatomic,readonly) NSArray * values;              //@synthesize values=_values - In the implementation block
-(id)initWithKey:(id)arg1 values:(id)arg2 ;
-(BOOL)isEqualToFilter:(id)arg1 ;
-(BOOL)matchesUpsightData:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)key;
-(NSArray *)values;
@end
