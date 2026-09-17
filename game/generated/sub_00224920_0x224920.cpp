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

// Function: sub_00224920
// Address: 0x224920 - 0x2249b8
void sub_00224920_0x224920(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00224920_0x224920");
#endif

    ctx->pc = 0x224920u;

    // 0x224920: 0x41040  sll         $v0, $a0, 1
    ctx->pc = 0x224920u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x224924: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x224924u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x224928: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x224928u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x22492c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x22492cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x224930: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x224930u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x224934: 0x3c060015  lui         $a2, 0x15
    ctx->pc = 0x224934u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)21 << 16));
    // 0x224938: 0x24c66110  addiu       $a2, $a2, 0x6110
    ctx->pc = 0x224938u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 24848));
    // 0x22493c: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x22493cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x224940: 0x1083000f  beq         $a0, $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x224940u;
    {
        const bool branch_taken_0x224940 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x224944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224940u;
        // 0x224944: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224940) {
            ctx->pc = 0x224980u;
            goto label_224980;
        }
    }
    ctx->pc = 0x224948u;
    // 0x224948: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x224948u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x22494c: 0x8c42885c  lw          $v0, -0x77A4($v0)
    ctx->pc = 0x22494cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3A885Cu));
    // 0x224950: 0x2c43000c  sltiu       $v1, $v0, 0xC
    ctx->pc = 0x224950u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)12) ? 1 : 0);
    // 0x224954: 0x5060000a  beql        $v1, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x224954u;
    {
        const bool branch_taken_0x224954 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x224954) {
            ctx->pc = 0x224958u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x224954u;
            // 0x224958: 0x100382d  daddu       $a3, $t0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x224980u;
            goto label_224980;
        }
    }
    ctx->pc = 0x22495Cu;
    // 0x22495c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x22495cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x224960: 0x3c030046  lui         $v1, 0x46
    ctx->pc = 0x224960u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)70 << 16));
    // 0x224964: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x224964u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x224968: 0x8c6370d0  lw          $v1, 0x70D0($v1)
    ctx->pc = 0x224968u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28880)));
    // 0x22496c: 0x600008  jr          $v1
    ctx->pc = 0x22496Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x224978u: goto label_224978;
            case 0x22497Cu: goto label_22497c;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22496Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x224974u;
    // 0x224974: 0x0  nop
    ctx->pc = 0x224974u;
    // NOP
label_224978:
    // 0x224978: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x224978u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_22497c:
    // 0x22497c: 0x100382d  daddu       $a3, $t0, $zero
    ctx->pc = 0x22497cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_224980:
    // 0x224980: 0x10e0000b  beqz        $a3, . + 4 + (0xB << 2)
    ctx->pc = 0x224980u;
    {
        const bool branch_taken_0x224980 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x224984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224980u;
        // 0x224984: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224980) {
            ctx->pc = 0x2249B0u;
            goto label_2249b0;
        }
    }
    ctx->pc = 0x224988u;
    // 0x224988: 0x24a3000f  addiu       $v1, $a1, 0xF
    ctx->pc = 0x224988u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 15));
    // 0x22498c: 0x2405fff0  addiu       $a1, $zero, -0x10
    ctx->pc = 0x22498cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x224990: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x224990u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x224994: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x224994u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x224998: 0x8cc40004  lw          $a0, 0x4($a2)
    ctx->pc = 0x224998u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x22499c: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x22499cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2249a0: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x2249a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x2249a4: 0x44202b  sltu        $a0, $v0, $a0
    ctx->pc = 0x2249a4u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x2249a8: 0xacc20008  sw          $v0, 0x8($a2)
    ctx->pc = 0x2249a8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 2));
    // 0x2249ac: 0x4100b  movn        $v0, $zero, $a0
    ctx->pc = 0x2249acu;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
label_2249b0:
    // 0x2249b0: 0x3e00008  jr          $ra
    ctx->pc = 0x2249B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2249B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2249B8u;
}
