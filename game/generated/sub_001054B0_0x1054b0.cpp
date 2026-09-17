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

// Function: sub_001054B0
// Address: 0x1054b0 - 0x105510
void sub_001054B0_0x1054b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001054B0_0x1054b0");
#endif

    switch (ctx->pc) {
        case 0x1054f0u: goto label_1054f0;
        default: break;
    }

    ctx->pc = 0x1054b0u;

    // 0x1054b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1054b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1054b4: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x1054b4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1054b8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1054b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1054bc: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1054bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1054c0: 0x10c00016  beqz        $a2, . + 4 + (0x16 << 2)
    ctx->pc = 0x1054C0u;
    {
        const bool branch_taken_0x1054c0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1054C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1054C0u;
        // 0x1054c4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1054c0) {
            ctx->pc = 0x10551Cu;
            return;
        }
    }
    ctx->pc = 0x1054C8u;
    // 0x1054c8: 0x8e020184  lw          $v0, 0x184($s0)
    ctx->pc = 0x1054c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 388)));
    // 0x1054cc: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1054ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1054d0: 0x14430009  bne         $v0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1054D0u;
    {
        const bool branch_taken_0x1054d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1054D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1054D0u;
        // 0x1054d4: 0x8e020160  lw          $v0, 0x160($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 352)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1054d0) {
            ctx->pc = 0x1054F8u;
            goto label_1054f8;
        }
    }
    ctx->pc = 0x1054D8u;
    // 0x1054d8: 0x54430002  bnel        $v0, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1054D8u;
    {
        const bool branch_taken_0x1054d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1054d8) {
            ctx->pc = 0x1054DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1054D8u;
            // 0x1054dc: 0x8e0501c8  lw          $a1, 0x1C8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 456)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1054E4u;
            goto label_1054e4;
        }
    }
    ctx->pc = 0x1054E0u;
    // 0x1054e0: 0x8e0501d4  lw          $a1, 0x1D4($s0)
    ctx->pc = 0x1054e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 468)));
label_1054e4:
    // 0x1054e4: 0x24e6ffff  addiu       $a2, $a3, -0x1
    ctx->pc = 0x1054e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x1054e8: 0xc041344  jal         func_104D10
    ctx->pc = 0x1054E8u;
    SET_GPR_U32(ctx, 31, 0x1054F0u);
    ctx->pc = 0x1054ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1054E8u;
    // 0x1054ec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104D10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104D10u, 0x1054E8u, 0x1054F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1054F0u;
label_1054f0:
    // 0x1054f0: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1054F0u;
    {
        const bool branch_taken_0x1054f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1054F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1054F0u;
        // 0x1054f4: 0x8e030108  lw          $v1, 0x108($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 264)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1054f0) {
            ctx->pc = 0x105520u;
            return;
        }
    }
    ctx->pc = 0x1054F8u;
label_1054f8:
    // 0x1054f8: 0x54430004  bnel        $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1054F8u;
    {
        const bool branch_taken_0x1054f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1054f8) {
            ctx->pc = 0x1054FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1054F8u;
            // 0x1054fc: 0x8e0501d8  lw          $a1, 0x1D8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 472)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10550Cu;
            goto label_10550c;
        }
    }
    ctx->pc = 0x105500u;
    // 0x105500: 0x8e0501e4  lw          $a1, 0x1E4($s0)
    ctx->pc = 0x105500u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 484)));
    // 0x105504: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x105504u;
    {
        const bool branch_taken_0x105504 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x105508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105504u;
        // 0x105508: 0x8e0601f4  lw          $a2, 0x1F4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 500)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105504) {
            ctx->pc = 0x105510u;
            return;
        }
    }
    ctx->pc = 0x10550Cu;
label_10550c:
    // 0x10550c: 0x8e0601e8  lw          $a2, 0x1E8($s0)
    ctx->pc = 0x10550cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 488)));
    ctx->pc = 0x105510u;
}
