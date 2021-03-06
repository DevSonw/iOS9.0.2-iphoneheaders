/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:30:53 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/MobileCoreServices.framework/MobileCoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/SFCompanionAdvertiserDelegate.h>

@protocol LSUserActivityDelegate;
@class LSUserActivityManager, NSMutableDictionary, NSString, NSURL, SFCompanionAdvertiser, NSError, NSMutableSet, NSUUID, NSDate, NSDictionary, NSData, NSSet, NSUserActivity;

@interface LSUserActivity : NSObject <SFCompanionAdvertiserDelegate> {

	LSUserActivityManager* _manager;
	NSMutableDictionary* _userInfo;
	NSMutableDictionary* _frameworkPayload;
	NSString* _title;
	NSURL* _webpageURL;
	id<LSUserActivityDelegate> _delegate;
	SFCompanionAdvertiser* _advertiser;
	SFCompanionAdvertiser* _resumerAdvertiser;
	double _lastSaveTime;
	char _saveScheduled;
	char _createsNewUUIDIfSaved;
	NSError* _decodeUserInfoError;
	char _needsSave;
	char _dirty;
	char _sendToServerPending;
	char _inWillSaveCallback;
	char _supportsContinuationStreams;
	char _forceImmediateSendToServer;
	char _encodedContainsUnsynchronizedCloudDocument;
	char _encodedFileProviderURL;
	double _encodedContainsUnsynchronizedCloudDocumentBackoffInterval;
	NSString* _subtitle;
	NSMutableSet* _keywords;
	NSString* _contentIdentifier;
	NSString* _contentType;
	NSMutableDictionary* _contentAttributes;
	LSUserActivity* _parentUserActivity;
	NSMutableSet* _requiredUserActivityKeys;
	NSString* _teamIdentifier;
	char _eligibleForHandoff;
	char _eligibleForSearch;
	char _eligibleForReminders;
	char _eligibleForPublicIndexing;
	char _canCreateStreams;
	NSString* _typeIdentifier;
	NSString* _dynamicIdentifier;
	NSUUID* _uniqueIdentifier;
	unsigned _suggestedActionType;
	NSDate* _lastActivityDate;
	NSDictionary* _options;
	NSData* _streamsData;

}

@property (copy) NSString * owningBundleIdentifier; 
@property (getter=isActive) char active; 
@property (copy) NSDictionary * activityPayload; 
@property (setter=setActivityPayload:,getter=activityPayload,copy) NSDictionary * activityPayloadDictionary; 
@property (setter=setFrameworkPayload:,getter=frameworkPayload,copy) NSDictionary * frameworkPayloadDictionary; 
@property (copy) NSDictionary * frameworkPayload; 
@property (copy) NSURL * webPageURL; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (copy) NSString * subtitle; 
@property (copy) NSString * contentType; 
@property (copy) NSDictionary * contentAttributes; 
@property (copy) NSSet * requiredUserActivityKeys; 
@property (copy) NSSet * keywords; 
@property (copy) NSString * contentIdentifier; 
@property (retain) NSUserActivity * parentUserActivity; 
@property (getter=isEligibleForHandoff) char eligibleForHandoff; 
@property (getter=isEligibleForSearch) char eligibleForSearch; 
@property (getter=isEligibleForReminders) char eligibleForReminders; 
@property (getter=isEligibleForPublicIndexing) char eligibleForPublicIndexing; 
@property (copy) NSString * typeIdentifier;                                                                                  //@synthesize typeIdentifier=_typeIdentifier - In the implementation block
@property (copy) NSString * dynamicIdentifier;                                                                               //@synthesize dynamicIdentifier=_dynamicIdentifier - In the implementation block
@property (copy) NSString * title;                                                                                           //@synthesize title=_title - In the implementation block
@property (copy) NSDictionary * userInfo;                                                                                    //@synthesize userInfo=_userInfo - In the implementation block
@property (copy) NSURL * webpageURL;                                                                                         //@synthesize webpageURL=_webpageURL - In the implementation block
@property (assign) char needsSave;                                                                                           //@synthesize needsSave=_needsSave - In the implementation block
@property (assign) char supportsContinuationStreams;                                                                         //@synthesize supportsContinuationStreams=_supportsContinuationStreams - In the implementation block
@property (assign) char forceImmediateSendToServer;                                                                          //@synthesize forceImmediateSendToServer=_forceImmediateSendToServer - In the implementation block
@property (assign) id<LSUserActivityDelegate> delegate;                                                                      //@synthesize delegate=_delegate - In the implementation block
@property (copy) NSUUID * uniqueIdentifier;                                                                                  //@synthesize uniqueIdentifier=_uniqueIdentifier - In the implementation block
@property (readonly) unsigned suggestedActionType;                                                                           //@synthesize suggestedActionType=_suggestedActionType - In the implementation block
@property (copy) NSDate * lastActivityDate;                                                                                  //@synthesize lastActivityDate=_lastActivityDate - In the implementation block
@property (copy) NSDictionary * options;                                                                                     //@synthesize options=_options - In the implementation block
@property (copy) NSData * streamsData;                                                                                       //@synthesize streamsData=_streamsData - In the implementation block
@property (assign) char canCreateStreams;                                                                                    //@synthesize canCreateStreams=_canCreateStreams - In the implementation block
@property (copy) NSString * teamIdentifier;                                                                                  //@synthesize teamIdentifier=_teamIdentifier - In the implementation block
@property (readonly) LSUserActivityManager * manager;                                                                        //@synthesize manager=_manager - In the implementation block
@property (assign) char dirty;                                                                                               //@synthesize dirty=_dirty - In the implementation block
@property (assign) char sendToServerPending;                                                                                 //@synthesize sendToServerPending=_sendToServerPending - In the implementation block
@property (assign) char createsNewUUIDIfSaved;                                                                               //@synthesize createsNewUUIDIfSaved=_createsNewUUIDIfSaved - In the implementation block
@property (retain) NSError * decodeUserInfoError;                                                                            //@synthesize decodeUserInfoError=_decodeUserInfoError - In the implementation block
@property (assign) char encodedContainsUnsynchronizedCloudDocument;                                                          //@synthesize encodedContainsUnsynchronizedCloudDocument=_encodedContainsUnsynchronizedCloudDocument - In the implementation block
@property (assign) double encodedContainsUnsynchronizedCloudDocumentBackoffInterval;                                         //@synthesize encodedContainsUnsynchronizedCloudDocumentBackoffInterval=_encodedContainsUnsynchronizedCloudDocumentBackoffInterval - In the implementation block
@property (assign) char encodedFileProviderURL;                                                                              //@synthesize encodedFileProviderURL=_encodedFileProviderURL - In the implementation block
+(char)currentUserActivityUUIDWithOptions:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
+(char)_currentUserActivityUUIDWithOptions:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
+(void)fetchUserActivityWithUUID:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
+(void)addDynamicUserActivity:(id)arg1 matching:(id)arg2 ;
+(void)removeDynamicUserActivity:(id)arg1 matching:(id)arg2 ;
+(id)currentUserActivityUUID;
+(char)supportsUserActivityAppLinks;
+(char)userActivityContinuationSupported;
+(id)userActivityFromUUID:(id)arg1 withError:(id*)arg2 ;
+(id)suggestedActionOfType:(unsigned)arg1 ;
+(id)allowedWebpageURLSchemes;
+(char)checkWebpageURL:(id)arg1 actionType:(unsigned)arg2 throwIfFailed:(char)arg3 ;
+(id)registerForSuggestedActionNudgeOfType:(unsigned)arg1 withOptions:(id)arg2 block:(/*^block*/id)arg3 ;
+(void)unregisterForSuggestedActionNudgeOfType:(id)arg1 ;
+(id)_encodeToString:(id)arg1 ;
+(id)_encodeKeyAndValueIntoString:(id)arg1 value:(id)arg2 ;
+(id)_decodeFromScanner:(id)arg1 ;
+(id)_decodeFromString:(id)arg1 ;
+(id)userActivity;
-(id)initWithTypeIdentifier:(id)arg1 options:(id)arg2 ;
-(char)needsSave;
-(NSURL *)webpageURL;
-(void)setWebpageURL:(NSURL *)arg1 ;
-(char)supportsContinuationStreams;
-(void)setSupportsContinuationStreams:(char)arg1 ;
-(id)initWithTypeIdentifier:(id)arg1 ;
-(NSURL *)webPageURL;
-(void)setWebPageURL:(NSURL *)arg1 ;
-(id)initWithUserActivityData:(id)arg1 options:(id)arg2 ;
-(id)initWithUserActivityStrings:(id)arg1 optionalString:(id)arg2 tertiaryData:(id)arg3 options:(id)arg4 ;
-(id)initWithTypeIdentifier:(id)arg1 suggestedActionType:(unsigned)arg2 options:(id)arg3 ;
-(id)initWithTypeIdentifier:(id)arg1 dynamicIdentifier:(id)arg2 options:(id)arg3 ;
-(unsigned)suggestedActionType;
-(LSUserActivityManager *)manager;
-(id)initDynamicActivityWithTypeIdentifier:(id)arg1 dynamicIdentifier:(id)arg2 suggestedActionType:(unsigned)arg3 options:(id)arg4 ;
-(void)setTeamIdentifier:(NSString *)arg1 ;
-(char)sendToServerPending;
-(void)setSendToServerPending:(char)arg1 ;
-(char)forceImmediateSendToServer;
-(void)setForceImmediateSendToServer:(char)arg1 ;
-(char)createsNewUUIDIfSaved;
-(void)setCreatesNewUUIDIfSaved:(char)arg1 ;
-(NSError *)decodeUserInfoError;
-(void)setDecodeUserInfoError:(NSError *)arg1 ;
-(char)encodedContainsUnsynchronizedCloudDocument;
-(void)setEncodedContainsUnsynchronizedCloudDocument:(char)arg1 ;
-(double)encodedContainsUnsynchronizedCloudDocumentBackoffInterval;
-(void)setEncodedContainsUnsynchronizedCloudDocumentBackoffInterval:(double)arg1 ;
-(char)encodedFileProviderURL;
-(void)setEncodedFileProviderURL:(char)arg1 ;
-(NSString *)dynamicIdentifier;
-(void)setDynamicIdentifier:(NSString *)arg1 ;
-(NSDate *)lastActivityDate;
-(void)setLastActivityDate:(NSDate *)arg1 ;
-(NSData *)streamsData;
-(void)setStreamsData:(NSData *)arg1 ;
-(char)canCreateStreams;
-(void)setCanCreateStreams:(char)arg1 ;
-(id)initWithSuggestedActionType:(unsigned)arg1 options:(id)arg2 ;
-(id)initWithManager:(id)arg1 userActivityInfo:(id)arg2 ;
-(void)setTypeIdentifier:(NSString *)arg1 ;
-(void)setDelegate:(id<LSUserActivityDelegate>)arg1 ;
-(id)init;
-(void)setTitle:(NSString *)arg1 ;
-(id<LSUserActivityDelegate>)delegate;
-(NSString *)title;
-(void)setUserInfo:(NSDictionary *)arg1 ;
-(NSDictionary *)userInfo;
-(id)initWithUUID:(id)arg1 ;
-(NSUUID *)uniqueIdentifier;
-(void)setOptions:(NSDictionary *)arg1 ;
-(NSDictionary *)options;
-(NSString *)typeIdentifier;
-(void)setUniqueIdentifier:(NSUUID *)arg1 ;
-(void)setNeedsSave:(char)arg1 ;
-(void)setDirty:(char)arg1 ;
-(char)dirty;
-(NSString *)teamIdentifier;
@end

