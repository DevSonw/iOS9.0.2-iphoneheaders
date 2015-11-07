/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:33:27 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <NanoPassKit/NanoPassKit-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NPKProtoCatalog;

@interface NPKProtoCatalogChangedRequest : PBRequest <NSCopying> {

	NPKProtoCatalog* _catalog;
	unsigned _lastKnownResyncID;
	unsigned _resyncID;
	SCD_Struct_NP2 _has;

}

@property (nonatomic,retain) NPKProtoCatalog * catalog;               //@synthesize catalog=_catalog - In the implementation block
@property (assign,nonatomic) char hasResyncID; 
@property (assign,nonatomic) unsigned resyncID;                       //@synthesize resyncID=_resyncID - In the implementation block
@property (assign,nonatomic) char hasLastKnownResyncID; 
@property (assign,nonatomic) unsigned lastKnownResyncID;              //@synthesize lastKnownResyncID=_lastKnownResyncID - In the implementation block
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(NPKProtoCatalog *)catalog;
-(void)setCatalog:(NPKProtoCatalog *)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setResyncID:(unsigned)arg1 ;
-(void)setHasResyncID:(char)arg1 ;
-(char)hasResyncID;
-(unsigned)resyncID;
-(void)setLastKnownResyncID:(unsigned)arg1 ;
-(void)setHasLastKnownResyncID:(char)arg1 ;
-(char)hasLastKnownResyncID;
-(unsigned)lastKnownResyncID;
-(char)readFrom:(id)arg1 ;
@end
