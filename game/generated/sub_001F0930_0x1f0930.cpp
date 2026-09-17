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

// Function: sub_001F0930
// Address: 0x1f0930 - 0x1f09b8
void sub_001F0930_0x1f0930(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F0930_0x1f0930");
#endif

    switch (ctx->pc) {
        case 0x1f0950u: goto label_1f0950;
        case 0x1f095cu: goto label_1f095c;
        case 0x1f096cu: goto label_1f096c;
        case 0x1f09a4u: goto label_1f09a4;
        default: break;
    }

    ctx->pc = 0x1f0930u;

    // 0x1f0930: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1f0930u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1f0934: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1f0934u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1f0938: 0x3c10003e  lui         $s0, 0x3E
    ctx->pc = 0x1f0938u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)62 << 16));
    // 0x1f093c: 0x261037e0  addiu       $s0, $s0, 0x37E0
    ctx->pc = 0x1f093cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 14304));
    // 0x1f0940: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1f0940u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1f0944: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1f0944u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1f0948: 0xc084e9a  jal         func_213A68
    ctx->pc = 0x1F0948u;
    SET_GPR_U32(ctx, 31, 0x1F0950u);
    ctx->pc = 0x1F094Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F0948u;
    // 0x1f094c: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x213A68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x213A68u, 0x1F0948u, 0x1F0950u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F0950u;
label_1f0950:
    // 0x1f0950: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1f0950u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1f0954: 0xc0b7d04  jal         func_2DF410
    ctx->pc = 0x1F0954u;
    SET_GPR_U32(ctx, 31, 0x1F095Cu);
    ctx->pc = 0x1F0958u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F0954u;
    // 0x1f0958: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DF410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DF410u, 0x1F0954u, 0x1F095Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F095Cu;
label_1f095c:
    // 0x1f095c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f095cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f0960: 0xac400050  sw          $zero, 0x50($v0)
    ctx->pc = 0x1f0960u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 80), GPR_U32(ctx, 0));
    // 0x1f0964: 0xc0b7d04  jal         func_2DF410
    ctx->pc = 0x1F0964u;
    SET_GPR_U32(ctx, 31, 0x1F096Cu);
    ctx->pc = 0x1F0968u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F0964u;
    // 0x1f0968: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DF410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DF410u, 0x1F0964u, 0x1F096Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F096Cu;
label_1f096c:
    // 0x1f096c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1f096cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1f0970: 0x24470060  addiu       $a3, $v0, 0x60
    ctx->pc = 0x1f0970u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
    // 0x1f0974: 0x8ce40000  lw          $a0, 0x0($a3)
    ctx->pc = 0x1f0974u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1f0978: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1F0978u;
    {
        const bool branch_taken_0x1f0978 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F097Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0978u;
        // 0x1f097c: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0978) {
            ctx->pc = 0x1F0990u;
            goto label_1f0990;
        }
    }
    ctx->pc = 0x1F0980u;
    // 0x1f0980: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x1f0980u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1f0984: 0x8ce20004  lw          $v0, 0x4($a3)
    ctx->pc = 0x1f0984u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x1f0988: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F0988u;
    {
        const bool branch_taken_0x1f0988 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1f0988) {
            ctx->pc = 0x1F099Cu;
            goto label_1f099c;
        }
    }
    ctx->pc = 0x1F0990u;
label_1f0990:
    // 0x1f0990: 0xace00004  sw          $zero, 0x4($a3)
    ctx->pc = 0x1f0990u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 0));
    // 0x1f0994: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1f0994u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f0998: 0xace00000  sw          $zero, 0x0($a3)
    ctx->pc = 0x1f0998u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 0));
label_1f099c:
    // 0x1f099c: 0xc0b7e34  jal         func_2DF8D0
    ctx->pc = 0x1F099Cu;
    SET_GPR_U32(ctx, 31, 0x1F09A4u);
    ctx->pc = 0x2DF8D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DF8D0u, 0x1F099Cu, 0x1F09A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F09A4u;
label_1f09a4:
    // 0x1f09a4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1f09a4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f09a8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1f09a8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1f09ac: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1f09acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f09b0: 0x3e00008  jr          $ra
    ctx->pc = 0x1F09B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F09B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F09B0u;
        // 0x1f09b4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F09B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F09B8u;
}
