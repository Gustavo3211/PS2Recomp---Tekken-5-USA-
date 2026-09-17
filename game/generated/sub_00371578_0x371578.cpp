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

// Function: sub_00371578
// Address: 0x371578 - 0x371640
void sub_00371578_0x371578(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00371578_0x371578");
#endif

    switch (ctx->pc) {
        case 0x37159cu: goto label_37159c;
        case 0x3715b4u: goto label_3715b4;
        case 0x371624u: goto label_371624;
        default: break;
    }

    ctx->pc = 0x371578u;

    // 0x371578: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x371578u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x37157c: 0x3c02001d  lui         $v0, 0x1D
    ctx->pc = 0x37157cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)29 << 16));
    // 0x371580: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x371580u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x371584: 0x24507560  addiu       $s0, $v0, 0x7560
    ctx->pc = 0x371584u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 30048));
    // 0x371588: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x371588u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x1D7560u));
    // 0x37158c: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x37158Cu;
    {
        const bool branch_taken_0x37158c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x371590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37158Cu;
        // 0x371590: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37158c) {
            ctx->pc = 0x3715B4u;
            goto label_3715b4;
        }
    }
    ctx->pc = 0x371594u;
    // 0x371594: 0xc0dc47c  jal         func_3711F0
    ctx->pc = 0x371594u;
    SET_GPR_U32(ctx, 31, 0x37159Cu);
    ctx->pc = 0x3711F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3711F0u, 0x371594u, 0x37159Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37159Cu;
label_37159c:
    // 0x37159c: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x37159cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x3715a0: 0x3c06001d  lui         $a2, 0x1D
    ctx->pc = 0x3715a0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)29 << 16));
    // 0x3715a4: 0x24a50ca0  addiu       $a1, $a1, 0xCA0
    ctx->pc = 0x3715a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3232));
    // 0x3715a8: 0x24c67530  addiu       $a2, $a2, 0x7530
    ctx->pc = 0x3715a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 30000));
    // 0x3715ac: 0xc0493ca  jal         func_124F28
    ctx->pc = 0x3715ACu;
    SET_GPR_U32(ctx, 31, 0x3715B4u);
    ctx->pc = 0x3715B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3715ACu;
    // 0x3715b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124F28u, 0x3715ACu, 0x3715B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3715B4u;
label_3715b4:
    // 0x3715b4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x3715b4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3715b8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3715b8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3715bc: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x3715bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3715c0: 0x3e00008  jr          $ra
    ctx->pc = 0x3715C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3715C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3715C0u;
        // 0x3715c4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3715C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3715C8u;
    // 0x3715c8: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x3715c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x3715cc: 0x3c060046  lui         $a2, 0x46
    ctx->pc = 0x3715ccu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)70 << 16));
    // 0x3715d0: 0x248300fc  addiu       $v1, $a0, 0xFC
    ctx->pc = 0x3715d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 252));
    // 0x3715d4: 0x24420810  addiu       $v0, $v0, 0x810
    ctx->pc = 0x3715d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2064));
    // 0x3715d8: 0x248500e8  addiu       $a1, $a0, 0xE8
    ctx->pc = 0x3715d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 232));
    // 0x3715dc: 0x248700f0  addiu       $a3, $a0, 0xF0
    ctx->pc = 0x3715dcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 240));
    // 0x3715e0: 0x24c60680  addiu       $a2, $a2, 0x680
    ctx->pc = 0x3715e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1664));
    // 0x3715e4: 0x24080003  addiu       $t0, $zero, 0x3
    ctx->pc = 0x3715e4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3715e8: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x3715e8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x3715ec: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x3715ecu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
    // 0x3715f0: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x3715f0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    // 0x3715f4: 0xace00004  sw          $zero, 0x4($a3)
    ctx->pc = 0x3715f4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 0));
    // 0x3715f8: 0xace00000  sw          $zero, 0x0($a3)
    ctx->pc = 0x3715f8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 0));
    // 0x3715fc: 0xac680000  sw          $t0, 0x0($v1)
    ctx->pc = 0x3715fcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 8));
    // 0x371600: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x371600u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
    // 0x371604: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x371604u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x371608: 0x3e00008  jr          $ra
    ctx->pc = 0x371608u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37160Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x371608u;
        // 0x37160c: 0xac860008  sw          $a2, 0x8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x371608u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x371610u;
    // 0x371610: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x371610u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x371614: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x371614u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x371618: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x371618u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x37161c: 0xc0bb93e  jal         func_2EE4F8
    ctx->pc = 0x37161Cu;
    SET_GPR_U32(ctx, 31, 0x371624u);
    ctx->pc = 0x371620u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37161Cu;
    // 0x371620: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE4F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE4F8u, 0x37161Cu, 0x371624u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x371624u;
label_371624:
    // 0x371624: 0x3c030046  lui         $v1, 0x46
    ctx->pc = 0x371624u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)70 << 16));
    // 0x371628: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x371628u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x37162c: 0x24630680  addiu       $v1, $v1, 0x680
    ctx->pc = 0x37162cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1664));
    // 0x371630: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x371630u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x371634: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x371634u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x371638: 0x3e00008  jr          $ra
    ctx->pc = 0x371638u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37163Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x371638u;
        // 0x37163c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x371638u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x371640u;
}
