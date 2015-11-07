/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:11:58 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/Bridge.app/Bridge
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Bridge/Bridge-Structs.h>
#import <UIKit/UIViewController.h>
#import <libobjc.A.dylib/NSFileManagerDelegate.h>
#import <UIKit/UITextFieldDelegate.h>
#import <Bridge/CBScalablePipeManagerDelegate.h>
#import <libobjc.A.dylib/NSStreamDelegate.h>
#import <Bridge/CBCentralManagerPrivateDelegate.h>
#import <Bridge/CBPairingAgentDelegate.h>
#import <Bridge/SZExtractorDelegate.h>

@protocol COSRadarReporterDelegate, OS_dispatch_source;
@class RCRadarComposeController, CBCentralManager, CBPairingAgent, CBPeripheral, CBScalablePipeManager, CBScalablePipe, NSInputStream, NSFileManager, SZExtractor, NSObject, NSString, UILabel, UITextField, UIButton;

@interface COSRadarReporterController : UIViewController <NSFileManagerDelegate, UITextFieldDelegate, CBScalablePipeManagerDelegate, NSStreamDelegate, CBCentralManagerPrivateDelegate, CBPairingAgentDelegate, SZExtractorDelegate> {

	char _pipeRegistered;
	char _watchDidRequestPair;
	char _didFinishTransfer;
	char _didFailTransfer;
	char _attemptingReconnect;
	char _pairingCompleted;
	char _dismissRequested;
	char _canDismiss;
	char _doneUnifyingLogs;
	id<COSRadarReporterDelegate> _delegate;
	RCRadarComposeController* _radarController;
	CBCentralManager* _centralManager;
	CBPairingAgent* _pairingAgent;
	CBPeripheral* _watchPeer;
	CBScalablePipeManager* _pipeManager;
	CBScalablePipe* _transportPipe;
	NSInputStream* _inputStream;
	NSFileManager* _fileManager;
	SZExtractor* _extractor;
	NSObject*<OS_dispatch_source> _timeoutSource;
	int _failedAttempts;
	NSString* _errorTitle;
	NSString* _gizmoBuildString;
	UILabel* _lblProgressIndicator;
	UITextField* _txfWatchKey;
	UILabel* _lblEnterKey;
	UIButton* _btnConnect;

}

@property (assign,nonatomic,__weak) id<COSRadarReporterDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) RCRadarComposeController * radarController;                //@synthesize radarController=_radarController - In the implementation block
@property (nonatomic,retain) CBCentralManager * centralManager;                         //@synthesize centralManager=_centralManager - In the implementation block
@property (nonatomic,retain) CBPairingAgent * pairingAgent;                             //@synthesize pairingAgent=_pairingAgent - In the implementation block
@property (nonatomic,retain) CBPeripheral * watchPeer;                                  //@synthesize watchPeer=_watchPeer - In the implementation block
@property (nonatomic,retain) CBScalablePipeManager * pipeManager;                       //@synthesize pipeManager=_pipeManager - In the implementation block
@property (nonatomic,retain) CBScalablePipe * transportPipe;                            //@synthesize transportPipe=_transportPipe - In the implementation block
@property (nonatomic,retain) NSInputStream * inputStream;                               //@synthesize inputStream=_inputStream - In the implementation block
@property (assign,nonatomic) char pipeRegistered;                                       //@synthesize pipeRegistered=_pipeRegistered - In the implementation block
@property (assign,nonatomic) char watchDidRequestPair;                                  //@synthesize watchDidRequestPair=_watchDidRequestPair - In the implementation block
@property (nonatomic,retain) NSFileManager * fileManager;                               //@synthesize fileManager=_fileManager - In the implementation block
@property (nonatomic,retain) SZExtractor * extractor;                                   //@synthesize extractor=_extractor - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_source> timeoutSource;               //@synthesize timeoutSource=_timeoutSource - In the implementation block
@property (assign,nonatomic) char didFinishTransfer;                                    //@synthesize didFinishTransfer=_didFinishTransfer - In the implementation block
@property (assign,nonatomic) char didFailTransfer;                                      //@synthesize didFailTransfer=_didFailTransfer - In the implementation block
@property (assign,nonatomic) char attemptingReconnect;                                  //@synthesize attemptingReconnect=_attemptingReconnect - In the implementation block
@property (assign,nonatomic) int failedAttempts;                                        //@synthesize failedAttempts=_failedAttempts - In the implementation block
@property (assign,nonatomic) char pairingCompleted;                                     //@synthesize pairingCompleted=_pairingCompleted - In the implementation block
@property (assign,nonatomic) char dismissRequested;                                     //@synthesize dismissRequested=_dismissRequested - In the implementation block
@property (assign,nonatomic) char canDismiss;                                           //@synthesize canDismiss=_canDismiss - In the implementation block
@property (assign,nonatomic) char doneUnifyingLogs;                                     //@synthesize doneUnifyingLogs=_doneUnifyingLogs - In the implementation block
@property (nonatomic,retain) NSString * errorTitle;                                     //@synthesize errorTitle=_errorTitle - In the implementation block
@property (nonatomic,retain) NSString * gizmoBuildString;                               //@synthesize gizmoBuildString=_gizmoBuildString - In the implementation block
@property (nonatomic,retain) UILabel * lblProgressIndicator;                            //@synthesize lblProgressIndicator=_lblProgressIndicator - In the implementation block
@property (nonatomic,retain) UITextField * txfWatchKey;                                 //@synthesize txfWatchKey=_txfWatchKey - In the implementation block
@property (nonatomic,retain) UILabel * lblEnterKey;                                     //@synthesize lblEnterKey=_lblEnterKey - In the implementation block
@property (nonatomic,retain) UIButton * btnConnect;                                     //@synthesize btnConnect=_btnConnect - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(char)clearGizmoPairingLogs;
-(void)collectCompanionPairingLogs;
-(void)setDoneUnifyingLogs:(char)arg1 ;
-(char)didFinishTransfer;
-(void)composeRadar;
-(void)clearCompanionPairingLogs;
-(void)unifyPairingLogsFromDirectories:(id)arg1 files:(id)arg2 regexPaths:(id)arg3 ;
-(void)reportErrorWithTitle:(id)arg1 message:(id)arg2 ;
-(void)attachLogs;
-(void)showRadarController;
-(void)transferFailed;
-(void)fetchGizmoBuildString;
-(void)deleteMetaInfoFolder;
-(void)setCanDismiss:(char)arg1 ;
-(CBPairingAgent *)pairingAgent;
-(CBPeripheral *)watchPeer;
-(UITextField *)txfWatchKey;
-(void)transferDone;
-(id)filePathsFromRegexPaths:(id)arg1 ;
-(RCRadarComposeController *)radarController;
-(void)setRadarController:(RCRadarComposeController *)arg1 ;
-(void)setPairingAgent:(CBPairingAgent *)arg1 ;
-(void)setWatchPeer:(CBPeripheral *)arg1 ;
-(CBScalablePipe *)transportPipe;
-(void)setTransportPipe:(CBScalablePipe *)arg1 ;
-(char)pipeRegistered;
-(void)setPipeRegistered:(char)arg1 ;
-(char)watchDidRequestPair;
-(void)setWatchDidRequestPair:(char)arg1 ;
-(SZExtractor *)extractor;
-(void)setExtractor:(SZExtractor *)arg1 ;
-(void)setDidFinishTransfer:(char)arg1 ;
-(char)didFailTransfer;
-(void)setDidFailTransfer:(char)arg1 ;
-(char)attemptingReconnect;
-(void)setAttemptingReconnect:(char)arg1 ;
-(int)failedAttempts;
-(void)setFailedAttempts:(int)arg1 ;
-(char)pairingCompleted;
-(void)setPairingCompleted:(char)arg1 ;
-(char)dismissRequested;
-(void)setDismissRequested:(char)arg1 ;
-(char)doneUnifyingLogs;
-(NSString *)gizmoBuildString;
-(void)setGizmoBuildString:(NSString *)arg1 ;
-(UILabel *)lblProgressIndicator;
-(void)setLblProgressIndicator:(UILabel *)arg1 ;
-(void)setTxfWatchKey:(UITextField *)arg1 ;
-(UILabel *)lblEnterKey;
-(void)setLblEnterKey:(UILabel *)arg1 ;
-(UIButton *)btnConnect;
-(void)setBtnConnect:(UIButton *)arg1 ;
-(NSObject*<OS_dispatch_source>)timeoutSource;
-(void)setTimeoutSource:(NSObject*<OS_dispatch_source>)arg1 ;
-(void)scalablePipeManagerDidUpdateState:(id)arg1 ;
-(void)scalablePipeManager:(id)arg1 didRegisterEndpoint:(id)arg2 error:(id)arg3 ;
-(void)scalablePipeManager:(id)arg1 didUnregisterEndpoint:(id)arg2 ;
-(void)scalablePipeManager:(id)arg1 pipeDidConnect:(id)arg2 ;
-(void)scalablePipeManager:(id)arg1 pipeDidDisconnect:(id)arg2 error:(id)arg3 ;
-(void)pairingAgent:(id)arg1 peerDidRequestPairing:(id)arg2 type:(int)arg3 passkey:(id)arg4 ;
-(char)fileManager:(id)arg1 shouldProceedAfterError:(id)arg2 copyingItemAtURL:(id)arg3 toURL:(id)arg4 ;
-(char)fileManager:(id)arg1 shouldProceedAfterError:(id)arg2 copyingItemAtPath:(id)arg3 toPath:(id)arg4 ;
-(char)fileManager:(id)arg1 shouldProceedAfterError:(id)arg2 removingItemAtURL:(id)arg3 ;
-(char)fileManager:(id)arg1 shouldProceedAfterError:(id)arg2 removingItemAtPath:(id)arg3 ;
-(void)stream:(id)arg1 handleEvent:(unsigned)arg2 ;
-(void)setDelegate:(id<COSRadarReporterDelegate>)arg1 ;
-(id)init;
-(id<COSRadarReporterDelegate>)delegate;
-(char)textField:(id)arg1 shouldChangeCharactersInRange:(NSRange)arg2 replacementString:(id)arg3 ;
-(void)viewDidLoad;
-(void)viewWillDisappear:(char)arg1 ;
-(char)canDismiss;
-(void)cleanup;
-(void)pairingAgent:(id)arg1 peerDidCompletePairing:(id)arg2 ;
-(void)pairingAgent:(id)arg1 peerDidFailToCompletePairing:(id)arg2 error:(id)arg3 ;
-(void)pairingAgent:(id)arg1 peerDidUnpair:(id)arg2 ;
-(void)connect:(id)arg1 ;
-(CBCentralManager *)centralManager;
-(void)setCentralManager:(CBCentralManager *)arg1 ;
-(void)setInputStream:(NSInputStream *)arg1 ;
-(void)setErrorTitle:(NSString *)arg1 ;
-(NSString *)errorTitle;
-(void)cancel:(id)arg1 ;
-(void)centralManagerDidUpdateState:(id)arg1 ;
-(void)centralManager:(id)arg1 didDiscoverPeripheral:(id)arg2 advertisementData:(id)arg3 RSSI:(id)arg4 ;
-(void)centralManager:(id)arg1 didConnectPeripheral:(id)arg2 ;
-(void)centralManager:(id)arg1 didDisconnectPeripheral:(id)arg2 error:(id)arg3 ;
-(void)attemptConnection;
-(CBScalablePipeManager *)pipeManager;
-(void)setPipeManager:(CBScalablePipeManager *)arg1 ;
-(NSInputStream *)inputStream;
-(NSFileManager *)fileManager;
-(void)setFileManager:(NSFileManager *)arg1 ;
-(void)setExtractionProgress:(double)arg1 ;
-(void)cancelTimer;
@end
