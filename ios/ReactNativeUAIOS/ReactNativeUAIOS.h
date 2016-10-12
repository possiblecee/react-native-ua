#import "RCTBridgeModule.h"

#import "UAirship.h"
#import "UAPush.h"

#import "AirshipLib.h"

@interface ReactNativeUAIOS : NSObject <RCTBridgeModule>
+ (void)setupUrbanAirship:(NSDictionary *) launchOptions;
@end

@interface PushHandler : NSObject <UAPushNotificationDelegate>
@end
