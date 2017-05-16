//
//  Theme.h
//  BasicFramework
//
//  Created by Florence on 16/8/18.
//  Copyright © 2016年 Florence. All rights reserved.
//

#ifndef Theme_h
#define Theme_h

#pragma mark -  * * * * * * * * * * * * * * 主题 * * * * * * * * * * * * * *

//十六进制颜色
#define UIColorFromRGBValue(rgbValue) [UIColor colorWithRed:((float)((rgbValue & 0xFF0000) >> 16))/255.0 green:((float)((rgbValue & 0xFF00) >> 8))/255.0 blue:((float)(rgbValue & 0xFF))/255.0 alpha:1.0]
#define kRGB(R,G,B) [UIColor colorWithRed:R/255.0 green:G/255.0 blue:B/255.0 alpha:1]
#define kRGB_alpha(R,G,B,A) [UIColor colorWithRed:R/255.0 green:G/255.0 blue:B/255.0 alpha:A]
#define LineColor [UIColor colorWithRed:238/255.0 green:241/255.0 blue:244/255.0 alpha:1]
#define BACKCOLOR [UIColor colorWithRed:244/255.0 green:242/255.0 blue:242/255.0 alpha:1]


// 字体大小
#define kFont_16 [UIFont systemFontOfSize:16]
#define kFont_15 [UIFont systemFontOfSize:15]
#define kFont_14 [UIFont systemFontOfSize:14]
#define kFont_12 [UIFont systemFontOfSize:12]
#define kFont_10 [UIFont systemFontOfSize:10]
#define kFont_9 [UIFont systemFontOfSize:9]
#define kFont_8 [UIFont systemFontOfSize:8]


#endif /* Theme_h */
