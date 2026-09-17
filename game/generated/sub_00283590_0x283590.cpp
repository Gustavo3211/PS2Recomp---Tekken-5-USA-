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

// Function: sub_00283590
// Address: 0x283590 - 0x2835f0
void sub_00283590_0x283590(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00283590_0x283590");
#endif

    ctx->pc = 0x283590u;

    // 0x283590: 0x80482d  daddu       $t1, $a0, $zero
    ctx->pc = 0x283590u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x283594: 0x9ca40000  lwu         $a0, 0x0($a1)
    ctx->pc = 0x283594u;
    SET_GPR_ZE32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x283598: 0x9d230000  lwu         $v1, 0x0($t1)
    ctx->pc = 0x283598u;
    SET_GPR_ZE32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x28359c: 0x3408ffff  ori         $t0, $zero, 0xFFFF
    ctx->pc = 0x28359cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2835a0: 0x84438  dsll        $t0, $t0, 16
    ctx->pc = 0x2835a0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << 16);
    // 0x2835a4: 0x3508fffe  ori         $t0, $t0, 0xFFFE
    ctx->pc = 0x2835a4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)65534);
    // 0x2835a8: 0x9ce50000  lwu         $a1, 0x0($a3)
    ctx->pc = 0x2835a8u;
    SET_GPR_ZE32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2835ac: 0x9cc20000  lwu         $v0, 0x0($a2)
    ctx->pc = 0x2835acu;
    SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2835b0: 0x64382d  daddu       $a3, $v1, $a0
    ctx->pc = 0x2835b0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 4));
    // 0x2835b4: 0x107182b  sltu        $v1, $t0, $a3
    ctx->pc = 0x2835b4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x2835b8: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2835B8u;
    {
        const bool branch_taken_0x2835b8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2835BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2835B8u;
        // 0x2835bc: 0x45202d  daddu       $a0, $v0, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2835b8) {
            ctx->pc = 0x2835CCu;
            goto label_2835cc;
        }
    }
    ctx->pc = 0x2835C0u;
    // 0x2835c0: 0x104102b  sltu        $v0, $t0, $a0
    ctx->pc = 0x2835c0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x2835c4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2835C4u;
    {
        const bool branch_taken_0x2835c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2835c4) {
            ctx->pc = 0x2835D4u;
            goto label_2835d4;
        }
    }
    ctx->pc = 0x2835CCu;
label_2835cc:
    // 0x2835cc: 0x7387a  dsrl        $a3, $a3, 1
    ctx->pc = 0x2835ccu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) >> 1);
    // 0x2835d0: 0x4207a  dsrl        $a0, $a0, 1
    ctx->pc = 0x2835d0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> 1);
label_2835d4:
    // 0x2835d4: 0x7103c  dsll32      $v0, $a3, 0
    ctx->pc = 0x2835d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) << (32 + 0));
    // 0x2835d8: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x2835d8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x2835dc: 0x4183c  dsll32      $v1, $a0, 0
    ctx->pc = 0x2835dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 0));
    // 0x2835e0: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x2835e0u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x2835e4: 0xad220000  sw          $v0, 0x0($t1)
    ctx->pc = 0x2835e4u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 2));
    // 0x2835e8: 0x3e00008  jr          $ra
    ctx->pc = 0x2835E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2835ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2835E8u;
        // 0x2835ec: 0xacc30000  sw          $v1, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2835E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2835F0u;
}
