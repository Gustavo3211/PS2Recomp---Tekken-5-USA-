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

// Function: sub_00370030
// Address: 0x370030 - 0x370080
void sub_00370030_0x370030(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00370030_0x370030");
#endif

    switch (ctx->pc) {
        case 0x370054u: goto label_370054;
        case 0x37006cu: goto label_37006c;
        default: break;
    }

    ctx->pc = 0x370030u;

    // 0x370030: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x370030u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x370034: 0x3c02001d  lui         $v0, 0x1D
    ctx->pc = 0x370034u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)29 << 16));
    // 0x370038: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x370038u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x37003c: 0x24507360  addiu       $s0, $v0, 0x7360
    ctx->pc = 0x37003cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 29536));
    // 0x370040: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x370040u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x1D7360u));
    // 0x370044: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x370044u;
    {
        const bool branch_taken_0x370044 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x370048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x370044u;
        // 0x370048: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x370044) {
            ctx->pc = 0x37006Cu;
            goto label_37006c;
        }
    }
    ctx->pc = 0x37004Cu;
    // 0x37004c: 0xc0dc55e  jal         func_371578
    ctx->pc = 0x37004Cu;
    SET_GPR_U32(ctx, 31, 0x370054u);
    ctx->pc = 0x371578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x371578u, 0x37004Cu, 0x370054u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x370054u;
label_370054:
    // 0x370054: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x370054u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x370058: 0x3c06001d  lui         $a2, 0x1D
    ctx->pc = 0x370058u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)29 << 16));
    // 0x37005c: 0x24a509a8  addiu       $a1, $a1, 0x9A8
    ctx->pc = 0x37005cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2472));
    // 0x370060: 0x24c67560  addiu       $a2, $a2, 0x7560
    ctx->pc = 0x370060u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 30048));
    // 0x370064: 0xc0493ca  jal         func_124F28
    ctx->pc = 0x370064u;
    SET_GPR_U32(ctx, 31, 0x37006Cu);
    ctx->pc = 0x370068u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x370064u;
    // 0x370068: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124F28u, 0x370064u, 0x37006Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37006Cu;
label_37006c:
    // 0x37006c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x37006cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x370070: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x370070u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x370074: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x370074u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x370078: 0x3e00008  jr          $ra
    ctx->pc = 0x370078u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37007Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x370078u;
        // 0x37007c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x370078u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x370080u;
}
