/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:07:58 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/NanoPreferenceBundles/General/PairedUnlockSettings.bundle/PairedUnlockSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PairedUnlockSettings/PairedUnlockSettings-Structs.h>
#import <Preferences/PSListController.h>
#import <PairedUnlockSettings/PUConnectionDelegate.h>
#import <UIKit/UIAlertViewDelegate.h>
#import <PairedUnlockSettings/PUSRemotePasscodeViewControllerDelegate.h>
#import <libobjc.A.dylib/MCProfileConnectionObserver.h>

@class UIAlertView, NPSManager, PUConnection, NSString;

@interface PUSPasscodeSettingsListController : PSListController <PUConnectionDelegate, UIAlertViewDelegate, PUSRemotePasscodeViewControllerDelegate, MCProfileConnectionObserver> {

	UIAlertView* _awaitingUnlockAlertView;
	int _pendingAction;
	NPSManager* _syncManager;
	char _wantsSimplePasscode;
	char _justChangedWantsSimplePasscode;
	MKBAssertionRef _unlockPairingAssertion;
	char _gizmoHasPasscodeSet;
	char _gizmoHasPaymentPasses;
	char _devicesArePairedForUnlocking;
	char _gizmoIsLocked;
	char _gizmoIsUnlockOnly;
	char _gizmoIsInLockout;
	/*^block*/id _checkGizmoUnlockedCompletionHandler;
	PUConnection* _connection;
	int _activityFlags;

}

@property (assign,nonatomic) char gizmoHasPasscodeSet;                          //@synthesize gizmoHasPasscodeSet=_gizmoHasPasscodeSet - In the implementation block
@property (assign,nonatomic) char gizmoHasPaymentPasses;                        //@synthesize gizmoHasPaymentPasses=_gizmoHasPaymentPasses - In the implementation block
@property (assign,nonatomic) char devicesArePairedForUnlocking;                 //@synthesize devicesArePairedForUnlocking=_devicesArePairedForUnlocking - In the implementation block
@property (assign,nonatomic) char gizmoIsLocked;                                //@synthesize gizmoIsLocked=_gizmoIsLocked - In the implementation block
@property (assign,nonatomic) char gizmoIsUnlockOnly;                            //@synthesize gizmoIsUnlockOnly=_gizmoIsUnlockOnly - In the implementation block
@property (assign,nonatomic) char gizmoIsInLockout;                             //@synthesize gizmoIsInLockout=_gizmoIsInLockout - In the implementation block
@property (nonatomic,copy) id checkGizmoUnlockedCompletionHandler;              //@synthesize checkGizmoUnlockedCompletionHandler=_checkGizmoUnlockedCompletionHandler - In the implementation block
@property (nonatomic,readonly) PUConnection * connection;                       //@synthesize connection=_connection - In the implementation block
@property (assign,nonatomic) int activityFlags;                                 //@synthesize activityFlags=_activityFlags - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)endLockout:(id)arg1 ;
-(char)gizmoIsLocked;
-(int)activityFlags;
-(void)_cancelRemoteAction;
-(void)_storeAndSyncSimplePasscodeEnabled:(char)arg1 ;
-(void)_resetSimplePasscodeChangeIfNeeded;
-(void)_finishRemoteAction;
-(void)_startRemoteAction:(int)arg1 ;
-(void)confirmDisablePasscode:(id)arg1 ;
-(void)setGizmoIsInLockout:(char)arg1 ;
-(void)_enableAutoUnlockConfirmed:(id)arg1 ;
-(void)_enableAutoUnlockCanceled:(id)arg1 ;
-(void)setActivityFlags:(int)arg1 ;
-(void)remotePasscodeViewControllerDidCancel:(id)arg1 ;
-(void)reloadUI;
-(void)_checkGizmoLockState;
-(void)_checkHasPaymentPasses;
-(void)_noteAppWillResignActive;
-(void)_addActivityFlag:(int)arg1 ;
-(void)setGizmoHasPasscodeSet:(char)arg1 ;
-(void)setGizmoIsUnlockOnly:(char)arg1 ;
-(void)setGizmoIsLocked:(char)arg1 ;
-(char)gizmoIsInLockout;
-(void)_removeActivityFlag:(int)arg1 ;
-(void)setCheckGizmoUnlockedCompletionHandler:(id)arg1 ;
-(void)_promptForGizmoUnlock;
-(void)setGizmoHasPaymentPasses:(char)arg1 ;
-(void)setDevicesArePairedForUnlocking:(char)arg1 ;
-(id)autoUnlockEnabledValue;
-(void)setAutoUnlockEnabledValue:(id)arg1 ;
-(id)simplePasscodeEnabledValue;
-(void)setSimplePasscodeEnabledValue:(id)arg1 ;
-(id)eraseDataEnabledValue;
-(void)setEraseDataEnabledValue:(id)arg1 ;
-(char)gizmoHasPasscodeSet;
-(char)gizmoHasPaymentPasses;
-(char)devicesArePairedForUnlocking;
-(char)gizmoIsUnlockOnly;
-(id)checkGizmoUnlockedCompletionHandler;
-(void)changePasscode;
-(void)_updateLockoutState;
-(void)_updateUnlockState;
-(void)_updateSimplePasscodeState;
-(void)profileConnectionDidReceiveRestrictionChangedNotification:(id)arg1 userInfo:(id)arg2 ;
-(char)canBeShownFromSuspendedState;
-(id)specifiers;
-(void)dealloc;
-(id)init;
-(void)alertView:(id)arg1 willDismissWithButtonIndex:(int)arg2 ;
-(PUConnection *)connection;
-(void)_handleError:(id)arg1 ;
-(void)unlockConnection:(id)arg1 remoteDeviceDidCompletePasscodeAction:(char)arg2 error:(id)arg3 ;
-(void)unlockConnection:(id)arg1 remoteDeviceDidNotifyStateHasPasscode:(char)arg2 isPasscodeLocked:(char)arg3 isUnlockOnly:(char)arg4 ;
-(void)togglePasscode:(id)arg1 ;
@end

