/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:11:56 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/AdSheet.app/AdSheet
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AdSheet/AdSheet-Structs.h>
#import <UIKit/UIViewController.h>
#import <AdSheet/ADSStoryboardWebViewDelegate.h>
#import <AdSheet/ADSWebViewControllerDelegate.h>
#import <UIKit/UIPopoverControllerDelegate.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <libobjc.A.dylib/QLPreviewControllerDelegate.h>
#import <libobjc.A.dylib/QLPreviewControllerDataSource.h>
#import <AdSheet/ADSActionViewControllerChildInterface.h>

@protocol ADSActionViewControllerInterface;
@class ADSAdSpaceController, UIViewController, NSURL, ADSStoryboardWebView, ADCountdownButton, UIProgressView, UIPopoverController, NSTimer, UIImageView, ADSAdImpressionController, ADQuicklookPreview, ADSAdImpression, NSString;

@interface ADSStoryboardController : UIViewController <ADSStoryboardWebViewDelegate, ADSWebViewControllerDelegate, UIPopoverControllerDelegate, UIGestureRecognizerDelegate, QLPreviewControllerDelegate, QLPreviewControllerDataSource, ADSActionViewControllerChildInterface> {

	ADSAdSpaceController* _adSpaceController;
	UIViewController*<ADSActionViewControllerInterface> _actionViewController;
	NSURL* _frontmostAppURL;
	char _contentIsFullyLoaded;
	char _hasAppeared;
	char _hasStartedFirstLoad;
	char _adIsDismissing;
	char _forcePortraitOnly;
	char _hasShownDismissButton;
	char _playingFullScreenVideo;
	char _suspended;
	ADSStoryboardWebView* _webView;
	ADCountdownButton* _dismissButton;
	UIProgressView* _progressView;
	UIPopoverController* _popover;
	/*^block*/id _popoverDismissalHandler;
	NSTimer* _autoDismissTimer;
	UIImageView* _interstitialBrandingCorner;
	ADSAdImpressionController* _adImpressionController;
	ADQuicklookPreview* _previewItem;
	/*^block*/id _previewCompletion;
	NSTimer* _progressTimer;
	double _loadStartTime;

}

@property (assign,nonatomic,__weak) UIViewController*<ADSActionViewControllerInterface> actionViewController; 
@property (nonatomic,retain) ADSStoryboardWebView * webView;                                                               //@synthesize webView=_webView - In the implementation block
@property (nonatomic,retain) ADCountdownButton * dismissButton;                                                            //@synthesize dismissButton=_dismissButton - In the implementation block
@property (nonatomic,retain) UIProgressView * progressView;                                                                //@synthesize progressView=_progressView - In the implementation block
@property (nonatomic,retain) UIPopoverController * popover;                                                                //@synthesize popover=_popover - In the implementation block
@property (nonatomic,copy) id popoverDismissalHandler;                                                                     //@synthesize popoverDismissalHandler=_popoverDismissalHandler - In the implementation block
@property (nonatomic,retain) NSTimer * autoDismissTimer;                                                                   //@synthesize autoDismissTimer=_autoDismissTimer - In the implementation block
@property (nonatomic,retain) UIImageView * interstitialBrandingCorner;                                                     //@synthesize interstitialBrandingCorner=_interstitialBrandingCorner - In the implementation block
@property (nonatomic,readonly) ADSAdImpressionController * adImpressionController;                                         //@synthesize adImpressionController=_adImpressionController - In the implementation block
@property (nonatomic,readonly) ADSAdImpression * ad; 
@property (nonatomic,retain) ADQuicklookPreview * previewItem;                                                             //@synthesize previewItem=_previewItem - In the implementation block
@property (nonatomic,copy) id previewCompletion;                                                                           //@synthesize previewCompletion=_previewCompletion - In the implementation block
@property (assign,nonatomic) double loadStartTime;                                                                         //@synthesize loadStartTime=_loadStartTime - In the implementation block
@property (assign,nonatomic) char contentIsFullyLoaded;                                                                    //@synthesize contentIsFullyLoaded=_contentIsFullyLoaded - In the implementation block
@property (assign,nonatomic) char hasAppeared;                                                                             //@synthesize hasAppeared=_hasAppeared - In the implementation block
@property (assign,nonatomic) char hasStartedFirstLoad;                                                                     //@synthesize hasStartedFirstLoad=_hasStartedFirstLoad - In the implementation block
@property (assign,nonatomic) char adIsDismissing;                                                                          //@synthesize adIsDismissing=_adIsDismissing - In the implementation block
@property (assign,nonatomic) char forcePortraitOnly;                                                                       //@synthesize forcePortraitOnly=_forcePortraitOnly - In the implementation block
@property (nonatomic,retain) NSTimer * progressTimer;                                                                      //@synthesize progressTimer=_progressTimer - In the implementation block
@property (assign,nonatomic) char hasShownDismissButton;                                                                   //@synthesize hasShownDismissButton=_hasShownDismissButton - In the implementation block
@property (assign,nonatomic) char playingFullScreenVideo;                                                                  //@synthesize playingFullScreenVideo=_playingFullScreenVideo - In the implementation block
@property (assign,nonatomic) char suspended;                                                                               //@synthesize suspended=_suspended - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedDownloader;
-(ADSAdImpressionController *)adImpressionController;
-(void)clientApplicationDidEnterBackground;
-(void)clientApplicationCancelledAction;
-(id)adSpaceController;
-(void)setAdSpaceController:(id)arg1 ;
-(void)setAutoDismissTimer:(NSTimer *)arg1 ;
-(void)_handleLowMemory:(id)arg1 ;
-(CGRect)_contentFrame;
-(void)_dismissButtonTapped;
-(void)_videoPlayerWentFullScreen:(id)arg1 ;
-(void)_videoPlayerExitedFullScreen:(id)arg1 ;
-(void)setLoadStartTime:(double)arg1 ;
-(char)hasAppeared;
-(void)setHasAppeared:(char)arg1 ;
-(void)_showDismissButton;
-(UIViewController*<ADSActionViewControllerInterface>)actionViewController;
-(char)contentIsFullyLoaded;
-(char)forcePortraitOnly;
-(char)playingFullScreenVideo;
-(void)setPlayingFullScreenVideo:(char)arg1 ;
-(void)_dismissWithSystemEvent:(int)arg1 ;
-(char)adIsDismissing;
-(void)setAdIsDismissing:(char)arg1 ;
-(void)setPopoverDismissalHandler:(id)arg1 ;
-(void)_dismissKeyboard;
-(void)_autoDismissStoryboard;
-(char)hasShownDismissButton;
-(void)setHasShownDismissButton:(char)arg1 ;
-(void)_resetAutoDismissTimer;
-(char)hasStartedFirstLoad;
-(void)setHasStartedFirstLoad:(char)arg1 ;
-(double)loadStartTime;
-(void)setContentIsFullyLoaded:(char)arg1 ;
-(void)_openWhitelistURL:(id)arg1 ;
-(void)setForcePortraitOnly:(char)arg1 ;
-(void)webView:(id)arg1 requestsPresentModalViewController:(id)arg2 animated:(char)arg3 ;
-(void)webView:(id)arg1 requestsDismissModalViewControllerAnimated:(char)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)setPreviewCompletion:(id)arg1 ;
-(void)_userSelectedCustomAction:(char)arg1 ;
-(void)storyboardWebViewPrivilegedAdWantsToDismiss:(id)arg1 ;
-(char)storyboardWebViewVoiceOverWantsToDismiss:(id)arg1 ;
-(void)webView:(id)arg1 requestsPresentPopoverViewController:(id)arg2 fromRect:(CGRect)arg3 animated:(char)arg4 tapDismissalHandler:(/*^block*/id)arg5 ;
-(void)webViewPopoverShouldResize:(id)arg1 ;
-(void)webView:(id)arg1 requestsDismissPopoverViewControllerAnimated:(char)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)webView:(id)arg1 requestsPreview:(id)arg2 completion:(/*^block*/id)arg3 ;
-(unsigned)storyboardWebViewRequestsSupportedInterfaceOrientations:(id)arg1 ;
-(void)storyboardWebView:(id)arg1 didChangeSupportedInterfaceOrientations:(unsigned)arg2 ;
-(void)webViewWillTakeScreenShot:(id)arg1 ;
-(void)webViewDidTakeScreenShot:(id)arg1 ;
-(void)webView:(id)arg1 didReportEventWithMessage:(id)arg2 ;
-(void)webView:(id)arg1 didReportSystemEventWithType:(int)arg2 ;
-(void)adWebView:(id)arg1 failedToLoadAssetAtURL:(id)arg2 details:(id)arg3 ;
-(void)adWebView:(id)arg1 hadScriptErrorWithInfo:(id)arg2 ;
-(void)adWebViewControllerShouldDismiss:(id)arg1 ;
-(void)adWebViewController:(id)arg1 routeExternalURL:(id)arg2 ;
-(void)adWebViewControllerWillPresentViewController:(id)arg1 ;
-(void)adWebViewControllerDidDismissViewController:(id)arg1 ;
-(void)actionViewControllerClosed;
-(id)initWithAdSpaceController:(id)arg1 ;
-(void)setActionViewController:(UIViewController*<ADSActionViewControllerInterface>)arg1 ;
-(void)homeButtonTapped;
-(id)popoverDismissalHandler;
-(NSTimer *)autoDismissTimer;
-(UIImageView *)interstitialBrandingCorner;
-(void)setInterstitialBrandingCorner:(UIImageView *)arg1 ;
-(id)previewCompletion;
-(char)suspended;
-(void)_updateProgress:(id)arg1 ;
-(void)setPreviewItem:(ADQuicklookPreview *)arg1 ;
-(ADQuicklookPreview *)previewItem;
-(void)previewController:(id)arg1 customActionButtonWasTappedForPreviewItem:(id)arg2 ;
-(id)previewController:(id)arg1 customActionButtonTittleForPreviewItem:(id)arg2 ;
-(void)dealloc;
-(unsigned)supportedInterfaceOrientations;
-(void)loadView;
-(void)viewWillLayoutSubviews;
-(void)viewDidLayoutSubviews;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidAppear:(char)arg1 ;
-(id)initWithURL:(id)arg1 ;
-(ADSStoryboardWebView *)webView;
-(void)setWebView:(ADSStoryboardWebView *)arg1 ;
-(void)webView:(id)arg1 didFailLoadWithError:(id)arg2 ;
-(char)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(int)arg3 ;
-(void)webViewDidStartLoad:(id)arg1 ;
-(void)webViewDidFinishLoad:(id)arg1 ;
-(void)uiWebView:(id)arg1 resource:(id)arg2 didReceiveAuthenticationChallenge:(id)arg3 fromDataSource:(id)arg4 ;
-(void)setProgressView:(UIProgressView *)arg1 ;
-(UIProgressView *)progressView;
-(void)popoverController:(id)arg1 animationCompleted:(int)arg2 ;
-(char)popoverControllerShouldDismissPopover:(id)arg1 ;
-(void)previewControllerDidDismiss:(id)arg1 ;
-(int)numberOfPreviewItemsInPreviewController:(id)arg1 ;
-(id)previewController:(id)arg1 previewItemAtIndex:(int)arg2 ;
-(void)setProgressTimer:(NSTimer *)arg1 ;
-(NSTimer *)progressTimer;
-(void)setSuspended:(char)arg1 ;
-(UIPopoverController *)popover;
-(void)setPopover:(UIPopoverController *)arg1 ;
-(ADCountdownButton *)dismissButton;
-(void)setDismissButton:(ADCountdownButton *)arg1 ;
-(ADSAdImpression *)ad;
@end

