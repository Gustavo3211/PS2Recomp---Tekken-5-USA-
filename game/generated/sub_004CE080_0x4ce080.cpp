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

// Function: sub_004CE080
// Address: 0x4ce080 - 0x4ce218
void sub_004CE080_0x4ce080(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004CE080_0x4ce080");
#endif

    switch (ctx->pc) {
        case 0x4ce0a8u: goto label_4ce0a8;
        case 0x4ce164u: goto label_4ce164;
        case 0x4ce1d4u: goto label_4ce1d4;
        case 0x4ce1dcu: goto label_4ce1dc;
        case 0x4ce1e4u: goto label_4ce1e4;
        default: break;
    }

    ctx->pc = 0x4ce080u;

    // 0x4ce080: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4ce080u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4ce084: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x4ce084u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ce088: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4ce088u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4ce08c: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x4ce08cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x4ce090: 0xa46201bc  sh          $v0, 0x1BC($v1)
    ctx->pc = 0x4ce090u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 444), (uint16_t)GPR_U32(ctx, 2));
    // 0x4ce094: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4ce094u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4ce098: 0xa460015e  sh          $zero, 0x15E($v1)
    ctx->pc = 0x4ce098u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 350), (uint16_t)GPR_U32(ctx, 0));
    // 0x4ce09c: 0x813382a  j           func_4CE0A8
    ctx->pc = 0x4CE09Cu;
    ctx->pc = 0x4CE0A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4CE09Cu;
    // 0x4ce0a0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4CE0A8u;
    goto label_4ce0a8;
    ctx->pc = 0x4CE0A4u;
    // 0x4ce0a4: 0x0  nop
    ctx->pc = 0x4ce0a4u;
    // NOP
label_4ce0a8:
    // 0x4ce0a8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x4ce0a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x4ce0ac: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4ce0acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4ce0b0: 0x3c10ffff  lui         $s0, 0xFFFF
    ctx->pc = 0x4ce0b0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)65535 << 16));
    // 0x4ce0b4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x4ce0b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x4ce0b8: 0x3c11007f  lui         $s1, 0x7F
    ctx->pc = 0x4ce0b8u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)127 << 16));
    // 0x4ce0bc: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x4ce0bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x4ce0c0: 0x3c12007f  lui         $s2, 0x7F
    ctx->pc = 0x4ce0c0u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)127 << 16));
    // 0x4ce0c4: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x4ce0c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x4ce0c8: 0x3c13007f  lui         $s3, 0x7F
    ctx->pc = 0x4ce0c8u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)127 << 16));
    // 0x4ce0cc: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x4ce0ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x4ce0d0: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x4ce0d0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ce0d4: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x4ce0d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x4ce0d8: 0x26950124  addiu       $s5, $s4, 0x124
    ctx->pc = 0x4ce0d8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 20), 292));
    // 0x4ce0dc: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x4ce0dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x4ce0e0: 0x2696012c  addiu       $s6, $s4, 0x12C
    ctx->pc = 0x4ce0e0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 20), 300));
    // 0x4ce0e4: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x4ce0e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x4ce0e8: 0x26970128  addiu       $s7, $s4, 0x128
    ctx->pc = 0x4ce0e8u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 20), 296));
    // 0x4ce0ec: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x4ce0ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x4ce0f0: 0x26310f94  addiu       $s1, $s1, 0xF94
    ctx->pc = 0x4ce0f0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 3988));
    // 0x4ce0f4: 0x26730f98  addiu       $s3, $s3, 0xF98
    ctx->pc = 0x4ce0f4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 3992));
    // 0x4ce0f8: 0x26520f9c  addiu       $s2, $s2, 0xF9C
    ctx->pc = 0x4ce0f8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 3996));
    // 0x4ce0fc: 0x86a30002  lh          $v1, 0x2($s5)
    ctx->pc = 0x4ce0fcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 2)));
    // 0x4ce100: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x4ce100u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ce104: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x4ce104u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x7F0F94u));
    // 0x4ce108: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x4ce108u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ce10c: 0x701825  or          $v1, $v1, $s0
    ctx->pc = 0x4ce10cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 16));
    // 0x4ce110: 0x8e670000  lw          $a3, 0x0($s3)
    ctx->pc = 0x4ce110u;
    SET_GPR_S32(ctx, 7, (int32_t)FAST_READ32(0x7F0F98u));
    // 0x4ce114: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4ce114u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4ce118: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4ce118u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ce11c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4ce11cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x4ce120: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x4ce120u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x4ce124: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x4ce124u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x4ce128: 0x8ee20000  lw          $v0, 0x0($s7)
    ctx->pc = 0x4ce128u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x4ce12c: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x4ce12cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4ce130: 0x501024  and         $v0, $v0, $s0
    ctx->pc = 0x4ce130u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 16));
    // 0x4ce134: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4ce134u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4ce138: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4ce138u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4ce13c: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x4ce13cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x4ce140: 0xe23824  and         $a3, $a3, $v0
    ctx->pc = 0x4ce140u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 2));
    // 0x4ce144: 0xae670000  sw          $a3, 0x0($s3)
    ctx->pc = 0x4ce144u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 7));
    // 0x4ce148: 0x8ec20000  lw          $v0, 0x0($s6)
    ctx->pc = 0x4ce148u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x4ce14c: 0x501024  and         $v0, $v0, $s0
    ctx->pc = 0x4ce14cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 16));
    // 0x4ce150: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4ce150u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4ce154: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x4ce154u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x4ce158: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4ce158u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4ce15c: 0xc12a8b8  jal         func_4AA2E0
    ctx->pc = 0x4CE15Cu;
    SET_GPR_U32(ctx, 31, 0x4CE164u);
    ctx->pc = 0x4CE160u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4CE15Cu;
    // 0x4ce160: 0xae430000  sw          $v1, 0x0($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AA2E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AA2E0u, 0x4CE15Cu, 0x4CE164u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4CE164u;
label_4ce164:
    // 0x4ce164: 0x96220000  lhu         $v0, 0x0($s1)
    ctx->pc = 0x4ce164u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4ce168: 0x8ea30000  lw          $v1, 0x0($s5)
    ctx->pc = 0x4ce168u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x4ce16c: 0x3c040073  lui         $a0, 0x73
    ctx->pc = 0x4ce16cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)115 << 16));
    // 0x4ce170: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4ce170u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4ce174: 0x2484d680  addiu       $a0, $a0, -0x2980
    ctx->pc = 0x4ce174u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294956672));
    // 0x4ce178: 0x701825  or          $v1, $v1, $s0
    ctx->pc = 0x4ce178u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 16));
    // 0x4ce17c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4ce17cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4ce180: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4ce180u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4ce184: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x4ce184u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x4ce188: 0xaea30000  sw          $v1, 0x0($s5)
    ctx->pc = 0x4ce188u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 3));
    // 0x4ce18c: 0x96620000  lhu         $v0, 0x0($s3)
    ctx->pc = 0x4ce18cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4ce190: 0x8ee30000  lw          $v1, 0x0($s7)
    ctx->pc = 0x4ce190u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x4ce194: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4ce194u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4ce198: 0x701825  or          $v1, $v1, $s0
    ctx->pc = 0x4ce198u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 16));
    // 0x4ce19c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4ce19cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4ce1a0: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4ce1a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4ce1a4: 0xaee30000  sw          $v1, 0x0($s7)
    ctx->pc = 0x4ce1a4u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 3));
    // 0x4ce1a8: 0x96420000  lhu         $v0, 0x0($s2)
    ctx->pc = 0x4ce1a8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4ce1ac: 0x8ec30000  lw          $v1, 0x0($s6)
    ctx->pc = 0x4ce1acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x4ce1b0: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4ce1b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4ce1b4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4ce1b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4ce1b8: 0x701825  or          $v1, $v1, $s0
    ctx->pc = 0x4ce1b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 16));
    // 0x4ce1bc: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4ce1bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4ce1c0: 0xaec30000  sw          $v1, 0x0($s6)
    ctx->pc = 0x4ce1c0u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 3));
    // 0x4ce1c4: 0xa485232e  sh          $a1, 0x232E($a0)
    ctx->pc = 0x4ce1c4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 9006), (uint16_t)GPR_U32(ctx, 5));
    // 0x4ce1c8: 0xa48023c4  sh          $zero, 0x23C4($a0)
    ctx->pc = 0x4ce1c8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 9156), (uint16_t)GPR_U32(ctx, 0));
    // 0x4ce1cc: 0xc1297fa  jal         func_4A5FE8
    ctx->pc = 0x4CE1CCu;
    SET_GPR_U32(ctx, 31, 0x4CE1D4u);
    ctx->pc = 0x4CE1D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4CE1CCu;
    // 0x4ce1d0: 0xa480232c  sh          $zero, 0x232C($a0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 4), 9004), (uint16_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A5FE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A5FE8u, 0x4CE1CCu, 0x4CE1D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4CE1D4u;
label_4ce1d4:
    // 0x4ce1d4: 0xc13d772  jal         func_4F5DC8
    ctx->pc = 0x4CE1D4u;
    SET_GPR_U32(ctx, 31, 0x4CE1DCu);
    ctx->pc = 0x4CE1D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4CE1D4u;
    // 0x4ce1d8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F5DC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F5DC8u, 0x4CE1D4u, 0x4CE1DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4CE1DCu;
label_4ce1dc:
    // 0x4ce1dc: 0xc122efc  jal         func_48BBF0
    ctx->pc = 0x4CE1DCu;
    SET_GPR_U32(ctx, 31, 0x4CE1E4u);
    ctx->pc = 0x4CE1E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4CE1DCu;
    // 0x4ce1e0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48BBF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48BBF0u, 0x4CE1DCu, 0x4CE1E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4CE1E4u;
label_4ce1e4:
    // 0x4ce1e4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x4ce1e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ce1e8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4ce1e8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4ce1ec: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4ce1ecu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4ce1f0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4ce1f0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4ce1f4: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x4ce1f4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4ce1f8: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x4ce1f8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4ce1fc: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x4ce1fcu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x4ce200: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x4ce200u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4ce204: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x4ce204u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x4ce208: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x4ce208u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4ce20c: 0x812b62c  j           func_4AD8B0
    ctx->pc = 0x4CE20Cu;
    ctx->pc = 0x4CE210u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4CE20Cu;
    // 0x4ce210: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AD8B0u;
    sub_004AD8B0_0x4ad8b0(rdram, ctx, runtime); return;
    ctx->pc = 0x4CE214u;
    // 0x4ce214: 0x0  nop
    ctx->pc = 0x4ce214u;
    // NOP
    ctx->pc = 0x4ce218u;
}
