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

// Function: sub_0030D4D0
// Address: 0x30d4d0 - 0x30d550
void sub_0030D4D0_0x30d4d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0030D4D0_0x30d4d0");
#endif

    switch (ctx->pc) {
        case 0x30d4e8u: goto label_30d4e8;
        case 0x30d518u: goto label_30d518;
        default: break;
    }

    ctx->pc = 0x30d4d0u;

    // 0x30d4d0: 0x24090002  addiu       $t1, $zero, 0x2
    ctx->pc = 0x30d4d0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x30d4d4: 0x3c051400  lui         $a1, 0x1400
    ctx->pc = 0x30d4d4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)5120 << 16));
    // 0x30d4d8: 0x2408000d  addiu       $t0, $zero, 0xD
    ctx->pc = 0x30d4d8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x30d4dc: 0x24070005  addiu       $a3, $zero, 0x5
    ctx->pc = 0x30d4dcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x30d4e0: 0x24864580  addiu       $a2, $a0, 0x4580
    ctx->pc = 0x30d4e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 17792));
    // 0x30d4e4: 0x24822180  addiu       $v0, $a0, 0x2180
    ctx->pc = 0x30d4e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 8576));
label_30d4e8:
    // 0x30d4e8: 0x2403000e  addiu       $v1, $zero, 0xE
    ctx->pc = 0x30d4e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x30d4ec: 0xfc480008  sd          $t0, 0x8($v0)
    ctx->pc = 0x30d4ecu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 8));
    // 0x30d4f0: 0xac490000  sw          $t1, 0x0($v0)
    ctx->pc = 0x30d4f0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 9));
    // 0x30d4f4: 0xac450004  sw          $a1, 0x4($v0)
    ctx->pc = 0x30d4f4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 5));
    // 0x30d4f8: 0x24822190  addiu       $v0, $a0, 0x2190
    ctx->pc = 0x30d4f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 8592));
    // 0x30d4fc: 0xfc400000  sd          $zero, 0x0($v0)
    ctx->pc = 0x30d4fcu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 0));
    // 0x30d500: 0xfc400008  sd          $zero, 0x8($v0)
    ctx->pc = 0x30d500u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 0));
    // 0x30d504: 0x248221a0  addiu       $v0, $a0, 0x21A0
    ctx->pc = 0x30d504u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 8608));
    // 0x30d508: 0xfc470008  sd          $a3, 0x8($v0)
    ctx->pc = 0x30d508u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 7));
    // 0x30d50c: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x30d50cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x30d510: 0xac450004  sw          $a1, 0x4($v0)
    ctx->pc = 0x30d510u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 5));
    // 0x30d514: 0x248221b0  addiu       $v0, $a0, 0x21B0
    ctx->pc = 0x30d514u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 8624));
label_30d518:
    // 0x30d518: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x30d518u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x30d51c: 0xfc400008  sd          $zero, 0x8($v0)
    ctx->pc = 0x30d51cu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 0));
    // 0x30d520: 0xfc400000  sd          $zero, 0x0($v0)
    ctx->pc = 0x30d520u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 0));
    // 0x30d524: 0x0  nop
    ctx->pc = 0x30d524u;
    // NOP
    // 0x30d528: 0x0  nop
    ctx->pc = 0x30d528u;
    // NOP
    // 0x30d52c: 0x461fffa  bgez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x30D52Cu;
    {
        const bool branch_taken_0x30d52c = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x30D530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D52Cu;
        // 0x30d530: 0x24420010  addiu       $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30d52c) {
            ctx->pc = 0x30D518u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_30d518;
        }
    }
    ctx->pc = 0x30D534u;
    // 0x30d534: 0x248422c0  addiu       $a0, $a0, 0x22C0
    ctx->pc = 0x30d534u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8896));
    // 0x30d538: 0x86102a  slt         $v0, $a0, $a2
    ctx->pc = 0x30d538u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x30d53c: 0x5440ffea  bnel        $v0, $zero, . + 4 + (-0x16 << 2)
    ctx->pc = 0x30D53Cu;
    {
        const bool branch_taken_0x30d53c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x30d53c) {
            ctx->pc = 0x30D540u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30D53Cu;
            // 0x30d540: 0x24822180  addiu       $v0, $a0, 0x2180 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 8576));
            ctx->in_delay_slot = false;
            ctx->pc = 0x30D4E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_30d4e8;
        }
    }
    ctx->pc = 0x30D544u;
    // 0x30d544: 0x3e00008  jr          $ra
    ctx->pc = 0x30D544u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30D544u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30D54Cu;
    // 0x30d54c: 0x0  nop
    ctx->pc = 0x30d54cu;
    // NOP
    ctx->pc = 0x30d550u;
}
