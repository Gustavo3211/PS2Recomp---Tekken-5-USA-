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

// Function: sub_003702D0
// Address: 0x3702d0 - 0x370320
void sub_003702D0_0x3702d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003702D0_0x3702d0");
#endif

    switch (ctx->pc) {
        case 0x3702f4u: goto label_3702f4;
        case 0x37030cu: goto label_37030c;
        default: break;
    }

    ctx->pc = 0x3702d0u;

    // 0x3702d0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3702d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3702d4: 0x3c02001d  lui         $v0, 0x1D
    ctx->pc = 0x3702d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)29 << 16));
    // 0x3702d8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3702d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3702dc: 0x24507380  addiu       $s0, $v0, 0x7380
    ctx->pc = 0x3702dcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 29568));
    // 0x3702e0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x3702e0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x1D7380u));
    // 0x3702e4: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x3702E4u;
    {
        const bool branch_taken_0x3702e4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3702E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3702E4u;
        // 0x3702e8: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3702e4) {
            ctx->pc = 0x37030Cu;
            goto label_37030c;
        }
    }
    ctx->pc = 0x3702ECu;
    // 0x3702ec: 0xc0dc55e  jal         func_371578
    ctx->pc = 0x3702ECu;
    SET_GPR_U32(ctx, 31, 0x3702F4u);
    ctx->pc = 0x371578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x371578u, 0x3702ECu, 0x3702F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3702F4u;
label_3702f4:
    // 0x3702f4: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x3702f4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x3702f8: 0x3c06001d  lui         $a2, 0x1D
    ctx->pc = 0x3702f8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)29 << 16));
    // 0x3702fc: 0x24a50a18  addiu       $a1, $a1, 0xA18
    ctx->pc = 0x3702fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2584));
    // 0x370300: 0x24c67560  addiu       $a2, $a2, 0x7560
    ctx->pc = 0x370300u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 30048));
    // 0x370304: 0xc0493ca  jal         func_124F28
    ctx->pc = 0x370304u;
    SET_GPR_U32(ctx, 31, 0x37030Cu);
    ctx->pc = 0x370308u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x370304u;
    // 0x370308: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124F28u, 0x370304u, 0x37030Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37030Cu;
label_37030c:
    // 0x37030c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x37030cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x370310: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x370310u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x370314: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x370314u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x370318: 0x3e00008  jr          $ra
    ctx->pc = 0x370318u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37031Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x370318u;
        // 0x37031c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x370318u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x370320u;
}
