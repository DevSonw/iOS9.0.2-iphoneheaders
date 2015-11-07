/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:08:14 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PreferenceBundles/GameCenterSettings.bundle/GameCenterSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Preferences/PSListController.h>
#import <GameCenterSettings/GKDaemonProxyDataUpdateDelegate.h>
#import <libobjc.A.dylib/AAUICredentialRecoveryPresentationDelegate.h>
#import <libobjc.A.dylib/GKLocalPlayerAuthenticationUIPersonality.h>

@class UIAlertController, NSString, NSArray, GKLocalPlayer, AAUICredentialRecoveryController;

@interface GKSettingsViewController : PSListController <GKDaemonProxyDataUpdateDelegate, AAUICredentialRecoveryPresentationDelegate, GKLocalPlayerAuthenticationUIPersonality> {

	UIAlertController* _presentedAlertControllerWeak;
	char _shouldUseContacts;
	char _shouldUseFacebook;
	int _settingsMode;
	NSString* _appleID;
	NSString* _defaultAppleID;
	NSString* _nickname;
	NSString* _emailAddress;
	NSArray* _availableExternalServices;
	GKLocalPlayer* _localPlayer;
	NSArray* _specifiersSensitiveToConnectivity;
	AAUICredentialRecoveryController* _credentialRecoveryController;

}

@property (assign,nonatomic) int settingsMode;                                                             //@synthesize settingsMode=_settingsMode - In the implementation block
@property (assign,nonatomic) char allowGameInvites; 
@property (assign,nonatomic) char allowNearbyMultiplayer; 
@property (assign,nonatomic) char shouldUseContacts;                                                       //@synthesize shouldUseContacts=_shouldUseContacts - In the implementation block
@property (assign,nonatomic) char shouldUseFacebook;                                                       //@synthesize shouldUseFacebook=_shouldUseFacebook - In the implementation block
@property (assign,nonatomic) char useSandboxServer; 
@property (assign,getter=isLoggingEnabled,nonatomic) char loggingEnabled; 
@property (nonatomic,retain) NSString * appleID;                                                           //@synthesize appleID=_appleID - In the implementation block
@property (nonatomic,retain) NSString * defaultAppleID;                                                    //@synthesize defaultAppleID=_defaultAppleID - In the implementation block
@property (nonatomic,retain) NSString * nickname;                                                          //@synthesize nickname=_nickname - In the implementation block
@property (nonatomic,retain) NSString * emailAddress;                                                      //@synthesize emailAddress=_emailAddress - In the implementation block
@property (nonatomic,retain) NSArray * availableExternalServices;                                          //@synthesize availableExternalServices=_availableExternalServices - In the implementation block
@property (nonatomic,retain) GKLocalPlayer * localPlayer;                                                  //@synthesize localPlayer=_localPlayer - In the implementation block
@property (nonatomic,readonly) NSArray * specifiersSensitiveToConnectivity;                                //@synthesize specifiersSensitiveToConnectivity=_specifiersSensitiveToConnectivity - In the implementation block
@property (nonatomic,retain) AAUICredentialRecoveryController * credentialRecoveryController;              //@synthesize credentialRecoveryController=_credentialRecoveryController - In the implementation block
@property (assign,nonatomic,__weak) UIAlertController * presentedAlertController; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)loginSpecifiers;
-(void)setPresentedAlertController:(UIAlertController *)arg1 ;
-(void)iForgotTapped:(id)arg1 ;
-(void)editProfile:(id)arg1 ;
-(void)finishAuthenticationWithResponse:(id)arg1 error:(id)arg2 ;
-(void)showGreenBuddyForAccountName:(id)arg1 ;
-(void)authenticatedPlayerDidChange:(id)arg1 ;
-(void)showGreenBuddyForAccountName:(id)arg1 url:(id)arg2 postBody:(id)arg3 ;
-(void)showGreenBuddyForLocalPlayer:(id)arg1 url:(id)arg2 postBody:(id)arg3 ;
-(void)showAuthKitAlertFromGreenBuddyWithAuthInfo:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)updateSigninButtonSpecifier;
-(id)loadFreshSpecifiers;
-(void)markLogsWithMessage:(id)arg1 ;
-(void)finishFriendRecommendationsForService:(char)arg1 withError:(id)arg2 ;
-(id)specifiersForSignedOutMode;
-(void)dumpLogs:(id)arg1 ;
-(char)useSandboxServer;
-(NSString *)defaultAppleID;
-(id)specifiersForSignedInMode;
-(id)specifiersForPendingMode;
-(void)showAccountOptions:(id)arg1 ;
-(id)nicknameSpecifier;
-(id)externalServiceSpecifiers;
-(id)createAccountButtonSpecifier;
-(id)signinButtonSpecifier;
-(void)signinButtonTapped:(id)arg1 ;
-(void)createAccountButtonTapped:(id)arg1 ;
-(id)specifierForTextField:(id)arg1 ;
-(void)setValue:(id)arg1 forSpecifier:(id)arg2 ;
-(UIAlertController *)presentedAlertController;
-(char)isInternalDevice;
-(char)allowGameInvites;
-(char)shouldUseFacebook;
-(void)setDefaultAppleID:(NSString *)arg1 ;
-(NSArray *)specifiersSensitiveToConnectivity;
-(AAUICredentialRecoveryController *)credentialRecoveryController;
-(void)setCredentialRecoveryController:(AAUICredentialRecoveryController *)arg1 ;
-(void)setUseSandboxServer:(char)arg1 ;
-(void)setAllowGameInvites:(char)arg1 ;
-(void)setShouldUseContacts:(char)arg1 ;
-(void)setShouldUseFacebook:(char)arg1 ;
-(id)appleIDSpecifier;
-(id)emailAddressFromSpecifier:(id)arg1 ;
-(char)shouldUseContacts;
-(id)specifiers;
-(void)dealloc;
-(id)init;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)textFieldValueDidChange:(id)arg1 ;
-(void)textFieldDidEndEditing:(id)arg1 ;
-(void)credentialRecoveryController:(id)arg1 didFailWithError:(id)arg2 ;
-(void)credentialRecoveryController:(id)arg1 finishedWithSuccess:(char)arg2 ;
-(void)credentialRecoveryController:(id)arg1 needsPresentationOfViewController:(id)arg2 ;
-(int)settingsMode;
-(void)setSettingsMode:(int)arg1 ;
-(void)refreshContentsForDataType:(unsigned)arg1 userInfo:(id)arg2 ;
-(void)setLocalPlayer:(GKLocalPlayer *)arg1 ;
-(char)isDevelopmentDevice;
-(char)allowNearbyMultiplayer;
-(void)setAllowNearbyMultiplayer:(char)arg1 ;
-(char)isLoggingEnabled;
-(GKLocalPlayer *)localPlayer;
-(void)setAvailableExternalServices:(NSArray *)arg1 ;
-(NSArray *)availableExternalServices;
-(void)authenticationShowGreenBuddyUIForLocalPlayer:(id)arg1 ;
-(void)authenticationShowSignInUIForLocalPlayer:(id)arg1 ;
-(void)showPasswordChangeAlertWithURL:(id)arg1 ;
-(void)observeEnterForegroundNotification:(id)arg1 ;
-(NSString *)nickname;
-(void)setNickname:(NSString *)arg1 ;
-(NSString *)emailAddress;
-(void)setAppleID:(NSString *)arg1 ;
-(NSString *)appleID;
-(void)setEmailAddress:(NSString *)arg1 ;
-(void)setLoggingEnabled:(char)arg1 ;
@end
