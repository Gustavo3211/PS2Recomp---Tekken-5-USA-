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

// Function: sub_004A1908
// Address: 0x4a1908 - 0x4a1b38
void sub_004A1908_0x4a1908(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004A1908_0x4a1908");
#endif

    switch (ctx->pc) {
        case 0x4a1a18u: goto label_4a1a18;
        case 0x4a1a28u: goto label_4a1a28;
        case 0x4a1a48u: goto label_4a1a48;
        case 0x4a1a98u: goto label_4a1a98;
        case 0x4a1afcu: goto label_4a1afc;
        default: break;
    }

    ctx->pc = 0x4a1908u;

    // 0x4a1908: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x4a1908u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x4a190c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4a190cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4a1910: 0x3c10007f  lui         $s0, 0x7F
    ctx->pc = 0x4a1910u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)127 << 16));
    // 0x4a1914: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x4a1914u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x4a1918: 0x3c11007f  lui         $s1, 0x7F
    ctx->pc = 0x4a1918u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)127 << 16));
    // 0x4a191c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x4a191cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x4a1920: 0x3c12ffff  lui         $s2, 0xFFFF
    ctx->pc = 0x4a1920u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)65535 << 16));
    // 0x4a1924: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x4a1924u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x4a1928: 0x3c13007f  lui         $s3, 0x7F
    ctx->pc = 0x4a1928u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)127 << 16));
    // 0x4a192c: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x4a192cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x4a1930: 0x3c14007f  lui         $s4, 0x7F
    ctx->pc = 0x4a1930u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)127 << 16));
    // 0x4a1934: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x4a1934u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x4a1938: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x4a1938u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a193c: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x4a193cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x4a1940: 0x3c16007f  lui         $s6, 0x7F
    ctx->pc = 0x4a1940u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)127 << 16));
    // 0x4a1944: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x4a1944u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x4a1948: 0x26730bec  addiu       $s3, $s3, 0xBEC
    ctx->pc = 0x4a1948u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 3052));
    // 0x4a194c: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x4a194cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x4a1950: 0x26310bf0  addiu       $s1, $s1, 0xBF0
    ctx->pc = 0x4a1950u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 3056));
    // 0x4a1954: 0x26d60bf8  addiu       $s6, $s6, 0xBF8
    ctx->pc = 0x4a1954u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 3064));
    // 0x4a1958: 0x26940c00  addiu       $s4, $s4, 0xC00
    ctx->pc = 0x4a1958u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 3072));
    // 0x4a195c: 0x8eb70080  lw          $s7, 0x80($s5)
    ctx->pc = 0x4a195cu;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 128)));
    // 0x4a1960: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x4a1960u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a1964: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x4a1964u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x7F0BECu));
    // 0x4a1968: 0x26100bf4  addiu       $s0, $s0, 0xBF4
    ctx->pc = 0x4a1968u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 3060));
    // 0x4a196c: 0x86e20012  lh          $v0, 0x12($s7)
    ctx->pc = 0x4a196cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 23), 18)));
    // 0x4a1970: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4a1970u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x4a1974: 0x8e270000  lw          $a3, 0x0($s1)
    ctx->pc = 0x4a1974u;
    SET_GPR_S32(ctx, 7, (int32_t)FAST_READ32(0x7F0BF0u));
    // 0x4a1978: 0x521025  or          $v0, $v0, $s2
    ctx->pc = 0x4a1978u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
    // 0x4a197c: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x4a197cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x4a1980: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x4a1980u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x4a1984: 0xae640000  sw          $a0, 0x0($s3)
    ctx->pc = 0x4a1984u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 4));
    // 0x4a1988: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4a1988u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x4a198c: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x4a198cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x4a1990: 0x86630000  lh          $v1, 0x0($s3)
    ctx->pc = 0x4a1990u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4a1994: 0x521024  and         $v0, $v0, $s2
    ctx->pc = 0x4a1994u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 18));
    // 0x4a1998: 0x8ec50000  lw          $a1, 0x0($s6)
    ctx->pc = 0x4a1998u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x4a199c: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4a199cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4a19a0: 0x8e880000  lw          $t0, 0x0($s4)
    ctx->pc = 0x4a19a0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4a19a4: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x4a19a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x4a19a8: 0xb22824  and         $a1, $a1, $s2
    ctx->pc = 0x4a19a8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 18));
    // 0x4a19ac: 0x721825  or          $v1, $v1, $s2
    ctx->pc = 0x4a19acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 18));
    // 0x4a19b0: 0x1124024  and         $t0, $t0, $s2
    ctx->pc = 0x4a19b0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & GPR_U64(ctx, 18));
    // 0x4a19b4: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x4a19b4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x4a19b8: 0xae640000  sw          $a0, 0x0($s3)
    ctx->pc = 0x4a19b8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 4));
    // 0x4a19bc: 0x3082ffff  andi        $v0, $a0, 0xFFFF
    ctx->pc = 0x4a19bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x4a19c0: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x4a19c0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x4a19c4: 0x8ee20018  lw          $v0, 0x18($s7)
    ctx->pc = 0x4a19c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 24)));
    // 0x4a19c8: 0x521024  and         $v0, $v0, $s2
    ctx->pc = 0x4a19c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 18));
    // 0x4a19cc: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4a19ccu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4a19d0: 0x521025  or          $v0, $v0, $s2
    ctx->pc = 0x4a19d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
    // 0x4a19d4: 0xe23824  and         $a3, $a3, $v0
    ctx->pc = 0x4a19d4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 2));
    // 0x4a19d8: 0xae270000  sw          $a3, 0x0($s1)
    ctx->pc = 0x4a19d8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 7));
    // 0x4a19dc: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x4a19dcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x4a19e0: 0x8ea20008  lw          $v0, 0x8($s5)
    ctx->pc = 0x4a19e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
    // 0x4a19e4: 0x86230000  lh          $v1, 0x0($s1)
    ctx->pc = 0x4a19e4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4a19e8: 0x521024  and         $v0, $v0, $s2
    ctx->pc = 0x4a19e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 18));
    // 0x4a19ec: 0xaec50000  sw          $a1, 0x0($s6)
    ctx->pc = 0x4a19ecu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 5));
    // 0x4a19f0: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4a19f0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4a19f4: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x4a19f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x4a19f8: 0x721825  or          $v1, $v1, $s2
    ctx->pc = 0x4a19f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 18));
    // 0x4a19fc: 0xe33824  and         $a3, $a3, $v1
    ctx->pc = 0x4a19fcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 3));
    // 0x4a1a00: 0x30e2ffff  andi        $v0, $a3, 0xFFFF
    ctx->pc = 0x4a1a00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)65535);
    // 0x4a1a04: 0xae270000  sw          $a3, 0x0($s1)
    ctx->pc = 0x4a1a04u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 7));
    // 0x4a1a08: 0x1024025  or          $t0, $t0, $v0
    ctx->pc = 0x4a1a08u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
    // 0x4a1a0c: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x4a1a0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a1a10: 0xc12a21e  jal         func_4A8878
    ctx->pc = 0x4A1A10u;
    SET_GPR_U32(ctx, 31, 0x4A1A18u);
    ctx->pc = 0x4A1A14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A1A10u;
    // 0x4a1a14: 0xae880000  sw          $t0, 0x0($s4) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A8878u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A8878u, 0x4A1A10u, 0x4A1A18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A1A18u;
label_4a1a18:
    // 0x4a1a18: 0x96620000  lhu         $v0, 0x0($s3)
    ctx->pc = 0x4a1a18u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4a1a1c: 0xa6a20022  sh          $v0, 0x22($s5)
    ctx->pc = 0x4a1a1cu;
    WRITE16(ADD32(GPR_U32(ctx, 21), 34), (uint16_t)GPR_U32(ctx, 2));
    // 0x4a1a20: 0xc12a198  jal         func_4A8660
    ctx->pc = 0x4A1A20u;
    SET_GPR_U32(ctx, 31, 0x4A1A28u);
    ctx->pc = 0x4A1A24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A1A20u;
    // 0x4a1a24: 0x86640000  lh          $a0, 0x0($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A8660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A8660u, 0x4A1A20u, 0x4A1A28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A1A28u;
label_4a1a28:
    // 0x4a1a28: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x4a1a28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4a1a2c: 0x3045ffff  andi        $a1, $v0, 0xFFFF
    ctx->pc = 0x4a1a2cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x4a1a30: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x4a1a30u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x4a1a34: 0x721824  and         $v1, $v1, $s2
    ctx->pc = 0x4a1a34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 18));
    // 0x4a1a38: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4a1a38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a1a3c: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x4a1a3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x4a1a40: 0xc13e49c  jal         func_4F9270
    ctx->pc = 0x4A1A40u;
    SET_GPR_U32(ctx, 31, 0x4A1A48u);
    ctx->pc = 0x4A1A44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A1A40u;
    // 0x4a1a44: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F9270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F9270u, 0x4A1A40u, 0x4A1A48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A1A48u;
label_4a1a48:
    // 0x4a1a48: 0x86220000  lh          $v0, 0x0($s1)
    ctx->pc = 0x4a1a48u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4a1a4c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x4a1a4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4a1a50: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4a1a50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a1a54: 0x21023  negu        $v0, $v0
    ctx->pc = 0x4a1a54u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x4a1a58: 0x86860000  lh          $a2, 0x0($s4)
    ctx->pc = 0x4a1a58u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4a1a5c: 0x521025  or          $v0, $v0, $s2
    ctx->pc = 0x4a1a5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
    // 0x4a1a60: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4a1a60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4a1a64: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4a1a64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4a1a68: 0x86c50000  lh          $a1, 0x0($s6)
    ctx->pc = 0x4a1a68u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x4a1a6c: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x4a1a6cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x4a1a70: 0x86020000  lh          $v0, 0x0($s0)
    ctx->pc = 0x4a1a70u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4a1a74: 0x86230000  lh          $v1, 0x0($s1)
    ctx->pc = 0x4a1a74u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4a1a78: 0x461018  mult        $v0, $v0, $a2
    ctx->pc = 0x4a1a78u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x4a1a7c: 0x70651818  mult1       $v1, $v1, $a1
    ctx->pc = 0x4a1a7cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 5); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x4a1a80: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x4a1a80u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x4a1a84: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x4a1a84u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x4a1a88: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x4a1a88u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x4a1a8c: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x4a1a8cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x4a1a90: 0xc13e49c  jal         func_4F9270
    ctx->pc = 0x4A1A90u;
    SET_GPR_U32(ctx, 31, 0x4A1A98u);
    ctx->pc = 0x4A1A94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A1A90u;
    // 0x4a1a94: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F9270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F9270u, 0x4A1A90u, 0x4A1A98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A1A98u;
label_4a1a98:
    // 0x4a1a98: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x4a1a98u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4a1a9c: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x4a1a9cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4a1aa0: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x4a1aa0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a1aa4: 0xb22824  and         $a1, $a1, $s2
    ctx->pc = 0x4a1aa4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 18));
    // 0x4a1aa8: 0x8e670000  lw          $a3, 0x0($s3)
    ctx->pc = 0x4a1aa8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4a1aac: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x4a1aacu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x4a1ab0: 0xae250000  sw          $a1, 0x0($s1)
    ctx->pc = 0x4a1ab0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 5));
    // 0x4a1ab4: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x4a1ab4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x4a1ab8: 0x8ee20014  lw          $v0, 0x14($s7)
    ctx->pc = 0x4a1ab8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 20)));
    // 0x4a1abc: 0x521024  and         $v0, $v0, $s2
    ctx->pc = 0x4a1abcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 18));
    // 0x4a1ac0: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4a1ac0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4a1ac4: 0x521025  or          $v0, $v0, $s2
    ctx->pc = 0x4a1ac4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
    // 0x4a1ac8: 0xe23824  and         $a3, $a3, $v0
    ctx->pc = 0x4a1ac8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 2));
    // 0x4a1acc: 0xae670000  sw          $a3, 0x0($s3)
    ctx->pc = 0x4a1accu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 7));
    // 0x4a1ad0: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x4a1ad0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x4a1ad4: 0x8ea20004  lw          $v0, 0x4($s5)
    ctx->pc = 0x4a1ad4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x4a1ad8: 0x86630000  lh          $v1, 0x0($s3)
    ctx->pc = 0x4a1ad8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4a1adc: 0x521024  and         $v0, $v0, $s2
    ctx->pc = 0x4a1adcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 18));
    // 0x4a1ae0: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4a1ae0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4a1ae4: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x4a1ae4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x4a1ae8: 0x721825  or          $v1, $v1, $s2
    ctx->pc = 0x4a1ae8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 18));
    // 0x4a1aec: 0xe33824  and         $a3, $a3, $v1
    ctx->pc = 0x4a1aecu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 3));
    // 0x4a1af0: 0xae670000  sw          $a3, 0x0($s3)
    ctx->pc = 0x4a1af0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 7));
    // 0x4a1af4: 0xc12a21e  jal         func_4A8878
    ctx->pc = 0x4A1AF4u;
    SET_GPR_U32(ctx, 31, 0x4A1AFCu);
    ctx->pc = 0x4A1AF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A1AF4u;
    // 0x4a1af8: 0xe0202d  daddu       $a0, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A8878u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A8878u, 0x4A1AF4u, 0x4A1AFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A1AFCu;
label_4a1afc:
    // 0x4a1afc: 0x96620000  lhu         $v0, 0x0($s3)
    ctx->pc = 0x4a1afcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4a1b00: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4a1b00u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4a1b04: 0xa6a0002c  sh          $zero, 0x2C($s5)
    ctx->pc = 0x4a1b04u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 44), (uint16_t)GPR_U32(ctx, 0));
    // 0x4a1b08: 0xa6a2001c  sh          $v0, 0x1C($s5)
    ctx->pc = 0x4a1b08u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 28), (uint16_t)GPR_U32(ctx, 2));
    // 0x4a1b0c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4a1b0cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4a1b10: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4a1b10u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4a1b14: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x4a1b14u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4a1b18: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x4a1b18u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4a1b1c: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x4a1b1cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x4a1b20: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x4a1b20u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4a1b24: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x4a1b24u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x4a1b28: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x4a1b28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4a1b2c: 0x3e00008  jr          $ra
    ctx->pc = 0x4A1B2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4A1B30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A1B2Cu;
        // 0x4a1b30: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4A1B2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4A1B34u;
    // 0x4a1b34: 0x0  nop
    ctx->pc = 0x4a1b34u;
    // NOP
    ctx->pc = 0x4a1b38u;
}
