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

// Function: sub_00124F68
// Address: 0x124f68 - 0x124fe0
void sub_00124F68_0x124f68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00124F68_0x124f68");
#endif

    switch (ctx->pc) {
        case 0x124f68u: goto label_124f68;
        case 0x124f6cu: goto label_124f6c;
        case 0x124f70u: goto label_124f70;
        case 0x124f74u: goto label_124f74;
        case 0x124f78u: goto label_124f78;
        case 0x124f7cu: goto label_124f7c;
        case 0x124f80u: goto label_124f80;
        case 0x124f84u: goto label_124f84;
        case 0x124f88u: goto label_124f88;
        case 0x124f8cu: goto label_124f8c;
        case 0x124f90u: goto label_124f90;
        case 0x124f94u: goto label_124f94;
        case 0x124f98u: goto label_124f98;
        case 0x124f9cu: goto label_124f9c;
        case 0x124fa0u: goto label_124fa0;
        case 0x124fa4u: goto label_124fa4;
        case 0x124fa8u: goto label_124fa8;
        case 0x124facu: goto label_124fac;
        case 0x124fb0u: goto label_124fb0;
        case 0x124fb4u: goto label_124fb4;
        case 0x124fb8u: goto label_124fb8;
        case 0x124fbcu: goto label_124fbc;
        case 0x124fc0u: goto label_124fc0;
        case 0x124fc4u: goto label_124fc4;
        case 0x124fc8u: goto label_124fc8;
        case 0x124fccu: goto label_124fcc;
        case 0x124fd0u: goto label_124fd0;
        case 0x124fd4u: goto label_124fd4;
        case 0x124fd8u: goto label_124fd8;
        case 0x124fdcu: goto label_124fdc;
        default: break;
    }

    ctx->pc = 0x124f68u;

label_124f68:
    // 0x124f68: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x124f68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_124f6c:
    // 0x124f6c: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x124f6cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_124f70:
    // 0x124f70: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x124f70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_124f74:
    // 0x124f74: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x124f74u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_124f78:
    // 0x124f78: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x124f78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_124f7c:
    // 0x124f7c: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x124f7cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_124f80:
    // 0x124f80: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x124f80u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_124f84:
    // 0x124f84: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x124f84u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_124f88:
    // 0x124f88: 0x8d030004  lw          $v1, 0x4($t0)
    ctx->pc = 0x124f88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
label_124f8c:
    // 0x124f8c: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x124f8cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_124f90:
    // 0x124f90: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x124f90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
label_124f94:
    // 0x124f94: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x124f94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_124f98:
    // 0x124f98: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x124f98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
label_124f9c:
    // 0x124f9c: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x124f9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
label_124fa0:
    // 0x124fa0: 0x84640000  lh          $a0, 0x0($v1)
    ctx->pc = 0x124fa0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_124fa4:
    // 0x124fa4: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x124fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_124fa8:
    // 0x124fa8: 0x1042021  addu        $a0, $t0, $a0
    ctx->pc = 0x124fa8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
label_124fac:
    // 0x124fac: 0x40f809  jalr        $v0
label_124fb0:
    if (ctx->pc == 0x124FB0u) {
        ctx->pc = 0x124FB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124FACu;
        // 0x124fb0: 0x3a0402d  daddu       $t0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x124FB4u;
        goto label_124fb4;
    }
    ctx->pc = 0x124FACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x124FB4u);
        ctx->pc = 0x124FB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124FACu;
        // 0x124fb0: 0x3a0402d  daddu       $t0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x124FACu, 0x124FB4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x124FB4u;
label_124fb4:
    // 0x124fb4: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_124fb8:
    if (ctx->pc == 0x124FB8u) {
        ctx->pc = 0x124FB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124FB4u;
        // 0x124fb8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x124FBCu;
        goto label_124fbc;
    }
    ctx->pc = 0x124FB4u;
    {
        const bool branch_taken_0x124fb4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x124FB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124FB4u;
        // 0x124fb8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124fb4) {
            ctx->pc = 0x124FD0u;
            goto label_124fd0;
        }
    }
    ctx->pc = 0x124FBCu;
label_124fbc:
    // 0x124fbc: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x124fbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_124fc0:
    // 0x124fc0: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x124fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_124fc4:
    // 0x124fc4: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x124fc4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_124fc8:
    // 0x124fc8: 0x28420006  slti        $v0, $v0, 0x6
    ctx->pc = 0x124fc8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)6) ? 1 : 0);
label_124fcc:
    // 0x124fcc: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x124fccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_124fd0:
    // 0x124fd0: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x124fd0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_124fd4:
    // 0x124fd4: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x124fd4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_124fd8:
    // 0x124fd8: 0x3e00008  jr          $ra
label_124fdc:
    if (ctx->pc == 0x124FDCu) {
        ctx->pc = 0x124FDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124FD8u;
        // 0x124fdc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x124FE0u;
        goto label_fallthrough_0x124fd8;
    }
    ctx->pc = 0x124FD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x124FDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124FD8u;
        // 0x124fdc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x124FD8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x124fd8:
    ctx->pc = 0x124FE0u;
}
