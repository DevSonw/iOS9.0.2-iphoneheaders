/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:30:57 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/PassKit.framework/PassKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PassKit/PKTableViewCell.h>

@class NSMutableArray, PKPaymentAuthorizationSummaryItemsView;

@interface PKPaymentAuthorizationSummaryItemsCell : PKTableViewCell {

	NSMutableArray* _constraints;
	PKPaymentAuthorizationSummaryItemsView* _summaryItemsView;

}

@property (nonatomic,readonly) PKPaymentAuthorizationSummaryItemsView * summaryItemsView;              //@synthesize summaryItemsView=_summaryItemsView - In the implementation block
-(id)initWithLayout:(id)arg1 reuseIdentifier:(id)arg2 ;
-(PKPaymentAuthorizationSummaryItemsView *)summaryItemsView;
-(void)dealloc;
-(void)prepareForReuse;
-(void)_prepareConstraints;
@end
