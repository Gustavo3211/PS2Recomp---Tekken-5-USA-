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

// Function: sub_00124008
// Address: 0x124008 - 0x124138
void sub_00124008_0x124008(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00124008_0x124008");
#endif

    switch (ctx->pc) {
        case 0x124040u: goto label_124040;
        case 0x12405cu: goto label_12405c;
        case 0x124088u: goto label_124088;
        case 0x1240a0u: goto label_1240a0;
        case 0x1240d8u: goto label_1240d8;
        case 0x1240f4u: goto label_1240f4;
        case 0x124120u: goto label_124120;
        default: break;
    }

    ctx->pc = 0x124008u;

label_124008:
    // 0x124008: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x124008u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x12400c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x12400cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x124010: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x124010u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124014: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x124014u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x124018: 0x3c110013  lui         $s1, 0x13
    ctx->pc = 0x124018u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)19 << 16));
    // 0x12401c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x12401cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x124020: 0x263111d4  addiu       $s1, $s1, 0x11D4
    ctx->pc = 0x124020u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4564));
    // 0x124024: 0xae040008  sw          $a0, 0x8($s0)
    ctx->pc = 0x124024u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 4));
    // 0x124028: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x124028u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x12402c: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x12402cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x124030: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x124030u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x124034: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x124034u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x124038: 0xc043cf8  jal         func_10F3E0
    ctx->pc = 0x124038u;
    SET_GPR_U32(ctx, 31, 0x124040u);
    ctx->pc = 0x12403Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x124038u;
    // 0x12403c: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F3E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F3E0u, 0x124038u, 0x124040u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x124040u;
label_124040:
    // 0x124040: 0x3c03001f  lui         $v1, 0x1F
    ctx->pc = 0x124040u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)31 << 16));
    // 0x124044: 0x2463fc78  addiu       $v1, $v1, -0x388
    ctx->pc = 0x124044u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966392));
    // 0x124048: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x124048u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x12404c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x12404cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x1EFC78u));
    // 0x124050: 0xae020014  sw          $v0, 0x14($s0)
    ctx->pc = 0x124050u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
    // 0x124054: 0xc043cf0  jal         func_10F3C0
    ctx->pc = 0x124054u;
    SET_GPR_U32(ctx, 31, 0x12405Cu);
    ctx->pc = 0x124058u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x124054u;
    // 0x124058: 0xac700000  sw          $s0, 0x0($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F3C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F3C0u, 0x124054u, 0x12405Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12405Cu;
label_12405c:
    // 0x12405c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x12405cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x124060: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x124060u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x124064: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x124064u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x124068: 0x3e00008  jr          $ra
    ctx->pc = 0x124068u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12406Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124068u;
        // 0x12406c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x124068u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x124070u;
    // 0x124070: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x124070u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x124074: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x124074u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x124078: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x124078u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12407c: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x12407cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x124080: 0xc049e78  jal         func_1279E0
    ctx->pc = 0x124080u;
    SET_GPR_U32(ctx, 31, 0x124088u);
    ctx->pc = 0x124084u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x124080u;
    // 0x124084: 0x24040018  addiu       $a0, $zero, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1279E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1279E0u, 0x124080u, 0x124088u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x124088u;
label_124088:
    // 0x124088: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x124088u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12408c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x12408cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x124090: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x124090u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124094: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x124094u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x124098: 0x8049002  j           func_124008
    ctx->pc = 0x124098u;
    ctx->pc = 0x12409Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x124098u;
    // 0x12409c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124008u;
    if (runtime->eeCheckpointDue()) {
        return;
    }
    goto label_124008;
    ctx->pc = 0x1240A0u;
label_1240a0:
    // 0x1240a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1240a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1240a4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1240a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1240a8: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1240a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1240ac: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1240acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1240b0: 0x3c110013  lui         $s1, 0x13
    ctx->pc = 0x1240b0u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)19 << 16));
    // 0x1240b4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1240b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1240b8: 0x263111d4  addiu       $s1, $s1, 0x11D4
    ctx->pc = 0x1240b8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4564));
    // 0x1240bc: 0xae04000c  sw          $a0, 0xC($s0)
    ctx->pc = 0x1240bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 4));
    // 0x1240c0: 0xae040008  sw          $a0, 0x8($s0)
    ctx->pc = 0x1240c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 4));
    // 0x1240c4: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x1240c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x1240c8: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x1240c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x1240cc: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x1240ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x1240d0: 0xc043cf8  jal         func_10F3E0
    ctx->pc = 0x1240D0u;
    SET_GPR_U32(ctx, 31, 0x1240D8u);
    ctx->pc = 0x1240D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1240D0u;
    // 0x1240d4: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F3E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F3E0u, 0x1240D0u, 0x1240D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1240D8u;
label_1240d8:
    // 0x1240d8: 0x3c03001f  lui         $v1, 0x1F
    ctx->pc = 0x1240d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)31 << 16));
    // 0x1240dc: 0x2463fc78  addiu       $v1, $v1, -0x388
    ctx->pc = 0x1240dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966392));
    // 0x1240e0: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x1240e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1240e4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1240e4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x1EFC78u));
    // 0x1240e8: 0xae020014  sw          $v0, 0x14($s0)
    ctx->pc = 0x1240e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
    // 0x1240ec: 0xc043cf0  jal         func_10F3C0
    ctx->pc = 0x1240ECu;
    SET_GPR_U32(ctx, 31, 0x1240F4u);
    ctx->pc = 0x1240F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1240ECu;
    // 0x1240f0: 0xac700000  sw          $s0, 0x0($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F3C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F3C0u, 0x1240ECu, 0x1240F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1240F4u;
label_1240f4:
    // 0x1240f4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1240f4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1240f8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1240f8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1240fc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1240fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x124100: 0x3e00008  jr          $ra
    ctx->pc = 0x124100u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x124104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124100u;
        // 0x124104: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x124100u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x124108u;
    // 0x124108: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x124108u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x12410c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x12410cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x124110: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x124110u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124114: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x124114u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x124118: 0xc049e78  jal         func_1279E0
    ctx->pc = 0x124118u;
    SET_GPR_U32(ctx, 31, 0x124120u);
    ctx->pc = 0x12411Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x124118u;
    // 0x12411c: 0x24040018  addiu       $a0, $zero, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1279E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1279E0u, 0x124118u, 0x124120u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x124120u;
label_124120:
    // 0x124120: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x124120u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124124: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x124124u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x124128: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x124128u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12412c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x12412cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x124130: 0x8049028  j           func_1240A0
    ctx->pc = 0x124130u;
    ctx->pc = 0x124134u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x124130u;
    // 0x124134: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1240A0u;
    if (runtime->eeCheckpointDue()) {
        return;
    }
    goto label_1240a0;
    ctx->pc = 0x124138u;
}
