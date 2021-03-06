/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:38:59 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/NanoBackup.framework/nanobackupd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol NBServerProtocol <NSObject>
@required
-(void)listBackupsWithCompletionHandler:(/*^block*/id)arg1;
-(void)restoreFromBackupID:(id)arg1 forPairingID:(id)arg2 pairingDataStore:(id)arg3 completionHandler:(/*^block*/id)arg4;
-(void)createBackupForPairingID:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)deleteBackupID:(id)arg1 completionHandler:(/*^block*/id)arg2;

@end

