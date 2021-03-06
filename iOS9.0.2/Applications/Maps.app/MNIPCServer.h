/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:28 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Maps/Maps-Structs.h>
#import <Maps/MNLockScreenSessionDelegate.h>
#import <Maps/MNNavigationSessionUIDelegate.h>

@protocol MNLockScreenLayerSource, MNExternalGuidanceSource, MNBackgroundNavigationDelegate;
@class CPDistributedMessagingCenter, UIView, NSTimer, BKSProcessAssertion, MNTrafficIncidentAlert, NSDictionary, CLInUseAssertion, NSString, MNGuidanceETA, NSArray, MNLockScreenDimmingBehavior, UIImage, NSData, MNLockScreenSession;

@interface MNIPCServer : NSObject <MNLockScreenSessionDelegate, MNNavigationSessionUIDelegate> {

	CPDistributedMessagingCenter* _center;
	CPDistributedMessagingCenter* _remoteCenter;
	unsigned _lastSeenManeuverAlert;
	CGRect _previousViewFrame;
	UIView* _previousSuperview;
	char _isDelaying;
	id _beginNavigationDelayedReplyContext;
	char _lastNavigationRequestCameFromSiri;
	char _applicationStateDidChange;
	char _applicationIsActive;
	char _siriSheetIsShowing;
	char _multitaskingTrayIsShowing;
	char _applicationIsAwaitingToProceedAfterSnapshotPhase;
	char _hasAnnouncedViewAvailability;
	char _waitingForDistanceAndTimeToManeuver;
	NSTimer* _waitingForSiriTimer;
	BKSProcessAssertion* _waitingForSiriAssertion;
	MNTrafficIncidentAlert* _trafficIncidentAlert;
	char _knowsLockScreenBundleEnabledState;
	char _lockScreenBundleEnabled;
	NSDictionary* _lastSiriRequest;
	int _drivingSide;
	CLInUseAssertion* _applicationInUseAssertion;
	NSTimer* _trafficAlertTimer;
	char _sendShieldImage;
	char _newManeuverUpdate;
	NSString* _proceedingToRouteDisplayString;
	int _maneuver;
	MNGuidanceETA* _latestETA;
	NSArray* _maneuverInstructions;
	NSString* _currentGroupIdentifier;
	MNLockScreenDimmingBehavior* _dimmingBehavior;
	int _transportType;
	UIImage* _shieldImage;
	UIImage* _starkBannerShieldImage;
	NSString* _lastSentETADateString;
	NSData* _timeAttributedStringData;
	NSData* _etaAttributedStringData;
	int _currentLightLevel;
	unsigned _state;
	id<MNLockScreenLayerSource> _lockScreenLayerSource;
	id<MNExternalGuidanceSource> _externalGuidanceSource;
	id<MNBackgroundNavigationDelegate> _backgroundNavigationDelegate;
	MNLockScreenSession* _lockScreenSession;
	double _distanceToManeuver;
	double _timeToManeuver;
	double _distanceToRoute;
	CGPoint _shieldCenterPoint;
	CGPoint _starkBannerCenterPoint;
	double _lastSentRemainingTime;
	double _lastSentRemainingDistance;

}

@property (assign,nonatomic,__weak) id<MNLockScreenLayerSource> lockScreenLayerSource;                            //@synthesize lockScreenLayerSource=_lockScreenLayerSource - In the implementation block
@property (assign,nonatomic,__weak) id<MNExternalGuidanceSource> externalGuidanceSource;                          //@synthesize externalGuidanceSource=_externalGuidanceSource - In the implementation block
@property (assign,nonatomic,__weak) id<MNBackgroundNavigationDelegate> backgroundNavigationDelegate;              //@synthesize backgroundNavigationDelegate=_backgroundNavigationDelegate - In the implementation block
@property (setter=_setLockScreenSession:,nonatomic,retain) MNLockScreenSession * _lockScreenSession;              //@synthesize lockScreenSession=_lockScreenSession - In the implementation block
@property (assign,nonatomic) int _maneuver;                                                                       //@synthesize maneuver=_maneuver - In the implementation block
@property (assign,nonatomic) int _drivingSide;                                                                    //@synthesize drivingSide=_drivingSide - In the implementation block
@property (assign,nonatomic) double _distanceToManeuver;                                                          //@synthesize distanceToManeuver=_distanceToManeuver - In the implementation block
@property (assign,nonatomic) double _distanceToRoute;                                                             //@synthesize distanceToRoute=_distanceToRoute - In the implementation block
@property (assign,nonatomic) double _timeToManeuver;                                                              //@synthesize timeToManeuver=_timeToManeuver - In the implementation block
@property (nonatomic,retain) MNGuidanceETA * _latestETA;                                                          //@synthesize latestETA=_latestETA - In the implementation block
@property (nonatomic,copy) NSArray * _maneuverInstructions;                                                       //@synthesize maneuverInstructions=_maneuverInstructions - In the implementation block
@property (nonatomic,retain) NSString * _proceedingToRouteDisplayString;                                          //@synthesize proceedingToRouteDisplayString=_proceedingToRouteDisplayString - In the implementation block
@property (nonatomic,retain) MNLockScreenDimmingBehavior * _dimmingBehavior;                                      //@synthesize dimmingBehavior=_dimmingBehavior - In the implementation block
@property (assign,nonatomic) int _transportType;                                                                  //@synthesize transportType=_transportType - In the implementation block
@property (nonatomic,retain) UIImage * _shieldImage;                                                              //@synthesize shieldImage=_shieldImage - In the implementation block
@property (assign,nonatomic) CGPoint _shieldCenterPoint;                                                          //@synthesize shieldCenterPoint=_shieldCenterPoint - In the implementation block
@property (nonatomic,retain) UIImage * _starkBannerShieldImage;                                                   //@synthesize starkBannerShieldImage=_starkBannerShieldImage - In the implementation block
@property (assign,nonatomic) CGPoint _starkBannerCenterPoint;                                                     //@synthesize starkBannerCenterPoint=_starkBannerCenterPoint - In the implementation block
@property (assign,nonatomic) char _sendShieldImage;                                                               //@synthesize sendShieldImage=_sendShieldImage - In the implementation block
@property (assign,nonatomic) double _lastSentRemainingTime;                                                       //@synthesize lastSentRemainingTime=_lastSentRemainingTime - In the implementation block
@property (assign,nonatomic) double _lastSentRemainingDistance;                                                   //@synthesize lastSentRemainingDistance=_lastSentRemainingDistance - In the implementation block
@property (nonatomic,copy) NSString * _lastSentETADateString;                                                     //@synthesize lastSentETADateString=_lastSentETADateString - In the implementation block
@property (nonatomic,retain) NSData * _timeAttributedStringData;                                                  //@synthesize timeAttributedStringData=_timeAttributedStringData - In the implementation block
@property (nonatomic,retain) NSData * _etaAttributedStringData;                                                   //@synthesize etaAttributedStringData=_etaAttributedStringData - In the implementation block
@property (assign,nonatomic) int _currentLightLevel;                                                              //@synthesize currentLightLevel=_currentLightLevel - In the implementation block
@property (assign,nonatomic) char _newManeuverUpdate;                                                             //@synthesize newManeuverUpdate=_newManeuverUpdate - In the implementation block
@property (nonatomic,retain) id beginNavigationDelayedReplyContext;                                               //@synthesize beginNavigationDelayedReplyContext=_beginNavigationDelayedReplyContext - In the implementation block
@property (nonatomic,copy) NSString * _currentGroupIdentifier;                                                    //@synthesize currentGroupIdentifier=_currentGroupIdentifier - In the implementation block
@property (nonatomic,copy) NSDictionary * _lastSiriRequest;                                                       //@synthesize lastSiriRequest=_lastSiriRequest - In the implementation block
@property (assign,nonatomic) unsigned state;                                                                      //@synthesize state=_state - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedServer;
-(MNGuidanceETA *)_latestETA;
-(void)navigationSession:(id)arg1 displayPrimaryStepManeuverType:(int)arg2 junctionType:(int)arg3 junctionElements:(SCD_Struct_Di20*)arg4 count:(unsigned long)arg5 instructions:(id)arg6 shorterAlternativeInstructions:(id)arg7 shieldType:(int)arg8 shieldText:(id)arg9 drivingSide:(int)arg10 maneuverStepIndex:(unsigned)arg11 isSynthetic:(char)arg12 ;
-(void)navigationSession:(id)arg1 currentStepIndex:(unsigned)arg2 distanceUntilManeuver:(double)arg3 timeUntilManeuver:(double)arg4 ;
-(void)navigationSession:(id)arg1 updateETA:(id)arg2 ;
-(void)directionsSessionUpdatedTrafficIncidents:(id)arg1 ;
-(void)navigationSession:(id)arg1 proceedToRouteDistance:(double)arg2 displayString:(id)arg3 eta:(id)arg4 closestStepIndex:(unsigned)arg5 ;
-(void)navigationSession:(id)arg1 startingStepIndex:(unsigned)arg2 ;
-(void)directionsSessionUpdatedETA:(id)arg1 ;
-(void)directionsSession:(id)arg1 didChangeRoutePreloadSession:(id)arg2 ;
-(void)navigationSession:(id)arg1 updatePointOfInterest:(SCD_Struct_RA7)arg2 focusStyle:(int)arg3 ;
-(void)directionsSessionDidCancelRoute:(id)arg1 ;
-(void)navigationSession:(id)arg1 ignoredLocation:(id)arg2 ;
-(void)directionsSession:(id)arg1 didSwitchToNewRoute:(id)arg2 ;
-(void)navigationSession:(id)arg1 didChangeState:(int)arg2 ;
-(void)directionsSessionDidCancelRecalculate:(id)arg1 ;
-(void)directionsSession:(id)arg1 didRecalculateNewRoute:(id)arg2 ;
-(void)navigationSession:(id)arg1 updatedMatchedLocation:(id)arg2 ;
-(void)directionsSessionWillRecalculateRoute:(id)arg1 ;
-(void)navigationSession:(id)arg1 failedWithErrorCode:(int)arg2 ;
-(void)directionsSessionDidFailToReceiveRoute:(id)arg1 error:(id)arg2 ;
-(void)directionsSessionWillRequestRoute:(id)arg1 ;
-(void)directionsSession:(id)arg1 didReceiveRouteSet:(id)arg2 ;
-(void)navigationSession:(id)arg1 didEnableGuidance:(char)arg2 ;
-(void)directionsSession:(id)arg1 didAppendRoutesInRouteSet:(id)arg2 ;
-(void)navigationSession:(id)arg1 willStartForRoute:(id)arg2 ;
-(void)navigationSession:(id)arg1 updatedTrafficIncidentAlert:(id)arg2 ;
-(void)navigationSessionWillEnd:(id)arg1 ;
-(void)directionsSessionDidFailToRecordTrace:(id)arg1 ;
-(void)navigationSessionDidStart:(id)arg1 ;
-(void)navigationSession:(id)arg1 invalidatedTrafficIncidentAlert:(id)arg2 ;
-(void)navigationSessionWillResumeNavigatorFromPause:(id)arg1 ;
-(void)directionsSession:(id)arg1 failedWithError:(id)arg2 ;
-(void)navigationSession:(id)arg1 receivedTrafficIncidentAlert:(id)arg2 responseCallback:(/*^block*/id)arg3 ;
-(void)navigationSessionWillStopNavigator:(id)arg1 ;
-(void)navigationSession:(id)arg1 matchedToStepIndex:(unsigned)arg2 andLegIndex:(unsigned)arg3 ;
-(void)navigationSessionWillPauseNavigator:(id)arg1 ;
-(void)navigationSession:(id)arg1 willStartNavigatorForRoute:(id)arg2 ;
-(void)navigationSessionHasReachedEndOfLeg:(id)arg1 willContinueGuidance:(char)arg2 ;
-(void)navigationSessionHasArrived:(id)arg1 ;
-(void)navigationSessionTransportTypeChanged:(id)arg1 newTransportType:(int)arg2 ;
-(void)navigationSessionDetectedNewTransportType:(id)arg1 newTransportType:(int)arg2 ;
-(void)navigationSessionHideSecondaryStep:(id)arg1 ;
-(void)navigationSession:(id)arg1 displayManeuverAlertForAnnouncementStage:(unsigned)arg2 ;
-(void)navigationSession:(id)arg1 displaySecondaryStepManeuverType:(int)arg2 junctionType:(int)arg3 junctionElements:(SCD_Struct_Di20*)arg4 count:(unsigned long)arg5 instructions:(id)arg6 shorterAlternativeInstructions:(id)arg7 shieldType:(int)arg8 shieldText:(id)arg9 drivingSide:(int)arg10 ;
-(void)setDestinationDisplayName:(id)arg1 ;
-(void)setETA:(id)arg1 ;
-(void)showRecalculating;
-(int)_maneuver;
-(int)_drivingSide;
-(id)timeAttributes;
-(char)_newManeuverUpdate;
-(void)set_timeAttributedStringData:(NSData *)arg1 ;
-(void)_setTimeToManeuver:(double)arg1 distanceToManeuver:(double)arg2 ;
-(char)_requestDictionaryIsForCurrentSession:(id)arg1 ;
-(id)_showRemoteView:(id)arg1 userInfo:(id)arg2 ;
-(void)_removeTrafficIncidentAlertFromTimer:(id)arg1 ;
-(double)_lastSentRemainingDistance;
-(MNLockScreenDimmingBehavior *)_dimmingBehavior;
-(NSData *)_timeAttributedStringData;
-(void)set_transportType:(int)arg1 ;
-(char)_timeDistanceOrETAToDestinationDidChange;
-(void)_noteApplicationActiveStateChanged:(id)arg1 ;
-(NSString *)_lastSentETADateString;
-(NSString *)_proceedingToRouteDisplayString;
-(id<MNBackgroundNavigationDelegate>)backgroundNavigationDelegate;
-(void)setBeginNavigationDelayedReplyContext:(id)arg1 ;
-(UIImage *)_shieldImage;
-(UIImage *)_starkBannerShieldImage;
-(void)set_sendShieldImage:(char)arg1 ;
-(void)set_currentLightLevel:(int)arg1 ;
-(void)_toggleNavigationGuidance:(id)arg1 userInfo:(id)arg2 ;
-(double)_lastSentRemainingTime;
-(id)_startPreparedBackgroundNavigation:(id)arg1 userInfo:(id)arg2 ;
-(CGSize)_viewSizeFromRequestDictionary:(id)arg1 ;
-(NSDictionary *)_lastSiriRequest;
-(void)set_starkBannerShieldImage:(UIImage *)arg1 ;
-(void)set_maneuver:(int)arg1 ;
-(id)beginNavigationDelayedReplyContext;
-(void)set_newManeuverUpdate:(char)arg1 ;
-(void)_changeCurrentGroupIdentifier;
-(void)setExternalGuidanceSource:(id<MNExternalGuidanceSource>)arg1 ;
-(void)updateLightLevelOnLockScreen:(id)arg1 ;
-(void)_showNoGuidance;
-(void)navigationStateDidChangeTo:(unsigned)arg1 reason:(id)arg2 userInfo:(id)arg3 ;
-(void)_addCurrentGuidanceStateToMessageDictionary:(id)arg1 guidanceCausedVibration:(char)arg2 ;
-(void)set_lastSentRemainingTime:(double)arg1 ;
-(void)_noteGuidanceStateChangedWithVibration:(char)arg1 ;
-(void)set_latestETA:(MNGuidanceETA *)arg1 ;
-(NSData *)_etaAttributedStringData;
-(void)_noteGuidanceStateChanged;
-(void)set_lastSiriRequest:(NSDictionary *)arg1 ;
-(void)set_lastSentRemainingDistance:(double)arg1 ;
-(double)_distanceToManeuver;
-(id<MNLockScreenLayerSource>)lockScreenLayerSource;
-(void)_setNavigationVolume:(id)arg1 userInfo:(id)arg2 ;
-(char)_guidanceAffectsDimming;
-(void)lockScreenSessionDidRelinquishView:(id)arg1 ;
-(void)beginWaitingForSiriWithTimeout:(double)arg1 ;
-(void)_dismissNavSafetyAlert;
-(void)set_shieldImage:(UIImage *)arg1 ;
-(id)_prepareBackgroundNavigation:(id)arg1 userInfo:(id)arg2 ;
-(void)clearWaitingUntilSiriIsDone;
-(void)set_timeToManeuver:(double)arg1 ;
-(void)set_maneuverInstructions:(NSArray *)arg1 ;
-(void)set_proceedingToRouteDisplayString:(NSString *)arg1 ;
-(void)set_lastSentETADateString:(NSString *)arg1 ;
-(id)_setRemoteViewSize:(id)arg1 userInfo:(id)arg2 ;
-(NSString *)_currentGroupIdentifier;
-(void)lockScreenSessionDidAcquireView:(id)arg1 ;
-(void)set_drivingSide:(int)arg1 ;
-(id)_relayTrafficRerouteResponse:(id)arg1 userInfo:(id)arg2 ;
-(CGPoint)_starkBannerCenterPoint;
-(void)set_dimmingBehavior:(MNLockScreenDimmingBehavior *)arg1 ;
-(void)set_distanceToRoute:(double)arg1 ;
-(void)_setLockScreenSession:(id)arg1 ;
-(id)etaAttributedString;
-(id)_repeatCurrentTrafficAlert;
-(void)setBackgroundNavigationDelegate:(id<MNBackgroundNavigationDelegate>)arg1 ;
-(id)_hideRemoteView:(id)arg1 userInfo:(id)arg2 ;
-(void)set_distanceToManeuver:(double)arg1 ;
-(void)set_shieldCenterPoint:(CGPoint)arg1 ;
-(id<MNExternalGuidanceSource>)externalGuidanceSource;
-(id)_sendCurrentGuidance:(id)arg1 userInfo:(id)arg2 ;
-(void)_vibrateForReroute:(id)arg1 ;
-(int)_currentLightLevel;
-(void)setLockScreenLayerSource:(id<MNLockScreenLayerSource>)arg1 ;
-(char)_sendShieldImage;
-(void)setLockScreenUIEnabled:(char)arg1 ;
-(double)_distanceToRoute;
-(void)_createLockScreenSessionIfNeeded;
-(void)set_currentGroupIdentifier:(NSString *)arg1 ;
-(char)isNavigationBannerHiddenBySiri;
-(NSArray *)_maneuverInstructions;
-(void)_proceedWithLockScreenSessionAfterSnapshotPhase;
-(MNLockScreenSession *)_lockScreenSession;
-(id)remainingDistanceTimeAttributedString;
-(void)set_starkBannerCenterPoint:(CGPoint)arg1 ;
-(id)_repeatCurrentGuidance;
-(void)_startLockScreenSessionIfNeeded;
-(void)_applicationDidFinishSnapshotting;
-(void)set_etaAttributedStringData:(NSData *)arg1 ;
-(double)_timeToManeuver;
-(void)timedOutWaitingForSiri;
-(id)_endNavigation;
-(CGPoint)_shieldCenterPoint;
-(void)navigationStateDidChangeTo:(unsigned)arg1 reason:(id)arg2 ;
-(void)_applicationWillAddDeactivationReason:(id)arg1 ;
-(void)_applicationDidRemoveDeactivationReason:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(unsigned)state;
-(void)setState:(unsigned)arg1 ;
-(void)_applicationDidEnterBackground;
-(void)_endSession;
-(char)_isInBackground;
-(id)labelAttributes;
-(int)_transportType;
-(void)_applicationWillEnterForeground;
@end

