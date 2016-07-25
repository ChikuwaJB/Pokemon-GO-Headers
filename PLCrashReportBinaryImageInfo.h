/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, July 26, 2016 at 8:15:16 AM Japan Standard Time
* Operating System: Version 9.1 (Build 13B143)
* Image Source: /var/mobile/Containers/Bundle/Application/3751615E-11D9-4657-82AD-52C04FE38F0D/pokemongo.app/pokemongo
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class PLCrashReportProcessorInfo, NSString;

@interface PLCrashReportBinaryImageInfo : NSObject {

	PLCrashReportProcessorInfo* _processorInfo;
	unsigned long long _baseAddress;
	unsigned long long _imageSize;
	NSString* _imageName;
	BOOL _hasImageUUID;
	NSString* _imageUUID;

}

@property (nonatomic,readonly) PLCrashReportProcessorInfo * codeType;              //@synthesize processorInfo=_processorInfo - In the implementation block
@property (nonatomic,readonly) unsigned long long imageBaseAddress;                //@synthesize baseAddress=_baseAddress - In the implementation block
@property (nonatomic,readonly) unsigned long long imageSize;                       //@synthesize imageSize=_imageSize - In the implementation block
@property (nonatomic,readonly) NSString * imageName;                               //@synthesize imageName=_imageName - In the implementation block
@property (nonatomic,readonly) BOOL hasImageUUID;                                  //@synthesize hasImageUUID=_hasImageUUID - In the implementation block
@property (nonatomic,readonly) NSString * imageUUID;                               //@synthesize imageUUID=_imageUUID - In the implementation block
-(unsigned long long)imageBaseAddress;
-(id)initWithCodeType:(id)arg1 baseAddress:(unsigned long long)arg2 size:(unsigned long long)arg3 name:(id)arg4 uuid:(id)arg5 ;
-(BOOL)hasImageUUID;
-(void)dealloc;
-(unsigned long long)imageSize;
-(NSString *)imageName;
-(NSString *)imageUUID;
-(PLCrashReportProcessorInfo *)codeType;
@end

