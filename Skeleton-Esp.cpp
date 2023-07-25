void (*realplayerupdate)(void *man);
void fakeplayerupdate(void *man){
   void *bipedman = *(void **)((uint64_t)man + 0x30);

   player->boneposition[0] = GetTransformLocation(*(void **)((uint64_t)bipedman + 0x18));
   player->w2sboneposition[0] = WorldToScreen(player->boneposition[0]);
   player->boneposition[1] = GetTransformLocation(*(void **)((uint64_t)bipedman + 0x20));
   player->w2sboneposition[1] = WorldToScreen(player->boneposition[1]);
   player->boneposition[2] = GetTransformLocation(*(void **)((uint64_t)bipedman + 0x28));
       player->w2sboneposition[2] = WorldToScreen(player->boneposition[2]);
   player->boneposition[3] = GetTransformLocation(*(void **)((uint64_t)bipedman + 0x30));
   player->w2sboneposition[3] = WorldToScreen(player->boneposition[3]);
   player->boneposition[4] = GetTransformLocation(*(void **)((uint64_t)bipedman + 0x38));
   player->w2sboneposition[4] = WorldToScreen(player->boneposition[4]);
   player->boneposition[5] = GetTransformLocation(*(void **)((uint64_t)bipedman + 0x40));
   player->w2sboneposition[5] = WorldToScreen(player->boneposition[5]);
   player->boneposition[6] = GetTransformLocation(*(void **)((uint64_t)bipedman + 0x48));
      player->w2sboneposition[6] = WorldToScreen(player->boneposition[6]);
        player->boneposition[7] = GetTransformLocation(*(void **)((uint64_t)bipedman + 0x50));
      player->w2sboneposition[7] = WorldToScreen(player->boneposition[7]);
        player->boneposition[8] = GetTransformLocation(*(void **)((uint64_t)bipedman + 0x58));
   player->w2sboneposition[8] = WorldToScreen(player->boneposition[8]);
        player->boneposition[9] = GetTransformLocation(*(void **)((uint64_t)bipedman + 0x60));
        player->w2sboneposition[9] = WorldToScreen(player->boneposition[9]);
    player->boneposition[10] = GetTransformLocation(*(void **)((uint64_t)bipedman + 0x68));
  player->w2sboneposition[10] = WorldToScreen(player->boneposition[10]);
        player->boneposition[11] = GetTransformLocation(*(void **)((uint64_t)bipedman + 0x70));
       player->w2sboneposition[11] = WorldToScreen(player->boneposition[11]);
        player->boneposition[12] = GetTransformLocation(*(void **)((uint64_t)bipedman + 0x78));
       player->w2sboneposition[12] = WorldToScreen(player->boneposition[12]);
        player->boneposition[13] = GetTransformLocation(*(void **)((uint64_t)bipedman + 0x80));
        player->w2sboneposition[13] = WorldToScreen(player->boneposition[13]);
  player->boneposition[14] = GetTransformLocation(*(void **)((uint64_t)bipedman + 0x88));
        player->w2sboneposition[14] = WorldToScreen(player->boneposition[14]);
    player->boneposition[15] = GetTransformLocation(*(void **)((uint64_t)bipedman + 0x90));
 player->w2sboneposition[15] = WorldToScreen(player->boneposition[15]);
        player->boneposition[16] = GetTransformLocation(*(void **)((uint64_t)bipedman + 0x98));
 player->w2sboneposition[16] = WorldToScreen(player->boneposition[16]);
       player->boneposition[17] = GetTransformLocation(*(void **)((uint64_t)bipedman + 0xA0));
  player->w2sboneposition[17] = WorldToScreen(player->boneposition[17]);
        player->boneposition[18] = GetTransformLocation(*(void **)((uint64_t)bipedman + 0xA8));
    player->w2sboneposition[18] = WorldToScreen(player->boneposition[18]);
      [esp addLine:player->w2sboneposition[0].x y1:player->w2sboneposition[0].y x2:player->w2sboneposition[2].x y2:player->w2sboneposition[2].y];
            [esp addLine:player->w2sboneposition[1].x y1:player->w2sboneposition[1].y x2:player->w2sboneposition[3].x y2:player->w2sboneposition[3].y];
            [esp addLine:player->w2sboneposition[2].x y1:player->w2sboneposition[2].y x2:player->w2sboneposition[4].x y2:player->w2sboneposition[4].y];
            [esp addLine:player->w2sboneposition[3].x y1:player->w2sboneposition[3].y x2:player->w2sboneposition[5].x y2:player->w2sboneposition[5].y];
            [esp addLine:player->w2sboneposition[4].x y1:player->w2sboneposition[4].y x2:player->w2sboneposition[6].x y2:player->w2sboneposition[6].y];
            [esp addLine:player->w2sboneposition[5].x y1:player->w2sboneposition[5].y x2:player->w2sboneposition[7].x y2:player->w2sboneposition[7].y];
            [esp addLine:player->w2sboneposition[2].x y1:player->w2sboneposition[2].y x2:player->w2sboneposition[8].x y2:player->w2sboneposition[8].y];
            [esp addLine:player->w2sboneposition[7].x y1:player->w2sboneposition[7].y x2:player->w2sboneposition[9].x y2:player->w2sboneposition[9].y];
            [esp addLine:player->w2sboneposition[8].x y1:player->w2sboneposition[8].y x2:player->w2sboneposition[10].x y2:player->w2sboneposition[10].y];
            [esp addLine:player->w2sboneposition[9].x y1:player->w2sboneposition[9].y x2:player->w2sboneposition[11].x y2:player->w2sboneposition[11].y];
            [esp addLine:player->w2sboneposition[2].x y1:player->w2sboneposition[2].y x2:player->w2sboneposition[12].x y2:player->w2sboneposition[12].y];
            [esp addLine:player->w2sboneposition[11].x y1:player->w2sboneposition[11].y x2:player->w2sboneposition[13].x y2:player->w2sboneposition[13].y];
            [esp addLine:player->w2sboneposition[12].x y1:player->w2sboneposition[12].y x2:player->w2sboneposition[14].x y2:player->w2sboneposition[14].y];
            [esp addLine:player->w2sboneposition[13].x y1:player->w2sboneposition[13].y x2:player->w2sboneposition[15].x y2:player->w2sboneposition[15].y];
            [esp addLine:player->w2sboneposition[11].x y1:player->w2sboneposition[11].y x2:player->w2sboneposition[16].x y2:player->w2sboneposition[16].y];
            [esp addLine:player->w2sboneposition[15].x y1:player->w2sboneposition[15].y x2:player->w2sboneposition[17].x y2:player->w2sboneposition[17].y];
            [esp addLine:player->w2sboneposition[16].x y1:player->w2sboneposition[16].y x2:player->w2sboneposition[18].x y2:player->w2sboneposition[18].y];

    realplayerupdate(man); }
void setup(){
HOOK(0x1B01BE0, new_playerupdate, old_playerupdate);
}
void setupMenu(){
   menu = [[Menu alloc] ...];
}
