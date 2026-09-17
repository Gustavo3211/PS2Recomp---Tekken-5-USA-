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

// Function: sub_0033E698
// Address: 0x33e698 - 0x33e768
void sub_0033E698_0x33e698(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0033E698_0x33e698");
#endif

    switch (ctx->pc) {
        case 0x33e698u: goto label_33e698;
        case 0x33e69cu: goto label_33e69c;
        case 0x33e6a0u: goto label_33e6a0;
        case 0x33e6a4u: goto label_33e6a4;
        case 0x33e6a8u: goto label_33e6a8;
        case 0x33e6acu: goto label_33e6ac;
        case 0x33e6b0u: goto label_33e6b0;
        case 0x33e6b4u: goto label_33e6b4;
        case 0x33e6b8u: goto label_33e6b8;
        case 0x33e6bcu: goto label_33e6bc;
        case 0x33e6c0u: goto label_33e6c0;
        case 0x33e6c4u: goto label_33e6c4;
        case 0x33e6c8u: goto label_33e6c8;
        case 0x33e6ccu: goto label_33e6cc;
        case 0x33e6d0u: goto label_33e6d0;
        case 0x33e6d4u: goto label_33e6d4;
        case 0x33e6d8u: goto label_33e6d8;
        case 0x33e6dcu: goto label_33e6dc;
        case 0x33e6e0u: goto label_33e6e0;
        case 0x33e6e4u: goto label_33e6e4;
        case 0x33e6e8u: goto label_33e6e8;
        case 0x33e6ecu: goto label_33e6ec;
        case 0x33e6f0u: goto label_33e6f0;
        case 0x33e6f4u: goto label_33e6f4;
        case 0x33e6f8u: goto label_33e6f8;
        case 0x33e6fcu: goto label_33e6fc;
        case 0x33e700u: goto label_33e700;
        case 0x33e704u: goto label_33e704;
        case 0x33e708u: goto label_33e708;
        case 0x33e70cu: goto label_33e70c;
        case 0x33e710u: goto label_33e710;
        case 0x33e714u: goto label_33e714;
        case 0x33e718u: goto label_33e718;
        case 0x33e71cu: goto label_33e71c;
        case 0x33e720u: goto label_33e720;
        case 0x33e724u: goto label_33e724;
        case 0x33e728u: goto label_33e728;
        case 0x33e72cu: goto label_33e72c;
        case 0x33e730u: goto label_33e730;
        case 0x33e734u: goto label_33e734;
        case 0x33e738u: goto label_33e738;
        case 0x33e73cu: goto label_33e73c;
        case 0x33e740u: goto label_33e740;
        case 0x33e744u: goto label_33e744;
        case 0x33e748u: goto label_33e748;
        case 0x33e74cu: goto label_33e74c;
        case 0x33e750u: goto label_33e750;
        case 0x33e754u: goto label_33e754;
        case 0x33e758u: goto label_33e758;
        case 0x33e75cu: goto label_33e75c;
        case 0x33e760u: goto label_33e760;
        case 0x33e764u: goto label_33e764;
        default: break;
    }

    ctx->pc = 0x33e698u;

label_33e698:
    // 0x33e698: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x33e698u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_33e69c:
    // 0x33e69c: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x33e69cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_33e6a0:
    // 0x33e6a0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x33e6a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_33e6a4:
    // 0x33e6a4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x33e6a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_33e6a8:
    // 0x33e6a8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x33e6a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_33e6ac:
    // 0x33e6ac: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x33e6acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_33e6b0:
    // 0x33e6b0: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x33e6b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_33e6b4:
    // 0x33e6b4: 0x8e03002c  lw          $v1, 0x2C($s0)
    ctx->pc = 0x33e6b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
label_33e6b8:
    // 0x33e6b8: 0x24630080  addiu       $v1, $v1, 0x80
    ctx->pc = 0x33e6b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 128));
label_33e6bc:
    // 0x33e6bc: 0x84640000  lh          $a0, 0x0($v1)
    ctx->pc = 0x33e6bcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_33e6c0:
    // 0x33e6c0: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x33e6c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_33e6c4:
    // 0x33e6c4: 0x40f809  jalr        $v0
label_33e6c8:
    if (ctx->pc == 0x33E6C8u) {
        ctx->pc = 0x33E6C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33E6C4u;
        // 0x33e6c8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33E6CCu;
        goto label_33e6cc;
    }
    ctx->pc = 0x33E6C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x33E6CCu);
        ctx->pc = 0x33E6C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33E6C4u;
        // 0x33e6c8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33E6C4u, 0x33E6CCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x33E6CCu;
label_33e6cc:
    // 0x33e6cc: 0xc0cf398  jal         func_33CE60
label_33e6d0:
    if (ctx->pc == 0x33E6D0u) {
        ctx->pc = 0x33E6D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33E6CCu;
        // 0x33e6d0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33E6D4u;
        goto label_33e6d4;
    }
    ctx->pc = 0x33E6CCu;
    SET_GPR_U32(ctx, 31, 0x33E6D4u);
    ctx->pc = 0x33E6D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33E6CCu;
    // 0x33e6d0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33CE60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33CE60u, 0x33E6CCu, 0x33E6D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33E6D4u;
label_33e6d4:
    // 0x33e6d4: 0x8e03002c  lw          $v1, 0x2C($s0)
    ctx->pc = 0x33e6d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
label_33e6d8:
    // 0x33e6d8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x33e6d8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_33e6dc:
    // 0x33e6dc: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x33e6dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_33e6e0:
    // 0x33e6e0: 0x24630080  addiu       $v1, $v1, 0x80
    ctx->pc = 0x33e6e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 128));
label_33e6e4:
    // 0x33e6e4: 0x84640000  lh          $a0, 0x0($v1)
    ctx->pc = 0x33e6e4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_33e6e8:
    // 0x33e6e8: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x33e6e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_33e6ec:
    // 0x33e6ec: 0x40f809  jalr        $v0
label_33e6f0:
    if (ctx->pc == 0x33E6F0u) {
        ctx->pc = 0x33E6F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33E6ECu;
        // 0x33e6f0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33E6F4u;
        goto label_33e6f4;
    }
    ctx->pc = 0x33E6ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x33E6F4u);
        ctx->pc = 0x33E6F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33E6ECu;
        // 0x33e6f0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33E6ECu, 0x33E6F4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x33E6F4u;
label_33e6f4:
    // 0x33e6f4: 0xc0cf394  jal         func_33CE50
label_33e6f8:
    if (ctx->pc == 0x33E6F8u) {
        ctx->pc = 0x33E6F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33E6F4u;
        // 0x33e6f8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33E6FCu;
        goto label_33e6fc;
    }
    ctx->pc = 0x33E6F4u;
    SET_GPR_U32(ctx, 31, 0x33E6FCu);
    ctx->pc = 0x33E6F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33E6F4u;
    // 0x33e6f8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33CE50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33CE50u, 0x33E6F4u, 0x33E6FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33E6FCu;
label_33e6fc:
    // 0x33e6fc: 0x8e03002c  lw          $v1, 0x2C($s0)
    ctx->pc = 0x33e6fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
label_33e700:
    // 0x33e700: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x33e700u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_33e704:
    // 0x33e704: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x33e704u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_33e708:
    // 0x33e708: 0x24630080  addiu       $v1, $v1, 0x80
    ctx->pc = 0x33e708u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 128));
label_33e70c:
    // 0x33e70c: 0x84640000  lh          $a0, 0x0($v1)
    ctx->pc = 0x33e70cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_33e710:
    // 0x33e710: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x33e710u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_33e714:
    // 0x33e714: 0x40f809  jalr        $v0
label_33e718:
    if (ctx->pc == 0x33E718u) {
        ctx->pc = 0x33E718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33E714u;
        // 0x33e718: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33E71Cu;
        goto label_33e71c;
    }
    ctx->pc = 0x33E714u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x33E71Cu);
        ctx->pc = 0x33E718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33E714u;
        // 0x33e718: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33E714u, 0x33E71Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x33E71Cu;
label_33e71c:
    // 0x33e71c: 0xc0cf392  jal         func_33CE48
label_33e720:
    if (ctx->pc == 0x33E720u) {
        ctx->pc = 0x33E720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33E71Cu;
        // 0x33e720: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33E724u;
        goto label_33e724;
    }
    ctx->pc = 0x33E71Cu;
    SET_GPR_U32(ctx, 31, 0x33E724u);
    ctx->pc = 0x33E720u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33E71Cu;
    // 0x33e720: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33CE48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33CE48u, 0x33E71Cu, 0x33E724u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33E724u;
label_33e724:
    // 0x33e724: 0xde030068  ld          $v1, 0x68($s0)
    ctx->pc = 0x33e724u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 104)));
label_33e728:
    // 0x33e728: 0x3c04ffc0  lui         $a0, 0xFFC0
    ctx->pc = 0x33e728u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65472 << 16));
label_33e72c:
    // 0x33e72c: 0x348400fc  ori         $a0, $a0, 0xFC
    ctx->pc = 0x33e72cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)252);
label_33e730:
    // 0x33e730: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x33e730u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
label_33e734:
    // 0x33e734: 0x3484000f  ori         $a0, $a0, 0xF
    ctx->pc = 0x33e734u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)15);
label_33e738:
    // 0x33e738: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x33e738u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
label_33e73c:
    // 0x33e73c: 0x3484c000  ori         $a0, $a0, 0xC000
    ctx->pc = 0x33e73cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)49152);
label_33e740:
    // 0x33e740: 0x2228825  or          $s1, $s1, $v0
    ctx->pc = 0x33e740u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | GPR_U64(ctx, 2));
label_33e744:
    // 0x33e744: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x33e744u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
label_33e748:
    // 0x33e748: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x33e748u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_33e74c:
    // 0x33e74c: 0x721825  or          $v1, $v1, $s2
    ctx->pc = 0x33e74cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 18));
label_33e750:
    // 0x33e750: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x33e750u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_33e754:
    // 0x33e754: 0x711025  or          $v0, $v1, $s1
    ctx->pc = 0x33e754u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 17));
label_33e758:
    // 0x33e758: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x33e758u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_33e75c:
    // 0x33e75c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x33e75cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_33e760:
    // 0x33e760: 0x3e00008  jr          $ra
label_33e764:
    if (ctx->pc == 0x33E764u) {
        ctx->pc = 0x33E764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33E760u;
        // 0x33e764: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33E768u;
        goto label_fallthrough_0x33e760;
    }
    ctx->pc = 0x33E760u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33E764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33E760u;
        // 0x33e764: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33E760u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x33e760:
    ctx->pc = 0x33E768u;
}
