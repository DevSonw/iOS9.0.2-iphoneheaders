/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:34:50 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/SpringBoardPlugins/VoiceMemosLockScreen.lockbundle/VoiceMemosLockScreen
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoardUI/SBAwayViewPluginController.h>
#import <libobjc.A.dylib/RCCurrentRecordingViewControllerDelegate.h>
#import <libobjc.A.dylib/SBLockScreenBundleController.h>

@class UIViewController, UIActivityIndicatorView, RCCurrentRecordingViewController, NSString;

@interface RCLockScreenPluginController : SBAwayViewPluginController <RCCurrentRecordingViewControllerDelegate, SBLockScreenBundleController> {

	UIViewController* _contentViewController;
	UIActivityIndicatorView* _spinnerView;
	char _screenUpdatesDisabled;
	char _recordingViewControllerIsReady;
	RCCurrentRecordingViewController* _recordingViewController;
	char _isScreenBlanked;
	int _blankedStateNotifyToken;
	char _blankedStateNotifyTokenIsValid;
	NSString* _subtitleText;

}

@property (nonatomic,retain) NSString * subtitleText;               //@synthesize subtitleText=_subtitleText - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)rootViewController;
-(void)dealloc;
-(id)init;
-(void)setView:(id)arg1 ;
-(void)loadView;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidUnload;
-(void)viewDidAppear:(char)arg1 ;
-(void)viewWillDisappear:(char)arg1 ;
-(void)viewDidDisappear:(char)arg1 ;
-(void)setSubtitleText:(NSString *)arg1 ;
-(NSString *)subtitleText;
-(char)showDateView;
-(void)purgeView;
-(char)viewWantsFullscreenLayout;
-(unsigned)notificationBehavior;
-(char)shouldShowLockStatusBarTime;
-(char)allowsTimer;
-(void)deviceLockViewWillShow;
-(void)deviceLockViewDidHide;
-(char)animateResumingToApplicationWithIdentifier:(id)arg1 ;
-(char)showAwayItems;
-(char)showBatteryChargingText;
-(char)showDate;
-(char)hasCustomSubtitle;
-(id)customSubtitleText;
-(id)customSubtitleColor;
-(char)allowsLockScreenMediaControls;
-(char)allowsPhotoSlideshow;
-(char)allowsSiri;
-(unsigned)overlayStyle;
-(void)currentRecordingViewControllerRecordingDidEnd:(id)arg1 ;
-(void)currentRecordingViewController:(id)arg1 didChangeAVState:(id)arg2 ;
-(void)currentRecordingViewController:(id)arg1 didDeterminteAvailability:(char)arg2 ;
-(void)_attachRecordingViewIfReady;
-(void)setScreenIsBlanked:(char)arg1 ;
-(void)_setScreenUpdatesDisabled:(char)arg1 ;
-(void)_dismissRecordingViewController;
-(void)_beginLoadingRemoteView;
-(void)_updateSubtitleText;
@end

