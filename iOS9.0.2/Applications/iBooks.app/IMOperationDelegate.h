/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:13 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/iBooks.app/iBooks
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol IMOperationDelegate <NSObject>
@optional
-(void)operationStarted:(id)arg1;
-(void)operationHasProgress:(id)arg1;
-(void)operation:(id)arg1 hasError:(id)arg2;
-(id)operationResponseThread:(id)arg1;
-(void)operationCancelled:(id)arg1;
-(void)operationFinished:(id)arg1;

@end

