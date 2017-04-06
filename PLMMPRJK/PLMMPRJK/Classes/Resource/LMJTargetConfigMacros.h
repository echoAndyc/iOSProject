//
//  LMJMPTargetConfigMacros.h
//  PLMMPRJK
//
//  Created by HuXuPeng on 2017/4/6.
//  Copyright © 2017年 GoMePrjk. All rights reserved.
//

#ifndef LMJMPTargetConfigMacros_h
#define LMJMPTargetConfigMacros_h





#if PRODUCT  //产品环境

//输出转换成DDLog
#define NSLog(...) DDLogVerbose(__VA_ARGS__)
#define Log(...) DDLogVerbose(__VA_ARGS__)

#else   //其它环境

//输出转换成DDLog
#define NSLog(...) DDLogVerbose(__VA_ARGS__)
#define Log(...) DDLogVerbose(__VA_ARGS__)

#endif




#endif /* LMJMPTargetConfigMacros_h */
