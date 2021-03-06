/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:34:51 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/VoiceServices/PlugIns/VoiceDial.vsplugin/VoiceDial
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <VoiceDial/VoiceDial-Structs.h>
#import <libobjc.A.dylib/VSRecognitionModelDataProvider.h>

@class NSArray, NSSet, VoiceDialNameDataSource, NSString;

@interface VoiceDialDataProvider : NSObject <VSRecognitionModelDataProvider> {

	void* _addressBook;
	CFArrayRef _people;
	NSArray* _phoneLabels;
	NSArray* _facetimeLabels;
	NSSet* _weightedPhoneLabels;
	NSSet* _weightedFacetimeLabels;
	SCD_Struct_Vo2 _peopleRange;
	long _totalPeople;
	VoiceDialNameDataSource* _namesSource;
	int _lastSequenceNumber;
	CFStringRef _lastDatabaseUUID;
	struct {
		unsigned hasDeterminedCompositePref : 1;
		unsigned compositeNamesOnly : 1;
		unsigned canVideoCall : 1;
	}  _voiceDialProviderFlags;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void*)_addressBook;
-(void)dealloc;
-(id)init;
-(void)beginReportingChanges;
-(void)stopReportingChanges;
-(int)valueCountForClassWithIdentifier:(id)arg1 inModelWithIdentifier:(id)arg2 ;
-(char)getValue:(id*)arg1 weight:(int*)arg2 atIndex:(int)arg3 forClassWithIdentifier:(id)arg4 inModelWithIdentifier:(id)arg5 ;
-(id)phoneticValueAtIndex:(int)arg1 forClassWithIdentifier:(id)arg2 inModelWithIdentifier:(id)arg3 ;
-(id)cacheValidityIdentifier;
-(char)isCacheValidityIdentifierValid:(id)arg1 ;
-(char)_shouldUseCompositeNamesOnly;
-(void)getLabels:(id*)arg1 andWeightedLabels:(id*)arg2 ForABProperty:(int)arg3 ;
-(long)_totalPeople;
-(id)_facetimeLabels;
-(id)_phoneLabels;
-(id)_namesSource;
-(void*)_voiceDialRecordAtIndex:(long)arg1 ;
-(char)_sequenceNumberIsValid:(int)arg1 ;
-(void)_handleAddressBookChanged;
@end

