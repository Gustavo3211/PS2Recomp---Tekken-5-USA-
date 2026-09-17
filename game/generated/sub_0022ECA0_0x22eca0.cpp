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

// Function: sub_0022ECA0
// Address: 0x22eca0 - 0x22ed00
void sub_0022ECA0_0x22eca0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022ECA0_0x22eca0");
#endif

    switch (ctx->pc) {
        case 0x22ecc4u: goto label_22ecc4;
        case 0x22ecccu: goto label_22eccc;
        case 0x22ecd4u: goto label_22ecd4;
        case 0x22ececu: goto label_22ecec;
        default: break;
    }

    ctx->pc = 0x22eca0u;

    // 0x22eca0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x22eca0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x22eca4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x22eca4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x22eca8: 0x3c100016  lui         $s0, 0x16
    ctx->pc = 0x22eca8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)22 << 16));
    // 0x22ecac: 0x26109a50  addiu       $s0, $s0, -0x65B0
    ctx->pc = 0x22ecacu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294941264));
    // 0x22ecb0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x22ecb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x22ecb4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x22ecb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22ecb8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x22ecb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x22ecbc: 0xc08bac4  jal         func_22EB10
    ctx->pc = 0x22ECBCu;
    SET_GPR_U32(ctx, 31, 0x22ECC4u);
    ctx->pc = 0x22ECC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22ECBCu;
    // 0x22ecc0: 0x26110010  addiu       $s1, $s0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22EB10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22EB10u, 0x22ECBCu, 0x22ECC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22ECC4u;
label_22ecc4:
    // 0x22ecc4: 0xc08bac4  jal         func_22EB10
    ctx->pc = 0x22ECC4u;
    SET_GPR_U32(ctx, 31, 0x22ECCCu);
    ctx->pc = 0x22ECC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22ECC4u;
    // 0x22ecc8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22EB10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22EB10u, 0x22ECC4u, 0x22ECCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22ECCCu;
label_22eccc:
    // 0x22eccc: 0xc08bad2  jal         func_22EB48
    ctx->pc = 0x22ECCCu;
    SET_GPR_U32(ctx, 31, 0x22ECD4u);
    ctx->pc = 0x22ECD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22ECCCu;
    // 0x22ecd0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22EB48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22EB48u, 0x22ECCCu, 0x22ECD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22ECD4u;
label_22ecd4:
    // 0x22ecd4: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x22ecd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x22ecd8: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x22ecd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x22ecdc: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x22ECDCu;
    {
        const bool branch_taken_0x22ecdc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x22ECE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22ECDCu;
        // 0x22ece0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ecdc) {
            ctx->pc = 0x22ECECu;
            goto label_22ecec;
        }
    }
    ctx->pc = 0x22ECE4u;
    // 0x22ece4: 0xc08bad2  jal         func_22EB48
    ctx->pc = 0x22ECE4u;
    SET_GPR_U32(ctx, 31, 0x22ECECu);
    ctx->pc = 0x22EB48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22EB48u, 0x22ECE4u, 0x22ECECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22ECECu;
label_22ecec:
    // 0x22ecec: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x22ececu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22ecf0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x22ecf0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x22ecf4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x22ecf4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22ecf8: 0x3e00008  jr          $ra
    ctx->pc = 0x22ECF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22ECFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22ECF8u;
        // 0x22ecfc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22ECF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22ED00u;
}
