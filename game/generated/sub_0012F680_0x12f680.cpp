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

// Function: sub_0012F680
// Address: 0x12f680 - 0x12f750
void sub_0012F680_0x12f680(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0012F680_0x12f680");
#endif

    ctx->pc = 0x12f680u;

    // 0x12f680: 0x3c027ff0  lui         $v0, 0x7FF0
    ctx->pc = 0x12f680u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32752 << 16));
    // 0x12f684: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x12f684u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x12f688: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x12f688u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x12f68c: 0x3c03fcc0  lui         $v1, 0xFCC0
    ctx->pc = 0x12f68cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64704 << 16));
    // 0x12f690: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x12f690u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x12f694: 0x41023  negu        $v0, $a0
    ctx->pc = 0x12f694u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 4)));
    // 0x12f698: 0x18800009  blez        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x12F698u;
    {
        const bool branch_taken_0x12f698 = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x12F69Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F698u;
        // 0x12f69c: 0x4303c  dsll32      $a2, $a0, 0 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) << (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f698) {
            ctx->pc = 0x12F6C0u;
            goto label_12f6c0;
        }
    }
    ctx->pc = 0x12F6A0u;
    // 0x12f6a0: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x12f6a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x12f6a4: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x12f6a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x12f6a8: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x12f6a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x12f6ac: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x12f6acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x12f6b0: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x12f6b0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x12f6b4: 0xa62825  or          $a1, $a1, $a2
    ctx->pc = 0x12f6b4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 6));
    // 0x12f6b8: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x12F6B8u;
    {
        const bool branch_taken_0x12f6b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12F6BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F6B8u;
        // 0x12f6bc: 0xa32824  and         $a1, $a1, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f6b8) {
            ctx->pc = 0x12F744u;
            goto label_12f744;
        }
    }
    ctx->pc = 0x12F6C0u;
label_12f6c0:
    // 0x12f6c0: 0x22503  sra         $a0, $v0, 20
    ctx->pc = 0x12f6c0u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 2), 20));
    // 0x12f6c4: 0x28820014  slti        $v0, $a0, 0x14
    ctx->pc = 0x12f6c4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)20) ? 1 : 0);
    // 0x12f6c8: 0x5040000d  beql        $v0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x12F6C8u;
    {
        const bool branch_taken_0x12f6c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x12f6c8) {
            ctx->pc = 0x12F6CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12F6C8u;
            // 0x12f6cc: 0x2484ffec  addiu       $a0, $a0, -0x14 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967276));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12F700u;
            goto label_12f700;
        }
    }
    ctx->pc = 0x12F6D0u;
    // 0x12f6d0: 0x3c020008  lui         $v0, 0x8
    ctx->pc = 0x12f6d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
    // 0x12f6d4: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x12f6d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x12f6d8: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x12f6d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x12f6dc: 0x821007  srav        $v0, $v0, $a0
    ctx->pc = 0x12f6dcu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 4) & 0x1F));
    // 0x12f6e0: 0xa32824  and         $a1, $a1, $v1
    ctx->pc = 0x12f6e0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x12f6e4: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x12f6e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x12f6e8: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x12f6e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x12f6ec: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x12f6ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x12f6f0: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x12f6f0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x12f6f4: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x12F6F4u;
    {
        const bool branch_taken_0x12f6f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12F6F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F6F4u;
        // 0x12f6f8: 0xa32824  and         $a1, $a1, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f6f4) {
            ctx->pc = 0x12F744u;
            goto label_12f744;
        }
    }
    ctx->pc = 0x12F6FCu;
    // 0x12f6fc: 0x0  nop
    ctx->pc = 0x12f6fcu;
    // NOP
label_12f700:
    // 0x12f700: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x12f700u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x12f704: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x12f704u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x12f708: 0x2882001f  slti        $v0, $a0, 0x1F
    ctx->pc = 0x12f708u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)31) ? 1 : 0);
    // 0x12f70c: 0x43027  nor         $a2, $zero, $a0
    ctx->pc = 0x12f70cu;
    SET_GPR_U64(ctx, 6, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 4)));
    // 0x12f710: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x12F710u;
    {
        const bool branch_taken_0x12f710 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12F714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F710u;
        // 0x12f714: 0xa32824  and         $a1, $a1, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f710) {
            ctx->pc = 0x12F728u;
            goto label_12f728;
        }
    }
    ctx->pc = 0x12F718u;
    // 0x12f718: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x12f718u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12f71c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x12F71Cu;
    {
        const bool branch_taken_0x12f71c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12F720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F71Cu;
        // 0x12f720: 0xc21004  sllv        $v0, $v0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 6) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f71c) {
            ctx->pc = 0x12F72Cu;
            goto label_12f72c;
        }
    }
    ctx->pc = 0x12F724u;
    // 0x12f724: 0x0  nop
    ctx->pc = 0x12f724u;
    // NOP
label_12f728:
    // 0x12f728: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x12f728u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_12f72c:
    // 0x12f72c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x12f72cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x12f730: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x12f730u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x12f734: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x12f734u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x12f738: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x12f738u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x12f73c: 0xa32824  and         $a1, $a1, $v1
    ctx->pc = 0x12f73cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x12f740: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x12f740u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
label_12f744:
    // 0x12f744: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x12f744u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f748: 0x3e00008  jr          $ra
    ctx->pc = 0x12F748u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12F748u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12F750u;
}
