/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:34:45 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iTunesStore/ISOperation.h>
#import <libobjc.A.dylib/ISStoreURLOperationDelegate.h>

@class ISReview, NSString;

@interface ISPostReviewOperation : ISOperation <ISStoreURLOperationDelegate> {

	char _backgroundReview;
	ISReview* _review;

}

@property (getter=isBackgroundReview) char backgroundReview;              //@synthesize backgroundReview=_backgroundReview - In the implementation block
@property (retain) ISReview * review;                                     //@synthesize review=_review - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)run;
-(ISReview *)review;
-(void)setReview:(ISReview *)arg1 ;
-(id)_httpBody;
-(char)isBackgroundReview;
-(void)setBackgroundReview:(char)arg1 ;
-(void)operation:(id)arg1 finishedWithOutput:(id)arg2 ;
@end

