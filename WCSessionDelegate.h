/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, July 26, 2016 at 8:15:16 AM Japan Standard Time
* Operating System: Version 9.1 (Build 13B143)
* Image Source: /var/mobile/Containers/Bundle/Application/3751615E-11D9-4657-82AD-52C04FE38F0D/pokemongo.app/pokemongo
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol WCSessionDelegate <NSObject>
@optional
-(void)session:(id)arg1 didReceiveMessage:(id)arg2 replyHandler:(/*^block*/id)arg3;
-(void)session:(id)arg1 didReceiveMessage:(id)arg2;
-(void)session:(id)arg1 didReceiveMessageData:(id)arg2 replyHandler:(/*^block*/id)arg3;
-(void)session:(id)arg1 didReceiveMessageData:(id)arg2;
-(void)session:(id)arg1 didReceiveApplicationContext:(id)arg2;
-(void)session:(id)arg1 didReceiveFile:(id)arg2;
-(void)session:(id)arg1 didFinishFileTransfer:(id)arg2 error:(id)arg3;
-(void)session:(id)arg1 didReceiveUserInfo:(id)arg2;
-(void)session:(id)arg1 didFinishUserInfoTransfer:(id)arg2 error:(id)arg3;
-(void)sessionReachabilityDidChange:(id)arg1;
-(void)sessionWatchStateDidChange:(id)arg1;

@end

