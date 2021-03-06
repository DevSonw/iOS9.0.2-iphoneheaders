/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:45 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/MobileSafari.app/MobileSafari
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class LSDocumentProxy, NSString, NSURL;

@interface QuickLookDocument : NSObject {

	LSDocumentProxy* _documentProxy;
	char _needsQuickLookDocumentView;
	NSString* _savedPath;
	NSString* _savedPathWithProperExtension;
	char _shouldDeleteSavedPath;
	char _shouldDeleteSavedPathWithProperExtension;
	NSString* _fileName;
	NSString* _mimeType;
	NSString* _uti;
	NSURL* _sourceURL;

}

@property (nonatomic,retain) LSDocumentProxy * documentProxy;                    //@synthesize documentProxy=_documentProxy - In the implementation block
@property (nonatomic,readonly) char needsQuickLookDocumentView;                  //@synthesize needsQuickLookDocumentView=_needsQuickLookDocumentView - In the implementation block
@property (nonatomic,copy) NSString * savedPath;                                 //@synthesize savedPath=_savedPath - In the implementation block
@property (nonatomic,copy) NSString * savedPathWithProperExtension;              //@synthesize savedPathWithProperExtension=_savedPathWithProperExtension - In the implementation block
@property (nonatomic,copy) NSString * fileName;                                  //@synthesize fileName=_fileName - In the implementation block
@property (nonatomic,copy) NSString * mimeType;                                  //@synthesize mimeType=_mimeType - In the implementation block
@property (nonatomic,copy) NSString * uti;                                       //@synthesize uti=_uti - In the implementation block
@property (nonatomic,retain) NSURL * sourceURL;                                  //@synthesize sourceURL=_sourceURL - In the implementation block
-(char)needsQuickLookDocumentView;
-(void)setSavedPath:(id)arg1 shouldDelete:(char)arg2 ;
-(void)addQuickLookPrintSettingsToPrintInfo:(id)arg1 ;
-(NSString *)savedPath;
-(NSString *)savedPathWithProperExtension;
-(LSDocumentProxy *)documentProxy;
-(void)_deleteSavedPathIfNecessary;
-(void)_deleteSavedPathWithProperExtensionIfNecessary;
-(void)setDocumentProxy:(LSDocumentProxy *)arg1 ;
-(void)setSavedPathWithProperExtension:(id)arg1 shouldDelete:(char)arg2 ;
-(void)setSavedPath:(NSString *)arg1 ;
-(void)setSavedPathWithProperExtension:(NSString *)arg1 ;
-(id)initWithFileName:(id)arg1 mimeType:(id)arg2 uti:(id)arg3 needsQuickLookDocumentView:(char)arg4 ;
-(NSString *)uti;
-(void)setUti:(NSString *)arg1 ;
-(void)dealloc;
-(NSString *)mimeType;
-(void)setMimeType:(NSString *)arg1 ;
-(void)setSourceURL:(NSURL *)arg1 ;
-(NSURL *)sourceURL;
-(NSString *)fileName;
-(void)setFileName:(NSString *)arg1 ;
@end

