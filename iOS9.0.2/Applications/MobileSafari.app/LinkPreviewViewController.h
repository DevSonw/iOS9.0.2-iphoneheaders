/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:45 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/MobileSafari.app/MobileSafari
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>

@class _SFBrowserView, TabDocument, NSArray, _WKActivatedElementInfo, LSAppLink;

@interface LinkPreviewViewController : UIViewController {

	_SFBrowserView* _browserView;
	char _hasPreviewHeader;
	TabDocument* _previewTabDocument;
	NSArray* _linkActions;
	_WKActivatedElementInfo* _activatedElementInfo;
	LSAppLink* _appLink;

}

@property (nonatomic,__weak,readonly) TabDocument * previewTabDocument;                   //@synthesize previewTabDocument=_previewTabDocument - In the implementation block
@property (nonatomic,retain) NSArray * linkActions;                                       //@synthesize linkActions=_linkActions - In the implementation block
@property (nonatomic,retain) _WKActivatedElementInfo * activatedElementInfo;              //@synthesize activatedElementInfo=_activatedElementInfo - In the implementation block
@property (assign,nonatomic) char hasPreviewHeader;                                       //@synthesize hasPreviewHeader=_hasPreviewHeader - In the implementation block
@property (nonatomic,retain) LSAppLink * appLink;                                         //@synthesize appLink=_appLink - In the implementation block
-(id)initWithTabDocument:(id)arg1 ;
-(void)updatePreviewLoadingUI;
-(void)willCommitPreviewedWebView;
-(TabDocument *)previewTabDocument;
-(char)hasPreviewHeader;
-(void)setHasPreviewHeader:(char)arg1 ;
-(void)setLinkActions:(NSArray *)arg1 ;
-(void)setActivatedElementInfo:(_WKActivatedElementInfo *)arg1 ;
-(_WKActivatedElementInfo *)activatedElementInfo;
-(void)loadView;
-(void)viewDidLayoutSubviews;
-(void)viewDidAppear:(char)arg1 ;
-(id)previewActions;
-(NSArray *)linkActions;
-(void)setAppLink:(LSAppLink *)arg1 ;
-(LSAppLink *)appLink;
@end
