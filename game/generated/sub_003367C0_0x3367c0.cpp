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

// Function: sub_003367C0
// Address: 0x3367c0 - 0x336830
void sub_003367C0_0x3367c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003367C0_0x3367c0");
#endif

    switch (ctx->pc) {
        case 0x3367c0u: goto label_3367c0;
        case 0x3367c4u: goto label_3367c4;
        case 0x3367c8u: goto label_3367c8;
        case 0x3367ccu: goto label_3367cc;
        case 0x3367d0u: goto label_3367d0;
        case 0x3367d4u: goto label_3367d4;
        case 0x3367d8u: goto label_3367d8;
        case 0x3367dcu: goto label_3367dc;
        case 0x3367e0u: goto label_3367e0;
        case 0x3367e4u: goto label_3367e4;
        case 0x3367e8u: goto label_3367e8;
        case 0x3367ecu: goto label_3367ec;
        case 0x3367f0u: goto label_3367f0;
        case 0x3367f4u: goto label_3367f4;
        case 0x3367f8u: goto label_3367f8;
        case 0x3367fcu: goto label_3367fc;
        case 0x336800u: goto label_336800;
        case 0x336804u: goto label_336804;
        case 0x336808u: goto label_336808;
        case 0x33680cu: goto label_33680c;
        case 0x336810u: goto label_336810;
        case 0x336814u: goto label_336814;
        case 0x336818u: goto label_336818;
        case 0x33681cu: goto label_33681c;
        case 0x336820u: goto label_336820;
        case 0x336824u: goto label_336824;
        case 0x336828u: goto label_336828;
        case 0x33682cu: goto label_33682c;
        default: break;
    }

    ctx->pc = 0x3367c0u;

label_3367c0:
    // 0x3367c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3367c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_3367c4:
    // 0x3367c4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3367c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_3367c8:
    // 0x3367c8: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3367c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3367cc:
    // 0x3367cc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3367ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_3367d0:
    // 0x3367d0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x3367d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_3367d4:
    // 0x3367d4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x3367d4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3367d8:
    // 0x3367d8: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x3367d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_3367dc:
    // 0x3367dc: 0x8e460004  lw          $a2, 0x4($s2)
    ctx->pc = 0x3367dcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_3367e0:
    // 0x3367e0: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x3367e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_3367e4:
    // 0x3367e4: 0x24630018  addiu       $v1, $v1, 0x18
    ctx->pc = 0x3367e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24));
label_3367e8:
    // 0x3367e8: 0x84640000  lh          $a0, 0x0($v1)
    ctx->pc = 0x3367e8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_3367ec:
    // 0x3367ec: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x3367ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_3367f0:
    // 0x3367f0: 0x40f809  jalr        $v0
label_3367f4:
    if (ctx->pc == 0x3367F4u) {
        ctx->pc = 0x3367F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3367F0u;
        // 0x3367f4: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3367F8u;
        goto label_3367f8;
    }
    ctx->pc = 0x3367F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3367F8u);
        ctx->pc = 0x3367F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3367F0u;
        // 0x3367f4: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3367F0u, 0x3367F8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3367F8u;
label_3367f8:
    // 0x3367f8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x3367f8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3367fc:
    // 0x3367fc: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3367fcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_336800:
    // 0x336800: 0x6200003  bltz        $s1, . + 4 + (0x3 << 2)
label_336804:
    if (ctx->pc == 0x336804u) {
        ctx->pc = 0x336804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x336800u;
        // 0x336804: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x336808u;
        goto label_336808;
    }
    ctx->pc = 0x336800u;
    {
        const bool branch_taken_0x336800 = (GPR_S32(ctx, 17) < 0);
        ctx->pc = 0x336804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x336800u;
        // 0x336804: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x336800) {
            ctx->pc = 0x336810u;
            goto label_336810;
        }
    }
    ctx->pc = 0x336808u;
label_336808:
    // 0x336808: 0xc0cda60  jal         func_336980
label_33680c:
    if (ctx->pc == 0x33680Cu) {
        ctx->pc = 0x33680Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x336808u;
        // 0x33680c: 0x8e440008  lw          $a0, 0x8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x336810u;
        goto label_336810;
    }
    ctx->pc = 0x336808u;
    SET_GPR_U32(ctx, 31, 0x336810u);
    ctx->pc = 0x33680Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x336808u;
    // 0x33680c: 0x8e440008  lw          $a0, 0x8($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336980u, 0x336808u, 0x336810u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x336810u;
label_336810:
    // 0x336810: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x336810u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_336814:
    // 0x336814: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x336814u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_336818:
    // 0x336818: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x336818u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_33681c:
    // 0x33681c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x33681cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_336820:
    // 0x336820: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x336820u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_336824:
    // 0x336824: 0x3e00008  jr          $ra
label_336828:
    if (ctx->pc == 0x336828u) {
        ctx->pc = 0x336828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x336824u;
        // 0x336828: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33682Cu;
        goto label_33682c;
    }
    ctx->pc = 0x336824u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x336828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x336824u;
        // 0x336828: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x336824u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33682Cu;
label_33682c:
    // 0x33682c: 0x0  nop
    ctx->pc = 0x33682cu;
    // NOP
    ctx->pc = 0x336830u;
}
