# 미세먼지와 폐암 발병의 상관관계
## by 2206 남\*\*, 2212 이\*\*, 2217 홍\*\*

### **링크가 없는 파일은 모두 [project.zip](https://github.com/is-pyu/cnsh_files/raw/main/python_math_proj/project.zip) 안에 들어 있음**

### 데이터 출처
+ [2018년 암등록통계](https://ncc.re.kr/cancerStatsView.ncc?bbsnum=558&searchKey=total&searchValue=&pageNum=1) from 국립암센터
  + pdf 형태의 파일이라 직접 csv파일로 옮겨 적음
+ [시도별 미세먼지 대기오염도 현황](https://sgis.kostat.go.kr/view/thematicMap/thematicMapMain?stat_thema_map_id=9pyrpJvwHw20160121115806991GvpLyuuwDt&theme=CTGR_005&mapType=05&CTGRS=CTGR_001:recommend,CTGR_002:recommend,CTGR_003:recommend,CTGR_004:recommend,CTGR_005:recommend) from 통계지리정보서비스
  + 우측 상단의 '보고서 보기' 버튼 클릭
  + csv 파일로 내보내는 기능이 없어 페이지를 복사하여 csv 파일에 붙여넣음

### 데이터 파일
+ **newcancer.csv**: 시도변 폐암 환자수 데이터 csv
+ **meonji.csv**: 시도별 미세먼지 데이터 csv
+ **mapfile.zip.geojson**: 지도 파일 geojson

### 코드 파일
+ **proj.ipynb (주피터 파일)**: 추천
+ [구글 코랩](https://colab.research.google.com/drive/1ILpNpqAcyGX37u5arm7FSZS-02asLB5R): 아웃풋이 불안정해 추천하지 않음

### 발표 파일
+ **newpresentation.pptx**: 발표자료 수정 (0712)

### 참고 문헌
+ [1. 지도 파일 구해서 편집하기](https://mjs1995.tistory.com/169)
+ [2. Mapboxgl 이용하여 지도 그리기](https://mjs1995.tistory.com/181?category=802136)
+ [3. Mapboxgl 이용하여 지도 그리기 및 스타일링](https://dailyheumsi.tistory.com/145#6.-%EB%A7%B5-%EC%8A%A4%ED%83%80%EC%9D%BC%EB%A7%81)
+ [4. folium 이용하여 지도 그리기 (실패)](https://mjs1995.tistory.com/170?category=802136)

### 추가 사항
+ [이 프로젝트 github에서 보기](https://github.com/is-pyu/cnsh_files/tree/main/python_math_proj)
+ 코드 파일에는 시도하다 실패한 코드가 주석 처리되어 포함되어 있음 :)
