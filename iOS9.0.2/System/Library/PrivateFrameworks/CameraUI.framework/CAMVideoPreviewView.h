/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:32:04 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CameraUI/CameraUI-Structs.h>
#import <UIKit/UIView.h>

@class AVCaptureVideoPreviewLayer, UIView, CAMEffectsFullsizeView, CAMEffectsGridView, CAMEffectsGridLabelsView;

@interface CAMVideoPreviewView : UIView {

	char _disableLayoutForPreviewView;
	char _disableLayoutForEffectsFullsizeView;
	char _disableLayoutForEffectsGridViews;
	char _square;
	AVCaptureVideoPreviewLayer* _videoPreviewLayer;
	UIView* _previewLayerView;
	CAMEffectsFullsizeView* _effectsFullsizeView;
	CAMEffectsGridView* _effectsGridView;
	CAMEffectsGridLabelsView* _effectsGridLabelsView;
	UIView* _fadeOutView;
	int _previewViewAspectMode;
	int _orientation;

}

@property (nonatomic,retain) AVCaptureVideoPreviewLayer * videoPreviewLayer;                                                      //@synthesize videoPreviewLayer=_videoPreviewLayer - In the implementation block
@property (nonatomic,readonly) UIView * previewLayerView;                                                                         //@synthesize previewLayerView=_previewLayerView - In the implementation block
@property (nonatomic,readonly) CAMEffectsFullsizeView * effectsFullsizeView;                                                      //@synthesize effectsFullsizeView=_effectsFullsizeView - In the implementation block
@property (nonatomic,readonly) CAMEffectsGridView * effectsGridView;                                                              //@synthesize effectsGridView=_effectsGridView - In the implementation block
@property (nonatomic,readonly) CAMEffectsGridLabelsView * effectsGridLabelsView;                                                  //@synthesize effectsGridLabelsView=_effectsGridLabelsView - In the implementation block
@property (nonatomic,readonly) UIView * fadeOutView;                                                                              //@synthesize fadeOutView=_fadeOutView - In the implementation block
@property (assign,nonatomic) int previewViewAspectMode;                                                                           //@synthesize previewViewAspectMode=_previewViewAspectMode - In the implementation block
@property (assign,nonatomic) int orientation;                                                                                     //@synthesize orientation=_orientation - In the implementation block
@property (assign,getter=isDisabledLayoutForPreviewView,nonatomic) char disableLayoutForPreviewView;                              //@synthesize disableLayoutForPreviewView=_disableLayoutForPreviewView - In the implementation block
@property (assign,getter=isDisabledLayoutForEffectsFullsizeView,nonatomic) char disableLayoutForEffectsFullsizeView;              //@synthesize disableLayoutForEffectsFullsizeView=_disableLayoutForEffectsFullsizeView - In the implementation block
@property (assign,getter=isDisabledLayoutForEffectsGridViews,nonatomic) char disableLayoutForEffectsGridViews;                    //@synthesize disableLayoutForEffectsGridViews=_disableLayoutForEffectsGridViews - In the implementation block
@property (assign,getter=isSquare,nonatomic) char square;                                                                         //@synthesize square=_square - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(void)setOrientation:(int)arg1 ;
-(void)setOrientation:(int)arg1 animated:(char)arg2 ;
-(int)orientation;
-(int)previewViewAspectMode;
-(void)setPreviewViewAspectMode:(int)arg1 ;
-(AVCaptureVideoPreviewLayer *)videoPreviewLayer;
-(void)setVideoPreviewLayer:(AVCaptureVideoPreviewLayer *)arg1 ;
-(void)updateToContentSize:(id)arg1 ;
-(CAMEffectsFullsizeView *)effectsFullsizeView;
-(CAMEffectsGridView *)effectsGridView;
-(UIView *)previewLayerView;
-(void)createEffectsFullsizeView;
-(void)createEffectsGridViews;
-(void)destroyEffectsFullsizeViewRemoveFromSuperview:(char)arg1 ;
-(void)destroyEffectsGridViewsRemoveFromSuperview:(char)arg1 ;
-(CAMEffectsGridLabelsView *)effectsGridLabelsView;
-(void)setDisableLayoutForEffectsFullsizeView:(char)arg1 ;
-(void)setDisableLayoutForPreviewView:(char)arg1 ;
-(CGRect)convertRect:(CGRect)arg1 toSublayer:(id)arg2 ;
-(UIView *)fadeOutView;
-(void)setDisableLayoutForEffectsGridViews:(char)arg1 ;
-(CGRect)_frameForSubviewsAccountForSquare:(char)arg1 ;
-(void)_updateAspectModeForSublayers;
-(void)setSquare:(char)arg1 animated:(char)arg2 ;
-(void)setSquare:(char)arg1 ;
-(char)isDisabledLayoutForPreviewView;
-(char)isDisabledLayoutForEffectsFullsizeView;
-(char)isDisabledLayoutForEffectsGridViews;
-(char)isSquare;
-(CGRect)frameForView:(id)arg1 ;
@end

