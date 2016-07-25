/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, July 26, 2016 at 8:15:17 AM Japan Standard Time
* Operating System: Version 9.1 (Build 13B143)
* Image Source: /var/mobile/Containers/Bundle/Application/3751615E-11D9-4657-82AD-52C04FE38F0D/pokemongo.app/pokemongo
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <pokemongo/pokemongo-Structs.h>
@class NSArray, NSDictionary, NSString;

@interface USUXMSchema : NSObject {

	NSArray* _tags;
	NSArray* _arrayRepresentation;
	NSDictionary* _variablesForTags;
	NSString* _schemaHash;

}

@property (nonatomic,retain) NSArray * tags;                               //@synthesize tags=_tags - In the implementation block
@property (nonatomic,retain) NSArray * arrayRepresentation;                //@synthesize arrayRepresentation=_arrayRepresentation - In the implementation block
@property (nonatomic,retain) NSDictionary * variablesForTags;              //@synthesize variablesForTags=_variablesForTags - In the implementation block
@property (nonatomic,retain) NSString * schemaHash;                        //@synthesize schemaHash=_schemaHash - In the implementation block
+(id)schemaForTag:(id)arg1 ;
+(id)sharedSchema;
+(id)schemaHash;
+(id)tags;
+(id)arrayRepresentation;
-(id)schemaForTag:(id)arg1 ;
-(NSString *)schemaHash;
-(NSDictionary *)variablesForTags;
-(void)loadUXMVariables;
-(id)schemaFilePath;
-(void)setVariablesForTags:(NSDictionary *)arg1 ;
-(void)setArrayRepresentation:(NSArray *)arg1 ;
-(void)setSchemaHash:(NSString *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSArray *)tags;
-(void)setTags:(NSArray *)arg1 ;
-(NSArray *)arrayRepresentation;
@end
