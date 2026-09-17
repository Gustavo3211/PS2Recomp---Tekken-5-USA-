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

// Function: sub_0036C3C0
// Address: 0x36c3c0 - 0x36c438
void sub_0036C3C0_0x36c3c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036C3C0_0x36c3c0");
#endif

    switch (ctx->pc) {
        case 0x36c3f4u: goto label_36c3f4;
        default: break;
    }

    ctx->pc = 0x36c3c0u;

    // 0x36c3c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x36c3c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x36c3c4: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x36c3c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x36c3c8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x36c3c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x36c3cc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x36c3ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36c3d0: 0x2442e330  addiu       $v0, $v0, -0x1CD0
    ctx->pc = 0x36c3d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959920));
    // 0x36c3d4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x36c3d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x36c3d8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x36c3d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x36c3dc: 0x26040050  addiu       $a0, $s0, 0x50
    ctx->pc = 0x36c3dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
    // 0x36c3e0: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x36c3e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x36c3e4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x36c3e4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36c3e8: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x36c3e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x36c3ec: 0xc0a9e40  jal         func_2A7900
    ctx->pc = 0x36C3ECu;
    SET_GPR_U32(ctx, 31, 0x36C3F4u);
    ctx->pc = 0x36C3F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36C3ECu;
    // 0x36c3f0: 0x32310001  andi        $s1, $s1, 0x1 (Delay Slot)
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A7900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A7900u, 0x36C3ECu, 0x36C3F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36C3F4u;
label_36c3f4:
    // 0x36c3f4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x36c3f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36c3f8: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x36c3f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x36c3fc: 0x2442d620  addiu       $v0, $v0, -0x29E0
    ctx->pc = 0x36c3fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956576));
    // 0x36c400: 0x12200007  beqz        $s1, . + 4 + (0x7 << 2)
    ctx->pc = 0x36C400u;
    {
        const bool branch_taken_0x36c400 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x36C404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36C400u;
        // 0x36c404: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36c400) {
            ctx->pc = 0x36C420u;
            goto label_36c420;
        }
    }
    ctx->pc = 0x36C408u;
    // 0x36c408: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x36c408u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36c40c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x36c40cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x36c410: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x36c410u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x36c414: 0x8049a7a  j           func_1269E8
    ctx->pc = 0x36C414u;
    ctx->pc = 0x36C418u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36C414u;
    // 0x36c418: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1269E8u;
    sub_001269E8_0x1269e8(rdram, ctx, runtime); return;
    ctx->pc = 0x36C41Cu;
    // 0x36c41c: 0x0  nop
    ctx->pc = 0x36c41cu;
    // NOP
label_36c420:
    // 0x36c420: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x36c420u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36c424: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x36c424u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x36c428: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x36c428u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x36c42c: 0x3e00008  jr          $ra
    ctx->pc = 0x36C42Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36C430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36C42Cu;
        // 0x36c430: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36C42Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36C434u;
    // 0x36c434: 0x0  nop
    ctx->pc = 0x36c434u;
    // NOP
    ctx->pc = 0x36c438u;
}
