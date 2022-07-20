mkdir -p logs
# yarn build:c 2 | tee logs/batch2.log && \
# yarn build:c 4 | tee logs/batch4.log && \
# yarn build:c 8 | tee logs/batch8.log && \
yarn build:c 16 | tee logs/batch16.log && \
yarn build:c 32 | tee logs/batch32.log
