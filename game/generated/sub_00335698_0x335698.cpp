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

// Function: sub_00335698
// Address: 0x335698 - 0x335708
void sub_00335698_0x335698(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00335698_0x335698");
#endif

    ctx->pc = 0x335698u;

    // 0x335698: 0x5282b  sltu        $a1, $zero, $a1
    ctx->pc = 0x335698u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x33569c: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x33569cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x3356a0: 0xbc0821  addu        $at, $a1, $gp
    ctx->pc = 0x3356a0u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 28)));
    // 0x3356a4: 0x8c25c6e0  lw          $a1, -0x3920($at)
    ctx->pc = 0x3356a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294952672)));
    // 0x3356a8: 0x10a00015  beqz        $a1, . + 4 + (0x15 << 2)
    ctx->pc = 0x3356A8u;
    {
        const bool branch_taken_0x3356a8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x3356ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3356A8u;
        // 0x3356ac: 0x3c037000  lui         $v1, 0x7000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3356a8) {
            ctx->pc = 0x335700u;
            goto label_335700;
        }
    }
    ctx->pc = 0x3356B0u;
    // 0x3356b0: 0xa31024  and         $v0, $a1, $v1
    ctx->pc = 0x3356b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x3356b4: 0x54430006  bnel        $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x3356B4u;
    {
        const bool branch_taken_0x3356b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x3356b4) {
            ctx->pc = 0x3356B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3356B4u;
            // 0x3356b8: 0x3c020fff  lui         $v0, 0xFFF (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3356D0u;
            goto label_3356d0;
        }
    }
    ctx->pc = 0x3356BCu;
    // 0x3356bc: 0x3c02f000  lui         $v0, 0xF000
    ctx->pc = 0x3356bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61440 << 16));
    // 0x3356c0: 0x3c033000  lui         $v1, 0x3000
    ctx->pc = 0x3356c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)12288 << 16));
    // 0x3356c4: 0x3463000a  ori         $v1, $v1, 0xA
    ctx->pc = 0x3356c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)10);
    // 0x3356c8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x3356C8u;
    {
        const bool branch_taken_0x3356c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3356CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3356C8u;
        // 0x3356cc: 0xa21025  or          $v0, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3356c8) {
            ctx->pc = 0x3356E0u;
            goto label_3356e0;
        }
    }
    ctx->pc = 0x3356D0u;
label_3356d0:
    // 0x3356d0: 0x3c033000  lui         $v1, 0x3000
    ctx->pc = 0x3356d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)12288 << 16));
    // 0x3356d4: 0x3463000a  ori         $v1, $v1, 0xA
    ctx->pc = 0x3356d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)10);
    // 0x3356d8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x3356d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x3356dc: 0xa21024  and         $v0, $a1, $v0
    ctx->pc = 0x3356dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
label_3356e0:
    // 0x3356e0: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x3356e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x3356e4: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x3356e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x3356e8: 0x3c025000  lui         $v0, 0x5000
    ctx->pc = 0x3356e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20480 << 16));
    // 0x3356ec: 0x3442000a  ori         $v0, $v0, 0xA
    ctx->pc = 0x3356ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)10);
    // 0x3356f0: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x3356f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x3356f4: 0x70431b89  pcpyld      $v1, $v0, $v1
    ctx->pc = 0x3356f4u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x3356f8: 0x7c830000  sq          $v1, 0x0($a0)
    ctx->pc = 0x3356f8u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
    // 0x3356fc: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x3356fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
label_335700:
    // 0x335700: 0x3e00008  jr          $ra
    ctx->pc = 0x335700u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x335704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x335700u;
        // 0x335704: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x335700u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x335708u;
}
