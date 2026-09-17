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

// Function: sub_00130C68
// Address: 0x130c68 - 0x130cc8
void sub_00130C68_0x130c68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00130C68_0x130c68");
#endif

    switch (ctx->pc) {
        case 0x130c8cu: goto label_130c8c;
        case 0x130ca4u: goto label_130ca4;
        default: break;
    }

    ctx->pc = 0x130c68u;

    // 0x130c68: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x130c68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x130c6c: 0x3c02001f  lui         $v0, 0x1F
    ctx->pc = 0x130c6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)31 << 16));
    // 0x130c70: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x130c70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x130c74: 0x24500150  addiu       $s0, $v0, 0x150
    ctx->pc = 0x130c74u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 336));
    // 0x130c78: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x130c78u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x1F0150u));
    // 0x130c7c: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x130C7Cu;
    {
        const bool branch_taken_0x130c7c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x130C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130C7Cu;
        // 0x130c80: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130c7c) {
            ctx->pc = 0x130CA4u;
            goto label_130ca4;
        }
    }
    ctx->pc = 0x130C84u;
    // 0x130c84: 0xc04c2f8  jal         func_130BE0
    ctx->pc = 0x130C84u;
    SET_GPR_U32(ctx, 31, 0x130C8Cu);
    ctx->pc = 0x130BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x130BE0u, 0x130C84u, 0x130C8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130C8Cu;
label_130c8c:
    // 0x130c8c: 0x3c050015  lui         $a1, 0x15
    ctx->pc = 0x130c8cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)21 << 16));
    // 0x130c90: 0x3c060015  lui         $a2, 0x15
    ctx->pc = 0x130c90u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)21 << 16));
    // 0x130c94: 0x24a5f4e0  addiu       $a1, $a1, -0xB20
    ctx->pc = 0x130c94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294964448));
    // 0x130c98: 0x24c65570  addiu       $a2, $a2, 0x5570
    ctx->pc = 0x130c98u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 21872));
    // 0x130c9c: 0xc0493ca  jal         func_124F28
    ctx->pc = 0x130C9Cu;
    SET_GPR_U32(ctx, 31, 0x130CA4u);
    ctx->pc = 0x130CA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x130C9Cu;
    // 0x130ca0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124F28u, 0x130C9Cu, 0x130CA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130CA4u;
label_130ca4:
    // 0x130ca4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x130ca4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130ca8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x130ca8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x130cac: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x130cacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x130cb0: 0x3e00008  jr          $ra
    ctx->pc = 0x130CB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x130CB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130CB0u;
        // 0x130cb4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x130CB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x130CB8u;
    // 0x130cb8: 0x3c030013  lui         $v1, 0x13
    ctx->pc = 0x130cb8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)19 << 16));
    // 0x130cbc: 0x24634d48  addiu       $v1, $v1, 0x4D48
    ctx->pc = 0x130cbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 19784));
    // 0x130cc0: 0x3e00008  jr          $ra
    ctx->pc = 0x130CC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x130CC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130CC0u;
        // 0x130cc4: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x130CC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x130CC8u;
}
