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

// Function: sub_00100F68
// Address: 0x100f68 - 0x100ff0
void sub_00100F68_0x100f68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00100F68_0x100f68");
#endif

    switch (ctx->pc) {
        case 0x100f84u: goto label_100f84;
        case 0x100f8cu: goto label_100f8c;
        case 0x100f94u: goto label_100f94;
        case 0x100f9cu: goto label_100f9c;
        case 0x100fa4u: goto label_100fa4;
        case 0x100facu: goto label_100fac;
        case 0x100fb4u: goto label_100fb4;
        case 0x100fccu: goto label_100fcc;
        case 0x100fdcu: goto label_100fdc;
        default: break;
    }

    ctx->pc = 0x100f68u;

    // 0x100f68: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x100f68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x100f6c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x100f6cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x100f70: 0x8c4583c0  lw          $a1, -0x7C40($v0)
    ctx->pc = 0x100f70u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x3A83C0u));
    // 0x100f74: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x100f74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x100f78: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x100f78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x100f7c: 0xc04007c  jal         func_1001F0
    ctx->pc = 0x100F7Cu;
    SET_GPR_U32(ctx, 31, 0x100F84u);
    ctx->pc = 0x100F80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x100F7Cu;
    // 0x100f80: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1001F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1001F0u, 0x100F7Cu, 0x100F84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x100F84u;
label_100f84:
    // 0x100f84: 0xc0401ac  jal         func_1006B0
    ctx->pc = 0x100F84u;
    SET_GPR_U32(ctx, 31, 0x100F8Cu);
    ctx->pc = 0x100F88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x100F84u;
    // 0x100f88: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1006B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006B0u, 0x100F84u, 0x100F8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x100F8Cu;
label_100f8c:
    // 0x100f8c: 0xc0401b2  jal         func_1006C8
    ctx->pc = 0x100F8Cu;
    SET_GPR_U32(ctx, 31, 0x100F94u);
    ctx->pc = 0x1006C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006C8u, 0x100F8Cu, 0x100F94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x100F94u;
label_100f94:
    // 0x100f94: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x100F94u;
    SET_GPR_U32(ctx, 31, 0x100F9Cu);
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x100F94u, 0x100F9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x100F9Cu;
label_100f9c:
    // 0x100f9c: 0xc0401d0  jal         func_100740
    ctx->pc = 0x100F9Cu;
    SET_GPR_U32(ctx, 31, 0x100FA4u);
    ctx->pc = 0x100740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100740u, 0x100F9Cu, 0x100FA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x100FA4u;
label_100fa4:
    // 0x100fa4: 0xc0401c4  jal         func_100710
    ctx->pc = 0x100FA4u;
    SET_GPR_U32(ctx, 31, 0x100FACu);
    ctx->pc = 0x100710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100710u, 0x100FA4u, 0x100FACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x100FACu;
label_100fac:
    // 0x100fac: 0xc0401ca  jal         func_100728
    ctx->pc = 0x100FACu;
    SET_GPR_U32(ctx, 31, 0x100FB4u);
    ctx->pc = 0x100728u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100728u, 0x100FACu, 0x100FB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x100FB4u;
label_100fb4:
    // 0x100fb4: 0x3c0400be  lui         $a0, 0xBE
    ctx->pc = 0x100fb4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)190 << 16));
    // 0x100fb8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x100fb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x100fbc: 0x16020003  bne         $s0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x100FBCu;
    {
        const bool branch_taken_0x100fbc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x100FC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100FBCu;
        // 0x100fc0: 0x2484f5c0  addiu       $a0, $a0, -0xA40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294964672));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100fbc) {
            ctx->pc = 0x100FCCu;
            goto label_100fcc;
        }
    }
    ctx->pc = 0x100FC4u;
    // 0x100fc4: 0xc0401f2  jal         func_1007C8
    ctx->pc = 0x100FC4u;
    SET_GPR_U32(ctx, 31, 0x100FCCu);
    ctx->pc = 0x1007C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1007C8u, 0x100FC4u, 0x100FCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x100FCCu;
label_100fcc:
    // 0x100fcc: 0x3c050015  lui         $a1, 0x15
    ctx->pc = 0x100fccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)21 << 16));
    // 0x100fd0: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x100fd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x100fd4: 0xc04007a  jal         func_1001E8
    ctx->pc = 0x100FD4u;
    SET_GPR_U32(ctx, 31, 0x100FDCu);
    ctx->pc = 0x100FD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x100FD4u;
    // 0x100fd8: 0x24a550a0  addiu       $a1, $a1, 0x50A0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 20640));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1001E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1001E8u, 0x100FD4u, 0x100FDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x100FDCu;
label_100fdc:
    // 0x100fdc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x100fdcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x100fe0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x100fe0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x100fe4: 0x3e00008  jr          $ra
    ctx->pc = 0x100FE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x100FE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100FE4u;
        // 0x100fe8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x100FE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x100FECu;
    // 0x100fec: 0x0  nop
    ctx->pc = 0x100fecu;
    // NOP
    ctx->pc = 0x100ff0u;
}
