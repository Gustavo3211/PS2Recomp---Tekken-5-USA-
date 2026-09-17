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

// Function: sub_00335708
// Address: 0x335708 - 0x335780
void sub_00335708_0x335708(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00335708_0x335708");
#endif

    ctx->pc = 0x335708u;

    // 0x335708: 0x5282b  sltu        $a1, $zero, $a1
    ctx->pc = 0x335708u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x33570c: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x33570cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x335710: 0xbc0821  addu        $at, $a1, $gp
    ctx->pc = 0x335710u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 28)));
    // 0x335714: 0x8c25c6e0  lw          $a1, -0x3920($at)
    ctx->pc = 0x335714u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294952672)));
    // 0x335718: 0x10a00017  beqz        $a1, . + 4 + (0x17 << 2)
    ctx->pc = 0x335718u;
    {
        const bool branch_taken_0x335718 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x33571Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x335718u;
        // 0x33571c: 0x3c037000  lui         $v1, 0x7000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x335718) {
            ctx->pc = 0x335778u;
            goto label_335778;
        }
    }
    ctx->pc = 0x335720u;
    // 0x335720: 0xa31024  and         $v0, $a1, $v1
    ctx->pc = 0x335720u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x335724: 0x54430006  bnel        $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x335724u;
    {
        const bool branch_taken_0x335724 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x335724) {
            ctx->pc = 0x335728u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x335724u;
            // 0x335728: 0x3c020fff  lui         $v0, 0xFFF (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x335740u;
            goto label_335740;
        }
    }
    ctx->pc = 0x33572Cu;
    // 0x33572c: 0x3c02f000  lui         $v0, 0xF000
    ctx->pc = 0x33572cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61440 << 16));
    // 0x335730: 0x3c033000  lui         $v1, 0x3000
    ctx->pc = 0x335730u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)12288 << 16));
    // 0x335734: 0x3463000a  ori         $v1, $v1, 0xA
    ctx->pc = 0x335734u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)10);
    // 0x335738: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x335738u;
    {
        const bool branch_taken_0x335738 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33573Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x335738u;
        // 0x33573c: 0xa21025  or          $v0, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x335738) {
            ctx->pc = 0x335750u;
            goto label_335750;
        }
    }
    ctx->pc = 0x335740u;
label_335740:
    // 0x335740: 0x3c033000  lui         $v1, 0x3000
    ctx->pc = 0x335740u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)12288 << 16));
    // 0x335744: 0x3463000a  ori         $v1, $v1, 0xA
    ctx->pc = 0x335744u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)10);
    // 0x335748: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x335748u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x33574c: 0xa21024  and         $v0, $a1, $v0
    ctx->pc = 0x33574cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
label_335750:
    // 0x335750: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x335750u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x335754: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x335754u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x335758: 0x3c025000  lui         $v0, 0x5000
    ctx->pc = 0x335758u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20480 << 16));
    // 0x33575c: 0x3442000a  ori         $v0, $v0, 0xA
    ctx->pc = 0x33575cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)10);
    // 0x335760: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x335760u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x335764: 0x34421100  ori         $v0, $v0, 0x1100
    ctx->pc = 0x335764u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4352);
    // 0x335768: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x335768u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x33576c: 0x70431b89  pcpyld      $v1, $v0, $v1
    ctx->pc = 0x33576cu;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x335770: 0x7c830000  sq          $v1, 0x0($a0)
    ctx->pc = 0x335770u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
    // 0x335774: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x335774u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
label_335778:
    // 0x335778: 0x3e00008  jr          $ra
    ctx->pc = 0x335778u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33577Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x335778u;
        // 0x33577c: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x335778u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x335780u;
}
