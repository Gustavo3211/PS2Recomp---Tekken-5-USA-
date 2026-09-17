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

// Function: sub_00123940
// Address: 0x123940 - 0x123998
void sub_00123940_0x123940(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00123940_0x123940");
#endif

    switch (ctx->pc) {
        case 0x123948u: goto label_123948;
        default: break;
    }

    ctx->pc = 0x123940u;

    // 0x123940: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x123940u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x123944: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x123944u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_123948:
    // 0x123948: 0x90860000  lbu         $a2, 0x0($a0)
    ctx->pc = 0x123948u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x12394c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x12394cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x123950: 0x30c2007f  andi        $v0, $a2, 0x7F
    ctx->pc = 0x123950u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)127);
    // 0x123954: 0x30c30080  andi        $v1, $a2, 0x80
    ctx->pc = 0x123954u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)128);
    // 0x123958: 0xe21004  sllv        $v0, $v0, $a3
    ctx->pc = 0x123958u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 7) & 0x1F));
    // 0x12395c: 0x24e70007  addiu       $a3, $a3, 0x7
    ctx->pc = 0x12395cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 7));
    // 0x123960: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x123960u;
    {
        const bool branch_taken_0x123960 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x123964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123960u;
        // 0x123964: 0x1024025  or          $t0, $t0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123960) {
            ctx->pc = 0x123948u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_123948;
        }
    }
    ctx->pc = 0x123968u;
    // 0x123968: 0x2ce20020  sltiu       $v0, $a3, 0x20
    ctx->pc = 0x123968u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
    // 0x12396c: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x12396Cu;
    {
        const bool branch_taken_0x12396c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x12396c) {
            ctx->pc = 0x123970u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12396Cu;
            // 0x123970: 0xaca80000  sw          $t0, 0x0($a1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 8));
            ctx->in_delay_slot = false;
            ctx->pc = 0x123990u;
            goto label_123990;
        }
    }
    ctx->pc = 0x123974u;
    // 0x123974: 0x30c20040  andi        $v0, $a2, 0x40
    ctx->pc = 0x123974u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)64);
    // 0x123978: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x123978u;
    {
        const bool branch_taken_0x123978 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x123978) {
            ctx->pc = 0x12397Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x123978u;
            // 0x12397c: 0xaca80000  sw          $t0, 0x0($a1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 8));
            ctx->in_delay_slot = false;
            ctx->pc = 0x123990u;
            goto label_123990;
        }
    }
    ctx->pc = 0x123980u;
    // 0x123980: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x123980u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x123984: 0xe21004  sllv        $v0, $v0, $a3
    ctx->pc = 0x123984u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 7) & 0x1F));
    // 0x123988: 0x1024025  or          $t0, $t0, $v0
    ctx->pc = 0x123988u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
    // 0x12398c: 0xaca80000  sw          $t0, 0x0($a1)
    ctx->pc = 0x12398cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 8));
label_123990:
    // 0x123990: 0x3e00008  jr          $ra
    ctx->pc = 0x123990u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x123994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123990u;
        // 0x123994: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x123990u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x123998u;
}
