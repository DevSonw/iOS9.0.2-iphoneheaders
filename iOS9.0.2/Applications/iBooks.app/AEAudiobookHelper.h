/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:17 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/iBooks.app/iBooks
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iBooks/AEHelper.h>
#import <iBooks/AEAsset.h>

@class NSURL, MPMediaQuery, BKLocation, NSDictionary, NSString, AEAnnotationProvider;

@interface AEAudiobookHelper : NSObject <AEHelper, AEAsset> {

	NSURL* _assetUrl;
	MPMediaQuery* _mediaQuery;
	BKLocation* _currentLocation;
	NSDictionary* _options;

}

@property (nonatomic,retain) NSDictionary * options;                                   //@synthesize options=_options - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) AEAnnotationProvider * annotationProvider; 
+(double)timeRemainingInAssetWithURL:(id)arg1 outDuration:(double*)arg2 ;
-(id)assetID;
-(id)helperMetadataForKey:(id)arg1 ;
-(void)helperDeletePersistentCache;
-(id)sharedAnnotationProvider;
-(id)helperCoverImage;
-(void)helperViewControllerWithOptions:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)initWithAssetUrl:(id)arg1 options:(id)arg2 ;
-(id)helperAsset;
-(void)helper:(id)arg1 viewControllerWithCompletion:(/*^block*/id)arg2 ;
-(id)helper:(id)arg1 viewControllerForURL:(id)arg2 error:(id*)arg3 ;
-(id)mediaQuery;
-(void)dealloc;
-(NSString *)description;
-(id)url;
-(id)representativeItem;
-(void)setOptions:(NSDictionary *)arg1 ;
-(NSDictionary *)options;
-(id)assetType;
@end
