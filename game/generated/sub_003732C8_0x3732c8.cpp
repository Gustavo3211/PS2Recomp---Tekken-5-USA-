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

// Function: sub_003732C8
// Address: 0x3732c8 - 0x373348
void sub_003732C8_0x3732c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003732C8_0x3732c8");
#endif

    switch (ctx->pc) {
        case 0x3732ecu: goto label_3732ec;
        case 0x373304u: goto label_373304;
        case 0x37332cu: goto label_37332c;
        default: break;
    }

    ctx->pc = 0x3732c8u;

    // 0x3732c8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3732c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3732cc: 0x3c02001d  lui         $v0, 0x1D
    ctx->pc = 0x3732ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)29 << 16));
    // 0x3732d0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3732d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3732d4: 0x24507720  addiu       $s0, $v0, 0x7720
    ctx->pc = 0x3732d4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 30496));
    // 0x3732d8: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x3732d8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x1D7720u));
    // 0x3732dc: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x3732DCu;
    {
        const bool branch_taken_0x3732dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3732E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3732DCu;
        // 0x3732e0: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3732dc) {
            ctx->pc = 0x373304u;
            goto label_373304;
        }
    }
    ctx->pc = 0x3732E4u;
    // 0x3732e4: 0xc0dcc20  jal         func_373080
    ctx->pc = 0x3732E4u;
    SET_GPR_U32(ctx, 31, 0x3732ECu);
    ctx->pc = 0x373080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x373080u, 0x3732E4u, 0x3732ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3732ECu;
label_3732ec:
    // 0x3732ec: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x3732ecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x3732f0: 0x3c06001d  lui         $a2, 0x1D
    ctx->pc = 0x3732f0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)29 << 16));
    // 0x3732f4: 0x24a51dd8  addiu       $a1, $a1, 0x1DD8
    ctx->pc = 0x3732f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7640));
    // 0x3732f8: 0x24c67700  addiu       $a2, $a2, 0x7700
    ctx->pc = 0x3732f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 30464));
    // 0x3732fc: 0xc0493ca  jal         func_124F28
    ctx->pc = 0x3732FCu;
    SET_GPR_U32(ctx, 31, 0x373304u);
    ctx->pc = 0x373300u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3732FCu;
    // 0x373300: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124F28u, 0x3732FCu, 0x373304u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x373304u;
label_373304:
    // 0x373304: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x373304u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x373308: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x373308u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x37330c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x37330cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x373310: 0x3e00008  jr          $ra
    ctx->pc = 0x373310u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x373314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x373310u;
        // 0x373314: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x373310u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x373318u;
    // 0x373318: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x373318u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x37331c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x37331cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x373320: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x373320u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x373324: 0xc0bf854  jal         func_2FE150
    ctx->pc = 0x373324u;
    SET_GPR_U32(ctx, 31, 0x37332Cu);
    ctx->pc = 0x373328u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x373324u;
    // 0x373328: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FE150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FE150u, 0x373324u, 0x37332Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37332Cu;
label_37332c:
    // 0x37332c: 0x3c030046  lui         $v1, 0x46
    ctx->pc = 0x37332cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)70 << 16));
    // 0x373330: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x373330u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x373334: 0x24631178  addiu       $v1, $v1, 0x1178
    ctx->pc = 0x373334u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4472));
    // 0x373338: 0xae03002c  sw          $v1, 0x2C($s0)
    ctx->pc = 0x373338u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 3));
    // 0x37333c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x37333cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x373340: 0x3e00008  jr          $ra
    ctx->pc = 0x373340u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x373344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x373340u;
        // 0x373344: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x373340u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x373348u;
}
