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

// Function: sub_002F04F8
// Address: 0x2f04f8 - 0x2f0540
void sub_002F04F8_0x2f04f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F04F8_0x2f04f8");
#endif

    switch (ctx->pc) {
        case 0x2f04f8u: goto label_2f04f8;
        case 0x2f04fcu: goto label_2f04fc;
        case 0x2f0500u: goto label_2f0500;
        case 0x2f0504u: goto label_2f0504;
        case 0x2f0508u: goto label_2f0508;
        case 0x2f050cu: goto label_2f050c;
        case 0x2f0510u: goto label_2f0510;
        case 0x2f0514u: goto label_2f0514;
        case 0x2f0518u: goto label_2f0518;
        case 0x2f051cu: goto label_2f051c;
        case 0x2f0520u: goto label_2f0520;
        case 0x2f0524u: goto label_2f0524;
        case 0x2f0528u: goto label_2f0528;
        case 0x2f052cu: goto label_2f052c;
        case 0x2f0530u: goto label_2f0530;
        case 0x2f0534u: goto label_2f0534;
        case 0x2f0538u: goto label_2f0538;
        case 0x2f053cu: goto label_2f053c;
        default: break;
    }

    ctx->pc = 0x2f04f8u;

label_2f04f8:
    // 0x2f04f8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2f04f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_2f04fc:
    // 0x2f04fc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2f04fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_2f0500:
    // 0x2f0500: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2f0500u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2f0504:
    // 0x2f0504: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2f0504u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_2f0508:
    // 0x2f0508: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x2f0508u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_2f050c:
    // 0x2f050c: 0x24420048  addiu       $v0, $v0, 0x48
    ctx->pc = 0x2f050cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 72));
label_2f0510:
    // 0x2f0510: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x2f0510u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_2f0514:
    // 0x2f0514: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x2f0514u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_2f0518:
    // 0x2f0518: 0x60f809  jalr        $v1
label_2f051c:
    if (ctx->pc == 0x2F051Cu) {
        ctx->pc = 0x2F051Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0518u;
        // 0x2f051c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F0520u;
        goto label_2f0520;
    }
    ctx->pc = 0x2F0518u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2F0520u);
        ctx->pc = 0x2F051Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0518u;
        // 0x2f051c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F0518u, 0x2F0520u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2F0520u;
label_2f0520:
    // 0x2f0520: 0x8e04011c  lw          $a0, 0x11C($s0)
    ctx->pc = 0x2f0520u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 284)));
label_2f0524:
    // 0x2f0524: 0x8e020040  lw          $v0, 0x40($s0)
    ctx->pc = 0x2f0524u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
label_2f0528:
    // 0x2f0528: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2f0528u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_2f052c:
    // 0x2f052c: 0x441026  xor         $v0, $v0, $a0
    ctx->pc = 0x2f052cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 4));
label_2f0530:
    // 0x2f0530: 0xae020040  sw          $v0, 0x40($s0)
    ctx->pc = 0x2f0530u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 2));
label_2f0534:
    // 0x2f0534: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2f0534u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2f0538:
    // 0x2f0538: 0x3e00008  jr          $ra
label_2f053c:
    if (ctx->pc == 0x2F053Cu) {
        ctx->pc = 0x2F053Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0538u;
        // 0x2f053c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F0540u;
        goto label_fallthrough_0x2f0538;
    }
    ctx->pc = 0x2F0538u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F053Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0538u;
        // 0x2f053c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F0538u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2f0538:
    ctx->pc = 0x2F0540u;
}
