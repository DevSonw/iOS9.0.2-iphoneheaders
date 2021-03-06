/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:43 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/MobilePhone.app/MobilePhone
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MobilePhone/MobilePhone-Structs.h>
#import <UIKit/UIApplication.h>
#import <UIKit/UIApplicationDelegate.h>

@class UIWindow, PhoneRootViewController, CUTWeakReference, NSString, TUMetadataCache, UIColor;

@interface PhoneApplication : UIApplication <UIApplicationDelegate> {

	PhoneRootViewController* _rootController;
	UIWindow* _window;
	CUTWeakReference* _currentActionSheetWeakReference;
	double _launchTime;
	NSString* _cachedApplicationBadgeString;
	TUMetadataCache* _metadataCache;
	char _headerViewShowsAllRecentCalls;
	char _audioButtonAllowsPhoneCallsAndFaceTimeAudio;
	char _suspendingApplication;
	char _resumingApplication;
	int _headerViewNumberOfCallsToShow;

}

@property (nonatomic,readonly) unsigned userInterfaceStyle; 
@property (nonatomic,readonly) int backdropStyle; 
@property (nonatomic,readonly) int wizardGlobalAppearanceStyle; 
@property (nonatomic,readonly) int addressBookUIStyle; 
@property (nonatomic,readonly) int contactsViewControllerStyle; 
@property (nonatomic,readonly) char usesBlendModes; 
@property (nonatomic,readonly) char alwaysShowLocalVideo; 
@property (nonatomic,readonly) char contentViewCanRotate; 
@property (nonatomic,readonly) char tabBarFillsScreen; 
@property (nonatomic,readonly) char tabBarCanSlide; 
@property (nonatomic,readonly) char showSplashScreenOnSignin; 
@property (nonatomic,readonly) int defaultAction; 
@property (nonatomic,readonly) char defaultActionIsTelephonyCall; 
@property (nonatomic,readonly) char defaultActionIsFaceTimeAudio; 
@property (nonatomic,readonly) char defaultActionIsFaceTimeVideo; 
@property (nonatomic,readonly) char showsTelephonyCalls; 
@property (nonatomic,readonly) char showsFaceTimeAudio; 
@property (nonatomic,readonly) char showsFaceTimeVideo; 
@property (nonatomic,readonly) char showsTelephonyFavorites; 
@property (nonatomic,readonly) char showsFaceTimeAudioFavorites; 
@property (nonatomic,readonly) char showsFaceTimeVideoFavorites; 
@property (nonatomic,readonly) char showsTelephonyRecents; 
@property (nonatomic,readonly) char showsFaceTimeAudioRecents; 
@property (nonatomic,readonly) char showsFaceTimeVideoRecents; 
@property (nonatomic,readonly) char badgesMissedTelephonyCalls; 
@property (nonatomic,readonly) char badgesMissedFaceTimeAudio; 
@property (nonatomic,readonly) char badgesMissedFaceTimeVideo; 
@property (nonatomic,readonly) char showsPhoneDialer; 
@property (nonatomic,readonly) char showsPhoneVoicemail; 
@property (nonatomic,readonly) char usesUnifiedInterface; 
@property (nonatomic,readonly) char shouldHideVoicemailUI; 
@property (nonatomic,readonly) char hasEnhancedVoicemail; 
@property (nonatomic,readonly) char headerViewShowsAllRecentCalls;                            //@synthesize headerViewShowsAllRecentCalls=_headerViewShowsAllRecentCalls - In the implementation block
@property (nonatomic,readonly) int headerViewNumberOfCallsToShow;                             //@synthesize headerViewNumberOfCallsToShow=_headerViewNumberOfCallsToShow - In the implementation block
@property (nonatomic,readonly) char audioButtonAllowsPhoneCallsAndFaceTimeAudio;              //@synthesize audioButtonAllowsPhoneCallsAndFaceTimeAudio=_audioButtonAllowsPhoneCallsAndFaceTimeAudio - In the implementation block
@property (nonatomic,readonly) char suspendingApplication;                                    //@synthesize suspendingApplication=_suspendingApplication - In the implementation block
@property (nonatomic,readonly) char resumingApplication;                                      //@synthesize resumingApplication=_resumingApplication - In the implementation block
@property (readonly) UIColor * applicationTintColor; 
@property (nonatomic,readonly) unsigned contentViewOffscreenEdge; 
@property (nonatomic,readonly) char contentViewAnimationsFadeInsteadOfMove; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) UIWindow * window; 
+(unsigned)callHistoryControllerOptions;
+(id)sharedCallHistoryController;
+(Class)controllerClassForTabViewType:(int)arg1 ;
+(void)preloadContactStoreIfNecessary;
+(char)authorizedToUseContactStore;
+(id)callHistoryControllerWithCoalescingStrategy:(id)arg1 ;
+(id)sharedNumberFormatter;
+(id)contactStore;
+(void)initialize;
+(void)contactStoreDidChange:(id)arg1 ;
-(char)usesBlendModes;
-(char)showsTelephonyFavorites;
-(char)showsFaceTimeAudioFavorites;
-(char)contentViewCanRotate;
-(char)shouldSnapshot;
-(void)callHistoryControllerDatabaseDidChange:(id)arg1 ;
-(void)callHistoryControllerDidInitialize:(id)arg1 ;
-(void)_localeChangedNotification:(id)arg1 ;
-(void)_ftcServiceAvailabilityChanged:(id)arg1 ;
-(void)handleApplicationFinishedSnapshottingNotification:(id)arg1 ;
-(void)accessibilitySettingsChangedNotification:(id)arg1 ;
-(void)_initializeUI;
-(char)alwaysShowLocalVideo;
-(char)tabBarCanSlide;
-(void)_resetCurrentViewController;
-(char)usesUnifiedInterface;
-(void)promptUpgradeCurrentPhoneCallToFaceTimeIfNecessary;
-(void)dismissActionSheet;
-(UIColor *)applicationTintColor;
-(void)showInitialView;
-(void)_releaseAddressBook;
-(char)telephonyCallingIsAvailable;
-(char)showsFaceTimeAudio;
-(char)faceTimeAudioIsAvailable;
-(char)showsFaceTimeVideo;
-(char)faceTimeVideoIsAvailable;
-(void)_revertAddressBook;
-(char)authorizedToUseAddressBook;
-(char)authorizedToUseContactStore;
-(char)hasEnhancedVoicemail;
-(char)defaultActionIsFaceTimeAudio;
-(char)dialPhoneNumber:(id)arg1 forUID:(int)arg2 service:(int)arg3 dialAssist:(char)arg4 wasAlreadyAssisted:(char)arg5 ;
-(char)dialPhoneNumber:(id)arg1 forUID:(int)arg2 dialAssist:(char)arg3 wasAlreadyAssisted:(char)arg4 ;
-(char)dialPhoneNumber:(id)arg1 forUID:(int)arg2 dialAssist:(char)arg3 ;
-(char)dialPhoneNumber:(id)arg1 dialAssist:(char)arg2 ;
-(id)destinationForCall:(id)arg1 wasDialAssisted:(char*)arg2 ;
-(char)isDeviceCapableOfFaceTimeVideo;
-(char)isDeviceCapableOfTelephonyCalls;
-(char)isDeviceCapableOfFaceTimeAudio;
-(char)tabBarFillsScreen;
-(char)showSplashScreenOnSignin;
-(char)showsFaceTimeVideoFavorites;
-(char)showsTelephonyRecents;
-(char)showsFaceTimeAudioRecents;
-(char)showsFaceTimeVideoRecents;
-(char)badgesMissedTelephonyCalls;
-(char)badgesMissedFaceTimeAudio;
-(char)badgesMissedFaceTimeVideo;
-(char)showsPhoneDialer;
-(char)showsPhoneVoicemail;
-(char)shouldHideVoicemailUI;
-(void)fetchMetadataForRecentCalls:(id)arg1 ;
-(id)metadataCache;
-(CGRect)phoneViewTabBarContentFrame;
-(double)launchTime;
-(char)isDisplayingSheet;
-(void)presentActionSheet:(id)arg1 ;
-(void)presentActionSheet:(id)arg1 fromToolBarItem:(id)arg2 ;
-(void)_logSwitch;
-(char)dialPhoneNumber:(id)arg1 ;
-(char)dialRecentCall:(id)arg1 ;
-(int)userInterfaceScreenType;
-(char)isLowGraphicsPerformanceDevice;
-(int)wizardGlobalAppearanceStyle;
-(int)addressBookUIStyle;
-(int)contactsViewControllerStyle;
-(char)defaultActionIsTelephonyCall;
-(char)defaultActionIsFaceTimeVideo;
-(char)showsCallsFromService:(int)arg1 ;
-(unsigned)contentViewOffscreenEdge;
-(char)contentViewAnimationsFadeInsteadOfMove;
-(char)headerViewShowsAllRecentCalls;
-(int)headerViewNumberOfCallsToShow;
-(char)audioButtonAllowsPhoneCallsAndFaceTimeAudio;
-(char)suspendingApplication;
-(char)resumingApplication;
-(char)inFaceTime;
-(void)_scroll;
-(void)runSwitchTabTest:(id)arg1 fromTab:(int)arg2 switchTo:(int)arg3 numberOfIterations:(int)arg4 ;
-(void)startTestOnMainThread:(id)arg1 ;
-(id)_createRecentCallWithCallerId:(id)arg1 ;
-(id)_tableFromViewController:(id)arg1 ;
-(void)finishTestOnMainThread:(id)arg1 ;
-(void)failTestOnMainThread:(id)arg1 reason:(id)arg2 ;
-(void)startScrollTest;
-(void)startSwitchTest:(int)arg1 ;
-(void)TestRecentCall;
-(void)TestAddUnknownFavorite;
-(void)_forceWindowFront;
-(void)requestSuspendWithTransparencyAfterLastCall;
-(void)requestSuspendAfterLastCall;
-(char)_faceTimeInvitationExists;
-(char)_activeFaceTimeCallExists;
-(char)faceTimeInvitationExists;
-(char)activeFaceTimeCallExists;
-(void*)existingAddressBook;
-(id)contactStore;
-(void)dealloc;
-(void)applicationDidBecomeActive:(id)arg1 ;
-(void)applicationWillResignActive:(id)arg1 ;
-(void)applicationDidEnterBackground:(id)arg1 ;
-(void)applicationWillEnterForeground:(id)arg1 ;
-(void)applicationDidFinishLaunching:(id)arg1 ;
-(id)rootViewController;
-(void)applicationWillSuspendForEventsOnly;
-(void)applicationDidResumeForEventsOnly;
-(char)applicationSuspendWithSettings:(id)arg1 ;
-(char)openURL:(id)arg1 ;
-(void)applicationOpenURL:(id)arg1 ;
-(id)nameOfDefaultImageToUpdateAtSuspension;
-(void)prepareForDefaultImageSnapshotForScreen:(id)arg1 ;
-(void)userDefaultsDidChange:(id)arg1 ;
-(void)didReceiveMemoryWarning;
-(char)application:(id)arg1 willContinueUserActivityWithType:(id)arg2 ;
-(void)applicationDidResume;
-(void)openURL:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)setIgnoresInteractionEvents:(char)arg1 ;
-(char)runTest:(id)arg1 options:(id)arg2 ;
-(int)backdropStyle;
-(unsigned)userInterfaceStyle;
-(void)clearActionSheet;
-(int)defaultAction;
-(char)showsTelephonyCalls;
-(char)inCall;
-(void*)addressBook;
-(char)dialVoicemail;
@end

