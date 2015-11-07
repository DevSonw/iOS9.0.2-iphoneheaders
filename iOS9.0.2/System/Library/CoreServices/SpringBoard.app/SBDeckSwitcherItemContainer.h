/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:36:29 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <UIKit/UIView.h>
#import <UIKit/UIScrollViewDelegate.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@protocol SBDeckSwitcherItemContainerDelegate;
@class SBDeckSwitcherPageView, SBDisplayItem, UIScrollView, UIView, SBDeckSwitcherIconImageContainerView, UILabel, UILongPressGestureRecognizer, UITapGestureRecognizer, SBAppSwitcherSettings, NSString;

@interface SBDeckSwitcherItemContainer : UIView <UIScrollViewDelegate, UIGestureRecognizerDelegate> {

	SBDeckSwitcherPageView* _pageView;
	SBDisplayItem* _displayItem;
	id<SBDeckSwitcherItemContainerDelegate> _delegate;
	UIScrollView* _verticalScrollView;
	UIView* _iconAndLabelContainer;
	SBDeckSwitcherIconImageContainerView* _iconImageView;
	UILabel* _iconTitle;
	float _killVelocity;
	float _contentCornerRadiusProgress;
	float _contentBlurRadiusProgress;
	float _contentPageViewScale;
	float _titleOpacity;
	float _titleAndIconOpacity;
	UILongPressGestureRecognizer* _pressDownGestureRecognizer;
	UITapGestureRecognizer* _tapGestureRecognizer;
	UITapGestureRecognizer* _doubleTapGestureRecognizer;
	SBAppSwitcherSettings* _settings;
	char _disableBlurInputBoundsUpdatesForDismissal;
	char _disableBlurInputBoundsReductionForRasterizing;
	char _blurEnabled;
	float _lastBlurRadius;
	CGRect _lastBlurFrame;
	float _unobscuredMargin;

}

@property (nonatomic,retain) SBDeckSwitcherPageView * pageView;                               //@synthesize pageView=_pageView - In the implementation block
@property (assign,nonatomic) float contentCornerRadiusProgress;                               //@synthesize contentCornerRadiusProgress=_contentCornerRadiusProgress - In the implementation block
@property (assign,nonatomic) float contentBlurRadiusProgress;                                 //@synthesize contentBlurRadiusProgress=_contentBlurRadiusProgress - In the implementation block
@property (assign,nonatomic) float contentPageViewScale;                                      //@synthesize contentPageViewScale=_contentPageViewScale - In the implementation block
@property (assign,nonatomic) float titleAndIconOpacity;                                       //@synthesize titleAndIconOpacity=_titleAndIconOpacity - In the implementation block
@property (assign,nonatomic) float titleOpacity;                                              //@synthesize titleOpacity=_titleOpacity - In the implementation block
@property (assign,nonatomic) float unobscuredMargin;                                          //@synthesize unobscuredMargin=_unobscuredMargin - In the implementation block
@property (assign,nonatomic) float darkeningAlpha; 
@property (assign,nonatomic) char disableBlurInputBoundsReductionForRasterizing;              //@synthesize disableBlurInputBoundsReductionForRasterizing=_disableBlurInputBoundsReductionForRasterizing - In the implementation block
@property (assign,nonatomic) float killGestureHysteresis; 
@property (nonatomic,retain,readonly) SBDisplayItem * displayItem;                            //@synthesize displayItem=_displayItem - In the implementation block
@property (nonatomic,readonly) id<SBDeckSwitcherItemContainerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) float killingProgress; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(float)preferredRestingVisibleMarginForBounds:(CGRect)arg1 ;
-(void)prepareToBecomeVisibleIfNecessary;
-(void)respondToBecomingInvisibleIfNecessary;
-(void)viewPresenting:(id)arg1 withInteraction:(char)arg2 andInitialProgress:(float)arg3 forTransitionRequest:(id)arg4 ;
-(void)updateTransitionProgress:(float)arg1 ;
-(void)interactionDidEnd:(char)arg1 ;
-(void)transitionDidEnd:(char)arg1 forPresentation:(char)arg2 ;
-(void)setDarkeningAlpha:(float)arg1 ;
-(float)darkeningAlpha;
-(float)contentBlurRadiusProgress;
-(void)setDisableBlurInputBoundsReductionForRasterizing:(char)arg1 ;
-(void)setContentBlurRadiusProgress:(float)arg1 ;
-(void)setContentCornerRadiusProgress:(float)arg1 ;
-(void)setTitleOpacity:(float)arg1 ;
-(void)setTitleAndIconOpacity:(float)arg1 ;
-(void)setContentPageViewScale:(float)arg1 ;
-(void)setKillGestureHysteresis:(float)arg1 ;
-(float)killingProgress;
-(void)setUnobscuredMargin:(float)arg1 ;
-(id)initWithFrame:(CGRect)arg1 displayItem:(id)arg2 delegate:(id)arg3 ;
-(id)_createScrollView;
-(CGRect)_frameForIconTitleViewContainer;
-(CGRect)_blurFrame;
-(void)_handlePageViewPressDown:(id)arg1 ;
-(void)_handlePageViewTap:(id)arg1 ;
-(void)_applyVisualStyleToSubviews;
-(CGRect)_frameForPageView;
-(void)_addIconSubview;
-(void)_removeIconSubview;
-(CGRect)_frameForIconView;
-(CGRect)_frameForIconTitle:(id)arg1 ;
-(CGAffineTransform)_transformForIconTitleViewContainer;
-(void)_updateBlur;
-(void)_ensureSubviewOrder;
-(float)_inverseScaleTransformFactor;
-(float)_scaleTransformFactor;
-(float)_effectiveTitleAndIconOpacityConsideringKillProgress;
-(float)killGestureHysteresis;
-(float)contentCornerRadiusProgress;
-(float)titleOpacity;
-(float)titleAndIconOpacity;
-(float)contentPageViewScale;
-(float)unobscuredMargin;
-(char)disableBlurInputBoundsReductionForRasterizing;
-(SBDisplayItem *)displayItem;
-(void)viewDismissing:(id)arg1 withInteraction:(char)arg2 andInitialProgress:(float)arg3 forTransitionRequest:(id)arg4 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(void)scrollViewWillEndDragging:(id)arg1 withVelocity:(CGPoint)arg2 targetContentOffset:(inout CGPoint*)arg3 ;
-(id<SBDeckSwitcherItemContainerDelegate>)delegate;
-(char)gestureRecognizerShouldBegin:(id)arg1 ;
-(char)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(SBDeckSwitcherPageView *)pageView;
-(void)setPageView:(SBDeckSwitcherPageView *)arg1 ;
-(CGRect)_frameForScrollView;
@end
