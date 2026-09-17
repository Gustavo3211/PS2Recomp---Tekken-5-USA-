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

// Function: sub_0029BE68
// Address: 0x29be68 - 0x29c058
void sub_0029BE68_0x29be68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029BE68_0x29be68");
#endif

    switch (ctx->pc) {
        case 0x29bec0u: goto label_29bec0;
        case 0x29bedcu: goto label_29bedc;
        case 0x29bef4u: goto label_29bef4;
        case 0x29bf08u: goto label_29bf08;
        case 0x29bf20u: goto label_29bf20;
        case 0x29bf3cu: goto label_29bf3c;
        case 0x29bf50u: goto label_29bf50;
        case 0x29bf64u: goto label_29bf64;
        case 0x29bf70u: goto label_29bf70;
        case 0x29bf88u: goto label_29bf88;
        case 0x29bf94u: goto label_29bf94;
        case 0x29bfa8u: goto label_29bfa8;
        case 0x29bfb4u: goto label_29bfb4;
        default: break;
    }

    ctx->pc = 0x29be68u;

    // 0x29be68: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x29be68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x29be6c: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x29be6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x29be70: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x29be70u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29be74: 0xffb70068  sd          $s7, 0x68($sp)
    ctx->pc = 0x29be74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 23));
    // 0x29be78: 0x2417efff  addiu       $s7, $zero, -0x1001
    ctx->pc = 0x29be78u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
    // 0x29be7c: 0xffbe0070  sd          $fp, 0x70($sp)
    ctx->pc = 0x29be7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 30));
    // 0x29be80: 0xf02d  daddu       $fp, $zero, $zero
    ctx->pc = 0x29be80u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29be84: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x29be84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x29be88: 0xffb10038  sd          $s1, 0x38($sp)
    ctx->pc = 0x29be88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 17));
    // 0x29be8c: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x29be8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x29be90: 0xffb30048  sd          $s3, 0x48($sp)
    ctx->pc = 0x29be90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 19));
    // 0x29be94: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x29be94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x29be98: 0xffb50058  sd          $s5, 0x58($sp)
    ctx->pc = 0x29be98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 21));
    // 0x29be9c: 0xffbf0078  sd          $ra, 0x78($sp)
    ctx->pc = 0x29be9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 31));
    // 0x29bea0: 0x8ec20154  lw          $v0, 0x154($s6)
    ctx->pc = 0x29bea0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 340)));
    // 0x29bea4: 0x244300c0  addiu       $v1, $v0, 0xC0
    ctx->pc = 0x29bea4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
    // 0x29bea8: 0xafa30028  sw          $v1, 0x28($sp)
    ctx->pc = 0x29bea8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 3));
    // 0x29beac: 0x24430080  addiu       $v1, $v0, 0x80
    ctx->pc = 0x29beacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
    // 0x29beb0: 0x244200a0  addiu       $v0, $v0, 0xA0
    ctx->pc = 0x29beb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
    // 0x29beb4: 0xafa30020  sw          $v1, 0x20($sp)
    ctx->pc = 0x29beb4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 3));
    // 0x29beb8: 0xafa20024  sw          $v0, 0x24($sp)
    ctx->pc = 0x29beb8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
    // 0x29bebc: 0x0  nop
    ctx->pc = 0x29bebcu;
    // NOP
label_29bec0:
    // 0x29bec0: 0x27d10001  addiu       $s1, $fp, 0x1
    ctx->pc = 0x29bec0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 30), 1));
    // 0x29bec4: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x29bec4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x29bec8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x29bec8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29becc: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x29beccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29bed0: 0x2445c2f0  addiu       $a1, $v0, -0x3D10
    ctx->pc = 0x29bed0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951664));
    // 0x29bed4: 0xc04a368  jal         func_128DA0
    ctx->pc = 0x29BED4u;
    SET_GPR_U32(ctx, 31, 0x29BEDCu);
    ctx->pc = 0x29BED8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29BED4u;
    // 0x29bed8: 0x1e80c0  sll         $s0, $fp, 3 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 30), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128DA0u, 0x29BED4u, 0x29BEDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29BEDCu;
label_29bedc:
    // 0x29bedc: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x29bedcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29bee0: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x29bee0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x29bee4: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x29bee4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29bee8: 0x220f02d  daddu       $fp, $s1, $zero
    ctx->pc = 0x29bee8u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29beec: 0xc0a5b64  jal         func_296D90
    ctx->pc = 0x29BEECu;
    SET_GPR_U32(ctx, 31, 0x29BEF4u);
    ctx->pc = 0x29BEF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29BEECu;
    // 0x29bef0: 0x2039821  addu        $s3, $s0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D90u, 0x29BEECu, 0x29BEF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29BEF4u;
label_29bef4:
    // 0x29bef4: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x29bef4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x29bef8: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x29bef8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29befc: 0x2785b6a8  addiu       $a1, $gp, -0x4958
    ctx->pc = 0x29befcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294948520));
    // 0x29bf00: 0xc04a368  jal         func_128DA0
    ctx->pc = 0x29BF00u;
    SET_GPR_U32(ctx, 31, 0x29BF08u);
    ctx->pc = 0x29BF04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29BF00u;
    // 0x29bf04: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128DA0u, 0x29BF00u, 0x29BF08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29BF08u;
label_29bf08:
    // 0x29bf08: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x29bf08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29bf0c: 0x8fa20024  lw          $v0, 0x24($sp)
    ctx->pc = 0x29bf0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x29bf10: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x29bf10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29bf14: 0x26750004  addiu       $s5, $s3, 0x4
    ctx->pc = 0x29bf14u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
    // 0x29bf18: 0xc0a5b64  jal         func_296D90
    ctx->pc = 0x29BF18u;
    SET_GPR_U32(ctx, 31, 0x29BF20u);
    ctx->pc = 0x29BF1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29BF18u;
    // 0x29bf1c: 0x2029021  addu        $s2, $s0, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D90u, 0x29BF18u, 0x29BF20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29BF20u;
label_29bf20:
    // 0x29bf20: 0xaea20000  sw          $v0, 0x0($s5)
    ctx->pc = 0x29bf20u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
    // 0x29bf24: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x29bf24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x29bf28: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x29bf28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29bf2c: 0x2465c300  addiu       $a1, $v1, -0x3D00
    ctx->pc = 0x29bf2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294951680));
    // 0x29bf30: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x29bf30u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29bf34: 0xc04a368  jal         func_128DA0
    ctx->pc = 0x29BF34u;
    SET_GPR_U32(ctx, 31, 0x29BF3Cu);
    ctx->pc = 0x29BF38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29BF34u;
    // 0x29bf38: 0x26540004  addiu       $s4, $s2, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128DA0u, 0x29BF34u, 0x29BF3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29BF3Cu;
label_29bf3c:
    // 0x29bf3c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x29bf3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29bf40: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x29bf40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x29bf44: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x29bf44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29bf48: 0xc0a5b64  jal         func_296D90
    ctx->pc = 0x29BF48u;
    SET_GPR_U32(ctx, 31, 0x29BF50u);
    ctx->pc = 0x29BF4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29BF48u;
    // 0x29bf4c: 0x2028021  addu        $s0, $s0, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D90u, 0x29BF48u, 0x29BF50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29BF50u;
label_29bf50:
    // 0x29bf50: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x29bf50u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x29bf54: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x29bf54u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29bf58: 0x2785b6a8  addiu       $a1, $gp, -0x4958
    ctx->pc = 0x29bf58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294948520));
    // 0x29bf5c: 0xc04a368  jal         func_128DA0
    ctx->pc = 0x29BF5Cu;
    SET_GPR_U32(ctx, 31, 0x29BF64u);
    ctx->pc = 0x29BF60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29BF5Cu;
    // 0x29bf60: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128DA0u, 0x29BF5Cu, 0x29BF64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29BF64u;
label_29bf64:
    // 0x29bf64: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x29bf64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29bf68: 0xc0a5b64  jal         func_296D90
    ctx->pc = 0x29BF68u;
    SET_GPR_U32(ctx, 31, 0x29BF70u);
    ctx->pc = 0x29BF6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29BF68u;
    // 0x29bf6c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D90u, 0x29BF68u, 0x29BF70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29BF70u;
label_29bf70:
    // 0x29bf70: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x29bf70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x29bf74: 0xae820000  sw          $v0, 0x0($s4)
    ctx->pc = 0x29bf74u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
    // 0x29bf78: 0x2465c310  addiu       $a1, $v1, -0x3CF0
    ctx->pc = 0x29bf78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294951696));
    // 0x29bf7c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x29bf7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29bf80: 0xc04a368  jal         func_128DA0
    ctx->pc = 0x29BF80u;
    SET_GPR_U32(ctx, 31, 0x29BF88u);
    ctx->pc = 0x29BF84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29BF80u;
    // 0x29bf84: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128DA0u, 0x29BF80u, 0x29BF88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29BF88u;
label_29bf88:
    // 0x29bf88: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x29bf88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29bf8c: 0xc0a5b64  jal         func_296D90
    ctx->pc = 0x29BF8Cu;
    SET_GPR_U32(ctx, 31, 0x29BF94u);
    ctx->pc = 0x29BF90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29BF8Cu;
    // 0x29bf90: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D90u, 0x29BF8Cu, 0x29BF94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29BF94u;
label_29bf94:
    // 0x29bf94: 0x2785b6a8  addiu       $a1, $gp, -0x4958
    ctx->pc = 0x29bf94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294948520));
    // 0x29bf98: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x29bf98u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x29bf9c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x29bf9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29bfa0: 0xc04a368  jal         func_128DA0
    ctx->pc = 0x29BFA0u;
    SET_GPR_U32(ctx, 31, 0x29BFA8u);
    ctx->pc = 0x29BFA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29BFA0u;
    // 0x29bfa4: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128DA0u, 0x29BFA0u, 0x29BFA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29BFA8u;
label_29bfa8:
    // 0x29bfa8: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x29bfa8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29bfac: 0xc0a5b64  jal         func_296D90
    ctx->pc = 0x29BFACu;
    SET_GPR_U32(ctx, 31, 0x29BFB4u);
    ctx->pc = 0x29BFB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29BFACu;
    // 0x29bfb0: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D90u, 0x29BFACu, 0x29BFB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29BFB4u;
label_29bfb4:
    // 0x29bfb4: 0x26050004  addiu       $a1, $s0, 0x4
    ctx->pc = 0x29bfb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x29bfb8: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x29bfb8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x29bfbc: 0x2bc60004  slti        $a2, $fp, 0x4
    ctx->pc = 0x29bfbcu;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 30) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x29bfc0: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x29bfc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x29bfc4: 0x8c620080  lw          $v0, 0x80($v1)
    ctx->pc = 0x29bfc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 128)));
    // 0x29bfc8: 0x571024  and         $v0, $v0, $s7
    ctx->pc = 0x29bfc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 23));
    // 0x29bfcc: 0xac620080  sw          $v0, 0x80($v1)
    ctx->pc = 0x29bfccu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 128), GPR_U32(ctx, 2));
    // 0x29bfd0: 0x8ea40000  lw          $a0, 0x0($s5)
    ctx->pc = 0x29bfd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x29bfd4: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x29bfd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x29bfd8: 0x571024  and         $v0, $v0, $s7
    ctx->pc = 0x29bfd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 23));
    // 0x29bfdc: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x29bfdcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
    // 0x29bfe0: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x29bfe0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x29bfe4: 0x8c620080  lw          $v0, 0x80($v1)
    ctx->pc = 0x29bfe4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 128)));
    // 0x29bfe8: 0x571024  and         $v0, $v0, $s7
    ctx->pc = 0x29bfe8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 23));
    // 0x29bfec: 0xac620080  sw          $v0, 0x80($v1)
    ctx->pc = 0x29bfecu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 128), GPR_U32(ctx, 2));
    // 0x29bff0: 0x8e840000  lw          $a0, 0x0($s4)
    ctx->pc = 0x29bff0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x29bff4: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x29bff4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x29bff8: 0x571024  and         $v0, $v0, $s7
    ctx->pc = 0x29bff8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 23));
    // 0x29bffc: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x29bffcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
    // 0x29c000: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x29c000u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x29c004: 0x8c620080  lw          $v0, 0x80($v1)
    ctx->pc = 0x29c004u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 128)));
    // 0x29c008: 0x571024  and         $v0, $v0, $s7
    ctx->pc = 0x29c008u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 23));
    // 0x29c00c: 0xac620080  sw          $v0, 0x80($v1)
    ctx->pc = 0x29c00cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 128), GPR_U32(ctx, 2));
    // 0x29c010: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x29c010u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x29c014: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x29c014u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x29c018: 0x571024  and         $v0, $v0, $s7
    ctx->pc = 0x29c018u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 23));
    // 0x29c01c: 0x14c0ffa8  bnez        $a2, . + 4 + (-0x58 << 2)
    ctx->pc = 0x29C01Cu;
    {
        const bool branch_taken_0x29c01c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x29C020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C01Cu;
        // 0x29c020: 0xac820080  sw          $v0, 0x80($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29c01c) {
            ctx->pc = 0x29BEC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_29bec0;
        }
    }
    ctx->pc = 0x29C024u;
    // 0x29c024: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x29c024u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x29c028: 0xdfb10038  ld          $s1, 0x38($sp)
    ctx->pc = 0x29c028u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x29c02c: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x29c02cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x29c030: 0xdfb30048  ld          $s3, 0x48($sp)
    ctx->pc = 0x29c030u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x29c034: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x29c034u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x29c038: 0xdfb50058  ld          $s5, 0x58($sp)
    ctx->pc = 0x29c038u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x29c03c: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x29c03cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x29c040: 0xdfb70068  ld          $s7, 0x68($sp)
    ctx->pc = 0x29c040u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x29c044: 0xdfbe0070  ld          $fp, 0x70($sp)
    ctx->pc = 0x29c044u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x29c048: 0xdfbf0078  ld          $ra, 0x78($sp)
    ctx->pc = 0x29c048u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x29c04c: 0x3e00008  jr          $ra
    ctx->pc = 0x29C04Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29C050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C04Cu;
        // 0x29c050: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29C04Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29C054u;
    // 0x29c054: 0x0  nop
    ctx->pc = 0x29c054u;
    // NOP
    ctx->pc = 0x29c058u;
}
