/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, July 26, 2016 at 8:15:16 AM Japan Standard Time
* Operating System: Version 9.1 (Build 13B143)
* Image Source: /var/mobile/Containers/Bundle/Application/3751615E-11D9-4657-82AD-52C04FE38F0D/pokemongo.app/pokemongo
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface CRSequenceNumber : NSObject {

	int _value;
	NSString* _path;

}

@property (nonatomic,retain) NSString * path;              //@synthesize path=_path - In the implementation block
@property (assign,nonatomic) int value;                    //@synthesize value=_value - In the implementation block
-(id)initWithDirectoryTree:(id)arg1 andRelativePath:(id)arg2 ;
-(int)incrementValue;
-(void)save;
-(NSString *)path;
-(int)value;
-(void)setValue:(int)arg1 ;
-(void)setPath:(NSString *)arg1 ;
@end
