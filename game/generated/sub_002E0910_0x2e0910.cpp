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

// Function: sub_002E0910
// Address: 0x2e0910 - 0x2e09a0
void sub_002E0910_0x2e0910(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E0910_0x2e0910");
#endif

    switch (ctx->pc) {
        case 0x2e095cu: goto label_2e095c;
        case 0x2e0968u: goto label_2e0968;
        case 0x2e0978u: goto label_2e0978;
        default: break;
    }

    ctx->pc = 0x2e0910u;

    // 0x2e0910: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2e0910u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2e0914: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2e0914u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2e0918: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2e0918u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2e091c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2e091cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e0920: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2e0920u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2e0924: 0x26510094  addiu       $s1, $s2, 0x94
    ctx->pc = 0x2e0924u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 148));
    // 0x2e0928: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x2e0928u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x2e092c: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2e092cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2e0930: 0x50a00006  beql        $a1, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2E0930u;
    {
        const bool branch_taken_0x2e0930 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e0930) {
            ctx->pc = 0x2E0934u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E0930u;
            // 0x2e0934: 0xae200000  sw          $zero, 0x0($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E094Cu;
            goto label_2e094c;
        }
    }
    ctx->pc = 0x2E0938u;
    // 0x2e0938: 0x8ca3000c  lw          $v1, 0xC($a1)
    ctx->pc = 0x2e0938u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x2e093c: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x2e093cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2e0940: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E0940u;
    {
        const bool branch_taken_0x2e0940 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2e0940) {
            ctx->pc = 0x2E0954u;
            goto label_2e0954;
        }
    }
    ctx->pc = 0x2E0948u;
    // 0x2e0948: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x2e0948u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
label_2e094c:
    // 0x2e094c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2e094cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e0950: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x2e0950u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
label_2e0954:
    // 0x2e0954: 0xc0b7aaa  jal         func_2DEAA8
    ctx->pc = 0x2E0954u;
    SET_GPR_U32(ctx, 31, 0x2E095Cu);
    ctx->pc = 0x2DEAA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DEAA8u, 0x2E0954u, 0x2E095Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E095Cu;
label_2e095c:
    // 0x2e095c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2e095cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e0960: 0xc0b7a62  jal         func_2DE988
    ctx->pc = 0x2E0960u;
    SET_GPR_U32(ctx, 31, 0x2E0968u);
    ctx->pc = 0x2E0964u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E0960u;
    // 0x2e0964: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DE988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DE988u, 0x2E0960u, 0x2E0968u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E0968u;
label_2e0968:
    // 0x2e0968: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2e0968u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e096c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2e096cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e0970: 0xc0b9018  jal         func_2E4060
    ctx->pc = 0x2E0970u;
    SET_GPR_U32(ctx, 31, 0x2E0978u);
    ctx->pc = 0x2E0974u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E0970u;
    // 0x2e0974: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4060u, 0x2E0970u, 0x2E0978u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E0978u;
label_2e0978:
    // 0x2e0978: 0xae300000  sw          $s0, 0x0($s1)
    ctx->pc = 0x2e0978u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 16));
    // 0x2e097c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2e097cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e0980: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x2e0980u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2e0984: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x2e0984u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2e0988: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x2e0988u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x2e098c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2e098cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e0990: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2e0990u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2e0994: 0x3e00008  jr          $ra
    ctx->pc = 0x2E0994u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E0998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E0994u;
        // 0x2e0998: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E0994u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E099Cu;
    // 0x2e099c: 0x0  nop
    ctx->pc = 0x2e099cu;
    // NOP
    ctx->pc = 0x2e09a0u;
}
