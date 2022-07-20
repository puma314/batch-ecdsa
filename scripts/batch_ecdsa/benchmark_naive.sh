mkdir -p logs
yarn build:cnaive 2 | tee logs/naive2.log && \
yarn build:cnaive 4 | tee logs/naive4.log && \
yarn build:cnaive 8 | tee logs/naive8.log && \
yarn build:cnaive 16 | tee logs/naive16.log && \
yarn build:cnaive 32 | tee logs/naive32.log
