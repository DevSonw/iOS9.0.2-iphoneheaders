/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:33:58 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/Radio.framework/Radio
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/RURadioItemIdentifier.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol OS_dispatch_queue;
@class NSObject, NSDictionary, NSMutableDictionary, NSDate, NSString, NSData, RadioTrackAdInfo, RadioAudioClip, NSURL, RadioArtworkCollection, NSArray;

@interface RadioTrack : NSObject <RURadioItemIdentifier, NSSecureCoding> {

	NSObject*<OS_dispatch_queue> _accessQueue;
	NSDictionary* _bestOfferDictionary;
	NSMutableDictionary* _trackDictionary;
	char _isPreorderAlbum;
	NSDate* _expirationDate;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSData * adData; 
@property (nonatomic,readonly) RadioTrackAdInfo * adInfo; 
@property (nonatomic,readonly) RadioAudioClip * afterPromoAudioClip; 
@property (nonatomic,copy,readonly) NSString * album; 
@property (nonatomic,copy,readonly) NSString * albumBuyButtonText; 
@property (nonatomic,readonly) int albumBuyButtonType; 
@property (nonatomic,readonly) long long albumID; 
@property (nonatomic,copy,readonly) NSURL * albumURL; 
@property (nonatomic,copy,readonly) NSString * artist; 
@property (nonatomic,readonly) RadioArtworkCollection * artworkCollection; 
@property (nonatomic,copy,readonly) NSArray * assets; 
@property (nonatomic,readonly) RadioAudioClip * beforePromoAudioClip; 
@property (nonatomic,copy,readonly) NSString * copyrightText; 
@property (nonatomic,readonly) long long dateFetched; 
@property (nonatomic,copy,readonly) NSString * debugMessage; 
@property (nonatomic,readonly) double duration; 
@property (nonatomic,retain) NSDate * expirationDate;                                             //@synthesize expirationDate=_expirationDate - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * feedbackDictionaryRepresentation; 
@property (nonatomic,readonly) char isExplicit; 
@property (nonatomic,readonly) char isPreorderAlbum;                                              //@synthesize isPreorderAlbum=_isPreorderAlbum - In the implementation block
@property (assign,nonatomic) char inWishList; 
@property (nonatomic,readonly) int likeStatus; 
@property (nonatomic,copy,readonly) NSArray * offers; 
@property (nonatomic,copy,readonly) NSURL * previewURL; 
@property (nonatomic,readonly) long long shuffleSeed; 
@property (nonatomic,readonly) double startTime; 
@property (nonatomic,readonly) long long storeID; 
@property (nonatomic,copy,readonly) NSString * title; 
@property (nonatomic,copy,readonly) NSDictionary * trackInfo; 
@property (nonatomic,copy) NSDictionary * metadataDictionary; 
@property (nonatomic,copy,readonly) NSDictionary * trackDictionary;                               //@synthesize trackDictionary=_trackDictionary - In the implementation block
+(char)supportsSecureCoding;
-(id)radioIdentifier;
-(NSString *)artist;
-(NSString *)copyrightText;
-(NSURL *)previewURL;
-(NSArray *)assets;
-(NSString *)album;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(NSString *)description;
-(double)duration;
-(NSString *)title;
-(double)startTime;
-(int)albumBuyButtonType;
-(NSString *)albumBuyButtonText;
-(NSDate *)expirationDate;
-(void)setExpirationDate:(NSDate *)arg1 ;
-(void)setMetadataDictionary:(NSDictionary *)arg1 ;
-(NSDictionary *)metadataDictionary;
-(char)isExplicit;
-(void)_performTransactionAndWait:(/*^block*/id)arg1 ;
-(id)initWithTrackDictionary:(id)arg1 ;
-(NSDictionary *)trackDictionary;
-(id)_valueOfClass:(Class)arg1 forMetadataKey:(id)arg2 fallbackTrackDictionaryKey:(id)arg3 ;
-(id)_valueRespondingToSelector:(SEL)arg1 forMetadataKey:(id)arg2 fallbackTrackDictionaryKey:(id)arg3 ;
-(id)_valueOfClass:(Class)arg1 forAssetInfoKey:(id)arg2 ;
-(void)_performWriteTransaction:(/*^block*/id)arg1 ;
-(NSURL *)albumURL;
-(long long)dateFetched;
-(NSString *)debugMessage;
-(void)setInWishList:(char)arg1 ;
-(long long)shuffleSeed;
-(void)_performTransaction:(/*^block*/id)arg1 ;
-(void)_performWriteTransactionAndWait:(/*^block*/id)arg1 ;
-(char)isPreorderAlbum;
-(char)inWishList;
-(long long)albumID;
-(int)likeStatus;
-(RadioAudioClip *)beforePromoAudioClip;
-(RadioAudioClip *)afterPromoAudioClip;
-(RadioTrackAdInfo *)adInfo;
-(NSData *)adData;
-(NSDictionary *)feedbackDictionaryRepresentation;
-(NSArray *)offers;
-(RadioArtworkCollection *)artworkCollection;
-(long long)storeID;
-(id)_offers;
-(NSDictionary *)trackInfo;
@end

