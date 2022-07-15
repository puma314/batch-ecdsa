mkdir -p logs
yarn build:c 2 | tee logs/2.log && \
  yarn build:c 4 | tee logs/4.log && \
  yarn build:c 8 | tee logs/8.log && \
  yarn build:c 16 | tee logs/16.log && \
  yarn build:c 32 | tee logs/32.log
