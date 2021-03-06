/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:33:32 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <OfficeImport/OfficeImport-Structs.h>
@class NSData;

@interface OISFUDataRepresentation : NSObject {

	char mHasHash;
	unsigned mHash;
	char mHasSha1Hash;
	NSData* mSha1Hash;

}
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(int)compare:(id)arg1 ;
-(xmlTextReaderRef)xmlReaderWithReadCallback:(/*function pointer*/void*)arg1 ;
-(xmlTextReaderRef)xmlReaderForGzippedDataWithInputStream:(id*)arg1 ;
-(unsigned)uint32Hash;
-(long long)encodedLength;
-(xmlDoc*)xmlDocument;
-(xmlTextReaderRef)xmlReader;
-(xmlTextReaderRef)xmlReaderForGzippedData;
-(CGDataProviderRef)cgDataProvider;
-(unsigned long)readIntoData:(id)arg1 ;
-(id)sha1Hash;
-(id)inputStream;
-(id)bufferedInputStream;
-(long long)dataLength;
-(char)isEncrypted;
-(char)isReadable;
-(id)bufferedInputStreamWithBufferSize:(unsigned long)arg1 ;
-(char)hasSameLocationAs:(id)arg1 ;
@end

