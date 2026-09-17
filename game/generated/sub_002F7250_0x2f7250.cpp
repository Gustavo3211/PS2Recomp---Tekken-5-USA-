#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002F7250
// Address: 0x2f7250 - 0x2f73d0
void sub_002F7250_0x2f7250(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F7250_0x2f7250");
#endif

    ctx->pc = 0x2f7250u;

    // 0x2f7250: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2f7250u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2f7254: 0x24020025  addiu       $v0, $zero, 0x25
    ctx->pc = 0x2f7254u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
    // 0x2f7258: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2f7258u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2f725c: 0x3c100010  lui         $s0, 0x10
    ctx->pc = 0x2f725cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)16 << 16));
    // 0x2f7260: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2f7260u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2f7264: 0x3c110010  lui         $s1, 0x10
    ctx->pc = 0x2f7264u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)16 << 16));
    // 0x2f7268: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2f7268u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2f726c: 0x3c120010  lui         $s2, 0x10
    ctx->pc = 0x2f726cu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)16 << 16));
    // 0x2f7270: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2f7270u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x2f7274: 0x2413002f  addiu       $s3, $zero, 0x2F
    ctx->pc = 0x2f7274u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
    // 0x2f7278: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x2f7278u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x2f727c: 0x24140026  addiu       $s4, $zero, 0x26
    ctx->pc = 0x2f727cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
    // 0x2f7280: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x2f7280u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x2f7284: 0x2415001f  addiu       $s5, $zero, 0x1F
    ctx->pc = 0x2f7284u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x2f7288: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x2f7288u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x2f728c: 0x24160029  addiu       $s6, $zero, 0x29
    ctx->pc = 0x2f728cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 41));
    // 0x2f7290: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x2f7290u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x2f7294: 0x2417002a  addiu       $s7, $zero, 0x2A
    ctx->pc = 0x2f7294u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
    // 0x2f7298: 0xffbe0040  sd          $fp, 0x40($sp)
    ctx->pc = 0x2f7298u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 30));
    // 0x2f729c: 0x241e002d  addiu       $fp, $zero, 0x2D
    ctx->pc = 0x2f729cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    // 0x2f72a0: 0xa082014a  sb          $v0, 0x14A($a0)
    ctx->pc = 0x2f72a0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 330), (uint8_t)GPR_U32(ctx, 2));
    // 0x2f72a4: 0x24020031  addiu       $v0, $zero, 0x31
    ctx->pc = 0x2f72a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 49));
    // 0x2f72a8: 0xa082013d  sb          $v0, 0x13D($a0)
    ctx->pc = 0x2f72a8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 317), (uint8_t)GPR_U32(ctx, 2));
    // 0x2f72ac: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2f72acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2f72b0: 0x3c030010  lui         $v1, 0x10
    ctx->pc = 0x2f72b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16 << 16));
    // 0x2f72b4: 0x3c050010  lui         $a1, 0x10
    ctx->pc = 0x2f72b4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16 << 16));
    // 0x2f72b8: 0x3c060010  lui         $a2, 0x10
    ctx->pc = 0x2f72b8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16 << 16));
    // 0x2f72bc: 0x3c070010  lui         $a3, 0x10
    ctx->pc = 0x2f72bcu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)16 << 16));
    // 0x2f72c0: 0x3c080010  lui         $t0, 0x10
    ctx->pc = 0x2f72c0u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)16 << 16));
    // 0x2f72c4: 0x3c090010  lui         $t1, 0x10
    ctx->pc = 0x2f72c4u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)16 << 16));
    // 0x2f72c8: 0x3c0a0010  lui         $t2, 0x10
    ctx->pc = 0x2f72c8u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)16 << 16));
    // 0x2f72cc: 0x3c0b0010  lui         $t3, 0x10
    ctx->pc = 0x2f72ccu;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)16 << 16));
    // 0x2f72d0: 0x3c0c0010  lui         $t4, 0x10
    ctx->pc = 0x2f72d0u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)16 << 16));
    // 0x2f72d4: 0x3c0d0010  lui         $t5, 0x10
    ctx->pc = 0x2f72d4u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)16 << 16));
    // 0x2f72d8: 0x3c0e0010  lui         $t6, 0x10
    ctx->pc = 0x2f72d8u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)16 << 16));
    // 0x2f72dc: 0x3c0f0010  lui         $t7, 0x10
    ctx->pc = 0x2f72dcu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)16 << 16));
    // 0x2f72e0: 0xa082013f  sb          $v0, 0x13F($a0)
    ctx->pc = 0x2f72e0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 319), (uint8_t)GPR_U32(ctx, 2));
    // 0x2f72e4: 0x2402002e  addiu       $v0, $zero, 0x2E
    ctx->pc = 0x2f72e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
    // 0x2f72e8: 0x34630005  ori         $v1, $v1, 0x5
    ctx->pc = 0x2f72e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)5);
    // 0x2f72ec: 0x34a50006  ori         $a1, $a1, 0x6
    ctx->pc = 0x2f72ecu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)6);
    // 0x2f72f0: 0x34c60003  ori         $a2, $a2, 0x3
    ctx->pc = 0x2f72f0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)3);
    // 0x2f72f4: 0x34e70052  ori         $a3, $a3, 0x52
    ctx->pc = 0x2f72f4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)82);
    // 0x2f72f8: 0x35080004  ori         $t0, $t0, 0x4
    ctx->pc = 0x2f72f8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)4);
    // 0x2f72fc: 0x35290053  ori         $t1, $t1, 0x53
    ctx->pc = 0x2f72fcu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)83);
    // 0x2f7300: 0x354a0024  ori         $t2, $t2, 0x24
    ctx->pc = 0x2f7300u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)36);
    // 0x2f7304: 0x2418002b  addiu       $t8, $zero, 0x2B
    ctx->pc = 0x2f7304u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
    // 0x2f7308: 0x356b002d  ori         $t3, $t3, 0x2D
    ctx->pc = 0x2f7308u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | (uint64_t)(uint16_t)45);
    // 0x2f730c: 0x2419002c  addiu       $t9, $zero, 0x2C
    ctx->pc = 0x2f730cu;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
    // 0x2f7310: 0x358c002e  ori         $t4, $t4, 0x2E
    ctx->pc = 0x2f7310u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) | (uint64_t)(uint16_t)46);
    // 0x2f7314: 0x35ad0025  ori         $t5, $t5, 0x25
    ctx->pc = 0x2f7314u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) | (uint64_t)(uint16_t)37);
    // 0x2f7318: 0x35ce002f  ori         $t6, $t6, 0x2F
    ctx->pc = 0x2f7318u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) | (uint64_t)(uint16_t)47);
    // 0x2f731c: 0x35ef0027  ori         $t7, $t7, 0x27
    ctx->pc = 0x2f731cu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | (uint64_t)(uint16_t)39);
    // 0x2f7320: 0x36100028  ori         $s0, $s0, 0x28
    ctx->pc = 0x2f7320u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)40);
    // 0x2f7324: 0x36310026  ori         $s1, $s1, 0x26
    ctx->pc = 0x2f7324u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)38);
    // 0x2f7328: 0x36520029  ori         $s2, $s2, 0x29
    ctx->pc = 0x2f7328u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)41);
    // 0x2f732c: 0xa0960140  sb          $s6, 0x140($a0)
    ctx->pc = 0x2f732cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 320), (uint8_t)GPR_U32(ctx, 22));
    // 0x2f7330: 0xa0970141  sb          $s7, 0x141($a0)
    ctx->pc = 0x2f7330u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 321), (uint8_t)GPR_U32(ctx, 23));
    // 0x2f7334: 0xa09e0144  sb          $fp, 0x144($a0)
    ctx->pc = 0x2f7334u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 324), (uint8_t)GPR_U32(ctx, 30));
    // 0x2f7338: 0xa0820145  sb          $v0, 0x145($a0)
    ctx->pc = 0x2f7338u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 325), (uint8_t)GPR_U32(ctx, 2));
    // 0x2f733c: 0x24020024  addiu       $v0, $zero, 0x24
    ctx->pc = 0x2f733cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x2f7340: 0xa0930146  sb          $s3, 0x146($a0)
    ctx->pc = 0x2f7340u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 326), (uint8_t)GPR_U32(ctx, 19));
    // 0x2f7344: 0xa0940147  sb          $s4, 0x147($a0)
    ctx->pc = 0x2f7344u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 327), (uint8_t)GPR_U32(ctx, 20));
    // 0x2f7348: 0xac900130  sw          $s0, 0x130($a0)
    ctx->pc = 0x2f7348u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 304), GPR_U32(ctx, 16));
    // 0x2f734c: 0xac830100  sw          $v1, 0x100($a0)
    ctx->pc = 0x2f734cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 256), GPR_U32(ctx, 3));
    // 0x2f7350: 0xac850104  sw          $a1, 0x104($a0)
    ctx->pc = 0x2f7350u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 260), GPR_U32(ctx, 5));
    // 0x2f7354: 0xac860108  sw          $a2, 0x108($a0)
    ctx->pc = 0x2f7354u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 264), GPR_U32(ctx, 6));
    // 0x2f7358: 0xac87010c  sw          $a3, 0x10C($a0)
    ctx->pc = 0x2f7358u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 268), GPR_U32(ctx, 7));
    // 0x2f735c: 0xac880110  sw          $t0, 0x110($a0)
    ctx->pc = 0x2f735cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 272), GPR_U32(ctx, 8));
    // 0x2f7360: 0xac890114  sw          $t1, 0x114($a0)
    ctx->pc = 0x2f7360u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 276), GPR_U32(ctx, 9));
    // 0x2f7364: 0xac8a0118  sw          $t2, 0x118($a0)
    ctx->pc = 0x2f7364u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 280), GPR_U32(ctx, 10));
    // 0x2f7368: 0xa0980142  sb          $t8, 0x142($a0)
    ctx->pc = 0x2f7368u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 322), (uint8_t)GPR_U32(ctx, 24));
    // 0x2f736c: 0xac8b011c  sw          $t3, 0x11C($a0)
    ctx->pc = 0x2f736cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 284), GPR_U32(ctx, 11));
    // 0x2f7370: 0xa0990143  sb          $t9, 0x143($a0)
    ctx->pc = 0x2f7370u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 323), (uint8_t)GPR_U32(ctx, 25));
    // 0x2f7374: 0xac8c0120  sw          $t4, 0x120($a0)
    ctx->pc = 0x2f7374u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 288), GPR_U32(ctx, 12));
    // 0x2f7378: 0xac8d0124  sw          $t5, 0x124($a0)
    ctx->pc = 0x2f7378u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 292), GPR_U32(ctx, 13));
    // 0x2f737c: 0xac8e0128  sw          $t6, 0x128($a0)
    ctx->pc = 0x2f737cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 296), GPR_U32(ctx, 14));
    // 0x2f7380: 0xac8f012c  sw          $t7, 0x12C($a0)
    ctx->pc = 0x2f7380u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 300), GPR_U32(ctx, 15));
    // 0x2f7384: 0xa0950148  sb          $s5, 0x148($a0)
    ctx->pc = 0x2f7384u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 328), (uint8_t)GPR_U32(ctx, 21));
    // 0x2f7388: 0xac910134  sw          $s1, 0x134($a0)
    ctx->pc = 0x2f7388u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 308), GPR_U32(ctx, 17));
    // 0x2f738c: 0xac920138  sw          $s2, 0x138($a0)
    ctx->pc = 0x2f738cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 312), GPR_U32(ctx, 18));
    // 0x2f7390: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2f7390u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f7394: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2f7394u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2f7398: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2f7398u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f739c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2f739cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2f73a0: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x2f73a0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2f73a4: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x2f73a4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2f73a8: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x2f73a8u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2f73ac: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x2f73acu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2f73b0: 0xdfbe0040  ld          $fp, 0x40($sp)
    ctx->pc = 0x2f73b0u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2f73b4: 0xa0820149  sb          $v0, 0x149($a0)
    ctx->pc = 0x2f73b4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 329), (uint8_t)GPR_U32(ctx, 2));
    // 0x2f73b8: 0x24020031  addiu       $v0, $zero, 0x31
    ctx->pc = 0x2f73b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 49));
    // 0x2f73bc: 0xa082013c  sb          $v0, 0x13C($a0)
    ctx->pc = 0x2f73bcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 316), (uint8_t)GPR_U32(ctx, 2));
    // 0x2f73c0: 0xa080013e  sb          $zero, 0x13E($a0)
    ctx->pc = 0x2f73c0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 318), (uint8_t)GPR_U32(ctx, 0));
    // 0x2f73c4: 0x3e00008  jr          $ra
    ctx->pc = 0x2F73C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F73C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F73C4u;
        // 0x2f73c8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F73C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F73CCu;
    // 0x2f73cc: 0x0  nop
    ctx->pc = 0x2f73ccu;
    // NOP
    ctx->pc = 0x2f73d0u;
}
