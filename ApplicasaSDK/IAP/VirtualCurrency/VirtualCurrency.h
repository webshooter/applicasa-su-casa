//
// VirtualCurrency.h
// Created by Applicasa 
// 9/8/2013
//

#import <Foundation/Foundation.h>
#import <LiCore/LiCore.h>
#import "LiBlocks.h"
#import "LiDataTypes.h"
#import <LiCore/LiKitFacebook.h>
#import <LiCore/LiKitIAP.h>
#import <LiCore/UpdateObject.h>



//*************
//
// VirtualCurrency Class
//
//

@class SKProduct;

#define kVirtualCurrencyNotificationString @"VirtualCurrencyConflictFound"
#define kShouldVirtualCurrencyWorkOffline YES
@interface VirtualCurrency : LiObject <LiCoreRequestDelegate,LiKitIAPDelegate> {
}

@property (nonatomic, strong) NSString *virtualCurrencyID;
@property (nonatomic, strong) NSString *virtualCurrencyTitle;
@property (nonatomic, strong) NSString *virtualCurrencyAppleIdentifier;
@property (nonatomic, strong) NSString *virtualCurrencyGoogleIdentifier;
@property (nonatomic, strong) NSString *virtualCurrencyDescription;
@property (nonatomic, assign) float virtualCurrencyPrice;
@property (nonatomic, assign) float virtualCurrencyIOSBundleMin;
@property (nonatomic, assign) float virtualCurrencyIOSBundleMax;
@property (nonatomic, assign) float virtualCurrencyAndroidBundleMin;
@property (nonatomic, assign) float virtualCurrencyAndroidBundleMax;
@property (nonatomic, assign, readonly) int virtualCurrencyPos;
@property (nonatomic, assign) int virtualCurrencyCredit;
@property (nonatomic, assign) LiCurrency virtualCurrencyKind;
@property (nonatomic, strong) NSURL *virtualCurrencyImageA;
@property (nonatomic, strong) NSURL *virtualCurrencyImageB;
@property (nonatomic, strong) NSURL *virtualCurrencyImageC;
@property (nonatomic, assign) BOOL virtualCurrencyIsDeal;
@property (nonatomic, assign) BOOL virtualCurrencyInAppleStore;
@property (nonatomic, assign) BOOL virtualCurrencyInGoogleStore;
@property (nonatomic, strong, readonly) NSDate *virtualCurrencyLastUpdate;
@property (nonatomic, strong) SKProduct *product;
@property (nonatomic, strong) NSDecimalNumber *itunesPrice;

#pragma mark - End of Basic SDK

/*********************************************************************************
 DEPRECATED METHODS WARNING:
 
 Applicasa is cleaning up its SDK in preparation for upcoming 2.0 release.
 
 Do not use methods marked with DEPRECATED_ATTRIBUTE.
 These methods are deprecated. They are included for backward-compatibility only.
 They will be removed in the final release. You should update your code immediately.
 
 Corrected methods are listed first. Use these methods instead.
 **********************************************************************************/

+ (void) getVirtualCurrenciesWithBlock:(GetVirtualCurrencyArrayFinished)block;


- (void) buyVirtualCurrencyWithBlock:(LiBlockAction)block;

+ (void) giveAmount:(NSInteger)amount ofCurrencyKind:(LiCurrency)currencyKind withBlock:(LiBlockAction)block;


+ (void) useAmount:(NSInteger)amount OfCurrencyKind:(LiCurrency)currencyKind withBlock:(LiBlockAction)block;



@end
