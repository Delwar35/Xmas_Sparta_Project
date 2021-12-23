{
  "log": {
    "version": "1.2",
    "creator": {
      "name": "WebInspector",
      "version": "537.36"
    },
    "pages": [
      {
        "startedDateTime": "2021-12-23T16:43:28.277Z",
        "id": "page_7",
        "title": "http://eng99-group1-xmasproject-elb-105805637.eu-west-1.elb.amazonaws.com/",
        "pageTimings": {
          "onContentLoad": 1269.7760000592098,
          "onLoad": 1348.915999988094
        }
      }
    ],
    "entries": [
      {
        "_initiator": {
          "type": "other"
        },
        "_priority": "VeryHigh",
        "_resourceType": "document",
        "cache": {},
        "connection": "53237",
        "pageref": "page_7",
        "request": {
          "method": "GET",
          "url": "http://eng99-group1-xmasproject-elb-105805637.eu-west-1.elb.amazonaws.com/",
          "httpVersion": "HTTP/1.1",
          "headers": [
            {
              "name": "Host",
              "value": "eng99-group1-xmasproject-elb-105805637.eu-west-1.elb.amazonaws.com"
            },
            {
              "name": "Connection",
              "value": "keep-alive"
            },
            {
              "name": "Cache-Control",
              "value": "max-age=0"
            },
            {
              "name": "Upgrade-Insecure-Requests",
              "value": "1"
            },
            {
              "name": "User-Agent",
              "value": "Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/96.0.4664.110 Safari/537.36"
            },
            {
              "name": "Accept",
              "value": "text/html,application/xhtml+xml,application/xml;q=0.9,image/avif,image/webp,image/apng,*/*;q=0.8,application/signed-exchange;v=b3;q=0.9"
            },
            {
              "name": "Accept-Encoding",
              "value": "gzip, deflate"
            },
            {
              "name": "Accept-Language",
              "value": "en-GB,en-US;q=0.9,en;q=0.8"
            },
            {
              "name": "If-None-Match",
              "value": "W/\"278-r4zhcffYNdCTZOxA6P529QHxi+8\""
            }
          ],
          "queryString": [],
          "cookies": [],
          "headersSize": 573,
          "bodySize": 0
        },
        "response": {
          "status": 200,
          "statusText": "OK",
          "httpVersion": "HTTP/1.1",
          "headers": [
            {
              "name": "Date",
              "value": "Thu, 23 Dec 2021 16:43:28 GMT"
            },
            {
              "name": "Connection",
              "value": "keep-alive"
            },
            {
              "name": "Server",
              "value": "nginx/1.14.0 (Ubuntu)"
            },
            {
              "name": "X-Powered-By",
              "value": "Express"
            },
            {
              "name": "ETag",
              "value": "W/\"278-r4zhcffYNdCTZOxA6P529QHxi+8\""
            }
          ],
          "cookies": [],
          "content": {
            "size": 632,
            "mimeType": "text/html",
            "compression": 632,
            "text": "<!DOCTYPE html>\n<html>\n<head>\n  <title>Provisioning Test Page</title>\n  <link href=\"https://fonts.googleapis.com/css?family=Slabo+27px\" rel=\"stylesheet\">\n  <style type=\"text/css\">\n    body {\n      text-align:center;\n      font-family: 'Slabo 27px', serif;\n      height:100vh;\n    }\n\n    .vertical-center {\n\n      position:relative;\n      top:50%;\n      transform: translateY(-50%);\n\n    }\n\n    img {\n      width:100px;\n    }\n  </style>\n</head>\n<body>\n  <div class=\"vertical-center\">\n    <h1>The app is running correctly.</h1>\n\n\n    <p>Welcome to the Sparta Test App</p>\n    <img src=\"/images/sparta.png\" />\n  </div>\n</body>\n</html>\n"
          },
          "redirectURL": "",
          "headersSize": 187,
          "bodySize": 0,
          "_transferSize": 187,
          "_error": null
        },
        "serverIPAddress": "46.137.29.197",
        "startedDateTime": "2021-12-23T16:43:28.248Z",
        "time": 150.79100003419816,
        "timings": {
          "blocked": 64.42299999245256,
          "dns": 0.07100000000000506,
          "ssl": -1,
          "connect": 64.449,
          "send": 0.6820000000000022,
          "wait": 18.99600004927069,
          "receive": 2.1699999924749136,
          "_blocked_queueing": 28.970999992452562
        }
      },
      {
        "_fromCache": "memory",
        "_initiator": {
          "type": "parser",
          "url": "http://eng99-group1-xmasproject-elb-105805637.eu-west-1.elb.amazonaws.com/",
          "lineNumber": 4
        },
        "_priority": "VeryHigh",
        "_resourceType": "stylesheet",
        "cache": {},
        "pageref": "page_7",
        "request": {
          "method": "GET",
          "url": "https://fonts.googleapis.com/css?family=Slabo+27px",
          "httpVersion": "h3",
          "headers": [
            {
              "name": "sec-ch-ua",
              "value": "\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"96\", \"Google Chrome\";v=\"96\""
            },
            {
              "name": "Referer",
              "value": "http://eng99-group1-xmasproject-elb-105805637.eu-west-1.elb.amazonaws.com/"
            },
            {
              "name": "sec-ch-ua-mobile",
              "value": "?0"
            },
            {
              "name": "User-Agent",
              "value": "Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/96.0.4664.110 Safari/537.36"
            },
            {
              "name": "sec-ch-ua-platform",
              "value": "\"Windows\""
            }
          ],
          "queryString": [
            {
              "name": "family",
              "value": "Slabo+27px"
            }
          ],
          "cookies": [],
          "headersSize": -1,
          "bodySize": 0
        },
        "response": {
          "status": 200,
          "statusText": "",
          "httpVersion": "h3",
          "headers": [
            {
              "name": "date",
              "value": "Thu, 23 Dec 2021 14:18:21 GMT"
            },
            {
              "name": "content-encoding",
              "value": "gzip"
            },
            {
              "name": "x-content-type-options",
              "value": "nosniff"
            },
            {
              "name": "cross-origin-resource-policy",
              "value": "cross-origin"
            },
            {
              "name": "alt-svc",
              "value": "h3=\":443\"; ma=2592000,h3-29=\":443\"; ma=2592000,h3-Q050=\":443\"; ma=2592000,h3-Q046=\":443\"; ma=2592000,h3-Q043=\":443\"; ma=2592000,quic=\":443\"; ma=2592000; v=\"46,43\""
            },
            {
              "name": "x-xss-protection",
              "value": "0"
            },
            {
              "name": "last-modified",
              "value": "Thu, 23 Dec 2021 13:06:23 GMT"
            },
            {
              "name": "server",
              "value": "ESF"
            },
            {
              "name": "cross-origin-opener-policy",
              "value": "same-origin-allow-popups"
            },
            {
              "name": "x-frame-options",
              "value": "SAMEORIGIN"
            },
            {
              "name": "content-type",
              "value": "text/css; charset=utf-8"
            },
            {
              "name": "access-control-allow-origin",
              "value": "*"
            },
            {
              "name": "cache-control",
              "value": "private, max-age=86400, stale-while-revalidate=604800"
            },
            {
              "name": "timing-allow-origin",
              "value": "*"
            },
            {
              "name": "link",
              "value": "<https://fonts.gstatic.com>; rel=preconnect; crossorigin"
            },
            {
              "name": "expires",
              "value": "Thu, 23 Dec 2021 14:18:21 GMT"
            }
          ],
          "cookies": [],
          "content": {
            "size": 700,
            "mimeType": "text/css",
            "text": "/* latin-ext */\n@font-face {\n  font-family: 'Slabo 27px';\n  font-style: normal;\n  font-weight: 400;\n  src: url(https://fonts.gstatic.com/s/slabo27px/v7/mFT0WbgBwKPR_Z4hGN2qgxED1XJ7.woff2) format('woff2');\n  unicode-range: U+0100-024F, U+0259, U+1E00-1EFF, U+2020, U+20A0-20AB, U+20AD-20CF, U+2113, U+2C60-2C7F, U+A720-A7FF;\n}\n/* latin */\n@font-face {\n  font-family: 'Slabo 27px';\n  font-style: normal;\n  font-weight: 400;\n  src: url(https://fonts.gstatic.com/s/slabo27px/v7/mFT0WbgBwKPR_Z4hGN2qgx8D1Q.woff2) format('woff2');\n  unicode-range: U+0000-00FF, U+0131, U+0152-0153, U+02BB-02BC, U+02C6, U+02DA, U+02DC, U+2000-206F, U+2074, U+20AC, U+2122, U+2191, U+2193, U+2212, U+2215, U+FEFF, U+FFFD;\n}\n"
          },
          "redirectURL": "",
          "headersSize": -1,
          "bodySize": 0,
          "_transferSize": 0,
          "_error": null
        },
        "serverIPAddress": "[2a00:1450:4009:80a::200a]",
        "startedDateTime": "2021-12-23T16:43:29.358Z",
        "time": 99.04300002381206,
        "timings": {
          "blocked": -1,
          "dns": -1,
          "ssl": -1,
          "connect": -1,
          "send": 0,
          "wait": 98.85599999688566,
          "receive": 0.18700002692639828,
          "_blocked_queueing": -1
        }
      },
      {
        "_initiator": {
          "type": "parser",
          "url": "http://eng99-group1-xmasproject-elb-105805637.eu-west-1.elb.amazonaws.com/",
          "lineNumber": 31
        },
        "_priority": "High",
        "_resourceType": "image",
        "cache": {},
        "connection": "53237",
        "pageref": "page_7",
        "request": {
          "method": "GET",
          "url": "http://eng99-group1-xmasproject-elb-105805637.eu-west-1.elb.amazonaws.com/images/sparta.png",
          "httpVersion": "HTTP/1.1",
          "headers": [
            {
              "name": "Host",
              "value": "eng99-group1-xmasproject-elb-105805637.eu-west-1.elb.amazonaws.com"
            },
            {
              "name": "Connection",
              "value": "keep-alive"
            },
            {
              "name": "If-Modified-Since",
              "value": "Wed, 01 Dec 2021 17:33:15 GMT"
            },
            {
              "name": "User-Agent",
              "value": "Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/96.0.4664.110 Safari/537.36"
            },
            {
              "name": "If-None-Match",
              "value": "W/\"2f9a-17d770ec0b0\""
            },
            {
              "name": "Accept",
              "value": "image/avif,image/webp,image/apng,image/svg+xml,image/*,*/*;q=0.8"
            },
            {
              "name": "Referer",
              "value": "http://eng99-group1-xmasproject-elb-105805637.eu-west-1.elb.amazonaws.com/"
            },
            {
              "name": "Accept-Encoding",
              "value": "gzip, deflate"
            },
            {
              "name": "Accept-Language",
              "value": "en-GB,en-US;q=0.9,en;q=0.8"
            }
          ],
          "queryString": [],
          "cookies": [],
          "headersSize": 583,
          "bodySize": 0
        },
        "response": {
          "status": 304,
          "statusText": "Not Modified",
          "httpVersion": "HTTP/1.1",
          "headers": [
            {
              "name": "Date",
              "value": "Thu, 23 Dec 2021 16:43:29 GMT"
            },
            {
              "name": "Connection",
              "value": "keep-alive"
            },
            {
              "name": "Server",
              "value": "nginx/1.14.0 (Ubuntu)"
            },
            {
              "name": "X-Powered-By",
              "value": "Express"
            },
            {
              "name": "Accept-Ranges",
              "value": "bytes"
            },
            {
              "name": "Cache-Control",
              "value": "public, max-age=0"
            },
            {
              "name": "Last-Modified",
              "value": "Wed, 01 Dec 2021 17:33:15 GMT"
            },
            {
              "name": "ETag",
              "value": "W/\"2f9a-17d770ec0b0\""
            }
          ],
          "cookies": [],
          "content": {
            "size": 12186,
            "mimeType": "image/png",
            "text": "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",
            "encoding": "base64"
          },
          "redirectURL": "",
          "headersSize": 274,
          "bodySize": 0,
          "_transferSize": 274,
          "_error": null
        },
        "serverIPAddress": "34.253.49.13",
        "startedDateTime": "2021-12-23T16:43:29.460Z",
        "time": 44.98299991246313,
        "timings": {
          "blocked": 21.747999918200076,
          "dns": -1,
          "ssl": -1,
          "connect": -1,
          "send": 0.6609999999999996,
          "wait": 20.03800000885129,
          "receive": 2.535999985411763,
          "_blocked_queueing": 15.017999918200076
        }
      },
      {
        "_fromCache": "memory",
        "_initiator": {
          "type": "parser",
          "url": "https://fonts.googleapis.com/css?family=Slabo+27px"
        },
        "_priority": "VeryHigh",
        "_resourceType": "font",
        "cache": {},
        "pageref": "page_7",
        "request": {
          "method": "GET",
          "url": "https://fonts.gstatic.com/s/slabo27px/v7/mFT0WbgBwKPR_Z4hGN2qgx8D1Q.woff2",
          "httpVersion": "http/2.0",
          "headers": [
            {
              "name": "sec-ch-ua",
              "value": "\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"96\", \"Google Chrome\";v=\"96\""
            },
            {
              "name": "Referer",
              "value": "https://fonts.googleapis.com/"
            },
            {
              "name": "Origin",
              "value": "http://eng99-group1-xmasproject-elb-105805637.eu-west-1.elb.amazonaws.com"
            },
            {
              "name": "sec-ch-ua-mobile",
              "value": "?0"
            },
            {
              "name": "User-Agent",
              "value": "Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/96.0.4664.110 Safari/537.36"
            },
            {
              "name": "sec-ch-ua-platform",
              "value": "\"Windows\""
            }
          ],
          "queryString": [],
          "cookies": [],
          "headersSize": -1,
          "bodySize": 0
        },
        "response": {
          "status": 200,
          "statusText": "",
          "httpVersion": "http/2.0",
          "headers": [
            {
              "name": "date",
              "value": "Wed, 22 Dec 2021 05:32:18 GMT"
            },
            {
              "name": "x-content-type-options",
              "value": "nosniff"
            },
            {
              "name": "age",
              "value": "23245"
            },
            {
              "name": "content-security-policy-report-only",
              "value": "require-trusted-types-for 'script'; report-uri https://csp.withgoogle.com/csp/apps-themes"
            },
            {
              "name": "cross-origin-resource-policy",
              "value": "cross-origin"
            },
            {
              "name": "alt-svc",
              "value": "h3=\":443\"; ma=2592000,h3-29=\":443\"; ma=2592000,h3-Q050=\":443\"; ma=2592000,h3-Q046=\":443\"; ma=2592000,h3-Q043=\":443\"; ma=2592000,quic=\":443\"; ma=2592000; v=\"46,43\""
            },
            {
              "name": "content-length",
              "value": "15876"
            },
            {
              "name": "x-xss-protection",
              "value": "0"
            },
            {
              "name": "last-modified",
              "value": "Thu, 10 Sep 2020 17:03:22 GMT"
            },
            {
              "name": "server",
              "value": "sffe"
            },
            {
              "name": "report-to",
              "value": "{\"group\":\"apps-themes\",\"max_age\":2592000,\"endpoints\":[{\"url\":\"https://csp.withgoogle.com/csp/report-to/apps-themes\"}]}"
            },
            {
              "name": "content-type",
              "value": "font/woff2"
            },
            {
              "name": "access-control-allow-origin",
              "value": "*"
            },
            {
              "name": "cache-control",
              "value": "public, max-age=31536000"
            },
            {
              "name": "accept-ranges",
              "value": "bytes"
            },
            {
              "name": "timing-allow-origin",
              "value": "*"
            },
            {
              "name": "cross-origin-opener-policy-report-only",
              "value": "same-origin; report-to=\"apps-themes\""
            },
            {
              "name": "expires",
              "value": "Thu, 22 Dec 2022 05:32:18 GMT"
            }
          ],
          "cookies": [],
          "content": {
            "size": 15876,
            "mimeType": "font/woff2"
          },
          "redirectURL": "",
          "headersSize": -1,
          "bodySize": 0,
          "_transferSize": 0,
          "_error": null
        },
        "serverIPAddress": "142.250.179.227",
        "startedDateTime": "2021-12-23T16:43:29.479Z",
        "time": 0.5810000002384186,
        "timings": {
          "blocked": -1,
          "dns": -1,
          "ssl": -1,
          "connect": -1,
          "send": 0,
          "wait": 0.5019999807700515,
          "receive": 0.0790000194683671,
          "_blocked_queueing": -1
        }
      }
    ]
  }
}