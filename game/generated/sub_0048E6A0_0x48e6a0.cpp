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

// Function: sub_0048E6A0
// Address: 0x48e6a0 - 0x48e750
void sub_0048E6A0_0x48e6a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0048E6A0_0x48e6a0");
#endif

    switch (ctx->pc) {
        case 0x48e6b4u: goto label_48e6b4;
        case 0x48e710u: goto label_48e710;
        case 0x48e720u: goto label_48e720;
        case 0x48e730u: goto label_48e730;
        case 0x48e740u: goto label_48e740;
        default: break;
    }

    ctx->pc = 0x48e6a0u;

    // 0x48e6a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x48e6a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x48e6a4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x48e6a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x48e6a8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x48e6a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x48e6ac: 0xc124b8e  jal         func_492E38
    ctx->pc = 0x48E6ACu;
    SET_GPR_U32(ctx, 31, 0x48E6B4u);
    ctx->pc = 0x48E6B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x48E6ACu;
    // 0x48e6b0: 0x27a50002  addiu       $a1, $sp, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x492E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x492E38u, 0x48E6ACu, 0x48E6B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48E6B4u;
label_48e6b4:
    // 0x48e6b4: 0x3c020073  lui         $v0, 0x73
    ctx->pc = 0x48e6b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
    // 0x48e6b8: 0x87a50000  lh          $a1, 0x0($sp)
    ctx->pc = 0x48e6b8u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x48e6bc: 0x2442d680  addiu       $v0, $v0, -0x2980
    ctx->pc = 0x48e6bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956672));
    // 0x48e6c0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x48e6c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x48e6c4: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x48e6c4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)FAST_READ16(0x72D680u));
    // 0x48e6c8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x48e6c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x48e6cc: 0x10a40012  beq         $a1, $a0, . + 4 + (0x12 << 2)
    ctx->pc = 0x48E6CCu;
    {
        const bool branch_taken_0x48e6cc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        ctx->pc = 0x48E6D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48E6CCu;
        // 0x48e6d0: 0xa4430000  sh          $v1, 0x0($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48e6cc) {
            ctx->pc = 0x48E718u;
            goto label_48e718;
        }
    }
    ctx->pc = 0x48E6D4u;
    // 0x48e6d4: 0x28a20002  slti        $v0, $a1, 0x2
    ctx->pc = 0x48e6d4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x48e6d8: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x48E6D8u;
    {
        const bool branch_taken_0x48e6d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x48e6d8) {
            ctx->pc = 0x48E6DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x48E6D8u;
            // 0x48e6dc: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x48E6F0u;
            goto label_48e6f0;
        }
    }
    ctx->pc = 0x48E6E0u;
    // 0x48e6e0: 0x10a00009  beqz        $a1, . + 4 + (0x9 << 2)
    ctx->pc = 0x48E6E0u;
    {
        const bool branch_taken_0x48e6e0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x48E6E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48E6E0u;
        // 0x48e6e4: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48e6e0) {
            ctx->pc = 0x48E708u;
            goto label_48e708;
        }
    }
    ctx->pc = 0x48E6E8u;
    // 0x48e6e8: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x48E6E8u;
    {
        const bool branch_taken_0x48e6e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x48e6e8) {
            ctx->pc = 0x48E744u;
            goto label_48e744;
        }
    }
    ctx->pc = 0x48E6F0u;
label_48e6f0:
    // 0x48e6f0: 0x10a2000d  beq         $a1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x48E6F0u;
    {
        const bool branch_taken_0x48e6f0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x48E6F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48E6F0u;
        // 0x48e6f4: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48e6f0) {
            ctx->pc = 0x48E728u;
            goto label_48e728;
        }
    }
    ctx->pc = 0x48E6F8u;
    // 0x48e6f8: 0x10a2000f  beq         $a1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x48E6F8u;
    {
        const bool branch_taken_0x48e6f8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x48E6FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48E6F8u;
        // 0x48e6fc: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48e6f8) {
            ctx->pc = 0x48E738u;
            goto label_48e738;
        }
    }
    ctx->pc = 0x48E700u;
    // 0x48e700: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x48E700u;
    {
        const bool branch_taken_0x48e700 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x48e700) {
            ctx->pc = 0x48E744u;
            goto label_48e744;
        }
    }
    ctx->pc = 0x48E708u;
label_48e708:
    // 0x48e708: 0xc1239d4  jal         func_48E750
    ctx->pc = 0x48E708u;
    SET_GPR_U32(ctx, 31, 0x48E710u);
    ctx->pc = 0x48E750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48E750u, 0x48E708u, 0x48E710u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48E710u;
label_48e710:
    // 0x48e710: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x48E710u;
    {
        const bool branch_taken_0x48e710 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x48E714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48E710u;
        // 0x48e714: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48e710) {
            ctx->pc = 0x48E744u;
            goto label_48e744;
        }
    }
    ctx->pc = 0x48E718u;
label_48e718:
    // 0x48e718: 0xc1239e2  jal         func_48E788
    ctx->pc = 0x48E718u;
    SET_GPR_U32(ctx, 31, 0x48E720u);
    ctx->pc = 0x48E71Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x48E718u;
    // 0x48e71c: 0x87a40002  lh          $a0, 0x2($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48E788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48E788u, 0x48E718u, 0x48E720u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48E720u;
label_48e720:
    // 0x48e720: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x48E720u;
    {
        const bool branch_taken_0x48e720 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x48E724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48E720u;
        // 0x48e724: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48e720) {
            ctx->pc = 0x48E744u;
            goto label_48e744;
        }
    }
    ctx->pc = 0x48E728u;
label_48e728:
    // 0x48e728: 0xc1239f2  jal         func_48E7C8
    ctx->pc = 0x48E728u;
    SET_GPR_U32(ctx, 31, 0x48E730u);
    ctx->pc = 0x48E7C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48E7C8u, 0x48E728u, 0x48E730u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48E730u;
label_48e730:
    // 0x48e730: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x48E730u;
    {
        const bool branch_taken_0x48e730 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x48E734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48E730u;
        // 0x48e734: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48e730) {
            ctx->pc = 0x48E744u;
            goto label_48e744;
        }
    }
    ctx->pc = 0x48E738u;
label_48e738:
    // 0x48e738: 0xc1239f2  jal         func_48E7C8
    ctx->pc = 0x48E738u;
    SET_GPR_U32(ctx, 31, 0x48E740u);
    ctx->pc = 0x48E7C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48E7C8u, 0x48E738u, 0x48E740u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48E740u;
label_48e740:
    // 0x48e740: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x48e740u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_48e744:
    // 0x48e744: 0x3e00008  jr          $ra
    ctx->pc = 0x48E744u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x48E748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48E744u;
        // 0x48e748: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x48E744u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x48E74Cu;
    // 0x48e74c: 0x0  nop
    ctx->pc = 0x48e74cu;
    // NOP
    ctx->pc = 0x48e750u;
}
