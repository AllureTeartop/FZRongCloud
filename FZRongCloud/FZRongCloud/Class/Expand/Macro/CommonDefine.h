//
//  CommonDefine.h
//  PreheatDemo
//
//  Created by Florence on 16/6/28.
//  Copyright © 2016年 Florence. All rights reserved.
//


/**
 *  获取Window
 */
#define kWindow [UIApplication sharedApplication].keyWindow
/**
 *  获取mainScreen的bounds
 */
#define kScreenBounds [[UIScreen mainScreen] bounds]
#define kWidth [[UIScreen mainScreen] bounds].size.width
#define kHeight [[UIScreen mainScreen] bounds].size.height

/**
 *  用户偏好设置
 */
#define kSaveStatic [NSUserDefaults standardUserDefaults]

/*
 *  存取用户数据的实例
 */
#define kUserInfo [UserInfo sharedInstance]


#define kLoadManager [LoadManager sharedInstance]

/**
 *  版本号
 *
 *  @param  CFBundleShortVersionString
 *
 *  @return kVersion
 */
#define kVersion [NSString stringWithFormat:@"%@",[[NSBundle mainBundle] objectForInfoDictionaryKey:@"CFBundleShortVersionString"]]
/**
 *  当前网络状态
 */
#define kNetworkType [[AppTool sharedInstance]getValueInMyLocalStoreForKey:kReachability]
/**
 *  用户惟一标示
 */
#define USER_ID [[AppTool sharedInstance]getValueInMyLocalStoreForKey:KEY_USER_ID]


/**
 *  持久化 KEY 值
 */
#define kReachability @"myReachability"
#define KEY_USER_ID @"USER_ID"
/**
 *  懒人简化书写宏
 */
#define kAppTool [AppTool sharedInstance]
#define kNotificationCenter [NSNotificationCenter defaultCenter]
#define kWeakSelf(weakSelf)  __weak __typeof(&*self)weakSelf = self;
/**
 *  请求提示文字
 */
#define Loading @"请稍后..."
#define Request_Failure @"失败"
#define Request_Success @"成功"
#define Request_NOMore @"已加载全部"
/**
 *  iPhone or iPad
 */
#define IS_IPHONE (UI_USER_INTERFACE_IDIOM() == UIUserInterfaceIdiomPhone)
#define IS_PAD (UI_USER_INTERFACE_IDIOM() == UIUserInterfaceIdiomPad)
/**
 *  NSLog
 */
#if DEBUG
#define NSLog(FORMAT, ...) fprintf(stderr,"\nfunction:%s line:%d content:%s\n", __FUNCTION__, __LINE__, [[NSString stringWithFormat:FORMAT, ##__VA_ARGS__] UTF8String]);
#else
#define NSLog(FORMAT, ...) nil
#endif

//NSCoding协议遵循
#define kObjectCodingAction  -(id)initWithCoder:(NSCoder *)aDecoder\
{\
self = [super init];\
if (self) {\
[self autoDecode:aDecoder];\
\
}\
return self;\
}\
-(void)encodeWithCoder:(NSCoder *)aCoder\
{\
[self autoEncodeWithCoder:aCoder];\
}\
-(void)setValue:(id)value forUndefinedKey:(NSString *)key\
{\
\
}








