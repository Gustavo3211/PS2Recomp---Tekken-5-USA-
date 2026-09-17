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

// Function: sub_002E06E8
// Address: 0x2e06e8 - 0x2e0778
void sub_002E06E8_0x2e06e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E06E8_0x2e06e8");
#endif

    switch (ctx->pc) {
        case 0x2e0734u: goto label_2e0734;
        case 0x2e0740u: goto label_2e0740;
        case 0x2e0754u: goto label_2e0754;
        default: break;
    }

    ctx->pc = 0x2e06e8u;

    // 0x2e06e8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2e06e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2e06ec: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2e06ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2e06f0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2e06f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2e06f4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2e06f4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e06f8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2e06f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2e06fc: 0x26510074  addiu       $s1, $s2, 0x74
    ctx->pc = 0x2e06fcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 116));
    // 0x2e0700: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x2e0700u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x2e0704: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2e0704u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2e0708: 0x50a00006  beql        $a1, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2E0708u;
    {
        const bool branch_taken_0x2e0708 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e0708) {
            ctx->pc = 0x2E070Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E0708u;
            // 0x2e070c: 0xae200000  sw          $zero, 0x0($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E0724u;
            goto label_2e0724;
        }
    }
    ctx->pc = 0x2E0710u;
    // 0x2e0710: 0x8ca3000c  lw          $v1, 0xC($a1)
    ctx->pc = 0x2e0710u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x2e0714: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x2e0714u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2e0718: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E0718u;
    {
        const bool branch_taken_0x2e0718 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2e0718) {
            ctx->pc = 0x2E072Cu;
            goto label_2e072c;
        }
    }
    ctx->pc = 0x2E0720u;
    // 0x2e0720: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x2e0720u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
label_2e0724:
    // 0x2e0724: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2e0724u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e0728: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x2e0728u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
label_2e072c:
    // 0x2e072c: 0xc0b7aaa  jal         func_2DEAA8
    ctx->pc = 0x2E072Cu;
    SET_GPR_U32(ctx, 31, 0x2E0734u);
    ctx->pc = 0x2DEAA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DEAA8u, 0x2E072Cu, 0x2E0734u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E0734u;
label_2e0734:
    // 0x2e0734: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2e0734u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e0738: 0xc0b7a62  jal         func_2DE988
    ctx->pc = 0x2E0738u;
    SET_GPR_U32(ctx, 31, 0x2E0740u);
    ctx->pc = 0x2E073Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E0738u;
    // 0x2e073c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DE988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DE988u, 0x2E0738u, 0x2E0740u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E0740u;
label_2e0740:
    // 0x2e0740: 0x8e450070  lw          $a1, 0x70($s2)
    ctx->pc = 0x2e0740u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 112)));
    // 0x2e0744: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2e0744u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e0748: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x2e0748u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e074c: 0xc0b8568  jal         func_2E15A0
    ctx->pc = 0x2E074Cu;
    SET_GPR_U32(ctx, 31, 0x2E0754u);
    ctx->pc = 0x2E0750u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E074Cu;
    // 0x2e0750: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E15A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E15A0u, 0x2E074Cu, 0x2E0754u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E0754u;
label_2e0754:
    // 0x2e0754: 0xae300000  sw          $s0, 0x0($s1)
    ctx->pc = 0x2e0754u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 16));
    // 0x2e0758: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2e0758u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e075c: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x2e075cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2e0760: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x2e0760u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2e0764: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x2e0764u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x2e0768: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2e0768u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e076c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2e076cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2e0770: 0x3e00008  jr          $ra
    ctx->pc = 0x2E0770u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E0774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E0770u;
        // 0x2e0774: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E0770u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E0778u;
}
