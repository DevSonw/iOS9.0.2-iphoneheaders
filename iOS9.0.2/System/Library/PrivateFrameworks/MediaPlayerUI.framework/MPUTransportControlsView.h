/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:33:16 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/MediaPlayerUI.framework/MediaPlayerUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MediaPlayerUI/MediaPlayerUI-Structs.h>
#import <UIKit/UIView.h>

@protocol MPUTransportControlsViewDataSource, MPUTransportControlsViewDelegate, MPUTransportControlsViewLayoutDelegate;
@class NSMutableDictionary, NSMapTable, NSMutableArray, NSMutableSet, NSArray;

@interface MPUTransportControlsView : UIView {

	NSMutableDictionary* _classByReuseIdentifier;
	UIEdgeInsets _insetsForExpandingButtons;
	char _sortedVisibleControlsWithBlanksNeedsReload;
	NSMutableDictionary* _recycledButtonsByReuseIdentifier;
	NSMapTable* _reuseIdentifierByButton;
	NSMutableArray* _sortedVisibleControlsWithBlanks;
	NSMutableSet* _typesOfControlsToReload;
	NSMutableDictionary* _visibleButtonByControlType;
	char _usesLegacyLayoutHeuristics;
	NSArray* _availableTransportControls;
	id<MPUTransportControlsViewDataSource> _dataSource;
	id<MPUTransportControlsViewDelegate> _delegate;
	id<MPUTransportControlsViewLayoutDelegate> _layoutDelegate;
	unsigned _minimumNumberOfTransportButtonsForLayout;

}

@property (nonatomic,copy) NSArray * availableTransportControls;                                                                                          //@synthesize availableTransportControls=_availableTransportControls - In the implementation block
@property (assign,nonatomic,__weak) id<MPUTransportControlsViewDataSource> dataSource;                                                                    //@synthesize dataSource=_dataSource - In the implementation block
@property (assign,nonatomic,__weak) id<MPUTransportControlsViewDelegate> delegate;                                                                        //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) id<MPUTransportControlsViewLayoutDelegate> layoutDelegate;                                                            //@synthesize layoutDelegate=_layoutDelegate - In the implementation block
@property (assign,nonatomic) unsigned minimumNumberOfTransportButtonsForLayout;                                                                           //@synthesize minimumNumberOfTransportButtonsForLayout=_minimumNumberOfTransportButtonsForLayout - In the implementation block
@property (assign,setter=_setInsetsForExpandingButtons:,getter=_insetsForExpandingButtons,nonatomic) UIEdgeInsets insetsForExpandingButtons; 
@property (assign,setter=_setUsesLegacyLayoutHeuristics:,getter=_usesLegacyLayoutHeuristics,nonatomic) char usesLegacyLayoutHeuristics;                   //@synthesize usesLegacyLayoutHeuristics=_usesLegacyLayoutHeuristics - In the implementation block
+(id)defaultTransportControls;
-(id<MPUTransportControlsViewLayoutDelegate>)layoutDelegate;
-(void)setLayoutDelegate:(id<MPUTransportControlsViewLayoutDelegate>)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDataSource:(id<MPUTransportControlsViewDataSource>)arg1 ;
-(void)setDelegate:(id<MPUTransportControlsViewDelegate>)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id<MPUTransportControlsViewDataSource>)dataSource;
-(id<MPUTransportControlsViewDelegate>)delegate;
-(void)registerClass:(Class)arg1 forTransportButtonWithReuseIdentifier:(id)arg2 ;
-(NSArray *)availableTransportControls;
-(id)dequeueReusableTransportButtonWithReuseIdentifier:(id)arg1 ;
-(id)_transportButtonForControlType:(int)arg1 ;
-(void)setMinimumNumberOfTransportButtonsForLayout:(unsigned)arg1 ;
-(id)availableTransportControlWithType:(int)arg1 ;
-(void)setAvailableTransportControls:(NSArray *)arg1 ;
-(void)_willRemoveTransportButton:(id)arg1 ;
-(void)_recycleTransportButtonWithControlType:(int)arg1 ;
-(void)_reloadSortedVisibleControlsWithBlanks;
-(id)_typesOfVisibleControls;
-(id)_visibleTransportControlAtIndex:(unsigned)arg1 ;
-(void)_configureTransportButton:(id)arg1 forTransportControl:(id)arg2 ;
-(CGSize)_transportControlButtonSize;
-(CGRect)_adjustedFrameOfButtonForTransportControl:(id)arg1 proposedFrame:(CGRect)arg2 ;
-(id)_typesFromTransportControls:(id)arg1 ;
-(void)reloadTransportButtonWithControlType:(int)arg1 ;
-(id)_createTransportButtonWithReuseIdentifier:(id)arg1 ;
-(void)_transportControlLongPressBegan:(id)arg1 ;
-(void)_transportControlLongPressEnded:(id)arg1 ;
-(void)_transportControlTapped:(id)arg1 ;
-(void)_transportControlTouchEntered:(id)arg1 ;
-(void)_transportControlTouchExited:(id)arg1 ;
-(id)_availableTransportControlsForGroup:(int)arg1 ;
-(UIEdgeInsets)_insetsForExpandingButtons;
-(void)_setInsetsForExpandingButtons:(UIEdgeInsets)arg1 ;
-(void)_setUsesLegacyLayoutHeuristics:(char)arg1 ;
-(unsigned)minimumNumberOfTransportButtonsForLayout;
-(char)_usesLegacyLayoutHeuristics;
@end
