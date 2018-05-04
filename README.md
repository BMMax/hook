# hook
iOS 逆向
# 腾讯体育 逆向 去广告

`/var/containers/Bundle/Application/47206C7B-ECB6-4172-88C5-46A759FF9181/QQSportsV3.app/QQSportsV3`


```
QSNewsArticleTitleCell->updateWithModel: -> QSTableView -> QSArticleNewsViewController -> QSNewsContentInfo -> 

QSNewsTopicNews -> QSNewsTopicNewsInfo -> jumpData -> $#0x1020ba400.contentInfo.topicNews.topicInfo

or QSNewsContentInfo->QSNewsListItem
```
jumpData-> 
"title:\xe8\x81\x9a\xe7\x84\xa6\xe5\xa4\xa9\xe7\x8e\x8b\xe5\xb1\xb1\xe4\xb9\x8b\xe6\x88\x98\xe8\xa9\xb9\xe7\x9a\x87\xe4\xb8\x89\xe5\x88\x86\xe7\xbb\x9d\xe6\x9d\x80\rnewsId:20180426020151\rjumpData:{\n    param =     {\n        atype = 11;\n        id = 20180426020151;\n    };\n    type = 202;\n}\r"

不知道atype具体类型是做什么




    
# 广告层级结构

```
QSMatchDetailTopViewController -> QSLiveMediaPlayerViewController -> QSMPADViewController -> QSADViewController -> TADPlayerView
```

```
QSLiveMediaPlayerViewController -> QSMPLiveLayersViewController-> QSMPLiveLayersViewController -> QSPlayerViewController
```

-> QSLiveMediaPlayerViewController(QSMediaPlayerViewController) 来调整进行广告显示


## 方法1: (失败)
`QSMPADViewController -> return nil `

## 法2:(失败)
* `QSADViewController 里有个 - (void)loadAD;
* `lldb -> $ image list -o -f | grep QQSportsV3` -> 0x00000000000c4000
* - (void)loadAD -> 0x000000010031daf0 + ox0c4000

* 下断点 `$ breakpoint set -a 0x000000010031daf0 + 0x0c4000`

## 法三(成功)
修改                      -[QSMediaPlayerViewController hideAd]:
里的汇编
`ldrb       w0, x0, x8` -> `mov w0, 0x01`

启动图广告:(换图有错)
`-[TADSplashWindow showSplash]:`
`b -> nop `


新方法
将-[TADSplashWindow initWith...] -> return nil 




