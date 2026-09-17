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

// Function: sub_00240BB8
// Address: 0x240bb8 - 0x240c18
void sub_00240BB8_0x240bb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00240BB8_0x240bb8");
#endif

    switch (ctx->pc) {
        case 0x240bd0u: goto label_240bd0;
        default: break;
    }

    ctx->pc = 0x240bb8u;

    // 0x240bb8: 0x3c04003e  lui         $a0, 0x3E
    ctx->pc = 0x240bb8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)62 << 16));
    // 0x240bbc: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x240bbcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x240bc0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x240bc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x240bc4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x240bc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x240bc8: 0xc0b7d04  jal         func_2DF410
    ctx->pc = 0x240BC8u;
    SET_GPR_U32(ctx, 31, 0x240BD0u);
    ctx->pc = 0x240BCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x240BC8u;
    // 0x240bcc: 0x248437e0  addiu       $a0, $a0, 0x37E0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 14304));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DF410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DF410u, 0x240BC8u, 0x240BD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x240BD0u;
label_240bd0:
    // 0x240bd0: 0x24450058  addiu       $a1, $v0, 0x58
    ctx->pc = 0x240bd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 88));
    // 0x240bd4: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x240bd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x240bd8: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x240BD8u;
    {
        const bool branch_taken_0x240bd8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x240bd8) {
            ctx->pc = 0x240BDCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x240BD8u;
            // 0x240bdc: 0xaca00004  sw          $zero, 0x4($a1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x240BF4u;
            goto label_240bf4;
        }
    }
    ctx->pc = 0x240BE0u;
    // 0x240be0: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x240be0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x240be4: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x240be4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x240be8: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x240BE8u;
    {
        const bool branch_taken_0x240be8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x240BECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240BE8u;
        // 0x240bec: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240be8) {
            ctx->pc = 0x240C00u;
            goto label_240c00;
        }
    }
    ctx->pc = 0x240BF0u;
    // 0x240bf0: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x240bf0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
label_240bf4:
    // 0x240bf4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x240bf4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x240bf8: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x240bf8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    // 0x240bfc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x240bfcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_240c00:
    // 0x240c00: 0x8090302  j           func_240C08
    ctx->pc = 0x240C00u;
    ctx->pc = 0x240C04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x240C00u;
    // 0x240c04: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x240C08u;
    goto label_240c08;
    ctx->pc = 0x240C08u;
label_240c08:
    // 0x240c08: 0x8c820048  lw          $v0, 0x48($a0)
    ctx->pc = 0x240c08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
    // 0x240c0c: 0x38420002  xori        $v0, $v0, 0x2
    ctx->pc = 0x240c0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)2);
    // 0x240c10: 0x3e00008  jr          $ra
    ctx->pc = 0x240C10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x240C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240C10u;
        // 0x240c14: 0x2102b  sltu        $v0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x240C10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x240C18u;
}
