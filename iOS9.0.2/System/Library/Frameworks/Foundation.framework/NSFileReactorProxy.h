/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:30:38 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_xpc_object;
@class NSObject, NSFileAccessNode;

@interface NSFileReactorProxy : NSObject {

	NSObject*<OS_xpc_object> _client;
	id _reactorID;
	/*^block*/id _messageSender;
	NSFileAccessNode* _itemLocation;

}
-(id)itemLocation;
-(void)setItemLocation:(id)arg1 ;
-(id)reactorID;
-(/*^block*/id)messageSender;
-(id)initWithClient:(id)arg1 reactorID:(id)arg2 messageSender:(/*^block*/id)arg3 ;
-(void)collectDebuggingInformationWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)descriptionWithIndenting:(id)arg1 ;
-(void)sendMessageKind:(id)arg1 parameters:(id)arg2 resultHandler:(/*^block*/id)arg3 ;
-(void)forwardUsingMessageSender:(/*^block*/id)arg1 ;
-(void)dealloc;
-(id)description;
-(void)finalize;
-(id)client;
@end

