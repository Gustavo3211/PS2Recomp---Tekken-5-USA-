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

// Function: sub_00335780
// Address: 0x335780 - 0x335808
void sub_00335780_0x335780(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00335780_0x335780");
#endif

    switch (ctx->pc) {
        case 0x3357d8u: goto label_3357d8;
        default: break;
    }

    ctx->pc = 0x335780u;

    // 0x335780: 0x3c020044  lui         $v0, 0x44
    ctx->pc = 0x335780u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
    // 0x335784: 0x5282b  sltu        $a1, $zero, $a1
    ctx->pc = 0x335784u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x335788: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x335788u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33578c: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x33578cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x335790: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x335790u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x335794: 0x34848009  ori         $a0, $a0, 0x8009
    ctx->pc = 0x335794u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32777);
    // 0x335798: 0x24460900  addiu       $a2, $v0, 0x900
    ctx->pc = 0x335798u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 2304));
    // 0x33579c: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x33579cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x3357a0: 0x518c0  sll         $v1, $a1, 3
    ctx->pc = 0x3357a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x3357a4: 0xfd020008  sd          $v0, 0x8($t0)
    ctx->pc = 0x3357a4u;
    WRITE64(ADD32(GPR_U32(ctx, 8), 8), GPR_U64(ctx, 2));
    // 0x3357a8: 0x24c20098  addiu       $v0, $a2, 0x98
    ctx->pc = 0x3357a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 152));
    // 0x3357ac: 0xfd040000  sd          $a0, 0x0($t0)
    ctx->pc = 0x3357acu;
    WRITE64(ADD32(GPR_U32(ctx, 8), 0), GPR_U64(ctx, 4));
    // 0x3357b0: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x3357b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x3357b4: 0x24c40050  addiu       $a0, $a2, 0x50
    ctx->pc = 0x3357b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 80));
    // 0x3357b8: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x3357b8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3357bc: 0x24070008  addiu       $a3, $zero, 0x8
    ctx->pc = 0x3357bcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x3357c0: 0x85300a  movz        $a2, $a0, $a1
    ctx->pc = 0x3357c0u;
    if (GPR_U64(ctx, 5) == 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 4));
    // 0x3357c4: 0x3c050044  lui         $a1, 0x44
    ctx->pc = 0x3357c4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)68 << 16));
    // 0x3357c8: 0x24a509e0  addiu       $a1, $a1, 0x9E0
    ctx->pc = 0x3357c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2528));
    // 0x3357cc: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x3357ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x3357d0: 0x25040010  addiu       $a0, $t0, 0x10
    ctx->pc = 0x3357d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), 16));
    // 0x3357d4: 0x0  nop
    ctx->pc = 0x3357d4u;
    // NOP
label_3357d8:
    // 0x3357d8: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x3357d8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3357dc: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x3357dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x3357e0: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x3357e0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x3357e4: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x3357e4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
    // 0x3357e8: 0xdcc20000  ld          $v0, 0x0($a2)
    ctx->pc = 0x3357e8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x3357ec: 0x24c60008  addiu       $a2, $a2, 0x8
    ctx->pc = 0x3357ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    // 0x3357f0: 0xfc820000  sd          $v0, 0x0($a0)
    ctx->pc = 0x3357f0u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 2));
    // 0x3357f4: 0x4e1fff8  bgez        $a3, . + 4 + (-0x8 << 2)
    ctx->pc = 0x3357F4u;
    {
        const bool branch_taken_0x3357f4 = (GPR_S32(ctx, 7) >= 0);
        ctx->pc = 0x3357F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3357F4u;
        // 0x3357f8: 0x24840010  addiu       $a0, $a0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3357f4) {
            ctx->pc = 0x3357D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3357d8;
        }
    }
    ctx->pc = 0x3357FCu;
    // 0x3357fc: 0x3e00008  jr          $ra
    ctx->pc = 0x3357FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x335800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3357FCu;
        // 0x335800: 0x250200a0  addiu       $v0, $t0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3357FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x335804u;
    // 0x335804: 0x0  nop
    ctx->pc = 0x335804u;
    // NOP
    ctx->pc = 0x335808u;
}
