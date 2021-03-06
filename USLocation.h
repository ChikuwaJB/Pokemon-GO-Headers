/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, July 26, 2016 at 8:15:17 AM Japan Standard Time
* Operating System: Version 9.1 (Build 13B143)
* Image Source: /var/mobile/Containers/Bundle/Application/3751615E-11D9-4657-82AD-52C04FE38F0D/pokemongo.app/pokemongo
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <pokemongo/pokemongo-Structs.h>
#import <libobjc.A.dylib/NSCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class CLLocation;

@interface USLocation : NSObject <NSCoding, NSCopying> {

	CLLocation* _coreLocation;
	unsigned long long _validForSessionWithNumber;

}

@property (nonatomic,readonly) CLLocation * coreLocation;                               //@synthesize coreLocation=_coreLocation - In the implementation block
@property (getter=isValid,nonatomic,readonly) BOOL valid; 
@property (assign,nonatomic) unsigned long long validForSessionWithNumber;              //@synthesize validForSessionWithNumber=_validForSessionWithNumber - In the implementation block
-(CLLocation *)coreLocation;
-(unsigned long long)validForSessionWithNumber;
-(void)setValidForSessionWithNumber:(unsigned long long)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(BOOL)isValid;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithCoreLocation:(id)arg1 ;
@end

