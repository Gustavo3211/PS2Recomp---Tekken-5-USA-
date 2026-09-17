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

// Function: sub_00367188
// Address: 0x367188 - 0x367200
void sub_00367188_0x367188(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00367188_0x367188");
#endif

    switch (ctx->pc) {
        case 0x3671c0u: goto label_3671c0;
        default: break;
    }

    ctx->pc = 0x367188u;

    // 0x367188: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x367188u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x36718c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x36718cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x367190: 0x8c42a814  lw          $v0, -0x57EC($v0)
    ctx->pc = 0x367190u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294944788)));
    // 0x367194: 0x52e00  sll         $a1, $a1, 24
    ctx->pc = 0x367194u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 24));
    // 0x367198: 0x3c060001  lui         $a2, 0x1
    ctx->pc = 0x367198u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)1 << 16));
    // 0x36719c: 0xc43021  addu        $a2, $a2, $a0
    ctx->pc = 0x36719cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x3671a0: 0x8cc6a810  lw          $a2, -0x57F0($a2)
    ctx->pc = 0x3671a0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294944784)));
    // 0x3671a4: 0x3408a81c  ori         $t0, $zero, 0xA81C
    ctx->pc = 0x3671a4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)43036);
    // 0x3671a8: 0x1044021  addu        $t0, $t0, $a0
    ctx->pc = 0x3671a8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
    // 0x3671ac: 0x10c20010  beq         $a2, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x3671ACu;
    {
        const bool branch_taken_0x3671ac = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x3671B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3671ACu;
        // 0x3671b0: 0x52e03  sra         $a1, $a1, 24 (Delay Slot)
        SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3671ac) {
            ctx->pc = 0x3671F0u;
            goto label_3671f0;
        }
    }
    ctx->pc = 0x3671B4u;
    // 0x3671b4: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x3671b4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3671b8: 0x610c0  sll         $v0, $a2, 3
    ctx->pc = 0x3671b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x3671bc: 0x0  nop
    ctx->pc = 0x3671bcu;
    // NOP
label_3671c0:
    // 0x3671c0: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x3671c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x3671c4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3671c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x3671c8: 0x461023  subu        $v0, $v0, $a2
    ctx->pc = 0x3671c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x3671cc: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x3671ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x3671d0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3671d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x3671d4: 0x28c30040  slti        $v1, $a2, 0x40
    ctx->pc = 0x3671d4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)64) ? 1 : 0);
    // 0x3671d8: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x3671d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x3671dc: 0x80440000  lb          $a0, 0x0($v0)
    ctx->pc = 0x3671dcu;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3671e0: 0x10850004  beq         $a0, $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3671E0u;
    {
        const bool branch_taken_0x3671e0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 5));
        ctx->pc = 0x3671E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3671E0u;
        // 0x3671e4: 0x3300a  movz        $a2, $zero, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3671e0) {
            ctx->pc = 0x3671F4u;
            goto label_3671f4;
        }
    }
    ctx->pc = 0x3671E8u;
    // 0x3671e8: 0x54c7fff5  bnel        $a2, $a3, . + 4 + (-0xB << 2)
    ctx->pc = 0x3671E8u;
    {
        const bool branch_taken_0x3671e8 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 7));
        if (branch_taken_0x3671e8) {
            ctx->pc = 0x3671ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3671E8u;
            // 0x3671ec: 0x610c0  sll         $v0, $a2, 3 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3671C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3671c0;
        }
    }
    ctx->pc = 0x3671F0u;
label_3671f0:
    // 0x3671f0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3671f0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3671f4:
    // 0x3671f4: 0x3e00008  jr          $ra
    ctx->pc = 0x3671F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3671F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3671FCu;
    // 0x3671fc: 0x0  nop
    ctx->pc = 0x3671fcu;
    // NOP
    ctx->pc = 0x367200u;
}
