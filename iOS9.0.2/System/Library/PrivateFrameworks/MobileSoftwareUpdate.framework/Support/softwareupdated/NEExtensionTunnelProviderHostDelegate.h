/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:38:56 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/MobileSoftwareUpdate.framework/Support/softwareupdated
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol NEExtensionTunnelProviderHostDelegate <NEExtensionProviderHostDelegate>
@required
-(void)extension:(id)arg1 didRequestSocket:(char)arg2 interface:(id)arg3 local:(id)arg4 remote:(id)arg5 completionHandler:(/*^block*/id)arg6;
-(void)extension:(id)arg1 didSetStatus:(int)arg2;
-(void)extension:(id)arg1 didSetTunnelConfiguration:(id)arg2 completionHandler:(/*^block*/id)arg3;
-(void)extensionDidDetachIPC:(id)arg1;

@end

