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

// Function: sub_0033C8A8
// Address: 0x33c8a8 - 0x33c918
void sub_0033C8A8_0x33c8a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0033C8A8_0x33c8a8");
#endif

    switch (ctx->pc) {
        case 0x33c8a8u: goto label_33c8a8;
        case 0x33c8acu: goto label_33c8ac;
        case 0x33c8b0u: goto label_33c8b0;
        case 0x33c8b4u: goto label_33c8b4;
        case 0x33c8b8u: goto label_33c8b8;
        case 0x33c8bcu: goto label_33c8bc;
        case 0x33c8c0u: goto label_33c8c0;
        case 0x33c8c4u: goto label_33c8c4;
        case 0x33c8c8u: goto label_33c8c8;
        case 0x33c8ccu: goto label_33c8cc;
        case 0x33c8d0u: goto label_33c8d0;
        case 0x33c8d4u: goto label_33c8d4;
        case 0x33c8d8u: goto label_33c8d8;
        case 0x33c8dcu: goto label_33c8dc;
        case 0x33c8e0u: goto label_33c8e0;
        case 0x33c8e4u: goto label_33c8e4;
        case 0x33c8e8u: goto label_33c8e8;
        case 0x33c8ecu: goto label_33c8ec;
        case 0x33c8f0u: goto label_33c8f0;
        case 0x33c8f4u: goto label_33c8f4;
        case 0x33c8f8u: goto label_33c8f8;
        case 0x33c8fcu: goto label_33c8fc;
        case 0x33c900u: goto label_33c900;
        case 0x33c904u: goto label_33c904;
        case 0x33c908u: goto label_33c908;
        case 0x33c90cu: goto label_33c90c;
        case 0x33c910u: goto label_33c910;
        case 0x33c914u: goto label_33c914;
        default: break;
    }

    ctx->pc = 0x33c8a8u;

label_33c8a8:
    // 0x33c8a8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x33c8a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_33c8ac:
    // 0x33c8ac: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x33c8acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_33c8b0:
    // 0x33c8b0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x33c8b0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_33c8b4:
    // 0x33c8b4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x33c8b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_33c8b8:
    // 0x33c8b8: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x33c8b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_33c8bc:
    // 0x33c8bc: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x33c8bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_33c8c0:
    // 0x33c8c0: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x33c8c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_33c8c4:
    // 0x33c8c4: 0xc0cf1da  jal         func_33C768
label_33c8c8:
    if (ctx->pc == 0x33C8C8u) {
        ctx->pc = 0x33C8C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33C8C4u;
        // 0x33c8c8: 0xe0902d  daddu       $s2, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33C8CCu;
        goto label_33c8cc;
    }
    ctx->pc = 0x33C8C4u;
    SET_GPR_U32(ctx, 31, 0x33C8CCu);
    ctx->pc = 0x33C8C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33C8C4u;
    // 0x33c8c8: 0xe0902d  daddu       $s2, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33C768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33C768u, 0x33C8C4u, 0x33C8CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33C8CCu;
label_33c8cc:
    // 0x33c8cc: 0x8e23001c  lw          $v1, 0x1C($s1)
    ctx->pc = 0x33c8ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_33c8d0:
    // 0x33c8d0: 0x96060006  lhu         $a2, 0x6($s0)
    ctx->pc = 0x33c8d0u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 6)));
label_33c8d4:
    // 0x33c8d4: 0x24630028  addiu       $v1, $v1, 0x28
    ctx->pc = 0x33c8d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 40));
label_33c8d8:
    // 0x33c8d8: 0x96070008  lhu         $a3, 0x8($s0)
    ctx->pc = 0x33c8d8u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
label_33c8dc:
    // 0x33c8dc: 0x84640000  lh          $a0, 0x0($v1)
    ctx->pc = 0x33c8dcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_33c8e0:
    // 0x33c8e0: 0x2463006  srlv        $a2, $a2, $s2
    ctx->pc = 0x33c8e0u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), GPR_U32(ctx, 18) & 0x1F));
label_33c8e4:
    // 0x33c8e4: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x33c8e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_33c8e8:
    // 0x33c8e8: 0x2473806  srlv        $a3, $a3, $s2
    ctx->pc = 0x33c8e8u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 7), GPR_U32(ctx, 18) & 0x1F));
label_33c8ec:
    // 0x33c8ec: 0x96050004  lhu         $a1, 0x4($s0)
    ctx->pc = 0x33c8ecu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
label_33c8f0:
    // 0x33c8f0: 0x40f809  jalr        $v0
label_33c8f4:
    if (ctx->pc == 0x33C8F4u) {
        ctx->pc = 0x33C8F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33C8F0u;
        // 0x33c8f4: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33C8F8u;
        goto label_33c8f8;
    }
    ctx->pc = 0x33C8F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x33C8F8u);
        ctx->pc = 0x33C8F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33C8F0u;
        // 0x33c8f4: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33C8F0u, 0x33C8F8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x33C8F8u;
label_33c8f8:
    // 0x33c8f8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x33c8f8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_33c8fc:
    // 0x33c8fc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x33c8fcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_33c900:
    // 0x33c900: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x33c900u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_33c904:
    // 0x33c904: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x33c904u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_33c908:
    // 0x33c908: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x33c908u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_33c90c:
    // 0x33c90c: 0x3e00008  jr          $ra
label_33c910:
    if (ctx->pc == 0x33C910u) {
        ctx->pc = 0x33C910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33C90Cu;
        // 0x33c910: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33C914u;
        goto label_33c914;
    }
    ctx->pc = 0x33C90Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33C910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33C90Cu;
        // 0x33c910: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33C90Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33C914u;
label_33c914:
    // 0x33c914: 0x0  nop
    ctx->pc = 0x33c914u;
    // NOP
    ctx->pc = 0x33c918u;
}
