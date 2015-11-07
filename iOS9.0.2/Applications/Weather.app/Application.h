/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:13:04 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/Weather.app/Weather
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Weather/Weather-Structs.h>
#import <UIKit/UIApplication.h>
#import <Weather/WAContainerViewControllerDelegate.h>
#import <UIKit/UIApplicationDelegate.h>
#import <libobjc.A.dylib/CLLocationManagerDelegate.h>
#import <Weather/SynchronizedDefaultsDelegate.h>
#import <Weather/WeatherApplicationProgressDelegate.h>

@class UIWindow, NSString, WAContainerViewController;

@interface Application : UIApplication <WAContainerViewControllerDelegate, UIApplicationDelegate, CLLocationManagerDelegate, SynchronizedDefaultsDelegate, WeatherApplicationProgressDelegate> {

	NSString* _testName;
	int _testIterationCount;
	UIWindow* _window;
	WAContainerViewController* _containerViewController;

}

@property (nonatomic,retain) UIWindow * window;                                                //@synthesize window=_window - In the implementation block
@property (nonatomic,retain) WAContainerViewController * containerViewController;              //@synthesize containerViewController=_containerViewController - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(char)isTallDevice;
-(void)containerViewController:(id)arg1 rebuildViewControllerHierarchyForTraitCollection:(id)arg2 ;
-(void)userTextSizeDidChange;
-(void)setLocationTrackingEnabled:(char)arg1 ;
-(void)weatherPrefsDidGetUpdated:(id)arg1 ;
-(void)pptTest_toggleCity;
-(void)pptTest_flipWidget;
-(void)pptTest_liveIcons;
-(void)pptTest_openMultiCityView;
-(void)pptTest_openLiveMultiCityView;
-(void)defaultSelectedCityDidGetUpdated:(id)arg1 ;
-(void)setupViewControllers;
-(void)locationManager:(id)arg1 didChangeAuthorizationStatus:(int)arg2 ;
-(void)locationManager:(id)arg1 didUpdateLocations:(id)arg2 ;
-(WAContainerViewController *)containerViewController;
-(void)setContainerViewController:(WAContainerViewController *)arg1 ;
-(void)dealloc;
-(UIWindow *)window;
-(id)init;
-(char)application:(id)arg1 openURL:(id)arg2 sourceApplication:(id)arg3 annotation:(id)arg4 ;
-(void)applicationDidReceiveMemoryWarning:(id)arg1 ;
-(void)applicationWillTerminate:(id)arg1 ;
-(void)applicationSignificantTimeChange:(id)arg1 ;
-(void)applicationDidBecomeActive:(id)arg1 ;
-(void)applicationWillResignActive:(id)arg1 ;
-(void)applicationDidEnterBackground:(id)arg1 ;
-(void)applicationWillEnterForeground:(id)arg1 ;
-(void)applicationDidFinishLaunching:(id)arg1 ;
-(void)setWindow:(UIWindow *)arg1 ;
-(void)applicationWillSuspendForEventsOnly;
-(void)applicationDidResumeForEventsOnly;
-(void)prepareForDefaultImageSnapshotForScreen:(id)arg1 ;
-(void)userDefaultsDidChange:(id)arg1 ;
-(void)application:(id)arg1 performFetchWithCompletionHandler:(/*^block*/id)arg2 ;
-(char)application:(id)arg1 continueUserActivity:(id)arg2 restorationHandler:(/*^block*/id)arg3 ;
-(char)application:(id)arg1 willContinueUserActivityWithType:(id)arg2 ;
-(void)significantTimeChange;
-(char)runTest:(id)arg1 options:(id)arg2 ;
-(void)reduceMotionSettingChanged;
-(void)resetLocale;
-(char)showProgressIndicator;
-(void)ubiquitousDefaultsDidChange:(id)arg1 ;
@end
