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

// Function: sub_00267060
// Address: 0x267060 - 0x2670b0
void sub_00267060_0x267060(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00267060_0x267060");
#endif

    switch (ctx->pc) {
        case 0x267060u: goto label_267060;
        case 0x267064u: goto label_267064;
        case 0x267068u: goto label_267068;
        case 0x26706cu: goto label_26706c;
        case 0x267070u: goto label_267070;
        case 0x267074u: goto label_267074;
        case 0x267078u: goto label_267078;
        case 0x26707cu: goto label_26707c;
        case 0x267080u: goto label_267080;
        case 0x267084u: goto label_267084;
        case 0x267088u: goto label_267088;
        case 0x26708cu: goto label_26708c;
        case 0x267090u: goto label_267090;
        case 0x267094u: goto label_267094;
        case 0x267098u: goto label_267098;
        case 0x26709cu: goto label_26709c;
        case 0x2670a0u: goto label_2670a0;
        case 0x2670a4u: goto label_2670a4;
        case 0x2670a8u: goto label_2670a8;
        case 0x2670acu: goto label_2670ac;
        default: break;
    }

    ctx->pc = 0x267060u;

label_267060:
    // 0x267060: 0x8f84aa80  lw          $a0, -0x5580($gp)
    ctx->pc = 0x267060u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945408)));
label_267064:
    // 0x267064: 0x94830096  lhu         $v1, 0x96($a0)
    ctx->pc = 0x267064u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 150)));
label_267068:
    // 0x267068: 0x2463fff6  addiu       $v1, $v1, -0xA
    ctx->pc = 0x267068u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967286));
label_26706c:
    // 0x26706c: 0x2c630007  sltiu       $v1, $v1, 0x7
    ctx->pc = 0x26706cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
label_267070:
    // 0x267070: 0x10600012  beqz        $v1, . + 4 + (0x12 << 2)
label_267074:
    if (ctx->pc == 0x267074u) {
        ctx->pc = 0x267074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267070u;
        // 0x267074: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x267078u;
        goto label_267078;
    }
    ctx->pc = 0x267070u;
    {
        const bool branch_taken_0x267070 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x267074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267070u;
        // 0x267074: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x267070) {
            ctx->pc = 0x2670BCu;
            return;
        }
    }
    ctx->pc = 0x267078u;
label_267078:
    // 0x267078: 0x8c8400c4  lw          $a0, 0xC4($a0)
    ctx->pc = 0x267078u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 196)));
label_26707c:
    // 0x26707c: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x26707cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_267080:
    // 0x267080: 0x344277bf  ori         $v0, $v0, 0x77BF
    ctx->pc = 0x267080u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)30655);
label_267084:
    // 0x267084: 0x9483001c  lhu         $v1, 0x1C($a0)
    ctx->pc = 0x267084u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 28)));
label_267088:
    // 0x267088: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x267088u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_26708c:
    // 0x26708c: 0x2c44000e  sltiu       $a0, $v0, 0xE
    ctx->pc = 0x26708cu;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)14) ? 1 : 0);
label_267090:
    // 0x267090: 0x5080000a  beql        $a0, $zero, . + 4 + (0xA << 2)
label_267094:
    if (ctx->pc == 0x267094u) {
        ctx->pc = 0x267094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267090u;
        // 0x267094: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x267098u;
        goto label_267098;
    }
    ctx->pc = 0x267090u;
    {
        const bool branch_taken_0x267090 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x267090) {
            ctx->pc = 0x267094u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x267090u;
            // 0x267094: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2670BCu;
            return;
        }
    }
    ctx->pc = 0x267098u;
label_267098:
    // 0x267098: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x267098u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_26709c:
    // 0x26709c: 0x3c030047  lui         $v1, 0x47
    ctx->pc = 0x26709cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)71 << 16));
label_2670a0:
    // 0x2670a0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2670a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2670a4:
    // 0x2670a4: 0x8c632b40  lw          $v1, 0x2B40($v1)
    ctx->pc = 0x2670a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 11072)));
label_2670a8:
    // 0x2670a8: 0x600008  jr          $v1
label_2670ac:
    if (ctx->pc == 0x2670ACu) {
        ctx->pc = 0x2670B0u;
        goto label_fallthrough_0x2670a8;
    }
    ctx->pc = 0x2670A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2670A8u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
label_fallthrough_0x2670a8:
    ctx->pc = 0x2670B0u;
}
