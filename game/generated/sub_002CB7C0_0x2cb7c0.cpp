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

// Function: sub_002CB7C0
// Address: 0x2cb7c0 - 0x2cb870
void sub_002CB7C0_0x2cb7c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CB7C0_0x2cb7c0");
#endif

    switch (ctx->pc) {
        case 0x2cb828u: goto label_2cb828;
        case 0x2cb860u: goto label_2cb860;
        default: break;
    }

    ctx->pc = 0x2cb7c0u;

    // 0x2cb7c0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2cb7c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2cb7c4: 0xa0482d  daddu       $t1, $a1, $zero
    ctx->pc = 0x2cb7c4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cb7c8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2cb7c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2cb7cc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2cb7ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cb7d0: 0xc0502d  daddu       $t2, $a2, $zero
    ctx->pc = 0x2cb7d0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cb7d4: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2cb7d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2cb7d8: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x2cb7d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x2cb7dc: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x2cb7dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2cb7e0: 0x26030098  addiu       $v1, $s0, 0x98
    ctx->pc = 0x2cb7e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 152));
    // 0x2cb7e4: 0x260800a0  addiu       $t0, $s0, 0xA0
    ctx->pc = 0x2cb7e4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
    // 0x2cb7e8: 0x2442e908  addiu       $v0, $v0, -0x16F8
    ctx->pc = 0x2cb7e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961416));
    // 0x2cb7ec: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2cb7ecu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2cb7f0: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x2cb7f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x2cb7f4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2cb7f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cb7f8: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x2cb7f8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x2cb7fc: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x2cb7fcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2cb800: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x2cb800u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x2cb804: 0xad000000  sw          $zero, 0x0($t0)
    ctx->pc = 0x2cb804u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 0));
    // 0x2cb808: 0xad000004  sw          $zero, 0x4($t0)
    ctx->pc = 0x2cb808u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 4), GPR_U32(ctx, 0));
    // 0x2cb80c: 0xac690000  sw          $t1, 0x0($v1)
    ctx->pc = 0x2cb80cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 9));
    // 0x2cb810: 0x8d22000c  lw          $v0, 0xC($t1)
    ctx->pc = 0x2cb810u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 12)));
    // 0x2cb814: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x2cb814u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x2cb818: 0xad0a0000  sw          $t2, 0x0($t0)
    ctx->pc = 0x2cb818u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 10));
    // 0x2cb81c: 0x8d42000c  lw          $v0, 0xC($t2)
    ctx->pc = 0x2cb81cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 12)));
    // 0x2cb820: 0xc0b79f8  jal         func_2DE7E0
    ctx->pc = 0x2CB820u;
    SET_GPR_U32(ctx, 31, 0x2CB828u);
    ctx->pc = 0x2CB824u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CB820u;
    // 0x2cb824: 0xad020004  sw          $v0, 0x4($t0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 8), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DE7E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DE7E0u, 0x2CB820u, 0x2CB828u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CB828u;
label_2cb828:
    // 0x2cb828: 0x8e030040  lw          $v1, 0x40($s0)
    ctx->pc = 0x2cb828u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x2cb82c: 0x2404fffd  addiu       $a0, $zero, -0x3
    ctx->pc = 0x2cb82cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x2cb830: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x2cb830u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x2cb834: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x2cb834u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x2cb838: 0x2442e640  addiu       $v0, $v0, -0x19C0
    ctx->pc = 0x2cb838u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960704));
    // 0x2cb83c: 0xae020038  sw          $v0, 0x38($s0)
    ctx->pc = 0x2cb83cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 2));
    // 0x2cb840: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2CB840u;
    {
        const bool branch_taken_0x2cb840 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CB844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB840u;
        // 0x2cb844: 0xae030040  sw          $v1, 0x40($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cb840) {
            ctx->pc = 0x2CB860u;
            goto label_2cb860;
        }
    }
    ctx->pc = 0x2CB848u;
    // 0x2cb848: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x2cb848u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x2cb84c: 0x3c040015  lui         $a0, 0x15
    ctx->pc = 0x2cb84cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)21 << 16));
    // 0x2cb850: 0x2442d620  addiu       $v0, $v0, -0x29E0
    ctx->pc = 0x2cb850u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956576));
    // 0x2cb854: 0x24840210  addiu       $a0, $a0, 0x210
    ctx->pc = 0x2cb854u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 528));
    // 0x2cb858: 0xc048b90  jal         func_122E40
    ctx->pc = 0x2CB858u;
    SET_GPR_U32(ctx, 31, 0x2CB860u);
    ctx->pc = 0x2CB85Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CB858u;
    // 0x2cb85c: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122E40u, 0x2CB858u, 0x2CB860u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CB860u;
label_2cb860:
    // 0x2cb860: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2cb860u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2cb864: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2cb864u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2cb868: 0x3e00008  jr          $ra
    ctx->pc = 0x2CB868u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CB86Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB868u;
        // 0x2cb86c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CB868u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CB870u;
}
