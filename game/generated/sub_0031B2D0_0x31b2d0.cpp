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

// Function: sub_0031B2D0
// Address: 0x31b2d0 - 0x31b338
void sub_0031B2D0_0x31b2d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031B2D0_0x31b2d0");
#endif

    switch (ctx->pc) {
        case 0x31b2d0u: goto label_31b2d0;
        case 0x31b2d4u: goto label_31b2d4;
        case 0x31b2d8u: goto label_31b2d8;
        case 0x31b2dcu: goto label_31b2dc;
        case 0x31b2e0u: goto label_31b2e0;
        case 0x31b2e4u: goto label_31b2e4;
        case 0x31b2e8u: goto label_31b2e8;
        case 0x31b2ecu: goto label_31b2ec;
        case 0x31b2f0u: goto label_31b2f0;
        case 0x31b2f4u: goto label_31b2f4;
        case 0x31b2f8u: goto label_31b2f8;
        case 0x31b2fcu: goto label_31b2fc;
        case 0x31b300u: goto label_31b300;
        case 0x31b304u: goto label_31b304;
        case 0x31b308u: goto label_31b308;
        case 0x31b30cu: goto label_31b30c;
        case 0x31b310u: goto label_31b310;
        case 0x31b314u: goto label_31b314;
        case 0x31b318u: goto label_31b318;
        case 0x31b31cu: goto label_31b31c;
        case 0x31b320u: goto label_31b320;
        case 0x31b324u: goto label_31b324;
        case 0x31b328u: goto label_31b328;
        case 0x31b32cu: goto label_31b32c;
        case 0x31b330u: goto label_31b330;
        case 0x31b334u: goto label_31b334;
        default: break;
    }

    ctx->pc = 0x31b2d0u;

label_31b2d0:
    // 0x31b2d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x31b2d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_31b2d4:
    // 0x31b2d4: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x31b2d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_31b2d8:
    // 0x31b2d8: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x31b2d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_31b2dc:
    // 0x31b2dc: 0xc0c8864  jal         func_322190
label_31b2e0:
    if (ctx->pc == 0x31B2E0u) {
        ctx->pc = 0x31B2E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B2DCu;
        // 0x31b2e0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31B2E4u;
        goto label_31b2e4;
    }
    ctx->pc = 0x31B2DCu;
    SET_GPR_U32(ctx, 31, 0x31B2E4u);
    ctx->pc = 0x31B2E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31B2DCu;
    // 0x31b2e0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x322190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x322190u, 0x31B2DCu, 0x31B2E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31B2E4u;
label_31b2e4:
    // 0x31b2e4: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x31b2e4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_31b2e8:
    // 0x31b2e8: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x31b2e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_31b2ec:
    // 0x31b2ec: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x31b2ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_31b2f0:
    // 0x31b2f0: 0x2405fff0  addiu       $a1, $zero, -0x10
    ctx->pc = 0x31b2f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
label_31b2f4:
    // 0x31b2f4: 0x24630078  addiu       $v1, $v1, 0x78
    ctx->pc = 0x31b2f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 120));
label_31b2f8:
    // 0x31b2f8: 0x84640000  lh          $a0, 0x0($v1)
    ctx->pc = 0x31b2f8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_31b2fc:
    // 0x31b2fc: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x31b2fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_31b300:
    // 0x31b300: 0x40f809  jalr        $v0
label_31b304:
    if (ctx->pc == 0x31B304u) {
        ctx->pc = 0x31B304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B300u;
        // 0x31b304: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31B308u;
        goto label_31b308;
    }
    ctx->pc = 0x31B300u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x31B308u);
        ctx->pc = 0x31B304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B300u;
        // 0x31b304: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31B300u, 0x31B308u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x31B308u;
label_31b308:
    // 0x31b308: 0x8e030050  lw          $v1, 0x50($s0)
    ctx->pc = 0x31b308u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_31b30c:
    // 0x31b30c: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x31b30cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_31b310:
    // 0x31b310: 0x24630038  addiu       $v1, $v1, 0x38
    ctx->pc = 0x31b310u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 56));
label_31b314:
    // 0x31b314: 0x84640000  lh          $a0, 0x0($v1)
    ctx->pc = 0x31b314u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_31b318:
    // 0x31b318: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x31b318u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_31b31c:
    // 0x31b31c: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x31b31cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_31b320:
    // 0x31b320: 0x40f809  jalr        $v0
label_31b324:
    if (ctx->pc == 0x31B324u) {
        ctx->pc = 0x31B324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B320u;
        // 0x31b324: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31B328u;
        goto label_31b328;
    }
    ctx->pc = 0x31B320u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x31B328u);
        ctx->pc = 0x31B324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B320u;
        // 0x31b324: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31B320u, 0x31B328u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x31B328u;
label_31b328:
    // 0x31b328: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x31b328u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_31b32c:
    // 0x31b32c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x31b32cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_31b330:
    // 0x31b330: 0x3e00008  jr          $ra
label_31b334:
    if (ctx->pc == 0x31B334u) {
        ctx->pc = 0x31B334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B330u;
        // 0x31b334: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31B338u;
        goto label_fallthrough_0x31b330;
    }
    ctx->pc = 0x31B330u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31B334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B330u;
        // 0x31b334: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31B330u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x31b330:
    ctx->pc = 0x31B338u;
}
