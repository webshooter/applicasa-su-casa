//
// TPAction.h
// Created by Applicasa 
// 4/22/2013
//

#import <Foundation/Foundation.h>
#import <LiCore/LiCore.h>
#import "LiBlocks.h"
#import "LiDataTypes.h"
#import <LiCore/LiKitFacebook.h>
#import "LiKitIAP.h"


//*************
//
// TPAction Class
//
//

#define kTPActionNotificationString @"TPActionConflictFound"
@interface TPAction : LiObject <LiCoreRequestDelegate> {
}

typedef enum {
    LiTrialPayNone = 0,
    LiTrialPayRewardVirtualCurrency = 1,
    LiTrialPayRewardVirtualGood
}LiTrialPayReward;

@property (nonatomic, strong) NSString *tPActionID;
@property (nonatomic, strong, readonly) NSDate *tPActionLastUpdate;
@property (nonatomic, assign) float tPActionRevenue;
@property (nonatomic, assign) LiCurrency tPActionCurrencyKind;
@property (nonatomic, assign) int tPActionQuantity;
@property (nonatomic, assign) NSString *tPActionPromotion;
@property (nonatomic, assign) LiTrialPayReward tPActionKind;
@property (nonatomic, strong) NSDate *tPActionDate;
@property (nonatomic, strong) VirtualGood *tPActionVirtualGood;
@property (nonatomic, strong) NSString *tPActionUser;

/*********************************************************************************
 DEPRECATED METHODS WARNING:
 
 Applicasa is cleaning up its SDK in preparation for upcoming 2.0 release.
 
 Do not use methods marked with DEPRECATED_ATTRIBUTE.
 These methods are deprecated. They are included for backward-compatibility only.
 They will be removed in the final release. You should update your code immediately.
 
 Corrected methods are listed first. Use these methods instead.
 **********************************************************************************/
 

#pragma mark - End of Basic SDK
+ (void) getTrialPayActions:(LiTrialPayResponse)block;

@end
