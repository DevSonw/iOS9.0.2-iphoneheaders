/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:30:02 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/AccessibilityBundles/UIKit.axbundle/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/__UIScrollViewAccessibility_super.h>
#import <UIKit/UIAXDelegateClearerDelegateeProtocol.h>

@class NSString;

@interface UIScrollViewAccessibility : __UIScrollViewAccessibility_super <UIAXDelegateClearerDelegateeProtocol>

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(Class)safeCategoryBaseClass;
+(id)safeCategoryTargetClassName;
+(void)_accessibilityPerformValidations:(id)arg1 ;
-(void)_accessibilityLoadAccessibilityInformation;
-(id)_accessibilityFirstOpaqueElement;
-(id)_accessibilityLastOpaqueElement;
-(id)_accessibilityUserTestingChildren;
-(char)_accessibilityIsScannerGroup;
-(char)_accessibilityScrollToFrame:(CGRect)arg1 forView:(id)arg2 ;
-(id)_accessibilitySubviews;
-(id)_accessibilityScrollStatus;
-(id)_accessibilityDelegateScrollStatus;
-(char)accessibilityScrollLeftPageSupported;
-(char)accessibilityScrollRightPageSupported;
-(void)_announceDelayedStatus;
-(void)_accessibilityScrollToTopWithAnnouncement:(char)arg1 touchLocation:(CGPoint)arg2 originalHandler:(/*^block*/id)arg3 ;
-(char)_accessibilityScrollingEnabled;
-(id)_accessibilityFirstLastOpaqueElement:(char)arg1 ;
-(UIEdgeInsets)_accessibilityVisibleContentInset;
-(char)_axShouldScrollToAlignWithPage;
-(char)_accessibilityShouldAnimateScrollToVisible;
-(void)accessibilityApplyScrollContent:(CGPoint)arg1 sendScrollStatus:(char)arg2 animated:(char)arg3 ;
-(void)_accessibilityCurrentPage:(int*)arg1 totalPages:(int*)arg2 type:(int)arg3 ;
-(float)_accessibilityScrollHeightDistance;
-(float)_accessibilityScrollWidthDistance;
-(char)_accessibilityScrollStatusPrefersVertical;
-(char)_accessibilityUseContentInset;
-(UIEdgeInsets)_accessibilityContentInset;
-(id)_accessibilityFindRefreshControl;
-(void)_axCleanupDelegateClearer;
-(id)_accessibilityRetrieveDelegate;
-(id)_axDelegateClearerKey;
-(void)clearDelegateClearer;
-(void)_axClearDelegate:(id)arg1 ;
-(void)_accessibilitySetDelegateClearer:(id)arg1 ;
-(id)_accessibilityScrollStatusFormatString;
-(void)_accessibilityZoomAtPoint:(CGPoint)arg1 zoomIn:(char)arg2 ;
-(void)_manipulateWithRefreshControl:(id)arg1 ;
-(char)_accessibilityCanHandleContentPullDown;
-(void)_handleScrollViewPullDown;
-(char)_accessibilityContentOffsetForScrollDirection:(int)arg1 newContentOffset:(CGPoint*)arg2 distanceMultiplier:(float)arg3 ;
-(char)_accessibilityShouldAnimateScroll;
-(float)_accessibilityScrollAnimationDurationDelay;
-(void)_accessibilitySendScrollStatus;
-(char)_accessibilityScrollPageInDirection:(int)arg1 ;
-(id)_accessibilityStoredVisibleContentInset;
-(UIEdgeInsets)_accessibilityNavigationControllerInset;
-(void)_accessibilitySetStoredVisibleContentInset:(id)arg1 ;
-(char)_accessibilityIsScrollAncestor;
-(CGRect)_accessibilityScrollViewVisibleFrame;
-(CGPoint)_accessibilityContentOffset;
-(void)_accessibilityCurrentPage:(int*)arg1 totalPages:(int*)arg2 ;
-(char)accessibilityScrollUpPageSupported;
-(char)accessibilityScrollDownPageSupported;
-(int)_accessibilityPageCount;
-(int)_accessibilityPageIndex;
-(void)_accessibilitySetScrollStatus:(id)arg1 ;
-(void)accessibilityZoomInAtPoint:(CGPoint)arg1 ;
-(void)accessibilityZoomOutAtPoint:(CGPoint)arg1 ;
-(CGPoint)_accessibilityVisibleScrollArea:(char)arg1 ;
-(char)accessibilityScrollUpPage;
-(char)accessibilityScrollDownPage;
-(char)accessibilityScrollLeftPage;
-(char)accessibilityScrollRightPage;
-(CGRect)_accessibilityContentFrame;
-(void)_accessibilitySetVisibleContentInset:(UIEdgeInsets)arg1 ;
-(void)_accessibilitySetNavigationControllerInset:(UIEdgeInsets)arg1 ;
-(CGRect)_accessibilityUIViewAccessibilityFrame;
-(void)setDelegate:(id)arg1 ;
-(void)dealloc;
-(void)_scrollToTopFromTouchAtScreenLocation:(CGPoint)arg1 resultHandler:(/*^block*/id)arg2 ;
-(id)_staticScrollBar;
-(void)_notifyDidScroll;
-(void)_scrollViewAnimationEnded:(id)arg1 finished:(char)arg2 ;
-(CGRect)accessibilityFrame;
@end

