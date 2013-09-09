#import <Foundation/Foundation.h>

@interface LiManager : NSObject

+ (void) initDatabase;

+ (void) conflictFoundBetweenLocalItem:(NSDictionary *)localItem andServerItem:(NSDictionary *)serverItem OfClass:(NSString *)className;

// Checking SDK Settings
+ (int) getSchemaDate;

+ (float) getSDKVersion;

+ (float) getFrameworkVersion;

// Checking Application Settings
+ (NSString *) getApplicationId;

+ (NSString *) getSecretKey;

// Checking Behavior Settings
+ (BOOL) isPushEnabled;

+ (BOOL) shouldConfirmPushOnStart;

+ (BOOL) isDebugEnabled;

+ (BOOL) isLocationEnabled;

+ (BOOL) isOfflineEnabled;

+ (BOOL) isSandboxEnabled;

+ (NSString *) getSchemaVersion;

+ (BOOL) isChartboostEnabled;
+ (NSString *) getChartboostId;
+ (NSString *) getChartboostSignature;

+(int)getSessionPauseTime;

// Prasing config
+(BOOL)shouldDecodeTags;



@end
