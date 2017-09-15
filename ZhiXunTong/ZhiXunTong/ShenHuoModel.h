//
//  ShenHuoModel.h
//  ZhiXunTong
//
//  Created by Mou on 2017/9/4.
//  Copyright © 2017年 airZX. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface ShenHuoModel : NSObject
@property (nonatomic,strong)NSString *Head_portrait;
@property (nonatomic,strong)NSString *Islike;
@property (nonatomic,assign)NSString *Name;
@property (nonatomic,strong)NSString *content;
@property (nonatomic,strong)NSString *id;
@property (nonatomic,assign)NSString *likeCount;
@property (nonatomic,assign)NSData *time;

@end
