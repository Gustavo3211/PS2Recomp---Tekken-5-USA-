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

// Function: sub_0036C4B0
// Address: 0x36c4b0 - 0x36c528
void sub_0036C4B0_0x36c4b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036C4B0_0x36c4b0");
#endif

    switch (ctx->pc) {
        case 0x36c4e4u: goto label_36c4e4;
        default: break;
    }

    ctx->pc = 0x36c4b0u;

    // 0x36c4b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x36c4b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x36c4b4: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x36c4b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x36c4b8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x36c4b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x36c4bc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x36c4bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36c4c0: 0x2442e330  addiu       $v0, $v0, -0x1CD0
    ctx->pc = 0x36c4c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959920));
    // 0x36c4c4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x36c4c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x36c4c8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x36c4c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x36c4cc: 0x26040050  addiu       $a0, $s0, 0x50
    ctx->pc = 0x36c4ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
    // 0x36c4d0: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x36c4d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x36c4d4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x36c4d4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36c4d8: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x36c4d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x36c4dc: 0xc0a9e40  jal         func_2A7900
    ctx->pc = 0x36C4DCu;
    SET_GPR_U32(ctx, 31, 0x36C4E4u);
    ctx->pc = 0x36C4E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36C4DCu;
    // 0x36c4e0: 0x32310001  andi        $s1, $s1, 0x1 (Delay Slot)
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A7900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A7900u, 0x36C4DCu, 0x36C4E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36C4E4u;
label_36c4e4:
    // 0x36c4e4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x36c4e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36c4e8: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x36c4e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x36c4ec: 0x2442d620  addiu       $v0, $v0, -0x29E0
    ctx->pc = 0x36c4ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956576));
    // 0x36c4f0: 0x12200007  beqz        $s1, . + 4 + (0x7 << 2)
    ctx->pc = 0x36C4F0u;
    {
        const bool branch_taken_0x36c4f0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x36C4F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36C4F0u;
        // 0x36c4f4: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36c4f0) {
            ctx->pc = 0x36C510u;
            goto label_36c510;
        }
    }
    ctx->pc = 0x36C4F8u;
    // 0x36c4f8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x36c4f8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36c4fc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x36c4fcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x36c500: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x36c500u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x36c504: 0x8049a7a  j           func_1269E8
    ctx->pc = 0x36C504u;
    ctx->pc = 0x36C508u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36C504u;
    // 0x36c508: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1269E8u;
    sub_001269E8_0x1269e8(rdram, ctx, runtime); return;
    ctx->pc = 0x36C50Cu;
    // 0x36c50c: 0x0  nop
    ctx->pc = 0x36c50cu;
    // NOP
label_36c510:
    // 0x36c510: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x36c510u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36c514: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x36c514u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x36c518: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x36c518u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x36c51c: 0x3e00008  jr          $ra
    ctx->pc = 0x36C51Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36C520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36C51Cu;
        // 0x36c520: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36C51Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36C524u;
    // 0x36c524: 0x0  nop
    ctx->pc = 0x36c524u;
    // NOP
    ctx->pc = 0x36c528u;
}
