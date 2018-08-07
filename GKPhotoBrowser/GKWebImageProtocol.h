//
//  GKWebImageProtocol.h
//  GKPhotoBrowser
//
//  Created by QuintGao on 2017/11/14.
//  Copyright © 2017年 QuintGao. All rights reserved.
//

#import "GKPhotoBrowserConfigure.h"

typedef void (^gkWebImageProgressBlock)(NSInteger receivedSize, NSInteger expectedSize);

typedef void (^gkWebImageCompletionBlock)(UIImage * _Nullable image, NSData * _Nullable data, NSError * _Nullable error, SDImageCacheType cacheType, BOOL finished, NSURL * _Nullable imageURL);

@protocol GKWebImageProtocol<NSObject>

- (void)setImageWithImageView:(nullable UIImageView *)imageView
                          url:(nullable NSURL *)url
                  placeholder:(nullable UIImage *)placeholder
                     progress:(nullable gkWebImageProgressBlock)progress
                   completion:(nullable gkWebImageCompletionBlock)completion;

- (id)loadImageWithURL:(nullable NSURL *)url
              progress:(nullable gkWebImageProgressBlock)progress
             completed:(nullable gkWebImageCompletionBlock)completion;

- (void)cancelImageRequestWithImageView:(nullable UIImageView *)imageView;

- (UIImage *_Nullable)imageFromMemoryForURL:(nullable NSURL *)url;

@end
