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

// Function: sub_002F49D0
// Address: 0x2f49d0 - 0x2f4a10
void sub_002F49D0_0x2f49d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F49D0_0x2f49d0");
#endif

    switch (ctx->pc) {
        case 0x2f49d0u: goto label_2f49d0;
        case 0x2f49d4u: goto label_2f49d4;
        case 0x2f49d8u: goto label_2f49d8;
        case 0x2f49dcu: goto label_2f49dc;
        case 0x2f49e0u: goto label_2f49e0;
        case 0x2f49e4u: goto label_2f49e4;
        case 0x2f49e8u: goto label_2f49e8;
        case 0x2f49ecu: goto label_2f49ec;
        case 0x2f49f0u: goto label_2f49f0;
        case 0x2f49f4u: goto label_2f49f4;
        case 0x2f49f8u: goto label_2f49f8;
        case 0x2f49fcu: goto label_2f49fc;
        case 0x2f4a00u: goto label_2f4a00;
        case 0x2f4a04u: goto label_2f4a04;
        case 0x2f4a08u: goto label_2f4a08;
        case 0x2f4a0cu: goto label_2f4a0c;
        default: break;
    }

    ctx->pc = 0x2f49d0u;

label_2f49d0:
    // 0x2f49d0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2f49d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_2f49d4:
    // 0x2f49d4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2f49d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_2f49d8:
    // 0x2f49d8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2f49d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_2f49dc:
    // 0x2f49dc: 0xc0bd230  jal         func_2F48C0
label_2f49e0:
    if (ctx->pc == 0x2F49E0u) {
        ctx->pc = 0x2F49E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F49DCu;
        // 0x2f49e0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F49E4u;
        goto label_2f49e4;
    }
    ctx->pc = 0x2F49DCu;
    SET_GPR_U32(ctx, 31, 0x2F49E4u);
    ctx->pc = 0x2F49E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F49DCu;
    // 0x2f49e0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F48C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F48C0u, 0x2F49DCu, 0x2F49E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F49E4u;
label_2f49e4:
    // 0x2f49e4: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x2f49e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_2f49e8:
    // 0x2f49e8: 0x24420038  addiu       $v0, $v0, 0x38
    ctx->pc = 0x2f49e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 56));
label_2f49ec:
    // 0x2f49ec: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x2f49ecu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_2f49f0:
    // 0x2f49f0: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x2f49f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_2f49f4:
    // 0x2f49f4: 0x60f809  jalr        $v1
label_2f49f8:
    if (ctx->pc == 0x2F49F8u) {
        ctx->pc = 0x2F49F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F49F4u;
        // 0x2f49f8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F49FCu;
        goto label_2f49fc;
    }
    ctx->pc = 0x2F49F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2F49FCu);
        ctx->pc = 0x2F49F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F49F4u;
        // 0x2f49f8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F49F4u, 0x2F49FCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2F49FCu;
label_2f49fc:
    // 0x2f49fc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2f49fcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2f4a00:
    // 0x2f4a00: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2f4a00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_2f4a04:
    // 0x2f4a04: 0x3e00008  jr          $ra
label_2f4a08:
    if (ctx->pc == 0x2F4A08u) {
        ctx->pc = 0x2F4A08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4A04u;
        // 0x2f4a08: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F4A0Cu;
        goto label_2f4a0c;
    }
    ctx->pc = 0x2F4A04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F4A08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4A04u;
        // 0x2f4a08: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F4A04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F4A0Cu;
label_2f4a0c:
    // 0x2f4a0c: 0x0  nop
    ctx->pc = 0x2f4a0cu;
    // NOP
    ctx->pc = 0x2f4a10u;
}
