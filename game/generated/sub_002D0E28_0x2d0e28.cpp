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

// Function: sub_002D0E28
// Address: 0x2d0e28 - 0x2d0ed8
void sub_002D0E28_0x2d0e28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D0E28_0x2d0e28");
#endif

    switch (ctx->pc) {
        case 0x2d0e60u: goto label_2d0e60;
        case 0x2d0e70u: goto label_2d0e70;
        case 0x2d0eb8u: goto label_2d0eb8;
        default: break;
    }

    ctx->pc = 0x2d0e28u;

    // 0x2d0e28: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2d0e28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2d0e2c: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x2d0e2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x2d0e30: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2d0e30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2d0e34: 0x24508858  addiu       $s0, $v0, -0x77A8
    ctx->pc = 0x2d0e34u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936664));
    // 0x2d0e38: 0x8e030050  lw          $v1, 0x50($s0)
    ctx->pc = 0x2d0e38u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3A88A8u));
    // 0x2d0e3c: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x2d0e3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x2d0e40: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x2d0e40u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2d0e44: 0x1440001e  bnez        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x2D0E44u;
    {
        const bool branch_taken_0x2d0e44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D0E48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0E44u;
        // 0x2d0e48: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d0e44) {
            ctx->pc = 0x2D0EC0u;
            goto label_2d0ec0;
        }
    }
    ctx->pc = 0x2D0E4Cu;
    // 0x2d0e4c: 0x30620002  andi        $v0, $v1, 0x2
    ctx->pc = 0x2d0e4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x2d0e50: 0x5440001c  bnel        $v0, $zero, . + 4 + (0x1C << 2)
    ctx->pc = 0x2D0E50u;
    {
        const bool branch_taken_0x2d0e50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d0e50) {
            ctx->pc = 0x2D0E54u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D0E50u;
            // 0x2d0e54: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D0EC4u;
            goto label_2d0ec4;
        }
    }
    ctx->pc = 0x2D0E58u;
    // 0x2d0e58: 0xc086f88  jal         func_21BE20
    ctx->pc = 0x2D0E58u;
    SET_GPR_U32(ctx, 31, 0x2D0E60u);
    ctx->pc = 0x2D0E5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D0E58u;
    // 0x2d0e5c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21BE20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21BE20u, 0x2D0E58u, 0x2D0E60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D0E60u;
label_2d0e60:
    // 0x2d0e60: 0x54400018  bnel        $v0, $zero, . + 4 + (0x18 << 2)
    ctx->pc = 0x2D0E60u;
    {
        const bool branch_taken_0x2d0e60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d0e60) {
            ctx->pc = 0x2D0E64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D0E60u;
            // 0x2d0e64: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D0EC4u;
            goto label_2d0ec4;
        }
    }
    ctx->pc = 0x2D0E68u;
    // 0x2d0e68: 0xc086f88  jal         func_21BE20
    ctx->pc = 0x2D0E68u;
    SET_GPR_U32(ctx, 31, 0x2D0E70u);
    ctx->pc = 0x2D0E6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D0E68u;
    // 0x2d0e6c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21BE20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21BE20u, 0x2D0E68u, 0x2D0E70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D0E70u;
label_2d0e70:
    // 0x2d0e70: 0x14400014  bnez        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x2D0E70u;
    {
        const bool branch_taken_0x2d0e70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D0E74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0E70u;
        // 0x2d0e74: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d0e70) {
            ctx->pc = 0x2D0EC4u;
            goto label_2d0ec4;
        }
    }
    ctx->pc = 0x2D0E78u;
    // 0x2d0e78: 0x3c03003c  lui         $v1, 0x3C
    ctx->pc = 0x2d0e78u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
    // 0x2d0e7c: 0x8c62b710  lw          $v0, -0x48F0($v1)
    ctx->pc = 0x2d0e7cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3BB710u));
    // 0x2d0e80: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x2d0e80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x2d0e84: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x2D0E84u;
    {
        const bool branch_taken_0x2d0e84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D0E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0E84u;
        // 0x2d0e88: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d0e84) {
            ctx->pc = 0x2D0EC4u;
            goto label_2d0ec4;
        }
    }
    ctx->pc = 0x2D0E8Cu;
    // 0x2d0e8c: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x2d0e8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2d0e90: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x2d0e90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2d0e94: 0x1062000b  beq         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2D0E94u;
    {
        const bool branch_taken_0x2d0e94 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2D0E98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0E94u;
        // 0x2d0e98: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d0e94) {
            ctx->pc = 0x2D0EC4u;
            goto label_2d0ec4;
        }
    }
    ctx->pc = 0x2D0E9Cu;
    // 0x2d0e9c: 0x5860000a  blezl       $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x2D0E9Cu;
    {
        const bool branch_taken_0x2d0e9c = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x2d0e9c) {
            ctx->pc = 0x2D0EA0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D0E9Cu;
            // 0x2d0ea0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D0EC8u;
            goto label_2d0ec8;
        }
    }
    ctx->pc = 0x2D0EA4u;
    // 0x2d0ea4: 0x8e02005c  lw          $v0, 0x5C($s0)
    ctx->pc = 0x2d0ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
    // 0x2d0ea8: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2D0EA8u;
    {
        const bool branch_taken_0x2d0ea8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d0ea8) {
            ctx->pc = 0x2D0EACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D0EA8u;
            // 0x2d0eac: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D0EC4u;
            goto label_2d0ec4;
        }
    }
    ctx->pc = 0x2D0EB0u;
    // 0x2d0eb0: 0xc0896ca  jal         func_225B28
    ctx->pc = 0x2D0EB0u;
    SET_GPR_U32(ctx, 31, 0x2D0EB8u);
    ctx->pc = 0x225B28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225B28u, 0x2D0EB0u, 0x2D0EB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D0EB8u;
label_2d0eb8:
    // 0x2d0eb8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2D0EB8u;
    {
        const bool branch_taken_0x2d0eb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D0EBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0EB8u;
        // 0x2d0ebc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d0eb8) {
            ctx->pc = 0x2D0EC4u;
            goto label_2d0ec4;
        }
    }
    ctx->pc = 0x2D0EC0u;
label_2d0ec0:
    // 0x2d0ec0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2d0ec0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2d0ec4:
    // 0x2d0ec4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2d0ec4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2d0ec8:
    // 0x2d0ec8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2d0ec8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2d0ecc: 0x3e00008  jr          $ra
    ctx->pc = 0x2D0ECCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D0ED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0ECCu;
        // 0x2d0ed0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D0ECCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D0ED4u;
    // 0x2d0ed4: 0x0  nop
    ctx->pc = 0x2d0ed4u;
    // NOP
    ctx->pc = 0x2d0ed8u;
}
