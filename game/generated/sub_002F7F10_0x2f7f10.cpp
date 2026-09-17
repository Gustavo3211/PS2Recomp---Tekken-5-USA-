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

// Function: sub_002F7F10
// Address: 0x2f7f10 - 0x2f8178
void sub_002F7F10_0x2f7f10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F7F10_0x2f7f10");
#endif

    ctx->pc = 0x2f7f10u;

    // 0x2f7f10: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2f7f10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x2f7f14: 0x3c020010  lui         $v0, 0x10
    ctx->pc = 0x2f7f14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
    // 0x2f7f18: 0xffbe0060  sd          $fp, 0x60($sp)
    ctx->pc = 0x2f7f18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 30));
    // 0x2f7f1c: 0x3c1e0010  lui         $fp, 0x10
    ctx->pc = 0x2f7f1cu;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)16 << 16));
    // 0x2f7f20: 0xffb30038  sd          $s3, 0x38($sp)
    ctx->pc = 0x2f7f20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
    // 0x2f7f24: 0x3c130010  lui         $s3, 0x10
    ctx->pc = 0x2f7f24u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)16 << 16));
    // 0x2f7f28: 0x37de001a  ori         $fp, $fp, 0x1A
    ctx->pc = 0x2f7f28u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 30) | (uint64_t)(uint16_t)26);
    // 0x2f7f2c: 0xafb30000  sw          $s3, 0x0($sp)
    ctx->pc = 0x2f7f2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 19));
    // 0x2f7f30: 0xafbe0000  sw          $fp, 0x0($sp)
    ctx->pc = 0x2f7f30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 30));
    // 0x2f7f34: 0x3c1e0010  lui         $fp, 0x10
    ctx->pc = 0x2f7f34u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)16 << 16));
    // 0x2f7f38: 0x37de001b  ori         $fp, $fp, 0x1B
    ctx->pc = 0x2f7f38u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 30) | (uint64_t)(uint16_t)27);
    // 0x2f7f3c: 0xafb30004  sw          $s3, 0x4($sp)
    ctx->pc = 0x2f7f3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 19));
    // 0x2f7f40: 0xafbe0004  sw          $fp, 0x4($sp)
    ctx->pc = 0x2f7f40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 30));
    // 0x2f7f44: 0x3c1e0010  lui         $fp, 0x10
    ctx->pc = 0x2f7f44u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)16 << 16));
    // 0x2f7f48: 0x37de001c  ori         $fp, $fp, 0x1C
    ctx->pc = 0x2f7f48u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 30) | (uint64_t)(uint16_t)28);
    // 0x2f7f4c: 0xafb30008  sw          $s3, 0x8($sp)
    ctx->pc = 0x2f7f4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 19));
    // 0x2f7f50: 0xafbe0008  sw          $fp, 0x8($sp)
    ctx->pc = 0x2f7f50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 30));
    // 0x2f7f54: 0x3c1e0010  lui         $fp, 0x10
    ctx->pc = 0x2f7f54u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)16 << 16));
    // 0x2f7f58: 0x37de001d  ori         $fp, $fp, 0x1D
    ctx->pc = 0x2f7f58u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 30) | (uint64_t)(uint16_t)29);
    // 0x2f7f5c: 0xafb3000c  sw          $s3, 0xC($sp)
    ctx->pc = 0x2f7f5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 19));
    // 0x2f7f60: 0xafbe000c  sw          $fp, 0xC($sp)
    ctx->pc = 0x2f7f60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 30));
    // 0x2f7f64: 0x3c1e0010  lui         $fp, 0x10
    ctx->pc = 0x2f7f64u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)16 << 16));
    // 0x2f7f68: 0x37de002c  ori         $fp, $fp, 0x2C
    ctx->pc = 0x2f7f68u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 30) | (uint64_t)(uint16_t)44);
    // 0x2f7f6c: 0xafb30010  sw          $s3, 0x10($sp)
    ctx->pc = 0x2f7f6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 19));
    // 0x2f7f70: 0xafbe0010  sw          $fp, 0x10($sp)
    ctx->pc = 0x2f7f70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 30));
    // 0x2f7f74: 0x3c1e0010  lui         $fp, 0x10
    ctx->pc = 0x2f7f74u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)16 << 16));
    // 0x2f7f78: 0x34420007  ori         $v0, $v0, 0x7
    ctx->pc = 0x2f7f78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)7);
    // 0x2f7f7c: 0x37de001e  ori         $fp, $fp, 0x1E
    ctx->pc = 0x2f7f7cu;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 30) | (uint64_t)(uint16_t)30);
    // 0x2f7f80: 0xafb30014  sw          $s3, 0x14($sp)
    ctx->pc = 0x2f7f80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 19));
    // 0x2f7f84: 0x3673002b  ori         $s3, $s3, 0x2B
    ctx->pc = 0x2f7f84u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)43);
    // 0x2f7f88: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x2f7f88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x2f7f8c: 0x3c100010  lui         $s0, 0x10
    ctx->pc = 0x2f7f8cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)16 << 16));
    // 0x2f7f90: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x2f7f90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x2f7f94: 0x3c110010  lui         $s1, 0x10
    ctx->pc = 0x2f7f94u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)16 << 16));
    // 0x2f7f98: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x2f7f98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x2f7f9c: 0x3c120010  lui         $s2, 0x10
    ctx->pc = 0x2f7f9cu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)16 << 16));
    // 0x2f7fa0: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x2f7fa0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x2f7fa4: 0x24140016  addiu       $s4, $zero, 0x16
    ctx->pc = 0x2f7fa4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x2f7fa8: 0xffb50048  sd          $s5, 0x48($sp)
    ctx->pc = 0x2f7fa8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 21));
    // 0x2f7fac: 0x24150015  addiu       $s5, $zero, 0x15
    ctx->pc = 0x2f7facu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x2f7fb0: 0xffb60050  sd          $s6, 0x50($sp)
    ctx->pc = 0x2f7fb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 22));
    // 0x2f7fb4: 0x24160017  addiu       $s6, $zero, 0x17
    ctx->pc = 0x2f7fb4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    // 0x2f7fb8: 0xffb70058  sd          $s7, 0x58($sp)
    ctx->pc = 0x2f7fb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 23));
    // 0x2f7fbc: 0x24170019  addiu       $s7, $zero, 0x19
    ctx->pc = 0x2f7fbcu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x2f7fc0: 0xafbe0014  sw          $fp, 0x14($sp)
    ctx->pc = 0x2f7fc0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 30));
    // 0x2f7fc4: 0x241e001f  addiu       $fp, $zero, 0x1F
    ctx->pc = 0x2f7fc4u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x2f7fc8: 0xac8200a0  sw          $v0, 0xA0($a0)
    ctx->pc = 0x2f7fc8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 160), GPR_U32(ctx, 2));
    // 0x2f7fcc: 0x24020023  addiu       $v0, $zero, 0x23
    ctx->pc = 0x2f7fccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
    // 0x2f7fd0: 0xa08200fd  sb          $v0, 0xFD($a0)
    ctx->pc = 0x2f7fd0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 253), (uint8_t)GPR_U32(ctx, 2));
    // 0x2f7fd4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2f7fd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2f7fd8: 0xa08200fe  sb          $v0, 0xFE($a0)
    ctx->pc = 0x2f7fd8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 254), (uint8_t)GPR_U32(ctx, 2));
    // 0x2f7fdc: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x2f7fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x2f7fe0: 0x3c030010  lui         $v1, 0x10
    ctx->pc = 0x2f7fe0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16 << 16));
    // 0x2f7fe4: 0x3c050010  lui         $a1, 0x10
    ctx->pc = 0x2f7fe4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16 << 16));
    // 0x2f7fe8: 0x3c060010  lui         $a2, 0x10
    ctx->pc = 0x2f7fe8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16 << 16));
    // 0x2f7fec: 0x3c070010  lui         $a3, 0x10
    ctx->pc = 0x2f7fecu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)16 << 16));
    // 0x2f7ff0: 0x3c080010  lui         $t0, 0x10
    ctx->pc = 0x2f7ff0u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)16 << 16));
    // 0x2f7ff4: 0x3c090010  lui         $t1, 0x10
    ctx->pc = 0x2f7ff4u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)16 << 16));
    // 0x2f7ff8: 0xa08200ff  sb          $v0, 0xFF($a0)
    ctx->pc = 0x2f7ff8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 255), (uint8_t)GPR_U32(ctx, 2));
    // 0x2f7ffc: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x2f7ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2f8000: 0x34630009  ori         $v1, $v1, 0x9
    ctx->pc = 0x2f8000u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)9);
    // 0x2f8004: 0x34a5000a  ori         $a1, $a1, 0xA
    ctx->pc = 0x2f8004u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)10);
    // 0x2f8008: 0x34c6000c  ori         $a2, $a2, 0xC
    ctx->pc = 0x2f8008u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)12);
    // 0x2f800c: 0x34e7000d  ori         $a3, $a3, 0xD
    ctx->pc = 0x2f800cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)13);
    // 0x2f8010: 0x3508002a  ori         $t0, $t0, 0x2A
    ctx->pc = 0x2f8010u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)42);
    // 0x2f8014: 0x35290010  ori         $t1, $t1, 0x10
    ctx->pc = 0x2f8014u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)16);
    // 0x2f8018: 0xa0950100  sb          $s5, 0x100($a0)
    ctx->pc = 0x2f8018u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 256), (uint8_t)GPR_U32(ctx, 21));
    // 0x2f801c: 0x3c0a0010  lui         $t2, 0x10
    ctx->pc = 0x2f801cu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)16 << 16));
    // 0x2f8020: 0xa0820101  sb          $v0, 0x101($a0)
    ctx->pc = 0x2f8020u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 257), (uint8_t)GPR_U32(ctx, 2));
    // 0x2f8024: 0x24020018  addiu       $v0, $zero, 0x18
    ctx->pc = 0x2f8024u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x2f8028: 0xac8300a4  sw          $v1, 0xA4($a0)
    ctx->pc = 0x2f8028u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 164), GPR_U32(ctx, 3));
    // 0x2f802c: 0x3c0b0010  lui         $t3, 0x10
    ctx->pc = 0x2f802cu;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)16 << 16));
    // 0x2f8030: 0xac8500a8  sw          $a1, 0xA8($a0)
    ctx->pc = 0x2f8030u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 168), GPR_U32(ctx, 5));
    // 0x2f8034: 0x3c0c0010  lui         $t4, 0x10
    ctx->pc = 0x2f8034u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)16 << 16));
    // 0x2f8038: 0xac8600ac  sw          $a2, 0xAC($a0)
    ctx->pc = 0x2f8038u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 172), GPR_U32(ctx, 6));
    // 0x2f803c: 0x3c0d0010  lui         $t5, 0x10
    ctx->pc = 0x2f803cu;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)16 << 16));
    // 0x2f8040: 0xac8700b0  sw          $a3, 0xB0($a0)
    ctx->pc = 0x2f8040u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 176), GPR_U32(ctx, 7));
    // 0x2f8044: 0x3c0e0010  lui         $t6, 0x10
    ctx->pc = 0x2f8044u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)16 << 16));
    // 0x2f8048: 0xac8800b4  sw          $t0, 0xB4($a0)
    ctx->pc = 0x2f8048u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 180), GPR_U32(ctx, 8));
    // 0x2f804c: 0x3c0f0010  lui         $t7, 0x10
    ctx->pc = 0x2f804cu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)16 << 16));
    // 0x2f8050: 0xac8900b8  sw          $t1, 0xB8($a0)
    ctx->pc = 0x2f8050u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 184), GPR_U32(ctx, 9));
    // 0x2f8054: 0x354a0011  ori         $t2, $t2, 0x11
    ctx->pc = 0x2f8054u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)17);
    // 0x2f8058: 0xa0940102  sb          $s4, 0x102($a0)
    ctx->pc = 0x2f8058u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 258), (uint8_t)GPR_U32(ctx, 20));
    // 0x2f805c: 0x24140008  addiu       $s4, $zero, 0x8
    ctx->pc = 0x2f805cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2f8060: 0xa0940104  sb          $s4, 0x104($a0)
    ctx->pc = 0x2f8060u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 260), (uint8_t)GPR_U32(ctx, 20));
    // 0x2f8064: 0x2414000a  addiu       $s4, $zero, 0xA
    ctx->pc = 0x2f8064u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2f8068: 0xa0820105  sb          $v0, 0x105($a0)
    ctx->pc = 0x2f8068u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 261), (uint8_t)GPR_U32(ctx, 2));
    // 0x2f806c: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x2f806cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x2f8070: 0xa0940109  sb          $s4, 0x109($a0)
    ctx->pc = 0x2f8070u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 265), (uint8_t)GPR_U32(ctx, 20));
    // 0x2f8074: 0x2414000c  addiu       $s4, $zero, 0xC
    ctx->pc = 0x2f8074u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2f8078: 0xa082010a  sb          $v0, 0x10A($a0)
    ctx->pc = 0x2f8078u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 266), (uint8_t)GPR_U32(ctx, 2));
    // 0x2f807c: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x2f807cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x2f8080: 0x356b0012  ori         $t3, $t3, 0x12
    ctx->pc = 0x2f8080u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | (uint64_t)(uint16_t)18);
    // 0x2f8084: 0x358c0013  ori         $t4, $t4, 0x13
    ctx->pc = 0x2f8084u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) | (uint64_t)(uint16_t)19);
    // 0x2f8088: 0x35ad0014  ori         $t5, $t5, 0x14
    ctx->pc = 0x2f8088u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) | (uint64_t)(uint16_t)20);
    // 0x2f808c: 0x35ce0015  ori         $t6, $t6, 0x15
    ctx->pc = 0x2f808cu;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) | (uint64_t)(uint16_t)21);
    // 0x2f8090: 0x2419001a  addiu       $t9, $zero, 0x1A
    ctx->pc = 0x2f8090u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    // 0x2f8094: 0x35ef0016  ori         $t7, $t7, 0x16
    ctx->pc = 0x2f8094u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | (uint64_t)(uint16_t)22);
    // 0x2f8098: 0x2418001b  addiu       $t8, $zero, 0x1B
    ctx->pc = 0x2f8098u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x2f809c: 0x36100017  ori         $s0, $s0, 0x17
    ctx->pc = 0x2f809cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)23);
    // 0x2f80a0: 0x36310018  ori         $s1, $s1, 0x18
    ctx->pc = 0x2f80a0u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)24);
    // 0x2f80a4: 0x36520019  ori         $s2, $s2, 0x19
    ctx->pc = 0x2f80a4u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)25);
    // 0x2f80a8: 0xa0960103  sb          $s6, 0x103($a0)
    ctx->pc = 0x2f80a8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 259), (uint8_t)GPR_U32(ctx, 22));
    // 0x2f80ac: 0xa0970106  sb          $s7, 0x106($a0)
    ctx->pc = 0x2f80acu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 262), (uint8_t)GPR_U32(ctx, 23));
    // 0x2f80b0: 0xac9000d4  sw          $s0, 0xD4($a0)
    ctx->pc = 0x2f80b0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 212), GPR_U32(ctx, 16));
    // 0x2f80b4: 0xac9100d8  sw          $s1, 0xD8($a0)
    ctx->pc = 0x2f80b4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 216), GPR_U32(ctx, 17));
    // 0x2f80b8: 0xac9200dc  sw          $s2, 0xDC($a0)
    ctx->pc = 0x2f80b8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 220), GPR_U32(ctx, 18));
    // 0x2f80bc: 0xac9300e0  sw          $s3, 0xE0($a0)
    ctx->pc = 0x2f80bcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 224), GPR_U32(ctx, 19));
    // 0x2f80c0: 0xa09e0112  sb          $fp, 0x112($a0)
    ctx->pc = 0x2f80c0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 274), (uint8_t)GPR_U32(ctx, 30));
    // 0x2f80c4: 0x241e001c  addiu       $fp, $zero, 0x1C
    ctx->pc = 0x2f80c4u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x2f80c8: 0xac8a00bc  sw          $t2, 0xBC($a0)
    ctx->pc = 0x2f80c8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 188), GPR_U32(ctx, 10));
    // 0x2f80cc: 0xac8b00c0  sw          $t3, 0xC0($a0)
    ctx->pc = 0x2f80ccu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 192), GPR_U32(ctx, 11));
    // 0x2f80d0: 0xac8c00c4  sw          $t4, 0xC4($a0)
    ctx->pc = 0x2f80d0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 196), GPR_U32(ctx, 12));
    // 0x2f80d4: 0xac8d00c8  sw          $t5, 0xC8($a0)
    ctx->pc = 0x2f80d4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 200), GPR_U32(ctx, 13));
    // 0x2f80d8: 0xac8e00cc  sw          $t6, 0xCC($a0)
    ctx->pc = 0x2f80d8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 204), GPR_U32(ctx, 14));
    // 0x2f80dc: 0xa0990107  sb          $t9, 0x107($a0)
    ctx->pc = 0x2f80dcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 263), (uint8_t)GPR_U32(ctx, 25));
    // 0x2f80e0: 0xac8f00d0  sw          $t7, 0xD0($a0)
    ctx->pc = 0x2f80e0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 208), GPR_U32(ctx, 15));
    // 0x2f80e4: 0xa0980108  sb          $t8, 0x108($a0)
    ctx->pc = 0x2f80e4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 264), (uint8_t)GPR_U32(ctx, 24));
    // 0x2f80e8: 0xa094010b  sb          $s4, 0x10B($a0)
    ctx->pc = 0x2f80e8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 267), (uint8_t)GPR_U32(ctx, 20));
    // 0x2f80ec: 0xa08000fc  sb          $zero, 0xFC($a0)
    ctx->pc = 0x2f80ecu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 252), (uint8_t)GPR_U32(ctx, 0));
    // 0x2f80f0: 0xa082010c  sb          $v0, 0x10C($a0)
    ctx->pc = 0x2f80f0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 268), (uint8_t)GPR_U32(ctx, 2));
    // 0x2f80f4: 0x8fb40000  lw          $s4, 0x0($sp)
    ctx->pc = 0x2f80f4u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f80f8: 0xa09e010d  sb          $fp, 0x10D($a0)
    ctx->pc = 0x2f80f8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 269), (uint8_t)GPR_U32(ctx, 30));
    // 0x2f80fc: 0xac9400e4  sw          $s4, 0xE4($a0)
    ctx->pc = 0x2f80fcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 228), GPR_U32(ctx, 20));
    // 0x2f8100: 0x2414001d  addiu       $s4, $zero, 0x1D
    ctx->pc = 0x2f8100u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
    // 0x2f8104: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x2f8104u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x2f8108: 0xa094010e  sb          $s4, 0x10E($a0)
    ctx->pc = 0x2f8108u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 270), (uint8_t)GPR_U32(ctx, 20));
    // 0x2f810c: 0xac8200e8  sw          $v0, 0xE8($a0)
    ctx->pc = 0x2f810cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 232), GPR_U32(ctx, 2));
    // 0x2f8110: 0x24020024  addiu       $v0, $zero, 0x24
    ctx->pc = 0x2f8110u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x2f8114: 0x8fbe0008  lw          $fp, 0x8($sp)
    ctx->pc = 0x2f8114u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2f8118: 0xa082010f  sb          $v0, 0x10F($a0)
    ctx->pc = 0x2f8118u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 271), (uint8_t)GPR_U32(ctx, 2));
    // 0x2f811c: 0xac9e00ec  sw          $fp, 0xEC($a0)
    ctx->pc = 0x2f811cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 236), GPR_U32(ctx, 30));
    // 0x2f8120: 0x241e0022  addiu       $fp, $zero, 0x22
    ctx->pc = 0x2f8120u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    // 0x2f8124: 0x8fb4000c  lw          $s4, 0xC($sp)
    ctx->pc = 0x2f8124u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x2f8128: 0xac9400f0  sw          $s4, 0xF0($a0)
    ctx->pc = 0x2f8128u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 240), GPR_U32(ctx, 20));
    // 0x2f812c: 0x24140020  addiu       $s4, $zero, 0x20
    ctx->pc = 0x2f812cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x2f8130: 0xa09e0110  sb          $fp, 0x110($a0)
    ctx->pc = 0x2f8130u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 272), (uint8_t)GPR_U32(ctx, 30));
    // 0x2f8134: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2f8134u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f8138: 0xa0940111  sb          $s4, 0x111($a0)
    ctx->pc = 0x2f8138u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 273), (uint8_t)GPR_U32(ctx, 20));
    // 0x2f813c: 0xac8200f4  sw          $v0, 0xF4($a0)
    ctx->pc = 0x2f813cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 244), GPR_U32(ctx, 2));
    // 0x2f8140: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x2f8140u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2f8144: 0x8fbe0014  lw          $fp, 0x14($sp)
    ctx->pc = 0x2f8144u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x2f8148: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x2f8148u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2f814c: 0xac9e00f8  sw          $fp, 0xF8($a0)
    ctx->pc = 0x2f814cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 248), GPR_U32(ctx, 30));
    // 0x2f8150: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x2f8150u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2f8154: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x2f8154u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2f8158: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x2f8158u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2f815c: 0xdfb50048  ld          $s5, 0x48($sp)
    ctx->pc = 0x2f815cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2f8160: 0xdfb60050  ld          $s6, 0x50($sp)
    ctx->pc = 0x2f8160u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2f8164: 0xdfb70058  ld          $s7, 0x58($sp)
    ctx->pc = 0x2f8164u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2f8168: 0xdfbe0060  ld          $fp, 0x60($sp)
    ctx->pc = 0x2f8168u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2f816c: 0x3e00008  jr          $ra
    ctx->pc = 0x2F816Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F8170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F816Cu;
        // 0x2f8170: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F816Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F8174u;
    // 0x2f8174: 0x0  nop
    ctx->pc = 0x2f8174u;
    // NOP
    ctx->pc = 0x2f8178u;
}
