/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class MCError, NSString;

@interface _MVAlertInfo : NSObject
{
    MCError *_error;
    NSString *_firstButtonTitle;
    NSString *_secondButtonTitle;
    NSString *_thirdButtonTitle;
    long long _returnCode;
}

@property(nonatomic) long long returnCode; // @synthesize returnCode=_returnCode;
@property(nonatomic) NSString *thirdButtonTitle; // @synthesize thirdButtonTitle=_thirdButtonTitle;
@property(nonatomic) NSString *secondButtonTitle; // @synthesize secondButtonTitle=_secondButtonTitle;
@property(nonatomic) NSString *firstButtonTitle; // @synthesize firstButtonTitle=_firstButtonTitle;
@property(nonatomic) MCError *error; // @synthesize error=_error;

@end
