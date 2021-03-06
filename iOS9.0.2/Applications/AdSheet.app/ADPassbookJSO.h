/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:11:57 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/AdSheet.app/AdSheet
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AdSheet/ADJavaScriptObject.h>
#import <AdSheet/PKAddPassesViewControllerDelegate.h>
#import <AdSheet/ADPassbookJSO_Bindings.h>

@class NSString, JSValue, PKPass;

@interface ADPassbookJSO : ADJavaScriptObject <PKAddPassesViewControllerDelegate, ADPassbookJSO_Bindings> {

	NSString* _passURL;
	PKPass* _pass;

}

@property (nonatomic,retain) PKPass * pass;                         //@synthesize pass=_pass - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSString * passURL;                      //@synthesize passURL=_passURL - In the implementation block
@property (nonatomic,retain) JSValue * listener; 
+(void)initializeInContext:(id)arg1 ;
-(id)initWithDelegate:(id)arg1 impressionController:(id)arg2 ;
-(void)presentComposer;
-(void)dealloc;
-(PKPass *)pass;
-(void)setPass:(PKPass *)arg1 ;
-(void)openPaymentSetup;
-(void)setPassURL:(NSString *)arg1 ;
-(NSString *)passURL;
-(void)addPassesViewControllerDidFinish:(id)arg1 ;
@end

