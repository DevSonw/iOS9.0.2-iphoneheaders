/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:33:05 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface HMDPersistentStore : NSObject
+(id)unarchiveMetadata:(id*)arg1 ;
+(id)archiveMetadata:(id)arg1 ;
+(id)unarchiveHomeData:(id*)arg1 ;
+(id)archiveBulletinBoard:(id)arg1 ;
+(id)unarchiveBulletinBoard;
+(id)decryptDataWithControllerKey:(id)arg1 totalKeysFound:(unsigned*)arg2 deleteExtraKeys:(char)arg3 extraKeysWereDeleted:(char*)arg4 error:(id*)arg5 ;
+(id)archiveCloudServerTokenData:(id)arg1 ;
+(char)deserializeHomeData:(id*)arg1 localStorage:(char)arg2 fromData:(id)arg3 ;
+(id)serializeHomeData:(id)arg1 localStorage:(char)arg2 remoteDeviceOnSameAccount:(char)arg3 ;
+(id)encryptDataWithControllerKey:(id)arg1 error:(id*)arg2 ;
+(id)_writeData:(id)arg1 toStorePath:(id)arg2 dataLabel:(id)arg3 ;
+(id)decryptDataWithMetadataKey:(id)arg1 error:(id*)arg2 ;
+(id)decryptUsingLocalKeyAndUnarchiveFromPath:(id)arg1 error:(id*)arg2 ;
+(char)deserializeMetadata:(id*)arg1 fromData:(id)arg2 ;
+(id)encryptDataWithMetadataKey:(id)arg1 error:(id*)arg2 ;
+(id)serializeMetadata:(id)arg1 ;
+(id)encryptUsingLocalKeyAndArchiveData:(id)arg1 storePath:(id)arg2 dataLabel:(id)arg3 ;
+(id)serializeBlacklistedBundles:(id)arg1 ;
+(id)deserializeBlacklistedBundlesFromData:(id)arg1 ;
+(id)_encryptData:(id)arg1 withKey:(id)arg2 error:(id*)arg3 ;
+(id)_decryptData:(id)arg1 withKey:(id)arg2 error:(id*)arg3 ;
+(void)resetConfiguration;
+(void)resetMetadata;
+(id)archiveHomeData:(id)arg1 ;
+(id)unarchiveServerTokenData:(char*)arg1 ;
+(id)archiveTransactions:(id)arg1 ;
+(id)unarchiveTransactionJournal;
+(id)archiveIDSDataSyncJournal:(id)arg1 ;
+(id)unarchiveIDSDataSyncJournal;
+(id)archiveBlacklistedBundles:(id)arg1 ;
+(id)unarchiveBlacklistedBundles;
@end
