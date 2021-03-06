/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:33:14 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/MDM.framework/MDM
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MDM/MDM-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface MCSoftwareUpdateInternalOptions : NSObject <NSCopying> {

	char _enforceWifiOnlyOverride;
	char _overridePhoneCall;
	unsigned _request;
	int _termsAndConditionsAgreementStatus;
	int _downloadFeeAgreementStatus;
	unsigned _maximumDownloadAttempts;
	unsigned _maximumInstallAttempts;

}

@property (assign,nonatomic) unsigned request;                                   //@synthesize request=_request - In the implementation block
@property (nonatomic,readonly) char requestDownload; 
@property (nonatomic,readonly) char requestInstall; 
@property (assign,nonatomic) int termsAndConditionsAgreementStatus;              //@synthesize termsAndConditionsAgreementStatus=_termsAndConditionsAgreementStatus - In the implementation block
@property (assign,nonatomic) int downloadFeeAgreementStatus;                     //@synthesize downloadFeeAgreementStatus=_downloadFeeAgreementStatus - In the implementation block
@property (assign,nonatomic) char enforceWifiOnlyOverride;                       //@synthesize enforceWifiOnlyOverride=_enforceWifiOnlyOverride - In the implementation block
@property (assign,nonatomic) char overridePhoneCall;                             //@synthesize overridePhoneCall=_overridePhoneCall - In the implementation block
@property (assign,nonatomic) unsigned maximumDownloadAttempts;                   //@synthesize maximumDownloadAttempts=_maximumDownloadAttempts - In the implementation block
@property (assign,nonatomic) unsigned maximumInstallAttempts;                    //@synthesize maximumInstallAttempts=_maximumInstallAttempts - In the implementation block
+(id)optionsForDownloadOptions:(id)arg1 ;
+(id)optionsForInstallOptions:(id)arg1 ;
+(id)optionsForDownloadOptions:(id)arg1 installOptions:(id)arg2 ;
-(id)description;
-(unsigned)request;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setRequest:(unsigned)arg1 ;
-(int)downloadFeeAgreementStatus;
-(char)enforceWifiOnlyOverride;
-(void)setEnforceWifiOnlyOverride:(char)arg1 ;
-(char)overridePhoneCall;
-(void)setOverridePhoneCall:(char)arg1 ;
-(unsigned)maximumDownloadAttempts;
-(void)setMaximumDownloadAttempts:(unsigned)arg1 ;
-(unsigned)maximumInstallAttempts;
-(void)setMaximumInstallAttempts:(unsigned)arg1 ;
-(char)requestDownload;
-(char)requestInstall;
-(void)setDownloadFeeAgreementStatus:(int)arg1 ;
-(void)setTermsAndConditionsAgreementStatus:(int)arg1 ;
-(int)termsAndConditionsAgreementStatus;
@end

