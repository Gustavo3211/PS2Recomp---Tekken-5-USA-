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

// Function: sub_004EBE60
// Address: 0x4ebe60 - 0x4ec228
void sub_004EBE60_0x4ebe60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004EBE60_0x4ebe60");
#endif

    switch (ctx->pc) {
        case 0x4ebf08u: goto label_4ebf08;
        case 0x4ebf64u: goto label_4ebf64;
        case 0x4ec1dcu: goto label_4ec1dc;
        case 0x4ec1ecu: goto label_4ec1ec;
        default: break;
    }

    ctx->pc = 0x4ebe60u;

    // 0x4ebe60: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x4ebe60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x4ebe64: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4ebe64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4ebe68: 0x3c10007f  lui         $s0, 0x7F
    ctx->pc = 0x4ebe68u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)127 << 16));
    // 0x4ebe6c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x4ebe6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x4ebe70: 0x3c11ffff  lui         $s1, 0xFFFF
    ctx->pc = 0x4ebe70u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)65535 << 16));
    // 0x4ebe74: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x4ebe74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x4ebe78: 0x3c12007f  lui         $s2, 0x7F
    ctx->pc = 0x4ebe78u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)127 << 16));
    // 0x4ebe7c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x4ebe7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x4ebe80: 0x3c13007f  lui         $s3, 0x7F
    ctx->pc = 0x4ebe80u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)127 << 16));
    // 0x4ebe84: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x4ebe84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x4ebe88: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x4ebe88u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ebe8c: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x4ebe8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x4ebe90: 0x3c150073  lui         $s5, 0x73
    ctx->pc = 0x4ebe90u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)115 << 16));
    // 0x4ebe94: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x4ebe94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x4ebe98: 0x261011e8  addiu       $s0, $s0, 0x11E8
    ctx->pc = 0x4ebe98u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4584));
    // 0x4ebe9c: 0x26b5d680  addiu       $s5, $s5, -0x2980
    ctx->pc = 0x4ebe9cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294956672));
    // 0x4ebea0: 0x267311f4  addiu       $s3, $s3, 0x11F4
    ctx->pc = 0x4ebea0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4596));
    // 0x4ebea4: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x4ebea4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7F11E8u));
    // 0x4ebea8: 0x265211f8  addiu       $s2, $s2, 0x11F8
    ctx->pc = 0x4ebea8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4600));
    // 0x4ebeac: 0x86a223f8  lh          $v0, 0x23F8($s5)
    ctx->pc = 0x4ebeacu;
    SET_GPR_S32(ctx, 2, (int16_t)FAST_READ16(0x72FA78u));
    // 0x4ebeb0: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4ebeb0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4ebeb4: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x4ebeb4u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x7F11F4u));
    // 0x4ebeb8: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x4ebeb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x4ebebc: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4ebebcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4ebec0: 0xb12824  and         $a1, $a1, $s1
    ctx->pc = 0x4ebec0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 17));
    // 0x4ebec4: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4ebec4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4ebec8: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4ebec8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4ebecc: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x4ebeccu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4ebed0: 0x3042007f  andi        $v0, $v0, 0x7F
    ctx->pc = 0x4ebed0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)127);
    // 0x4ebed4: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x4ebed4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x4ebed8: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4ebed8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4ebedc: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4ebedcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4ebee0: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4ebee0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4ebee4: 0x86020000  lh          $v0, 0x0($s0)
    ctx->pc = 0x4ebee4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4ebee8: 0x2442ffc0  addiu       $v0, $v0, -0x40
    ctx->pc = 0x4ebee8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967232));
    // 0x4ebeec: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x4ebeecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x4ebef0: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4ebef0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4ebef4: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x4ebef4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x4ebef8: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4ebef8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4ebefc: 0xa42825  or          $a1, $a1, $a0
    ctx->pc = 0x4ebefcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x4ebf00: 0xc12b5b0  jal         func_4AD6C0
    ctx->pc = 0x4EBF00u;
    SET_GPR_U32(ctx, 31, 0x4EBF08u);
    ctx->pc = 0x4EBF04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4EBF00u;
    // 0x4ebf04: 0xae650000  sw          $a1, 0x0($s3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AD6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AD6C0u, 0x4EBF00u, 0x4EBF08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4EBF08u;
label_4ebf08:
    // 0x4ebf08: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x4ebf08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4ebf0c: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x4ebf0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x4ebf10: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x4ebf10u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4ebf14: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4ebf14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4ebf18: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4ebf18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4ebf1c: 0xb12824  and         $a1, $a1, $s1
    ctx->pc = 0x4ebf1cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 17));
    // 0x4ebf20: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4ebf20u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4ebf24: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4ebf24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4ebf28: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x4ebf28u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4ebf2c: 0x3042007f  andi        $v0, $v0, 0x7F
    ctx->pc = 0x4ebf2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)127);
    // 0x4ebf30: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x4ebf30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x4ebf34: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4ebf34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4ebf38: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4ebf38u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4ebf3c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4ebf3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4ebf40: 0x86020000  lh          $v0, 0x0($s0)
    ctx->pc = 0x4ebf40u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4ebf44: 0x2442ffc0  addiu       $v0, $v0, -0x40
    ctx->pc = 0x4ebf44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967232));
    // 0x4ebf48: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x4ebf48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x4ebf4c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4ebf4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4ebf50: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x4ebf50u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x4ebf54: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4ebf54u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4ebf58: 0xa42825  or          $a1, $a1, $a0
    ctx->pc = 0x4ebf58u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x4ebf5c: 0xc12b5b0  jal         func_4AD6C0
    ctx->pc = 0x4EBF5Cu;
    SET_GPR_U32(ctx, 31, 0x4EBF64u);
    ctx->pc = 0x4EBF60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4EBF5Cu;
    // 0x4ebf60: 0xae450000  sw          $a1, 0x0($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AD6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AD6C0u, 0x4EBF5Cu, 0x4EBF64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4EBF64u;
label_4ebf64:
    // 0x4ebf64: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x4ebf64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4ebf68: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x4ebf68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x4ebf6c: 0x3c0c007f  lui         $t4, 0x7F
    ctx->pc = 0x4ebf6cu;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)127 << 16));
    // 0x4ebf70: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4ebf70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4ebf74: 0x258c11fc  addiu       $t4, $t4, 0x11FC
    ctx->pc = 0x4ebf74u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4604));
    // 0x4ebf78: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4ebf78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4ebf7c: 0x8d860000  lw          $a2, 0x0($t4)
    ctx->pc = 0x4ebf7cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x4ebf80: 0x8e670000  lw          $a3, 0x0($s3)
    ctx->pc = 0x4ebf80u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4ebf84: 0x3c04007f  lui         $a0, 0x7F
    ctx->pc = 0x4ebf84u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)127 << 16));
    // 0x4ebf88: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4ebf88u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4ebf8c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4ebf8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4ebf90: 0xd13024  and         $a2, $a2, $s1
    ctx->pc = 0x4ebf90u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 17));
    // 0x4ebf94: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x4ebf94u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x4ebf98: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x4ebf98u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4ebf9c: 0x26ae249c  addiu       $t6, $s5, 0x249C
    ctx->pc = 0x4ebf9cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 21), 9372));
    // 0x4ebfa0: 0x8c891208  lw          $t1, 0x1208($a0)
    ctx->pc = 0x4ebfa0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4616)));
    // 0x4ebfa4: 0x26ad2494  addiu       $t5, $s5, 0x2494
    ctx->pc = 0x4ebfa4u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 21), 9364));
    // 0x4ebfa8: 0x3042007f  andi        $v0, $v0, 0x7F
    ctx->pc = 0x4ebfa8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)127);
    // 0x4ebfac: 0x8e480000  lw          $t0, 0x0($s2)
    ctx->pc = 0x4ebfacu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4ebfb0: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x4ebfb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x4ebfb4: 0x26b52498  addiu       $s5, $s5, 0x2498
    ctx->pc = 0x4ebfb4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 9368));
    // 0x4ebfb8: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4ebfb8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4ebfbc: 0x3508ffff  ori         $t0, $t0, 0xFFFF
    ctx->pc = 0x4ebfbcu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)65535);
    // 0x4ebfc0: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4ebfc0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4ebfc4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4ebfc4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4ebfc8: 0x86020000  lh          $v0, 0x0($s0)
    ctx->pc = 0x4ebfc8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4ebfcc: 0x2442ffc0  addiu       $v0, $v0, -0x40
    ctx->pc = 0x4ebfccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967232));
    // 0x4ebfd0: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x4ebfd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x4ebfd4: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4ebfd4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4ebfd8: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x4ebfd8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x4ebfdc: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4ebfdcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4ebfe0: 0xc43025  or          $a2, $a2, $a0
    ctx->pc = 0x4ebfe0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 4));
    // 0x4ebfe4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4ebfe4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4ebfe8: 0xad860000  sw          $a2, 0x0($t4)
    ctx->pc = 0x4ebfe8u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 6));
    // 0x4ebfec: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x4ebfecu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x4ebff0: 0x868201be  lh          $v0, 0x1BE($s4)
    ctx->pc = 0x4ebff0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 446)));
    // 0x4ebff4: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x4ebff4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x4ebff8: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4ebff8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4ebffc: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4ebffcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4ec000: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4ec000u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4ec004: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x4ec004u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4ec008: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x4ec008u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x4ec00c: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x4ec00cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x4ec010: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4ec010u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4ec014: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4ec014u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4ec018: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4ec018u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4ec01c: 0x86040000  lh          $a0, 0x0($s0)
    ctx->pc = 0x4ec01cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4ec020: 0x41040  sll         $v0, $a0, 1
    ctx->pc = 0x4ec020u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x4ec024: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x4ec024u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x4ec028: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x4ec028u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x4ec02c: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x4ec02cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x4ec030: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4ec030u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4ec034: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4ec034u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4ec038: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x4ec038u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4ec03c: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4ec03cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4ec040: 0x21443  sra         $v0, $v0, 17
    ctx->pc = 0x4ec040u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 17));
    // 0x4ec044: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x4ec044u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x4ec048: 0x3c010055  lui         $at, 0x55
    ctx->pc = 0x4ec048u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)85 << 16));
    // 0x4ec04c: 0x242180a8  addiu       $at, $at, -0x7F58
    ctx->pc = 0x4ec04cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), 4294934696));
    // 0x4ec050: 0x221021  addu        $v0, $at, $v0
    ctx->pc = 0x4ec050u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
    // 0x4ec054: 0x84430000  lh          $v1, 0x0($v0)
    ctx->pc = 0x4ec054u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4ec058: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x4ec058u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x4ec05c: 0x84440002  lh          $a0, 0x2($v0)
    ctx->pc = 0x4ec05cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x4ec060: 0x84450000  lh          $a1, 0x0($v0)
    ctx->pc = 0x4ec060u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4ec064: 0x711825  or          $v1, $v1, $s1
    ctx->pc = 0x4ec064u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 17));
    // 0x4ec068: 0x912025  or          $a0, $a0, $s1
    ctx->pc = 0x4ec068u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 17));
    // 0x4ec06c: 0xe33824  and         $a3, $a3, $v1
    ctx->pc = 0x4ec06cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 3));
    // 0x4ec070: 0xb12825  or          $a1, $a1, $s1
    ctx->pc = 0x4ec070u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 17));
    // 0x4ec074: 0xc43024  and         $a2, $a2, $a0
    ctx->pc = 0x4ec074u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 4));
    // 0x4ec078: 0x1054024  and         $t0, $t0, $a1
    ctx->pc = 0x4ec078u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & GPR_U64(ctx, 5));
    // 0x4ec07c: 0xae670000  sw          $a3, 0x0($s3)
    ctx->pc = 0x4ec07cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 7));
    // 0x4ec080: 0xae480000  sw          $t0, 0x0($s2)
    ctx->pc = 0x4ec080u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 8));
    // 0x4ec084: 0x3508ffff  ori         $t0, $t0, 0xFFFF
    ctx->pc = 0x4ec084u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)65535);
    // 0x4ec088: 0xad860000  sw          $a2, 0x0($t4)
    ctx->pc = 0x4ec088u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 6));
    // 0x4ec08c: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x4ec08cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x4ec090: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x4ec090u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x4ec094: 0x8d220010  lw          $v0, 0x10($t1)
    ctx->pc = 0x4ec094u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 16)));
    // 0x4ec098: 0x86630000  lh          $v1, 0x0($s3)
    ctx->pc = 0x4ec098u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4ec09c: 0x511024  and         $v0, $v0, $s1
    ctx->pc = 0x4ec09cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 17));
    // 0x4ec0a0: 0x85850000  lh          $a1, 0x0($t4)
    ctx->pc = 0x4ec0a0u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x4ec0a4: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4ec0a4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4ec0a8: 0x86440000  lh          $a0, 0x0($s2)
    ctx->pc = 0x4ec0a8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4ec0ac: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x4ec0acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x4ec0b0: 0x711825  or          $v1, $v1, $s1
    ctx->pc = 0x4ec0b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 17));
    // 0x4ec0b4: 0xe33824  and         $a3, $a3, $v1
    ctx->pc = 0x4ec0b4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 3));
    // 0x4ec0b8: 0xae670000  sw          $a3, 0x0($s3)
    ctx->pc = 0x4ec0b8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 7));
    // 0x4ec0bc: 0x8d220014  lw          $v0, 0x14($t1)
    ctx->pc = 0x4ec0bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 20)));
    // 0x4ec0c0: 0x96630000  lhu         $v1, 0x0($s3)
    ctx->pc = 0x4ec0c0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4ec0c4: 0x511024  and         $v0, $v0, $s1
    ctx->pc = 0x4ec0c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 17));
    // 0x4ec0c8: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4ec0c8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4ec0cc: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x4ec0ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x4ec0d0: 0x912025  or          $a0, $a0, $s1
    ctx->pc = 0x4ec0d0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 17));
    // 0x4ec0d4: 0x1044024  and         $t0, $t0, $a0
    ctx->pc = 0x4ec0d4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & GPR_U64(ctx, 4));
    // 0x4ec0d8: 0xae480000  sw          $t0, 0x0($s2)
    ctx->pc = 0x4ec0d8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 8));
    // 0x4ec0dc: 0x8d220018  lw          $v0, 0x18($t1)
    ctx->pc = 0x4ec0dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 24)));
    // 0x4ec0e0: 0x511024  and         $v0, $v0, $s1
    ctx->pc = 0x4ec0e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 17));
    // 0x4ec0e4: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4ec0e4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4ec0e8: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x4ec0e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x4ec0ec: 0xb12825  or          $a1, $a1, $s1
    ctx->pc = 0x4ec0ecu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 17));
    // 0x4ec0f0: 0xc53024  and         $a2, $a2, $a1
    ctx->pc = 0x4ec0f0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 5));
    // 0x4ec0f4: 0xad860000  sw          $a2, 0x0($t4)
    ctx->pc = 0x4ec0f4u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 6));
    // 0x4ec0f8: 0xa683011a  sh          $v1, 0x11A($s4)
    ctx->pc = 0x4ec0f8u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 282), (uint16_t)GPR_U32(ctx, 3));
    // 0x4ec0fc: 0x8e840010  lw          $a0, 0x10($s4)
    ctx->pc = 0x4ec0fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x4ec100: 0x96420000  lhu         $v0, 0x0($s2)
    ctx->pc = 0x4ec100u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4ec104: 0x912024  and         $a0, $a0, $s1
    ctx->pc = 0x4ec104u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 17));
    // 0x4ec108: 0xa682011e  sh          $v0, 0x11E($s4)
    ctx->pc = 0x4ec108u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 286), (uint16_t)GPR_U32(ctx, 2));
    // 0x4ec10c: 0x42403  sra         $a0, $a0, 16
    ctx->pc = 0x4ec10cu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
    // 0x4ec110: 0x95830000  lhu         $v1, 0x0($t4)
    ctx->pc = 0x4ec110u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x4ec114: 0xa6830122  sh          $v1, 0x122($s4)
    ctx->pc = 0x4ec114u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 290), (uint16_t)GPR_U32(ctx, 3));
    // 0x4ec118: 0x86620000  lh          $v0, 0x0($s3)
    ctx->pc = 0x4ec118u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4ec11c: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x4ec11cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4ec120: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x4ec120u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x4ec124: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x4ec124u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4ec128: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x4ec128u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x4ec12c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4ec12cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4ec130: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4ec130u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4ec134: 0x86450000  lh          $a1, 0x0($s2)
    ctx->pc = 0x4ec134u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4ec138: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x4ec138u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    // 0x4ec13c: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4ec13cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x4ec140: 0x8e820014  lw          $v0, 0x14($s4)
    ctx->pc = 0x4ec140u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
    // 0x4ec144: 0x858a0000  lh          $t2, 0x0($t4)
    ctx->pc = 0x4ec144u;
    SET_GPR_S32(ctx, 10, (int16_t)READ16(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x4ec148: 0x511024  and         $v0, $v0, $s1
    ctx->pc = 0x4ec148u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 17));
    // 0x4ec14c: 0x8d8b0000  lw          $t3, 0x0($t4)
    ctx->pc = 0x4ec14cu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x4ec150: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4ec150u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4ec154: 0x8da70000  lw          $a3, 0x0($t5)
    ctx->pc = 0x4ec154u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x4ec158: 0xa22823  subu        $a1, $a1, $v0
    ctx->pc = 0x4ec158u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x4ec15c: 0x8dc90000  lw          $t1, 0x0($t6)
    ctx->pc = 0x4ec15cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x4ec160: 0xb12825  or          $a1, $a1, $s1
    ctx->pc = 0x4ec160u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 17));
    // 0x4ec164: 0x96660000  lhu         $a2, 0x0($s3)
    ctx->pc = 0x4ec164u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4ec168: 0x852024  and         $a0, $a0, $a1
    ctx->pc = 0x4ec168u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 5));
    // 0x4ec16c: 0x8ea80000  lw          $t0, 0x0($s5)
    ctx->pc = 0x4ec16cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x4ec170: 0xae440000  sw          $a0, 0x0($s2)
    ctx->pc = 0x4ec170u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 4));
    // 0x4ec174: 0x63400  sll         $a2, $a2, 16
    ctx->pc = 0x4ec174u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
    // 0x4ec178: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x4ec178u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x4ec17c: 0xf13825  or          $a3, $a3, $s1
    ctx->pc = 0x4ec17cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 17));
    // 0x4ec180: 0x8e820018  lw          $v0, 0x18($s4)
    ctx->pc = 0x4ec180u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 24)));
    // 0x4ec184: 0x1114025  or          $t0, $t0, $s1
    ctx->pc = 0x4ec184u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 17));
    // 0x4ec188: 0x96430000  lhu         $v1, 0x0($s2)
    ctx->pc = 0x4ec188u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4ec18c: 0x356bffff  ori         $t3, $t3, 0xFFFF
    ctx->pc = 0x4ec18cu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | (uint64_t)(uint16_t)65535);
    // 0x4ec190: 0x511024  and         $v0, $v0, $s1
    ctx->pc = 0x4ec190u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 17));
    // 0x4ec194: 0xe63824  and         $a3, $a3, $a2
    ctx->pc = 0x4ec194u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 6));
    // 0x4ec198: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4ec198u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4ec19c: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x4ec19cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x4ec1a0: 0x1425023  subu        $t2, $t2, $v0
    ctx->pc = 0x4ec1a0u;
    SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 2)));
    // 0x4ec1a4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4ec1a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4ec1a8: 0x1515025  or          $t2, $t2, $s1
    ctx->pc = 0x4ec1a8u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | GPR_U64(ctx, 17));
    // 0x4ec1ac: 0x1034024  and         $t0, $t0, $v1
    ctx->pc = 0x4ec1acu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & GPR_U64(ctx, 3));
    // 0x4ec1b0: 0x16a5824  and         $t3, $t3, $t2
    ctx->pc = 0x4ec1b0u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) & GPR_U64(ctx, 10));
    // 0x4ec1b4: 0xada70000  sw          $a3, 0x0($t5)
    ctx->pc = 0x4ec1b4u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 0), GPR_U32(ctx, 7));
    // 0x4ec1b8: 0xad8b0000  sw          $t3, 0x0($t4)
    ctx->pc = 0x4ec1b8u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 11));
    // 0x4ec1bc: 0x1314825  or          $t1, $t1, $s1
    ctx->pc = 0x4ec1bcu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 17));
    // 0x4ec1c0: 0xaea80000  sw          $t0, 0x0($s5)
    ctx->pc = 0x4ec1c0u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 8));
    // 0x4ec1c4: 0x95820000  lhu         $v0, 0x0($t4)
    ctx->pc = 0x4ec1c4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x4ec1c8: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4ec1c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4ec1cc: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4ec1ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4ec1d0: 0x1224824  and         $t1, $t1, $v0
    ctx->pc = 0x4ec1d0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) & GPR_U64(ctx, 2));
    // 0x4ec1d4: 0xc12b8da  jal         func_4AE368
    ctx->pc = 0x4EC1D4u;
    SET_GPR_U32(ctx, 31, 0x4EC1DCu);
    ctx->pc = 0x4EC1D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4EC1D4u;
    // 0x4ec1d8: 0xadc90000  sw          $t1, 0x0($t6) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 14), 0), GPR_U32(ctx, 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AE368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AE368u, 0x4EC1D4u, 0x4EC1DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4EC1DCu;
label_4ec1dc:
    // 0x4ec1dc: 0x24028000  addiu       $v0, $zero, -0x8000
    ctx->pc = 0x4ec1dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294934528));
    // 0x4ec1e0: 0xa682015a  sh          $v0, 0x15A($s4)
    ctx->pc = 0x4ec1e0u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 346), (uint16_t)GPR_U32(ctx, 2));
    // 0x4ec1e4: 0xc12b95c  jal         func_4AE570
    ctx->pc = 0x4EC1E4u;
    SET_GPR_U32(ctx, 31, 0x4EC1ECu);
    ctx->pc = 0x4EC1E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4EC1E4u;
    // 0x4ec1e8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AE570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AE570u, 0x4EC1E4u, 0x4EC1ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4EC1ECu;
label_4ec1ec:
    // 0x4ec1ec: 0x26830164  addiu       $v1, $s4, 0x164
    ctx->pc = 0x4ec1ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 356));
    // 0x4ec1f0: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x4ec1f0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4ec1f4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x4ec1f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ec1f8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4ec1f8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4ec1fc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4ec1fcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4ec200: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x4ec200u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x4ec204: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4ec204u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4ec208: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x4ec208u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4ec20c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x4ec20cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4ec210: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x4ec210u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x4ec214: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x4ec214u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4ec218: 0xa4620000  sh          $v0, 0x0($v1)
    ctx->pc = 0x4ec218u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4ec21c: 0x813b08a  j           func_4EC228
    ctx->pc = 0x4EC21Cu;
    ctx->pc = 0x4EC220u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4EC21Cu;
    // 0x4ec220: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4EC228u;
    sub_004EC228_0x4ec228(rdram, ctx, runtime); return;
    ctx->pc = 0x4EC224u;
    // 0x4ec224: 0x0  nop
    ctx->pc = 0x4ec224u;
    // NOP
    ctx->pc = 0x4ec228u;
}
