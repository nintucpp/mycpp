(function(a,c){VCM=(function(){if(typeof VCM==="object"){return VCM}return{}}());var b=100;VCM.media={version:1.11,render:function(o){var C,s=true,x="get.media",v=(o.secure!=undefined)?o.secure:"",G=VCM.media.dimensions(o.media_type),B=Math.random(),J=escape(VCM.media.topReferrer()),t=VCM.media.trustedReferrer(),u=VCM.media.isFrame(),d=(u==1)?escape(VCM.media.cookieReferrer()):"",z=VCM.media.validVersion(o.version),w=VCM.media.matchVersion(o.version),I=(o.macro!=undefined)?VCM.media.macroList(o.macro):"",j=(o.target!=undefined)?o.target:"n",g=(o.walsh!=undefined)?("&walsh="+o.walsh):"",l=(o.exc!=undefined)?("&exc="+o.exc):"",A=(o.media_id!=undefined)?("&m="+o.media_id):"",f="",e="",H=VCM.media.getPubCID(),n=o.gdpr,h=o.gdpr_consent,k=o.placement_id;var K=0;if(typeof(document.querySelectorAll)!="undefined"){K=document.querySelector('meta[name="viewport"][content*="width=device-width"]')!==null?1:0}this.isSecure=true;if(VCM.media.isPop(o)){if(o.pfc==undefined){o.pfc=14400000}x="pop.cgi";var F=new Date();c.cookie="h2=o; path=/;";B=F.getSeconds();if(c.cookie.indexOf("e=llo")<=0&&c.cookie.indexOf("2=o")>0){F.setTime(F.getTime()+o.pfc);c.cookie="he=llo; path=/; expires="+F.toGMTString()}else{s=false}}else{if(VCM.media.isInvue(o)){if(o.ivfc==undefined){o.ivfc=15}B=Math.floor(Math.random()*7777);c.cookie="h2=o; path=/;";var E=0;var y=0;if(a.innerWidth&&a.innerHeight){E=a.innerWidth;y=a.innerHeight}else{if(c.documentElement.clientWidth>0&&c.documentElement.clientHeight>0){E=c.documentElement.clientWidth;y=c.documentElement.clientHeight}else{E=c.body.clientWidth;y=c.body.clientHeight;if(y>1024){y=1024}}}if(c.cookie.indexOf("n=vue")<=0&&c.cookie.indexOf("2=o")>0&&c.cookie.indexOf("vccap=1")<=0){VCM.media.setCookie("vccap","1",o.ivfc,"/",null,null);e="&window_ht="+y+"&window_wt="+E}else{s=false}}else{if(VCM.media.isInterstitial(o)){s=false;if(o.isfc==undefined){o.isfc=15}if(o.isal!=undefined&&o.isal==1){c.write('<script language="javascript" src="'+this.cdnServer()+'/is.js"><\/script>')}else{var q=o.ishref;if(q.indexOf("get.media")>0){q=unescape(q.substring(q.indexOf("&url=")+5,q.length))}else{if(c.cookie.indexOf("CxIC=1")<=0){var p="&url="+escape(q);q=VCM.media.codeSrc(false,x,o.sid,A,o.media_type,j,o.version,VCM.media.version,B,u,-1,-1,z,w,I,g,l,f,J,t,d,e,p,K,H,n,h,k);var F=new Date();F.setTime(F.getTime()+o.isfc*1000*60);c.cookie="FCxIC=1; path=/; expires="+F.toGMTString()}}return q}return}else{if(VCM.media.isFlexBanner(o)){if(o.width!=undefined&&o.height!=undefined){f="&w="+o.width+"&h="+o.height}}}}}var m="vcmad_"+Math.floor(Math.random()*100000);C='<div id="'+m+'"></div>';c.write(C);var r=c.getElementById(m);var D={top:-1,left:-1};if(u==0&&r!=undefined){D=VCM.media.coords(r)}if(s){C=VCM.media.codeSrc(true,x,o.sid,A,o.media_type,j,o.version,VCM.media.version,B,u,D.left,D.top,z,w,I,g,l,f,J,t,d,e,"",K,H,n,h,k);c.write(C)}},topReferrer:function(){var e=window.location.href;var d=VCM.media.parsedURI(e);if(typeof e!=="undefined"){e=d.protocol+"://"+d.host+d.port+d.path}return e},parseQueryString:function(d,f){if(d.charAt(0)=="?"){d=d.substring(1)}var e=d.split("&");var g={};for(i=0;i<e.length;i++){ft=e[i].split("=");if(f===undefined||ft[0].lastIndexOf(f,0)==0){g[ft[0]]=ft[1]}}return g},trustedReferrer:function(){if(this.urlParams===undefined){this.urlParams=this.parseQueryString(window.location.search)}var d=this.urlParams.vcmref;return d||""},cookieReferrer:function(){var g="tr=";var d=document.cookie.split(";");for(var e=0;e<d.length;e++){var h=d[e];while(h.charAt(0)==" "){h=h.substring(1,h.length)}if(h.indexOf(g)==0){document.cookie='tr="";expires=Thu, 01-Jan-70 00:00:01 GMT;path=/';var f=VCM.media.parsedURI(h.substring(g.length,h.length));if(typeof f!=="undefined"){return f.protocol+"://"+f.host+f.port+f.path}}}return""},trustedPubCID:function(){if(this.urlParams===undefined){this.urlParams=this.parseQueryString(window.location.search)}var d=this.urlParams._pubcid;return d||""},isFrame:function(){var d=(window.location!=window.parent.location)?1:0;return d},isFlexBanner:function(d){return(d.media_type!=undefined&&d.media_id!=undefined&&d.media_type==12&&d.media_id==10)},isPop:function(d){return(d.media_type!=undefined&&d.media_id!=undefined&&d.media_type==2&&d.media_id==2)},isInvue:function(d){return(d.media_type!=undefined&&d.media_id!=undefined&&d.media_type==4&&d.media_id==4)},isInterstitial:function(d){return(d.media_type!=undefined&&d.media_id!=undefined&&d.media_type==6&&d.media_id==5)},isSameDomain:function(){var e=0;try{if(window.parent.document){e=1}}catch(d){}return e},dimensions:function(d){switch(d){case 1:return{w:468,h:60};case 2:return{w:720,h:400};case 3:return{w:120,h:600};case 4:return{w:250,h:250};case 5:return{w:728,h:90};case 6:return{w:728,h:600};case 7:return{w:160,h:600};case 8:return{w:300,h:250};case 9:return{w:180,h:150};case 10:return{w:300,h:600};case 11:return{w:0,h:0};case 12:return{w:200,h:200};case 13:return{w:320,h:240};default:return{w:0,h:0}}},coords:function(f){var e=0;var d=0;while(f&&!isNaN(f.offsetLeft)&&!isNaN(f.offsetTop)){e+=f.offsetLeft-f.scrollLeft;d+=f.offsetTop-f.scrollTop;f=f.offsetParent}return{top:d,left:e}},validVersion:function(d){return(d==1||d==1.1||d==1.2||d==1.3||d==1.4||d==1.5||d==1.6||d==1.7||d==1.8||d==1.9||d==1.1||d==1.11)},matchVersion:function(d){return(d==VCM.media.version)},macroList:function(f){var e="";for(var d=0;d<f.length;d++){if((f[d].name!=undefined)&&(f[d].name!="")){e=e+"&"+escape(f[d].name)+"="+escape(f[d].value)}}return e},setCookie:function(f,h,d,l,g,k){var e=new Date();e.setTime(e.getTime());if(d){d=d*1000*60}var j=new Date(e.getTime()+d);c.cookie=f+"="+escape(h)+((d)?";expires="+j.toGMTString():"")+((l)?";path="+l:"")+((g)?";domain="+g:"")+((k)?";secure":"")},codeSrc:function(I,e,k,s,h,o,u,J,E,y,C,w,A,z,H,x,q,n,B,d,m,j,f,D,G,r,g,p){var F=this.mediaServer()+"/w/"+e+"?sid="+k+s+((h)?"&tp="+h:"")+"&d=j&t="+o+"&vcm_acv="+u+"&version="+J+"&c="+E+"&vcm_ifr="+y+"&vcm_xy="+C+".."+w+"&vcm_vv="+A+"&vcm_vm="+z+H+x+q+n+"&vcm_pr="+B+"&vcm_tr="+d+"&vcm_cr="+m+j+f+"&mo="+D+((G)?"&fpc="+G:"")+((r)?"&gdpr="+r:"")+((g)?"&gdpr_consent="+g:"")+((p)?"&placement_id="+p:"");if(I){F=unescape('%3Cscript src="')+F+unescape('" type="text/javascript"%3E%3C/script%3E')}return F},parsedURI:function(g){var e={key:["source","protocol","authority","userInfo","user","password","host","port","relative","path","directory","file","query","anchor"],q:{name:"queryKey",parser:/(?:^|&)([^&=]*)=?([^&]*)/g},parser:{loose:/^(?:(?![^:@]+:[^:@\/]*@)([^:\/?#.]+):)?(?:\/\/)?((?:(([^:@]*)(?::([^:@]*))?)?@)?([^:\/?#]*)(?::(\d*))?)(((\/(?:[^?#](?![^?#\/]*\.[^?#\/.]+(?:[?#]|$)))*\/?)?([^?#\/]*))(?:\?([^#]*))?(?:#(.*))?)/}};var h=e,d=h.parser.loose.exec(g),g={},f=14;while(f--){g[h.key[f]]=d[f]||""}g[h.q.name]={};g[h.key[12]].replace(h.q.parser,function(k,j,l){if(j){g[h.q.name][j]=l}});return g},isPageSecure:function(){var d=(window.location.protocol&&window.location.protocol=="https:")?true:false;return d},cdnServer:function(){return(this.isSecure)?"https://secure.cdn.fastclick.net":"http://cdn.fastclick.net"},mediaServer:function(){var d=Math.floor(Math.random()*100);if(d<b||vclk_options.force_dotomi_domain){return(this.isSecure)?"https://direct.ad.cpe.dotomi.com":"http://direct.ad.cpe.dotomi.com"}return(this.isSecure)?"https://secure.fastclick.net":"http://media.fastclick.net"},cookieSyncServer:function(){return(this.isSecure)?"https://cookie.sync.ad.cpe.dotomi.com":"http://cookie.sync.ad.cpe.dotomi.com"},getPubCID:function(){var d;if(this.isFrame()){if(this.isSameDomain()){var e=a.parent}}else{var e=a}if(e&&typeof e.PublisherCommonId==="object"){d=e.PublisherCommonId.getId()}if(!d){d=this.trustedPubCID()}return d}}}(window,window.document));if(vclk_options===undefined){if(gsad!==undefined){var vclk_options=convert_gsad()}else{var vclk_options=getParams()}}if(vclk_options!==undefined){VCM.media.render(vclk_options);var randNum=Math.floor(Math.random()*100);if(randNum<100||vclk_options.force_pixel_sync){var cbNum=Math.random();var pubcid=VCM.media.getPubCID();var gdpr=vclk_options.gdpr;var gdpr_consent=vclk_options.gdpr_consent;var jsonpURL=VCM.media.cookieSyncServer()+"/w/cookie_sync?sid="+vclk_options.sid+"&cb="+cbNum+((pubcid)?"&fpc="+pubcid:"")+((gdpr)?"&gdpr="+gdpr:"")+((gdpr_consent)?"&gdpr_consent="+gdpr_consent:"");appendTag("script",jsonpURL)}vclk_options=undefined}function syncUser(c){if(c){var a=c.syncUrls;if(a!=null&&a.length>0){for(url in a){var d=a[url].syncUrl;if(d){if(a[url].iframe){appendTag("iframe",d)}else{var b=document.createElement("img");b.src=d}}}}}}function appendTag(c,d){if(c){var a=document.createElement(c);if(c=="script"){a.type="text/javascript";a.async=true;a.src=d;var b=document.getElementsByTagName("script")[0];b.parentNode.insertBefore(a,b)}else{if(c=="iframe"&&document.body){a.height="0";a.width="0";a.frameBorder="0";a.style.cssText="width:0px; height:0px; border-style:none; display:none;";a.src=d;document.body.appendChild(a)}}}}function getParams(){var a=document.getElementsByTagName("script");var c;var b;if(a[a.length-1].src!==undefined&&a[a.length-1].src.indexOf("fastclick.net/js/adcodes/pubcode.min.js")>-1){c=a[a.length-1].src;b=a[a.length-1].className}if(VCM.media.parsedURI(c).queryKey.sid!==undefined){return VCM.media.parsedURI(c).queryKey}else{if(b==="vclk_pub_code"){return{sid:-999,media_id:-999,media_type:-999,version:"1.8",exc:1}}else{return undefined}}}function convert_gsad(){var a={};var b=[];var c=[];a.version=VCM.media.version+"gs";a.sid=(gsad.site_id)?gsad.site_id:-999;if(gsad.sizes){gsad.sizes.forEach(function(d){switch(d){case"300x250":b.push(6);c.push(8);break;case"728x90":b.push(1);c.push(5);break;case"320x48":case"320x50":b.push(15);c.push(17);break}})}else{b.push(-999);c.push(-999)}a.media_id=b.join("&m=");a.media_type=c.join("&tp=");return a};