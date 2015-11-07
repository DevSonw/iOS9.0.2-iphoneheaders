/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:34:40 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/VoiceTriggerUI.framework/VoiceTriggerUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSArray, NSString;

@interface VTUIStyle : NSObject {

	NSArray* _deviceStringSuffixes;
	NSArray* _deviceImageSuffixes;
	NSString* _deviceClass;
	char _isIpad;
	char _isBuddy;
	int _enrollmentMode;

}

@property (assign,nonatomic) int enrollmentMode;              //@synthesize enrollmentMode=_enrollmentMode - In the implementation block
@property (assign,nonatomic) char isBuddy;                    //@synthesize isBuddy=_isBuddy - In the implementation block
+(id)sharedStyle;
-(id)buttonTextColor;
-(id)init;
-(float)horizontalPadding;
-(id)subtitleFont;
-(id)headerTitleFont;
-(char)isBuddy;
-(float)subtitleLineHeight;
-(void)setIsBuddy:(char)arg1 ;
-(void)setEnrollmentMode:(int)arg1 ;
-(id)VTUIDeviceSpecificString:(id)arg1 ;
-(float)flamesHeight;
-(float)skipButtonBaselineBottomMargin;
-(float)statusLabelVerticalOffsetFromCenter;
-(float)statusLabelMinHeight;
-(float)tickMarkHorizontalSizeRatio;
-(float)radarBtnVerticalPadding;
-(float)radarBtnHorizontalPadding;
-(int)enrollmentMode;
-(id)deviceDoneImage;
-(id)continueButtonFont;
-(char)footerShouldPinToImage;
-(float)titleBaselineOffsetFromTop;
-(float)subtitle1BaselineOffset;
-(float)subtitle2BaselineOffset;
-(float)continueButtonBaselineOffset;
-(float)imageViewTopOffset;
-(float)imageViewBottomOffsetFromFooter;
-(char)shouldShowFooterLine;
-(id)footerButtonFont;
-(float)footerButtonBaselineFromFooterTop;
-(id)footerTextColor;
-(id)footerLabelFont;
-(float)footerTextBaselineOffsetFromButton;
-(float)footerTextBaselineFromBottom;
-(float)footerHorizontalPadding;
-(id)deviceSetupImage;
-(void)_createStringSuffixesForDevice;
-(void)_createImageSuffixesForDevice;
-(id)_deviceImageForBaseImageName:(id)arg1 ;
-(float)footerLabelLineHeight;
@end
