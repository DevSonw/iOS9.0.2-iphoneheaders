/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:11:56 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/AdSheet.app/AdSheet
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSXPCListenerDelegate.h>

@class NSXPCListener, NSString;

@interface ADSAnalytics : NSObject <NSXPCListenerDelegate> {

	NSXPCListener* _xpcListener;

}

@property (nonatomic,retain) NSXPCListener * xpcListener;              //@synthesize xpcListener=_xpcListener - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)startAnalyticsConnection;
-(id)init;
-(char)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(NSXPCListener *)xpcListener;
-(void)setXpcListener:(NSXPCListener *)arg1 ;
-(void)_remote_reportIngestionForPassWithTeamIdentifier:(id)arg1 passTypeIdentifier:(id)arg2 serialNumber:(id)arg3 iAdReportingIdentifier:(id)arg4 completionHandler:(/*^block*/id)arg5 ;
@end
