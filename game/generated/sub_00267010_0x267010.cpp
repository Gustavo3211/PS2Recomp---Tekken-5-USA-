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

// Function: sub_00267010
// Address: 0x267010 - 0x267050
void sub_00267010_0x267010(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00267010_0x267010");
#endif

    switch (ctx->pc) {
        case 0x267010u: goto label_267010;
        case 0x267014u: goto label_267014;
        case 0x267018u: goto label_267018;
        case 0x26701cu: goto label_26701c;
        case 0x267020u: goto label_267020;
        case 0x267024u: goto label_267024;
        case 0x267028u: goto label_267028;
        case 0x26702cu: goto label_26702c;
        case 0x267030u: goto label_267030;
        case 0x267034u: goto label_267034;
        case 0x267038u: goto label_267038;
        case 0x26703cu: goto label_26703c;
        case 0x267040u: goto label_267040;
        case 0x267044u: goto label_267044;
        case 0x267048u: goto label_267048;
        case 0x26704cu: goto label_26704c;
        default: break;
    }

    ctx->pc = 0x267010u;

label_267010:
    // 0x267010: 0x8f85aa7c  lw          $a1, -0x5584($gp)
    ctx->pc = 0x267010u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945404)));
label_267014:
    // 0x267014: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x267014u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_267018:
    // 0x267018: 0x344277c3  ori         $v0, $v0, 0x77C3
    ctx->pc = 0x267018u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)30659);
label_26701c:
    // 0x26701c: 0x8ca300c4  lw          $v1, 0xC4($a1)
    ctx->pc = 0x26701cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 196)));
label_267020:
    // 0x267020: 0x9464001c  lhu         $a0, 0x1C($v1)
    ctx->pc = 0x267020u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 28)));
label_267024:
    // 0x267024: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x267024u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_267028:
    // 0x267028: 0x2c430012  sltiu       $v1, $v0, 0x12
    ctx->pc = 0x267028u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)18) ? 1 : 0);
label_26702c:
    // 0x26702c: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
label_267030:
    if (ctx->pc == 0x267030u) {
        ctx->pc = 0x267034u;
        goto label_267034;
    }
    ctx->pc = 0x26702Cu;
    {
        const bool branch_taken_0x26702c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x26702c) {
            ctx->pc = 0x267058u;
            return;
        }
    }
    ctx->pc = 0x267034u;
label_267034:
    // 0x267034: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x267034u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_267038:
    // 0x267038: 0x3c030047  lui         $v1, 0x47
    ctx->pc = 0x267038u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)71 << 16));
label_26703c:
    // 0x26703c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x26703cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_267040:
    // 0x267040: 0x8c632af0  lw          $v1, 0x2AF0($v1)
    ctx->pc = 0x267040u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 10992)));
label_267044:
    // 0x267044: 0x600008  jr          $v1
label_267048:
    if (ctx->pc == 0x267048u) {
        ctx->pc = 0x26704Cu;
        goto label_26704c;
    }
    ctx->pc = 0x267044u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x267044u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x26704Cu;
label_26704c:
    // 0x26704c: 0x0  nop
    ctx->pc = 0x26704cu;
    // NOP
    ctx->pc = 0x267050u;
}
