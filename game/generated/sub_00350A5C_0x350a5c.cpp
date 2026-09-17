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

// Function: sub_00350A5C
// Address: 0x350a5c - 0x350b70
void sub_00350A5C_0x350a5c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00350A5C_0x350a5c");
#endif

    switch (ctx->pc) {
        case 0x350a7cu: goto label_350a7c;
        case 0x350a84u: goto label_350a84;
        case 0x350ab8u: goto label_350ab8;
        case 0x350ae4u: goto label_350ae4;
        case 0x350b20u: goto label_350b20;
        case 0x350b58u: goto label_350b58;
        default: break;
    }

    ctx->pc = 0x350a5cu;

label_350a5c:
    // 0x350a5c: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x350a5cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x350a60: 0xffbe0010  sd          $fp, 0x10($sp)
    ctx->pc = 0x350a60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 30));
    // 0x350a64: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x350a64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x350a68: 0x3a0f02d  daddu       $fp, $sp, $zero
    ctx->pc = 0x350a68u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x350a6c: 0xafc40000  sw          $a0, 0x0($fp)
    ctx->pc = 0x350a6cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 4));
    // 0x350a70: 0x8f84cbcc  lw          $a0, -0x3434($gp)
    ctx->pc = 0x350a70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294953932)));
    // 0x350a74: 0xc043cf8  jal         func_10F3E0
    ctx->pc = 0x350A74u;
    SET_GPR_U32(ctx, 31, 0x350A7Cu);
    ctx->pc = 0x10F3E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F3E0u, 0x350A74u, 0x350A7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x350A7Cu;
label_350a7c:
    // 0x350a7c: 0x8f82cbd8  lw          $v0, -0x3428($gp)
    ctx->pc = 0x350a7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294953944)));
    // 0x350a80: 0xafc20004  sw          $v0, 0x4($fp)
    ctx->pc = 0x350a80u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 2));
label_350a84:
    // 0x350a84: 0x8fc20004  lw          $v0, 0x4($fp)
    ctx->pc = 0x350a84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x350a88: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x350A88u;
    {
        const bool branch_taken_0x350a88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x350a88) {
            ctx->pc = 0x350A98u;
            goto label_350a98;
        }
    }
    ctx->pc = 0x350A90u;
    // 0x350a90: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x350A90u;
    {
        const bool branch_taken_0x350a90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x350a90) {
            ctx->pc = 0x350AD8u;
            goto label_350ad8;
        }
    }
    ctx->pc = 0x350A98u;
label_350a98:
    // 0x350a98: 0x8fc20004  lw          $v0, 0x4($fp)
    ctx->pc = 0x350a98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x350a9c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x350a9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x350aa0: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x350aa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x350aa4: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x350AA4u;
    {
        const bool branch_taken_0x350aa4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x350aa4) {
            ctx->pc = 0x350AC4u;
            goto label_350ac4;
        }
    }
    ctx->pc = 0x350AACu;
    // 0x350aac: 0x8f84cbcc  lw          $a0, -0x3434($gp)
    ctx->pc = 0x350aacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294953932)));
    // 0x350ab0: 0xc043cf0  jal         func_10F3C0
    ctx->pc = 0x350AB0u;
    SET_GPR_U32(ctx, 31, 0x350AB8u);
    ctx->pc = 0x10F3C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F3C0u, 0x350AB0u, 0x350AB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x350AB8u;
label_350ab8:
    // 0x350ab8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x350ab8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x350abc: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x350ABCu;
    {
        const bool branch_taken_0x350abc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x350abc) {
            ctx->pc = 0x350AE8u;
            goto label_350ae8;
        }
    }
    ctx->pc = 0x350AC4u;
label_350ac4:
    // 0x350ac4: 0x8fc20004  lw          $v0, 0x4($fp)
    ctx->pc = 0x350ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x350ac8: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x350ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x350acc: 0xafc20004  sw          $v0, 0x4($fp)
    ctx->pc = 0x350accu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 2));
    // 0x350ad0: 0x1000ffec  b           . + 4 + (-0x14 << 2)
    ctx->pc = 0x350AD0u;
    {
        const bool branch_taken_0x350ad0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x350ad0) {
            ctx->pc = 0x350A84u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_350a84;
        }
    }
    ctx->pc = 0x350AD8u;
label_350ad8:
    // 0x350ad8: 0x8f84cbcc  lw          $a0, -0x3434($gp)
    ctx->pc = 0x350ad8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294953932)));
    // 0x350adc: 0xc043cf0  jal         func_10F3C0
    ctx->pc = 0x350ADCu;
    SET_GPR_U32(ctx, 31, 0x350AE4u);
    ctx->pc = 0x10F3C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F3C0u, 0x350ADCu, 0x350AE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x350AE4u;
label_350ae4:
    // 0x350ae4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x350ae4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_350ae8:
    // 0x350ae8: 0x3c0e82d  daddu       $sp, $fp, $zero
    ctx->pc = 0x350ae8u;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x350aec: 0xdfbe0010  ld          $fp, 0x10($sp)
    ctx->pc = 0x350aecu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x350af0: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x350af0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x350af4: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x350af4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x350af8: 0x3e00008  jr          $ra
    ctx->pc = 0x350AF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x350AF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x350B00u;
    // 0x350b00: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x350b00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x350b04: 0xffbe0010  sd          $fp, 0x10($sp)
    ctx->pc = 0x350b04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 30));
    // 0x350b08: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x350b08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x350b0c: 0x3a0f02d  daddu       $fp, $sp, $zero
    ctx->pc = 0x350b0cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x350b10: 0xafc40000  sw          $a0, 0x0($fp)
    ctx->pc = 0x350b10u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 4));
    // 0x350b14: 0x8fc40000  lw          $a0, 0x0($fp)
    ctx->pc = 0x350b14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x350b18: 0xc0d4297  jal         func_350A5C
    ctx->pc = 0x350B18u;
    SET_GPR_U32(ctx, 31, 0x350B20u);
    ctx->pc = 0x350A5Cu;
    goto label_350a5c;
    ctx->pc = 0x350B20u;
label_350b20:
    // 0x350b20: 0x3c0e82d  daddu       $sp, $fp, $zero
    ctx->pc = 0x350b20u;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x350b24: 0xdfbe0010  ld          $fp, 0x10($sp)
    ctx->pc = 0x350b24u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x350b28: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x350b28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x350b2c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x350b2cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x350b30: 0x3e00008  jr          $ra
    ctx->pc = 0x350B30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x350B30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x350B38u;
    // 0x350b38: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x350b38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x350b3c: 0xffbe0010  sd          $fp, 0x10($sp)
    ctx->pc = 0x350b3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 30));
    // 0x350b40: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x350b40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x350b44: 0x3a0f02d  daddu       $fp, $sp, $zero
    ctx->pc = 0x350b44u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x350b48: 0xafc40000  sw          $a0, 0x0($fp)
    ctx->pc = 0x350b48u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 4));
    // 0x350b4c: 0x8fc40000  lw          $a0, 0x0($fp)
    ctx->pc = 0x350b4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x350b50: 0xc0d4297  jal         func_350A5C
    ctx->pc = 0x350B50u;
    SET_GPR_U32(ctx, 31, 0x350B58u);
    ctx->pc = 0x350A5Cu;
    goto label_350a5c;
    ctx->pc = 0x350B58u;
label_350b58:
    // 0x350b58: 0x3c0e82d  daddu       $sp, $fp, $zero
    ctx->pc = 0x350b58u;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x350b5c: 0xdfbe0010  ld          $fp, 0x10($sp)
    ctx->pc = 0x350b5cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x350b60: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x350b60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x350b64: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x350b64u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x350b68: 0x3e00008  jr          $ra
    ctx->pc = 0x350B68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x350B68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x350B70u;
}
