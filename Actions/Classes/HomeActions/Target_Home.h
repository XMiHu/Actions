//
//  Target_Home.h
//  Actions
//
//  Created by MiHu on 2018/4/24.
//

#import <Foundation/Foundation.h>

@interface Target_Home : NSObject

- (UIViewController *)Action_nativeFetchDetailViewController:(NSDictionary *)params;

- (id)Action_nativePresentImage:(NSDictionary *)params;

- (id)Action_showAlert:(NSDictionary *)params;

// 容错
- (id)Action_nativeNoImage:(NSDictionary *)params;


@end
