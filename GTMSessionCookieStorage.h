/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, July 26, 2016 at 8:15:16 AM Japan Standard Time
* Operating System: Version 9.1 (Build 13B143)
* Image Source: /var/mobile/Containers/Bundle/Application/3751615E-11D9-4657-82AD-52C04FE38F0D/pokemongo.app/pokemongo
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CFNetwork/NSHTTPCookieStorage.h>

@class NSMutableArray;

@interface GTMSessionCookieStorage : NSHTTPCookieStorage {

	NSMutableArray* _cookies;
	unsigned long long _policy;

}
+(BOOL)hasCookieExpired:(id)arg1 ;
-(void)internalSetCookie:(id)arg1 ;
-(id)cookieMatchingCookie:(id)arg1 ;
-(void)removeExpiredCookies;
-(void)setCookies:(id)arg1 ;
-(void)getCookiesForTask:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)storeCookies:(id)arg1 forTask:(id)arg2 ;
-(void)setCookie:(id)arg1 ;
-(id)init;
-(void)setCookieAcceptPolicy:(unsigned long long)arg1 ;
-(id)cookiesForURL:(id)arg1 ;
-(void)removeAllCookies;
-(unsigned long long)cookieAcceptPolicy;
-(id)cookies;
-(void)setCookies:(id)arg1 forURL:(id)arg2 mainDocumentURL:(id)arg3 ;
-(void)deleteCookie:(id)arg1 ;
@end

