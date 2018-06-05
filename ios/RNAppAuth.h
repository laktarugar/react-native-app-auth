
#if __has_include("RCTBridgeModule.h")
#import "RCTBridgeModule.h"
#else
#import <React/RCTBridgeModule.h>
#endif

#import <UIKit/UIKit.h>

@protocol OIDAuthorizationFlowSession;

@protocol RNAppAuthApplicationDelegate

@required
- (void) setCurrentAuthorizationFlow:(id<OIDAuthorizationFlowSession>) currentAuthorizationFlow;
- (UIViewController*) getRootView;
@end

@interface RNAppAuth : NSObject <RCTBridgeModule>

@end
  
