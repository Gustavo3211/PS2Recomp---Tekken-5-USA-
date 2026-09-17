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

// Function: sub_004A2540
// Address: 0x4a2540 - 0x4a25c8
void sub_004A2540_0x4a2540(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004A2540_0x4a2540");
#endif

    ctx->pc = 0x4a2540u;

    // 0x4a2540: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4a2540u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4a2544: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x4a2544u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a2548: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4a2548u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4a254c: 0x24660138  addiu       $a2, $v1, 0x138
    ctx->pc = 0x4a254cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 312));
    // 0x4a2550: 0x24670124  addiu       $a3, $v1, 0x124
    ctx->pc = 0x4a2550u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 292));
    // 0x4a2554: 0x2468000c  addiu       $t0, $v1, 0xC
    ctx->pc = 0x4a2554u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
    // 0x4a2558: 0x2463013a  addiu       $v1, $v1, 0x13A
    ctx->pc = 0x4a2558u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 314));
    // 0x4a255c: 0x24040026  addiu       $a0, $zero, 0x26
    ctx->pc = 0x4a255cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
    // 0x4a2560: 0x84620000  lh          $v0, 0x0($v1)
    ctx->pc = 0x4a2560u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4a2564: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x4a2564u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x4a2568: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4a2568u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4a256c: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4a256cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4a2570: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x4A2570u;
    {
        const bool branch_taken_0x4a2570 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4A2574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A2570u;
        // 0x4a2574: 0xa4620000  sh          $v0, 0x0($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a2570) {
            ctx->pc = 0x4A25B8u;
            goto label_4a25b8;
        }
    }
    ctx->pc = 0x4A2578u;
    // 0x4a2578: 0x84c30000  lh          $v1, 0x0($a2)
    ctx->pc = 0x4a2578u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4a257c: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x4a257cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
    // 0x4a2580: 0x34a50002  ori         $a1, $a1, 0x2
    ctx->pc = 0x4a2580u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)2);
    // 0x4a2584: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4a2584u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4a2588: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x4a2588u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x4a258c: 0xa4c30000  sh          $v1, 0x0($a2)
    ctx->pc = 0x4a258cu;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x4a2590: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x4a2590u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4a2594: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4a2594u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4a2598: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x4a2598u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x4a259c: 0xace20000  sw          $v0, 0x0($a3)
    ctx->pc = 0x4a259cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
    // 0x4a25a0: 0x95030000  lhu         $v1, 0x0($t0)
    ctx->pc = 0x4a25a0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4a25a4: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x4a25a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x4a25a8: 0xa5030000  sh          $v1, 0x0($t0)
    ctx->pc = 0x4a25a8u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x4a25ac: 0x8124136  j           func_4904D8
    ctx->pc = 0x4A25ACu;
    ctx->pc = 0x4A25B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A25ACu;
    // 0x4a25b0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4904D8u;
    sub_004904D8_0x4904d8(rdram, ctx, runtime); return;
    ctx->pc = 0x4A25B4u;
    // 0x4a25b4: 0x0  nop
    ctx->pc = 0x4a25b4u;
    // NOP
label_4a25b8:
    // 0x4a25b8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4a25b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4a25bc: 0x3e00008  jr          $ra
    ctx->pc = 0x4A25BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4A25C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A25BCu;
        // 0x4a25c0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4A25BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4A25C4u;
    // 0x4a25c4: 0x0  nop
    ctx->pc = 0x4a25c4u;
    // NOP
    ctx->pc = 0x4a25c8u;
}
