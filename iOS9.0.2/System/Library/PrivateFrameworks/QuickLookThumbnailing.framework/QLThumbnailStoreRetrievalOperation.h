/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:33:57 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/QuickLookThumbnailing.framework/QuickLookThumbnailing
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Foundation/NSOperation.h>

@protocol QLThumbnailGenerationRequest;
@class NSURL, NSError, QLThumbnailAddition, NSDictionary, NSData, GSAddition;

@interface QLThumbnailStoreRetrievalOperation : NSOperation {

	NSURL* _documentURL;
	NSError* _error;
	char _finished;
	char _executing;
	char _allowsThumbnailGeneration;
	char _generateThumbnailsAtBackgroundPriority;
	QLThumbnailAddition* _addition;
	id<QLThumbnailGenerationRequest> _thumbnailRequest;
	NSURL* _destinationURL;

}

@property (assign) char allowsThumbnailGeneration;                                //@synthesize allowsThumbnailGeneration=_allowsThumbnailGeneration - In the implementation block
@property (assign) char generateThumbnailsAtBackgroundPriority;                   //@synthesize generateThumbnailsAtBackgroundPriority=_generateThumbnailsAtBackgroundPriority - In the implementation block
@property (readonly) NSDictionary * thumbnailImagesDictionary; 
@property (readonly) NSData * serializedQuickLookMetadataDictionary; 
@property (retain) NSError * error;                                               //@synthesize error=_error - In the implementation block
@property (readonly) char thumbnailWasAutomaticallyGenerated; 
@property (readonly) GSAddition * genStoreAddition; 
@property (assign,getter=isExecuting,nonatomic) char executing;                   //@synthesize executing=_executing - In the implementation block
@property (assign,getter=isFinished,nonatomic) char finished;                     //@synthesize finished=_finished - In the implementation block
+(char)canMostRecentClientsGenerateThumbnailsForUTI:(id)arg1 ;
-(char)isConcurrent;
-(NSError *)error;
-(void)cancel;
-(void)dealloc;
-(id)init;
-(id)description;
-(void)start;
-(void)main;
-(char)isFinished;
-(char)isExecuting;
-(char)_finishIfCancelled;
-(NSDictionary *)thumbnailImagesDictionary;
-(NSData *)serializedQuickLookMetadataDictionary;
-(id)initWithDocumentAtURL:(id)arg1 ;
-(void)setExecuting:(char)arg1 ;
-(void)_finishWithError:(id)arg1 ;
-(void)setFinished:(char)arg1 ;
-(void)setError:(NSError *)arg1 ;
-(void)_finishBecauseGenerationFailedWithUnderlyingError:(id)arg1 ;
-(void)_afterThumbnailIsGenerated;
-(void)_generateThumbnail;
-(void)afterThumbnailIsPutInGenstore;
-(GSAddition *)genStoreAddition;
-(char)thumbnailWasAutomaticallyGenerated;
-(char)allowsThumbnailGeneration;
-(void)setAllowsThumbnailGeneration:(char)arg1 ;
-(char)generateThumbnailsAtBackgroundPriority;
-(void)setGenerateThumbnailsAtBackgroundPriority:(char)arg1 ;
@end

